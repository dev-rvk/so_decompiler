typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long    undefined5;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef pointer pointer __((offset(0x10)));

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct _JNIEnv _JNIEnv, *P_JNIEnv;

struct _JNIEnv { // PlaceHolder Class Structure
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef int pthread_once_t;

typedef ulong pthread_t;

typedef uint pthread_key_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef void *__gnuc_va_list;

typedef struct _Unwind_Exception _Unwind_Exception, *P_Unwind_Exception;

struct _Unwind_Exception { // PlaceHolder Structure
};

typedef struct _jbyteArray _jbyteArray, *P_jbyteArray;

struct _jbyteArray { // PlaceHolder Structure
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct out_of_range out_of_range, *Pout_of_range;

struct out_of_range { // PlaceHolder Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Structure
};

typedef struct overflow_error overflow_error, *Poverflow_error;

struct overflow_error { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct range_error range_error, *Prange_error;

struct range_error { // PlaceHolder Structure
};

typedef struct bad_cast bad_cast, *Pbad_cast;

struct bad_cast { // PlaceHolder Structure
};

typedef struct logic_error logic_error, *Plogic_error;

struct logic_error { // PlaceHolder Structure
};

typedef struct domain_error domain_error, *Pdomain_error;

struct domain_error { // PlaceHolder Structure
};

typedef struct nothrow_t nothrow_t, *Pnothrow_t;

struct nothrow_t { // PlaceHolder Structure
};

typedef struct invalid_argument invalid_argument, *Pinvalid_argument;

struct invalid_argument { // PlaceHolder Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Structure
};

typedef struct bad_typeid bad_typeid, *Pbad_typeid;

struct bad_typeid { // PlaceHolder Structure
};

typedef struct runtime_error runtime_error, *Pruntime_error;

struct runtime_error { // PlaceHolder Structure
};

typedef struct underflow_error underflow_error, *Punderflow_error;

struct underflow_error { // PlaceHolder Structure
};

typedef dword align_val_t;

typedef struct length_error length_error, *Plength_error;

struct length_error { // PlaceHolder Structure
};

typedef struct bad_array_new_length bad_array_new_length, *Pbad_array_new_length;

struct bad_array_new_length { // PlaceHolder Structure
};

typedef struct basic_string basic_string, *Pbasic_string;

struct basic_string { // PlaceHolder Structure
};

typedef struct basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>, *Pbasic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>;

struct basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> { // PlaceHolder Structure
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct ElfNote_8_132 ElfNote_8_132, *PElfNote_8_132;

struct ElfNote_8_132 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[8]; // Vendor name
    byte description[132]; // Blob value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




void FUN_0010ecc0(void);
void __cxa_get_globals_fast(void);
void __cxa_throw(void);
void * realloc(void *__ptr,size_t __size);
void * operator.new[](ulong param_1,align_val_t param_2);
int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function);
void __vsnprintf_chk(void);
int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine);
void __cxa_finalize(void);
void __cxa_end_catch(void);
void * calloc(size_t __nmemb,size_t __size);
void std::__ndk1::char_traits<char>::assign(char *param_1,char *param_2);
void syslog(int __pri,char *__fmt,...);
void std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size(void *param_1,ulong param_2);
void * operator.new(ulong param_1);
int posix_memalign(void **__memptr,size_t __alignment,size_t __size);
void __strlen_chk(void);
void operator.delete[](void *param_1,align_val_t param_2);
void __thiscall _JNIEnv::NewStringUTF(_JNIEnv *this,char *param_1);
void std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__rep,std::__ndk1::allocator<char>>::__compressed_pair<true,void>(void);
void abort(void);
void __cxa_call_unexpected(void);
ulong std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__align_it<16ul>(ulong param_1);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
void __thiscall _JNIEnv::GetByteArrayElements(_JNIEnv *this,_jbyteArray *param_1,uchar *param_2);
void dl_iterate_phdr(void);
void android_set_abort_message(void);
int islower(int param_1);
void * operator.new(ulong param_1,align_val_t param_2);
void __memmove_chk(void);
void std::__ndk1::_DeallocateCaller::__do_call(void *param_1);
void __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,char *param_1);
void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this);
void __thiscall std::type_info::~type_info(type_info *this);
void std::get_new_handler(void);
int fputc(int __c,FILE *__stream);
void __stack_chk_fail(void);
void __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this);
void std::__ndk1::char_traits<char>::move(char *param_1,char *param_2,ulong param_3);
int pthread_setspecific(pthread_key_t __key,void *__pointer);
void openlog(char *__ident,int __option,int __facility);
void __cxa_get_globals(void);
void __android_log_print(void);
void operator.delete(void *param_1,align_val_t param_2);
void __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by_and_replace(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,char *param_7);
void __cxxabiv1::__isOurExceptionClass(_Unwind_Exception *param_1);
void __cxa_demangle(void);
void __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,char *param_1,ulong param_2);
int strcmp(char *__s1,char *__s2);
void operator.delete[](void *param_1);
void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1);
void __cxxabiv1::__getExceptionClass(_Unwind_Exception *param_1);
void __cxa_allocate_exception(void);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
void closelog(void);
void std::__ndk1::__basic_string_common<true>::__throw_length_error(void);
void * pthread_getspecific(pthread_key_t __key);
void operator.delete(void *param_1);
void * memmove(void *__dest,void *__src,size_t __n);
void std::terminate(void);
void * operator.new[](ulong param_1);
int isxdigit(int param_1);
void __cxa_begin_catch(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void __cxa_free_exception(void);
void __dynamic_cast(void);
void cp(char *param_1,int param_2);
size_t strlen(char *__s);
int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg);
void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this);
void __cxa_rethrow(void);
void * malloc(size_t __size);
void * memcpy(void *__dest,void *__src,size_t __n);
void * memset(void *__s,int __c,size_t __n);
void std::get_terminate(void);
void std::__ndk1::char_traits<char>::copy(char *param_1,char *param_2,ulong param_3);
void std::get_unexpected(void);
void std::__ndk1::char_traits<char>::length(char *param_1);
void free(void *__ptr);
int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
void __cxa_atexit(void);
void entry(void);
void FUN_0010f1fc(void);
void _FINI_0(void);
void cp(char *param_1,int param_2);
void printLog(void);
void Java_com_example_mynativetest_MainActivity_overFlow(_JNIEnv *param_1,undefined8 param_2,_jbyteArray *param_3,int param_4);
void __thiscall _JNIEnv::GetByteArrayElements(_JNIEnv *this,_jbyteArray *param_1,uchar *param_2);
undefined8 Java_com_example_mynativetest_MainActivity_leakMemory(_JNIEnv *param_1,undefined8 param_2,_jbyteArray *param_3);
void FUN_0010f494(undefined8 param_1);
void __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,char *param_1);
void __thiscall _JNIEnv::NewStringUTF(_JNIEnv *this,char *param_1);
void FUN_0010f55c(undefined8 param_1);
void __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this);
bool FUN_0010f5f4(undefined8 param_1);
void FUN_0010f634(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FUN_0010f668(undefined8 param_1);
undefined8 FUN_0010f68c(undefined8 param_1);
ulong FUN_0010f6b4(undefined8 param_1);
void FUN_0010f6ec(undefined8 param_1);
undefined8 FUN_0010f710(undefined8 param_1);
void FUN_0010f724(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FUN_0010f768(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FUN_0010f79c(void);
void FUN_0010f7a8(void *param_1,ulong param_2);
void std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size(void *param_1,ulong param_2);
void std::__ndk1::_DeallocateCaller::__do_call(void *param_1);
void FUN_0010f824(undefined8 param_1);
undefined8 FUN_0010f848(undefined8 param_1);
void FUN_0010f85c(undefined8 param_1);
undefined8 FUN_0010f880(undefined8 param_1);
void std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__rep,std::__ndk1::allocator<char>>::__compressed_pair<true,void>(void);
void FUN_0010f8c8(undefined8 param_1);
void FUN_0010f930(void *param_1);
void FUN_0010f958(undefined8 param_1);
void FUN_0010f97c(void);
basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,char *param_1,ulong param_2);
void std::__ndk1::char_traits<char>::length(char *param_1);
long FUN_0010fa94(undefined8 param_1);
undefined8 FUN_0010fae8(undefined8 param_1);
undefined8 FUN_0010fafc(undefined8 param_1);
char * std::__ndk1::char_traits<char>::move(char *param_1,char *param_2,ulong param_3);
void std::__ndk1::char_traits<char>::assign(char *param_1,char *param_2);
void FUN_0010fbd4(undefined8 param_1,undefined8 param_2);
void FUN_0010fc28(void);
undefined8 FUN_0010fc3c(undefined8 param_1);
void __thiscall std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by_and_replace(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,char *param_7);
void FUN_0010feec(undefined8 param_1);
void FUN_0010ff1c(undefined8 param_1);
undefined8 FUN_0010ff40(undefined8 param_1);
void FUN_0010ff54(undefined8 param_1,undefined8 param_2);
void FUN_0010ff8c(undefined8 param_1,long param_2);
undefined8 FUN_0010ffc8(undefined8 param_1);
int FUN_0010fff0(undefined8 param_1);
long FUN_00110024(undefined8 param_1);
void std::__ndk1::__basic_string_common<true>::__throw_length_error(void);
ulong FUN_00110078(ulong param_1);
void FUN_001100ec(undefined8 param_1,undefined8 param_2);
void FUN_0011011c(undefined8 param_1,undefined8 param_2);
void FUN_00110150(void);
char * std::__ndk1::char_traits<char>::copy(char *param_1,char *param_2,ulong param_3);
void FUN_001101bc(undefined8 param_1,undefined8 param_2);
void FUN_001101f4(undefined8 param_1,ulong param_2);
void FUN_00110234(undefined8 param_1);
void FUN_0011025c(undefined8 param_1);
void FUN_00110280(undefined8 param_1,undefined8 param_2);
undefined8 FUN_001102a8(void);
void FUN_001102c0(undefined8 param_1);
undefined8 FUN_001102e4(undefined8 param_1);
void FUN_001102f8(undefined8 param_1);
void FUN_00110354(undefined8 *param_1,char *param_2);
ulong std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__align_it<16ul>(ulong param_1);
undefined8 FUN_001103c8(undefined8 param_1,undefined8 param_2,undefined param_3);
bool FUN_00110424(undefined8 param_1,ulong *param_2,ulong *param_3);
void FUN_00110460(undefined8 param_1,ulong param_2);
void FUN_001104c4(ulong param_1);
void FUN_001104ec(undefined8 param_1);
undefined8 FUN_00110514(undefined8 param_1);
undefined8 FUN_00110528(undefined8 param_1);
undefined8 FUN_00110580(undefined8 param_1);
void FUN_001105a8(undefined8 param_1);
void FUN_001105d8(undefined8 param_1);
undefined8 FUN_001105fc(undefined8 param_1);
void std::__throw_bad_alloc(void);
void * operator.new(ulong param_1);
void * operator.new(ulong param_1,nothrow_t *param_2);
void * operator.new[](ulong param_1);
void * operator.new[](ulong param_1,nothrow_t *param_2);
void operator.delete(void *param_1);
void operator.delete(void *param_1,nothrow_t *param_2);
void operator.delete(void *param_1,ulong param_2);
void operator.delete[](void *param_1);
void operator.delete[](void *param_1,nothrow_t *param_2);
void operator.delete[](void *param_1,ulong param_2);
void * operator.new(ulong param_1,align_val_t param_2);
void * operator.new(ulong param_1,align_val_t param_2,nothrow_t *param_3);
void * operator.new[](ulong param_1,align_val_t param_2);
void * operator.new[](ulong param_1,align_val_t param_2,nothrow_t *param_3);
void operator.delete(void *param_1,align_val_t param_2);
void operator.delete(void *param_1,align_val_t param_2,nothrow_t *param_3);
void operator.delete(void *param_1,ulong param_2,align_val_t param_3);
void operator.delete[](void *param_1,align_val_t param_2);
void operator.delete[](void *param_1,align_val_t param_2,nothrow_t *param_3);
void operator.delete[](void *param_1,ulong param_2,align_val_t param_3);
void __thiscall std::logic_error::logic_error(logic_error *this,basic_string *param_1);
void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1);
void __thiscall std::logic_error::logic_error(logic_error *this,logic_error *param_1);
logic_error * __thiscall std::logic_error::operator=(logic_error *this,logic_error *param_1);
void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1);
void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1);
void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1);
runtime_error * __thiscall std::runtime_error::operator=(runtime_error *this,runtime_error *param_1);
void __cxxabiv1::__setExceptionClass(_Unwind_Exception *param_1,ulong param_2);
undefined8 __cxxabiv1::__getExceptionClass(_Unwind_Exception *param_1);
bool __cxxabiv1::__isOurExceptionClass(_Unwind_Exception *param_1);
long __cxa_allocate_exception(long param_1);
void __cxa_free_exception(long param_1);
void __cxa_allocate_dependent_exception(void);
void __cxa_free_dependent_exception(undefined1 *param_1);
void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3);
void FUN_00110ccc(undefined8 *param_1);
void FUN_00110cf0(int param_1,long param_2);
undefined8 FUN_00110d50(long param_1);
undefined8 __cxa_get_exception_ptr(long param_1);
ulong * __cxa_begin_catch(ulong *param_1);
void __cxa_end_catch(void);
void __cxa_decrement_exception_refcount(long param_1);
long * __cxa_current_exception_type(void);
void __cxa_rethrow(void);
void __cxa_increment_exception_refcount(long param_1);
long ** __cxa_current_primary_exception(void);
void __cxa_rethrow_primary_exception(long param_1);
void FUN_00111218(int param_1,long param_2);
ulong __cxa_uncaught_exception(void);
ulong __cxa_uncaught_exceptions(void);
void * __cxa_get_globals(void);
void __cxa_get_globals_fast(void);
void FUN_00111398(void);
void FUN_001113cc(void);
undefined * std::get_unexpected(void);
void std::terminate(void);
void FUN_00111450(code *param_1);
undefined * std::unexpected(void);
undefined * std::get_terminate(void);
void FUN_00111490(code *param_1);
_func_void * std::set_new_handler(_func_void *param_1);
undefined8 std::get_new_handler(void);
int __gxx_personality_v0(int param_1,ulong param_2,ulong param_3,long param_4,long param_5);
void FUN_0011169c(ulong *param_1,uint param_2,uint param_3,_Unwind_Exception *param_4,undefined8 param_5);
void FUN_00111cb8(ulong param_1,long param_2);
void __cxa_call_unexpected(_Unwind_Exception *param_1);
long * FUN_00112060(uint **param_1,uint param_2);
void FUN_001121b4(size_t param_1);
ushort * FUN_00112220(long param_1);
void * FUN_00112314(size_t param_1,size_t param_2);
void FUN_00112370(undefined1 *param_1);
int FUN_00112398(long param_1);
void FUN_00112494(undefined1 *param_1);
void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this);
void __thiscall std::exception::~exception(exception *this);
char * std::exception::what(void);
void __thiscall std::bad_exception::~bad_exception(bad_exception *this);
char * std::bad_exception::what(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this);
char * std::bad_alloc::what(void);
void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this);
void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this);
char * std::bad_array_new_length::what(void);
void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this);
void __thiscall std::logic_error::~logic_error(logic_error *this);
undefined8 std::logic_error::what(void);
void __thiscall std::range_error::~range_error(range_error *this);
void __thiscall std::runtime_error::~runtime_error(runtime_error *this);
undefined8 std::runtime_error::what(void);
void __thiscall std::domain_error::~domain_error(domain_error *this);
void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this);
void __thiscall std::length_error::~length_error(length_error *this);
void __thiscall std::out_of_range::~out_of_range(out_of_range *this);
void __thiscall std::range_error::~range_error(range_error *this);
void __thiscall std::overflow_error::~overflow_error(overflow_error *this);
void __thiscall std::underflow_error::~underflow_error(underflow_error *this);
void FUN_0011291c(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined * std::set_unexpected(_func_void *param_1);
undefined * std::set_terminate(_func_void *param_1);
void FUN_00112a5c(void);
void FUN_00112b7c(void);
void * __cxa_demangle(byte *param_1,void *param_2,ulong *param_3,int *param_4);
undefined8 * FUN_001132d4(byte **param_1);
undefined8 * FUN_00113e1c(byte **param_1);
undefined8 * FUN_0011549c(byte **param_1,long param_2);
undefined8 * FUN_001160d8(char **param_1);
void FUN_001162b0(void **param_1,undefined8 *param_2);
undefined4 FUN_0011636c(byte **param_1);
undefined8 FUN_001165f4(void);
undefined8 FUN_001165fc(void);
undefined8 FUN_00116604(void);
void FUN_0011660c(void);
void FUN_00116610(long param_1,undefined8 param_2);
void FUN_00116680(void);
undefined  [16] FUN_00116684(void);
void operator.delete(void *param_1);
void FUN_00116694(void **param_1,void *param_2,long param_3);
void FUN_00116720(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
undefined8 * FUN_00116810(byte **param_1);
void FUN_00116b98(char **param_1,ulong param_2);
undefined8 * FUN_00117064(byte **param_1);
undefined8 FUN_001172f4(char **param_1);
undefined8 * FUN_001173a4(byte **param_1,char **param_2,undefined *param_3);
undefined8 * FUN_00117614(byte **param_1,undefined8 *param_2);
undefined8 FUN_0011779c(byte **param_1,undefined8 param_2);
void FUN_00117e74(long param_1,undefined8 param_2);
undefined  [16] FUN_00117e84(long param_1);
void operator.delete(void *param_1);
void FUN_00117e94(long param_1,undefined8 param_2);
void FUN_00117f58(long param_1);
void operator.delete(void *param_1);
byte FUN_00117f6c(long param_1);
byte FUN_00117fdc(long param_1);
byte FUN_0011804c(long param_1);
long FUN_001180bc(long param_1);
void FUN_0011810c(long param_1);
void FUN_00118154(long param_1);
void operator.delete(void *param_1);
undefined8 * FUN_001181a0(char **param_1);
undefined8 * FUN_00119db4(long param_1,char *param_2,undefined8 *param_3);
undefined8 * FUN_00119e78(byte **param_1);
undefined8 * FUN_0011a66c(byte **param_1);
undefined8 * FUN_0011a9dc(char **param_1);
void FUN_0011b7fc(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 * FUN_0011b8ac(byte **param_1);
void FUN_0011bed8(char **param_1);
undefined8 * FUN_0011c104(long param_1,char *param_2,undefined8 *param_3);
undefined8 * FUN_0011c1c8(long param_1,undefined8 *param_2);
undefined8 * FUN_0011c294(byte **param_1,undefined8 param_2,undefined8 param_3);
void FUN_0011c3e4(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011c4e8(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011c540(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011c6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9);
void FUN_0011c77c(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011c9d8(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011cc14(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011ccc8(long param_1,undefined8 param_2);
void FUN_0011cd1c(void);
void operator.delete(void *param_1);
void FUN_0011cd24(long param_1,void **param_2);
void operator.delete(void *param_1);
void FUN_0011d2ac(long param_1,long param_2);
void operator.delete(void *param_1);
void FUN_0011d400(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011d61c(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011d6d4(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011d7a0(long param_1,long param_2);
void operator.delete(void *param_1);
undefined  [16] FUN_0011d90c(long param_1,void *param_2,long param_3);
void FUN_0011d9dc(long param_1,long param_2);
void operator.delete(void *param_1);
void FUN_0011db70(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
long FUN_0011dc5c(char **param_1);
undefined8 * FUN_0011dce4(byte **param_1);
undefined8 * FUN_0011dfbc(byte **param_1);
void FUN_0011e19c(long param_1,undefined8 param_2);
void FUN_0011e260(long param_1);
void operator.delete(void *param_1);
undefined8 * FUN_0011e274(long *param_1,undefined *param_2);
void FUN_0011f51c(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011f57c(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011f610(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011f6a4(long param_1,undefined8 param_2);
void FUN_0011f734(long param_1);
void operator.delete(void *param_1);
void FUN_0011f748(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011f7f8(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011f8fc(long param_1,void **param_2);
void operator.delete(void *param_1);
void FUN_0011fafc(long param_1,void **param_2);
void operator.delete(void *param_1);
void FUN_0011fcd4(long param_1,void **param_2);
void operator.delete(void *param_1);
void FUN_0011fea4(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0011ff58(long param_1,void **param_2);
void operator.delete(void *param_1);
void FUN_001202b0(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0012032c(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_0012048c(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00120534(long param_1,long param_2);
void operator.delete(void *param_1);
void FUN_00120628(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_001206bc(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00120764(long param_1,undefined8 param_2);
void FUN_00120820(long param_1);
void operator.delete(void *param_1);
void FUN_001208b4(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00120930(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_001209bc(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00120a38(long param_1,long param_2);
void operator.delete(void *param_1);
void FUN_00120ba0(long param_1,void **param_2);
void operator.delete(void *param_1);
void FUN_00120d34(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00120dfc(long param_1,undefined8 param_2);
void FUN_00120eb8(long param_1);
void operator.delete(void *param_1);
ulong FUN_00120f5c(long param_1,long param_2);
ulong FUN_00120fc0(long param_1,long param_2);
ulong FUN_00121024(long param_1,long param_2);
void FUN_00121088(long param_1,long param_2);
void FUN_001210d0(long param_1,long param_2);
void FUN_00121118(long param_1,long param_2);
void operator.delete(void *param_1);
void FUN_00121164(long param_1,long *param_2);
void operator.delete(void *param_1);
void FUN_001212dc(long param_1,undefined8 param_2);
void FUN_0012137c(long param_1);
void operator.delete(void *param_1);
void FUN_00121390(long param_1,undefined8 param_2);
void FUN_00121420(long param_1);
void operator.delete(void *param_1);
void FUN_00121434(long param_1,long param_2);
void operator.delete(void *param_1);
void FUN_00121528(long param_1,void **param_2);
void operator.delete(void *param_1);
undefined8 FUN_00121694(void);
undefined8 FUN_0012169c(void);
void FUN_001216a4(long param_1,undefined8 param_2);
void FUN_00121774(long param_1,long param_2);
void operator.delete(void *param_1);
void FUN_001219f0(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
undefined8 * FUN_00121aa0(char **param_1);
undefined8 * FUN_001220b4(byte **param_1);
undefined8 * FUN_00122474(char **param_1);
void FUN_0012267c(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00122724(long param_1,void **param_2);
void operator.delete(void *param_1);
undefined8 FUN_00122890(void);
undefined8 FUN_00122898(void);
void FUN_001228a0(long param_1,undefined8 param_2);
void FUN_001228ec(long param_1,void **param_2);
void operator.delete(void *param_1);
void FUN_00122bb8(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00122c68(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
ulong FUN_00122cf4(long param_1);
ulong FUN_00122d1c(long param_1);
ulong FUN_00122d44(long param_1);
void FUN_00122d6c(long param_1,undefined8 param_2);
void FUN_00122e3c(long param_1);
void operator.delete(void *param_1);
void FUN_00122e50(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_00122ecc(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
undefined8 FUN_00122fc4(void);
undefined8 FUN_00122fcc(void);
void FUN_00122fd4(long param_1);
void FUN_00122fe4(long param_1,long *param_2);
void operator.delete(void *param_1);
ulong FUN_00123100(long param_1);
void FUN_00123128(long param_1,undefined8 param_2);
void FUN_00123238(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_001232e8(long param_1,void **param_2);
void operator.delete(void *param_1);
ulong FUN_001233ac(long param_1);
void FUN_001233d4(long param_1,undefined8 param_2);
void FUN_001235a0(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
ulong FUN_001236d0(long param_1);
void FUN_001236f8(long param_1,undefined8 param_2);
void FUN_001238a0(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void FUN_001239b4(long param_1,undefined8 param_2);
void operator.delete(void *param_1);
void __thiscall std::type_info::~type_info(type_info *this);
void FUN_001239f4(void);
void FUN_001239f8(void);
void FUN_001239fc(void);
void FUN_00123a00(type_info *param_1);
void FUN_00123a24(type_info *param_1);
void FUN_00123a48(type_info *param_1);
void FUN_00123a6c(type_info *param_1);
void FUN_00123a90(type_info *param_1);
void FUN_00123ab4(type_info *param_1);
void FUN_00123ad8(type_info *param_1);
void FUN_00123afc(type_info *param_1);
void FUN_00123b20(type_info *param_1);
void FUN_00123b44(type_info *param_1);
bool FUN_00123b68(long param_1,long param_2);
undefined8 FUN_00123b7c(void);
undefined8 FUN_00123b84(void);
bool FUN_00123b8c(long param_1,long param_2);
void FUN_00123ba0(long param_1,long param_2,undefined8 *param_3);
void FUN_00123c80(undefined8 param_1,long param_2,long param_3,undefined4 param_4);
void FUN_00123cd8(long param_1,long param_2,long param_3,undefined4 param_4);
void FUN_00123d48(long param_1,long param_2,long param_3,undefined4 param_4);
void FUN_00123dc4(long **param_1,undefined8 param_2,long *param_3,undefined4 param_4);
void FUN_00123e04(long param_1,long param_2,long *param_3,undefined4 param_4);
bool FUN_00123f58(long param_1,long param_2);
long * FUN_00123ff0(long param_1,long param_2,long **param_3);
bool FUN_00124310(long param_1,long param_2);
bool FUN_00124458(long param_1,long param_2);
ulong FUN_001244e4(long param_1,long param_2,undefined8 *param_3);
void __dynamic_cast(long *param_1,undefined8 param_2,long param_3,undefined8 param_4);
void FUN_0012477c(undefined8 param_1,long param_2,long param_3,long param_4,int param_5);
void FUN_0012481c(undefined8 param_1,long param_2,long param_3,undefined4 param_4);
void FUN_0012483c(long param_1,long *param_2,long *param_3,int param_4,uint param_5);
void FUN_00124bf0(long **param_1);
void FUN_00124c28(long **param_1,undefined8 param_2,long *param_3,undefined4 param_4,uint param_5);
void FUN_00124c60(long param_1,long *param_2,long param_3,int param_4,uint param_5);
void FUN_00124e00(long param_1,long *param_2,long param_3,int param_4,uint param_5);
void FUN_00124f20(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6);
void FUN_0012515c(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6);
void FUN_0012528c(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6);
void __thiscall std::type_info::~type_info(type_info *this);
void __thiscall std::type_info::~type_info(type_info *this);
void __thiscall std::bad_cast::bad_cast(bad_cast *this);
void __thiscall std::bad_cast::~bad_cast(bad_cast *this);
void __thiscall std::bad_cast::~bad_cast(bad_cast *this);
char * std::bad_cast::what(void);
void __thiscall std::bad_typeid::bad_typeid(bad_typeid *this);
void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this);
void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this);
char * std::bad_typeid::what(void);
void __cxa_pure_virtual(void);
void __cxa_deleted_virtual(void);
void FUN_0012543c(byte *param_1,ulong *param_2);
void FUN_00125464(byte *param_1,ulong *param_2);
ulong ** FUN_001254a4(byte param_1,ulong **param_2,ulong **param_3,ulong **param_4);
void FUN_00125594(void);
void FUN_001256a8(long param_1,undefined8 param_2,undefined8 *param_3);
undefined8 * FUN_001256e4(long param_1,int param_2);
long FUN_0012573c(long param_1,long param_2);
undefined8 FUN_00125848(long param_1);
void FUN_00125850(long param_1,int param_2,undefined8 param_3);
undefined8 FUN_001258a8(long param_1);
undefined8 FUN_001258b0(long param_1,uint *param_2);
void FUN_001258c4(long param_1,undefined8 param_2);
undefined8 FUN_001258cc(long param_1);
undefined8 FUN_001258d4(long param_1);
undefined8 FUN_001258dc(long param_1);
undefined8 FUN_00125904(long param_1);
undefined8 FUN_0012590c(long param_1);
undefined8 FUN_00125914(byte param_1,undefined8 param_2);
void FUN_0012598c(byte *param_1,byte *param_2,long param_3,void *param_4);
undefined8 FUN_00125e84(long param_1,long *param_2);
ulong * FUN_001262a8(byte *param_1,byte *param_2,undefined8 param_3,ulong *param_4);
void FUN_0012685c(void *param_1,long *param_2);
void FUN_00126a68(void *param_1,undefined8 param_2,undefined8 param_3);
void FUN_00126b44(long param_1,long param_2);
undefined8 FUN_00126b90(undefined8 *param_1,long param_2);
undefined4 FUN_00126c50(undefined8 *param_1,undefined8 param_2);
long FUN_00126d3c(long param_1,long param_2);
void FUN_00126e30(void);
undefined  [16] FUN_00126e34(undefined8 *param_1,undefined8 param_2);
undefined  [16] FUN_00126fac(long param_1,undefined8 param_2,undefined8 param_3);
undefined  [16] FUN_001270a0(long param_1,undefined8 param_2);
undefined  [16] FUN_0012719c(long param_1,undefined8 param_2);
void FUN_00127294(long param_1);
undefined8 FUN_001272b8(code *param_1,undefined8 param_2);
void FUN_00127388(byte *param_1,ulong *param_2);
void FUN_001273b0(byte *param_1,ulong *param_2);
int FUN_001273f0(undefined8 param_1,long param_2,long param_3);
void FUN_0012740c(undefined8 param_1,code *param_2,long param_3,ulong param_4,int param_5);
void FUN_001274cc(undefined8 param_1,undefined8 param_2,long param_3);
undefined8 FUN_00127580(byte param_1);
undefined8 FUN_001275e0(byte param_1,long param_2);
undefined8 FUN_00127640(byte param_1,long param_2);
ulong ** FUN_001276a0(byte param_1,ulong **param_2,ulong **param_3,ulong **param_4);
int FUN_00127790(long param_1,long param_2,long param_3);
byte FUN_00127820(long param_1);
uint * FUN_0012791c(long param_1,uint *param_2,long param_3);
void FUN_00127a7c(long param_1);
undefined8 FUN_00127a8c(ulong *param_1,ulong param_2,ulong *param_3);
int FUN_00127ea8(undefined8 param_1,long param_2,long param_3);
long FUN_00127f44(ulong *param_1,uint *param_2);
void FUN_001280a4(long param_1,long *param_2,uint *param_3);
long FUN_001281d8(ulong *param_1,ulong param_2);
int * FUN_00128748(int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4);
void FUN_001287e4(undefined8 param_1,undefined8 param_2);
void FUN_001287f0(int *param_1);
int FUN_00128830(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4);
void FUN_001288c4(undefined8 param_1,undefined8 param_2);
void FUN_001288d0(undefined8 param_1);
long FUN_001288fc(int *param_1);
long thunk_FUN_001288fc(int *param_1);
void FUN_00128a00(int *param_1);
long FUN_00128a24(ulong param_1,ulong *param_2);
int pthread_create(pthread_t * __newthread, pthread_attr_t * __attr, __start_routine * __start_routine, void * __arg);
void * realloc(void * __ptr, size_t __size);
int pthread_key_create(pthread_key_t * __key, __destr_function * __destr_function);
undefined __vsnprintf_chk();
int pthread_once(pthread_once_t * __once_control, __init_routine * __init_routine);
undefined __cxa_finalize();
void * calloc(size_t __nmemb, size_t __size);
void syslog(int __pri, char * __fmt, ...);
int posix_memalign(void * * __memptr, size_t __alignment, size_t __size);
undefined __strlen_chk();
void abort(void);
int snprintf(char * __s, size_t __maxlen, char * __format, ...);
undefined dl_iterate_phdr();
undefined android_set_abort_message();
int islower(int param_1);
undefined __memmove_chk();
int fputc(int __c, FILE * __stream);
undefined __stack_chk_fail();
int pthread_setspecific(pthread_key_t __key, void * __pointer);
void openlog(char * __ident, int __option, int __facility);
undefined __android_log_print();
int strcmp(char * __s1, char * __s2);
int pthread_mutex_lock(pthread_mutex_t * __mutex);
void closelog(void);
void * pthread_getspecific(pthread_key_t __key);
void * memmove(void * __dest, void * __src, size_t __n);
int isxdigit(int param_1);
size_t strlen(char * __s);
int vasprintf(char * * __ptr, char * __f, __gnuc_va_list __arg);
void * malloc(size_t __size);
void * memcpy(void * __dest, void * __src, size_t __n);
void * memset(void * __s, int __c, size_t __n);
void free(void * __ptr);
int vfprintf(FILE * __s, char * __format, __gnuc_va_list __arg);
int pthread_mutex_unlock(pthread_mutex_t * __mutex);
undefined __cxa_atexit();

