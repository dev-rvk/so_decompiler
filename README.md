## .so Decompiler
A tool which uses a containerized workflow to decompile .so files to C codes using two decompilation frameworks Ghidra and Angr.

## Setup and Usage

1. **Clone the repo and cd into the project directory**
   ```plaintext
    git clone https://github.com/dev-rvk/so_decompiler.git
    cd so_decompiler.git
   ```
2. **Build the docker image**
   For x86 systems (MacOS, Windows, Linux)
    ```plaintext
    docker build -t decompiler .                              
    ```
    For arm64 systems (MacOS, Linux)
    ```plaintext
    docker build --platform=linux/amd64 -t decompiler .       
    ```
    `Note: Ghidra supports only x86 images hence we need to virtualize x86 on arm systems`

3. **Setup input directory**
   Copy your .so files to the uploads directory (ignote the sample_* files)

4. **Run the docker image**
   ```plaintext
    docker run -v ./uploads:/decompile/uploads -v ./output:/decompile/output decompiler <args> /decompile/uploads/<name>.so /decompile/output
   ```
   Specify <args>
   ```plaintext
    ghidra    : Use Ghidra as the decompiler
    angr      : Use Angr as the decompiler
    decompile : Use Both (Note this may not work for larger .so files)
   ``` 
   Example usecase for `sample_libnative-lib.so`
   ```plaintext
    docker run -v ./uploads:/decompile/uploads -v ./output:/decompile/output decompiler ghidra /decompile/uploads/sample_libnative-lib.so /decompile/output
   ```
5. **Check the output directory**
   After running the container files will be generated according to the compiler selected
   ```plaintext
    ghidra : out_ghidra.c and out_ghidra.h
    angr   : out_angr.c
   ```

