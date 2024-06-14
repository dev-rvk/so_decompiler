import os
from pathlib import Path
import subprocess
import sys
import tempfile
import angr
from angr.analyses import CFGFast, Decompiler
from angr.knowledge_plugins import Function

import warnings
warnings.filterwarnings('ignore')

def decompile_angr(input_file, output_file):
    try:
        with open(input_file, 'rb') as f:
            contents = f.read()
        
        # Create a temporary file to hold the binary contents
        with tempfile.NamedTemporaryFile(delete=False) as tmp_file:
            tmp_file.write(contents)
            tmp_file.flush()
            tmp_file.close()
            binary_path = tmp_file.name
        
        # Analyze the binary with Angr
        project = angr.Project(binary_path, auto_load_libs=False, load_debug_info=False)
        cfg = project.analyses.CFGFast(
            normalize=True,
            resolve_indirect_jumps=True,
            data_references=True,
        )
        project.analyses.CompleteCallingConventions(
            cfg=cfg.model, recover_variables=True, analyze_callsites=True
        )
        
        # Select functions to decompile
        funcs_to_decompile = [
            func for func in cfg.kb.functions.values()
            if not func.is_plt and not func.is_simprocedure and not func.alignment
        ]
        
        # Decompilation and writing to output file
        with open(output_file, 'w') as out_file:
            for func in funcs_to_decompile:
                try:
                    decompiler = project.analyses.Decompiler(func, cfg=cfg.model)
                    if decompiler.codegen is not None:
                        out_file.write(decompiler.codegen.text)
                        out_file.write('\n')
                    else:
                        out_file.write(f"// No decompilation output for function {func.name}\n")
                except Exception as e:
                    out_file.write(f"// Exception thrown decompiling function {func.name}: {e}\n")
    
    except FileNotFoundError:
        print(f"File '{input_file}' not found.")
    except Exception as e:
        print(f"Error during analysis: {e}")

def decompile_ghidra(input_file, output_file):
    try:
        ghidra_home = os.getenv("GHIDRA_HOME")
        if not ghidra_home:
            raise EnvironmentError("GHIDRA_HOME environment variable not set.")
        
        analyze_headless_path = os.path.join(ghidra_home, "support", "analyzeHeadless")
        parent_dir = Path(__file__).resolve().parent
        script_path = os.path.join(parent_dir, "scripts", "Decompiler.java")
        
        if not os.path.exists(script_path):
            print(f"Decompiler.java not found in {parent_dir}")
            sys.exit(1)
        
        with tempfile.TemporaryDirectory() as project_dir:
            project_name = "temp_project"
            output_file = os.path.join(output_dir, "out_ghidra.c")

            decompile_command = [
                analyze_headless_path,
                project_dir,
                project_name,
                "-import",
                input_file,
                "-scriptPath",
                os.path.dirname(script_path),
                "-postScript",
                "Decompiler.java",
                output_file,
                "-deleteProject"
            ]
            
            print(f"Running command: {' '.join(decompile_command)}")

            decomp = subprocess.run(decompile_command, capture_output=True, timeout=600)
            print(f'{decomp.stdout.decode()}\n{decomp.stderr.decode()}')
            # # Get output on the terminal
            # if os.path.exists(output_file):
            #     with open(output_file, 'r') as f:
            #         print(f.read())
            # else:
            #     print(f"Decompiled file not found in {output_dir}")

            if not os.path.exists(output_file):
                print(f"Decompiled file not found in {output_dir}")
                
    except subprocess.TimeoutExpired as e:
        print(f"Timeout expired: {e}")
    except subprocess.CalledProcessError as e:
        print(f"Error running Ghidra headless analysis: {e}")
    except Exception as e:
        print(f"Error during Ghidra decompilation: {e}")
    

if __name__ == "__main__":
    if len(sys.argv) < 4:
        print("Usage: python decompile.py <tool> <input_binary> <output_dir>")
        sys.exit(1)
    
    tool = sys.argv[1]
    input_file = sys.argv[2]
    output_dir = sys.argv[3]

    os.makedirs(output_dir, exist_ok=True)

    if tool == "angr":
        decompile_angr(input_file, os.path.join(output_dir, "out_angr.c"))
    elif tool == "ghidra":
        decompile_ghidra(input_file, output_dir)
    elif tool == "decompile":
        decompile_ghidra(input_file, output_dir)
        decompile_angr(input_file, os.path.join(output_dir, "out_angr.c"))
    else:
        print("Unknown tool specified. Use 'angr', 'ghidra', or 'decompile' to use both tools.")
        sys.exit(1)

