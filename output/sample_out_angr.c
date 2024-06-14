long long sub_40ecc0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v2;  // x16
    unsigned long v3;  // x30

    v0 = v2;
    v1 = v3;
    goto *((long long *)4410504);
}

long long _start()
{
    return __cxa_finalize();
}

long long sub_40f1fc()
{
    unsigned long v0;  // x0

    return v0;
}

long long sub_40f200()
{
    return sub_40f1fc();
}

long long sub_40f204(unsigned long a0)
{
    if (!a0)
        return a0;
    goto x0<8>;
}

long long sub_40f210(unsigned long a0)
{
    unsigned long long v0;  // x8

    v0 = sub_40f204;
    return __cxa_atexit();
}

int cp()
{
    unsigned long v0;  // [bp-0xf0]
    char v1;  // [bp-0xe4]
    char v2;  // [bp-0x18]
    unsigned int v3;  // w1
    unsigned long v4;  // x9, Other Possible Types: unsigned long long
    char v5[4];  // x0
    unsigned long v6;  // x10, Other Possible Types: unsigned long long
    unsigned long v7;  // x10, Other Possible Types: unsigned long long
    unsigned long v8;  // x10, Other Possible Types: unsigned long long
    unsigned long v9;  // x10, Other Possible Types: unsigned long long

    v0 = &v2;
    memset(&v1, 0, 200);
    if (v3 <= 0)
        v4 = 0;
    else
        v4 = 1;
    if (!((char)v4 & 1))
        return;
    if (v5[0] == 48)
        v6 = 0;
    else
        v6 = 1;
    if (((char)v6 & 1))
        return;
    if (v5[1] == 120)
        v7 = 0;
    else
        v7 = 1;
    if (((char)v7 & 1))
        return;
    if (v5[2] == 102)
        v8 = 0;
    else
        v8 = 1;
    if (((char)v8 & 1))
        return;
    if (v5[3] == 97)
        v9 = 0;
    else
        v9 = 1;
    if (((char)v9 & 1))
        return;
    memcpy(&v1, v5, v3);
}

long long printLog()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned long long)__android_log_print(2, "EXPLOITSTATUS", "You won! ");
}

int Java_com_example_mynativetest_MainActivity_overFlow()
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x2c]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x10]
    char v6;  // [bp+0x0]
    unsigned long v7;  // x0
    unsigned long v8;  // x1
    unsigned long v9;  // x2
    unsigned int v10;  // w3
    unsigned long long v11;  // x29

    v5 = &v6;
    v4 = v7;
    v3 = v8;
    v2 = v9;
    v1 = v10;
    v0 = ::0x40ee50::_JNIEnv::GetByteArrayElements();
    ::0x40f0f0::cp();
    v11 = v5;
    return;
}

long long _JNIEnv::GetByteArrayElements(struct struct_1 **a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *(a0)->field_5c0(a0, a1, a2);
}

typedef struct struct_0 {
    char field_0;
} struct_0;

long long Java_com_example_mynativetest_MainActivity_leakMemory(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0xc0]
    unsigned long v1;  // [bp-0xb8]
    unsigned long v2;  // [bp-0xb0]
    unsigned long v3;  // [bp-0xa8]
    unsigned long v4;  // [bp-0xa0]
    struct_0 *v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    char *v7;  // [bp-0x78]
    char v8;  // [bp-0x69]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x40]
    unsigned long v11;  // [bp-0x28]
    unsigned long v12;  // [bp-0x20]
    unsigned long v13;  // [bp-0x10]
    char v14;  // [bp+0x0]

    v13 = &v14;
    v12 = a1;
    v11 = a2;
    v6 = 40;
    v5 = &v9;
    v4 = &v8;
    sub_40f494(&v10);
    memset(v5, 0, v6);
    v3 = ::0x40ee50::_JNIEnv::GetByteArrayElements();
    v7 = v3;
    snprintf(&v9, 40, v7);
    ::0x40eec0::std::__ndk1::basic_string::assign();
    v2 = a0;
    v1 = sub_40f55c(&v10);
    v0 = ::0x40edf0::_JNIEnv::NewStringUTF();
    ::0x40ef20::std::__ndk1::basic_string::__base_dtor__();
    return v0;
}

int sub_40f47c()
{
    unsigned int v0;  // [bp+0x3c]
    unsigned int v1;  // w1
    unsigned long long v2;  // x0

    v0 = v1;
    ::0x40ef20::std::__ndk1::basic_string::__base_dtor__();
    sub_4270a0(v2);
}

void sub_40f494(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    ::0x40ee00::std::__ndk1::__compressed_pair::__base_ctor__();
    sub_40f8c8(a0);
    v2 = v0;
    return;
}

long long sub_40f4cc()
{
    unsigned long long v0;  // x0
    unsigned long long v1;  // x1
    unsigned long long v2;  // x2

    sub_40f79c(v0, v1, v2);
}

long long std::__ndk1::basic_string::assign(unsigned long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x10]
    char v4;  // [bp+0x0]

    v3 = &v4;
    v2 = a0;
    v1 = a1;
    v0 = ::0x40f1a0::std::__ndk1::char_traits::length();
    return ::0x40efc0::std::__ndk1::basic_string::assign();
}

long long _JNIEnv::NewStringUTF(struct struct_1 **a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *(a0)->field_538(a0, a1);
}

int sub_40f55c(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_4104ec(a0);
}

long long std::__ndk1::basic_string::__base_dtor__(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x10]
    char v6;  // [bp+0x0]
    unsigned long v7;  // x0, Other Possible Types: unsigned long long

    v5 = &v6;
    v4 = a0;
    v3 = v4;
    (unsigned int)v7 = sub_40f5f4(v3);
    if (((char)v7 & 1))
    {
        v2 = sub_40f668(v3);
        v1 = sub_40f68c(v3);
        v0 = sub_40f6b4(v3);
        v7 = sub_40f634(v2, v1, v0);
        return v7;
    }
    return v7;
}

int sub_40f5f4(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x30
    unsigned int v6;  // w8
    unsigned long long v8;  // x8

    v0 = &v2;
    v1 = v3;
    if (!((char)[D] arm64g_calculate_condition(0xa<64>, And(Conv(8->64, Load(addr=Conv(32->64, Call(0x40f6ec<64>, <SimCCAArch64>: [x0<8>], ret: x0<4>, fp_ret: no-fp-ret-value)), size=1, endness=Iend_LE)), 0x1<64>), 0x0<64>, 0x0<64>)))
        v6 = 1;
    else
        v6 = 0;
    v8 = v6 & 1;
    return v8;
}

void sub_40f634(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_40f724(a0, a1, a2);
    v2 = v0;
    return;
}

int sub_40f668(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_40f824(a0);
}

int sub_40f68c(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *((long long *)(sub_40f85c(a0) + 16));
}

int sub_40f6b4(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = -2;
    return (int)*((long long *)sub_40f6ec(a0)) & (unsigned int)v0;
}

int sub_40f6ec(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_40f710(a0);
}

void sub_40f710(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

void sub_40f724(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    unsigned long long v3;  // x29

    v1 = &v2;
    v0 = a0;
    sub_40f768(a1, 1 * a2, 1);
    v3 = v1;
    return;
}

long long sub_40f764(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    sub_40f79c(a0, a1, a2);
}

void sub_40f768(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_40f7a8(a0, a1, a2);
    v2 = v0;
    return;
}

void sub_40f79c(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // x30

    v0 = v1;
    ::0x40f0b0::__cxa_begin_catch();
    ::0x40f080::std::terminate();
}

void sub_40f7a8(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    char v4;  // [bp+0x0]
    unsigned long long v5;  // x29

    v3 = &v4;
    v2 = a0;
    v1 = a1;
    v0 = a2;
    ::0x40eda0::std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size();
    v5 = v3;
    return;
}

long long std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size(unsigned long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = a0;
    v0 = a1;
    return ::0x40eeb0::std::__ndk1::_DeallocateCaller::__do_call();
}

long long std::__ndk1::_DeallocateCaller::__do_call(unsigned long a0)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = a0;
    return ::0x40f060::operator delete();
}

void sub_40f824(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_40f848(a0);
    v2 = v0;
    return;
}

void sub_40f848(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

int sub_40f85c(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_40f880(a0);
}

void sub_40f880(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

long long std::__ndk1::__compressed_pair::__base_ctor__(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    sub_40f930(a0);
    return (unsigned long long)sub_40f958(a0);
}

void sub_40f8c8(unsigned long long a0)
{
    unsigned int v0;  // [bp-0x24]
    unsigned long long *v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x8, Other Possible Types: unsigned long long
    unsigned long long v5;  // x29

    v2 = &v3;
    v1 = sub_40f85c(a0);
    v0 = 0;
    while (true)
    {
        if (v0 < 3)
            v4 = 0;
        else
            v4 = 1;
        if (((char)v4 & 1))
            break;
        v1[v0] = 0;
        v0 += 1;
    }
    v5 = v2;
    return;
}

void sub_40f930(void* a0)
{
    memset(a0, 0, 24);
    return;
}

void sub_40f958(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_40f97c(a0);
    v2 = v0;
    return;
}

void sub_40f97c(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

long long std::__ndk1::basic_string::assign(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x48]
    char v1;  // [bp-0x39]
    unsigned long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    unsigned long v4;  // [bp-0x20]
    unsigned long v5;  // [bp-0x10]
    char v6;  // [bp+0x0]
    unsigned long v7;  // x10, Other Possible Types: unsigned long long

    v5 = &v6;
    v4 = a1;
    v3 = sub_40fa94(a0);
    if (a2 <= v3)
        v7 = 0;
    else
        v7 = 1;
    if (((char)v7 & 1))
    {
        v0 = sub_40fc3c(a0);
        ::0x40ef90::std::__ndk1::basic_string::__grow_by_and_replace();
        return a0;
    }
    v2 = sub_40fae8(sub_40fafc(a0));
    ::0x40ef30::std::__ndk1::char_traits::move();
    v1 = 0;
    ::0x40ed80::std::__ndk1::char_traits::assign();
    sub_40fbd4(a0, a2);
    sub_40fc28(a0, a2);
    return a0;
}

long long std::__ndk1::char_traits::length(char *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return strlen(a0);
}

int sub_40fa94(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (!((char)sub_40f5f4(a0) & 1))
    {
        v0 = 23;
        return v0 - 1;
    }
    v0 = sub_40f6b4(a0);
    return v0 - 1;
}

int sub_40fae8(unsigned long a0)
{
    return a0;
}

int sub_40fafc(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (((char)sub_40f5f4(a0) & 1))
    {
        v0 = sub_40f68c(a0);
        return v0;
    }
    v0 = sub_40feec(a0);
    return v0;
}

long long std::__ndk1::char_traits::move(unsigned long a0, void* a1, unsigned int a2)
{
    void* v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]

    if (!a2)
    {
        v1 = a0;
        return v1;
    }
    v0 = a0;
    memmove(v0, a1, a2);
    v1 = v0;
    return v1;
}

long long std::__ndk1::char_traits::assign(char *a0, char *a1)
{
    char *v1;  // x8

    v1 = a0;
    *(a0) = *(a1);
    return a0;
}

void sub_40fbd4(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    if (!((char)sub_40f5f4(a0) & 1))
    {
        sub_40ff8c(a0, a1);
        v2 = v0;
        return;
    }
    sub_40ff54(a0, a1);
    v2 = v0;
    return;
}

void sub_40fc28(unsigned long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]

    v1 = a0;
    v0 = a1;
    return;
}

int sub_40fc3c(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (((char)sub_40f5f4(a0) & 1))
    {
        v0 = sub_40ffc8(a0);
        return v0;
    }
    v0 = sub_40fff0(a0);
    return v0;
}

long long std::__ndk1::basic_string::__grow_by_and_replace(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    unsigned long v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0]
    unsigned long v2;  // [bp-0xa8]
    unsigned long v3;  // [bp-0xa0]
    char v4;  // [bp-0x89]
    unsigned long v5;  // [bp-0x88]
    unsigned long v6;  // [bp-0x80]
    unsigned long v7;  // [bp-0x78]
    unsigned long v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x68]
    unsigned long v10;  // [bp-0x60]
    unsigned long v11;  // [bp-0x58]
    unsigned long v12;  // [bp-0x50]
    unsigned long v13;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long v14;  // [bp-0x10]
    char v15;  // [bp+0x0]
    unsigned long v16;  // x11, Other Possible Types: unsigned long long
    unsigned long v17;  // x11, Other Possible Types: unsigned long long
    unsigned long v18;  // x9, Other Possible Types: unsigned long long

    v14 = &v15;
    v13 = a3;
    v12 = a7;
    v11 = sub_410024(a0);
    if (v11 - a1 - 1 < a2)
        v16 = 0;
    else
        v16 = 1;
    if (!((char)v16 & 1))
        ::0x40f040::std::__ndk1::__basic_string_common::__throw_length_error const();
    v10 = sub_40fafc(a0);
    if (a1 < v11 / 2 - 16)
        v17 = 0;
    else
        v17 = 1;
    if (((char)v17 & 1))
    {
        v3 = v11 - 1;
    }
    else
    {
        v8 = a1 + a2;
        v7 = a1 * 2;
        v3 = sub_410078(*((long long *)sub_4100ec(&v8, &v7)));
    }
    v9 = v3;
    v6 = sub_41011c(sub_40f668(a0), v9 + 1);
    sub_410150(a0);
    if (a4)
    {
        v2 = sub_40fae8(v6);
        v1 = sub_40fae8(v10);
        ::0x40f180::std::__ndk1::char_traits::copy();
    }
    if (a6)
    {
        sub_40fae8(v6);
        ::0x40f180::std::__ndk1::char_traits::copy();
    }
    v5 = v13 - a5 - a4;
    if (v5)
    {
        v0 = sub_40fae8(v6) + a4 + a6;
        sub_40fae8(v10);
        ::0x40f180::std::__ndk1::char_traits::copy();
    }
    if (a1 + 1 != 23)
        v18 = 0;
    else
        v18 = 1;
    if (!((char)v18 & 1))
        sub_40f634(sub_40f668(a0), v10, a1 + 1);
    sub_4101bc(a0, v6);
    sub_4101f4(a0, v9 + 1);
    v13 = a4 + a6 + v5;
    sub_40ff54(a0, v13);
    v4 = 0;
    return ::0x40ed80::std::__ndk1::char_traits::assign();
}

int sub_40feec(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_40ff1c(sub_40f85c(a0) + 1);
}

void sub_40ff1c(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_40ff40(a0);
    v2 = v0;
    return;
}

void sub_40ff40(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

void sub_40ff54(unsigned long long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    *((unsigned long *)(sub_40f85c(a0) + 8)) = a1;
    v2 = v0;
    return;
}

void sub_40ff8c(unsigned long long a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    unsigned long long v3;  // x29

    v1 = &v2;
    v0 = __ROL__(a1, 1) & -2;
    *((char *)sub_40f85c(a0)) = v0;
    v3 = v1;
    return;
}

int sub_40ffc8(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *((long long *)(sub_40f6ec(a0) + 8));
}

int sub_40fff0(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v3;  // x8

    v0 = &v1;
    v3 = *((char *)sub_40f6ec(a0)) >> 31 & 0x80000000 | __ROL__(*((char *)sub_40f6ec(a0)), 31) & 2147483647;
    return v3 << 32 >> 63 & -0x100000000 | v3 & 4294967295 & 4294967295;
}

int sub_410024(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = sub_410234(sub_41025c(a0));
    return v0 - 16;
}

long long std::__ndk1::__basic_string_common::__throw_length_error const(unsigned long a0)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x30

    v1 = &v3;
    v2 = v4;
    v0 = a0;
    sub_4102f8("basic_string");
}

int sub_410078(unsigned long a0)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x9, Other Possible Types: unsigned long long
    unsigned long v5;  // x9, Other Possible Types: unsigned long long

    v2 = &v3;
    if (a0 < 23)
        v4 = 0;
    else
        v4 = 1;
    if (!((char)v4 & 1))
    {
        v1 = 22;
        return v1;
    }
    v0 = ::0x40ee30::unsigned long std::__ndk1::basic_string::__align_it() + 1;
    if (v0 == 23)
        v5 = 0;
    else
        v5 = 1;
    if (!((char)v5 & 1))
        v0 += 1;
    v1 = v0;
    return v1;
}

int sub_4100ec(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x21]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    return (unsigned int)sub_4103c8(a0, a1, v0);
}

int sub_41011c(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_410460(a0, a1, 0);
}

void sub_410150(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

long long std::__ndk1::char_traits::copy(unsigned long a0, void* a1, unsigned int a2)
{
    void* v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]

    if (!a2)
    {
        v1 = a0;
        return v1;
    }
    v0 = a0;
    memcpy(v0, a1, a2);
    v1 = v0;
    return v1;
}

void sub_4101bc(unsigned long long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    *((unsigned long *)(sub_40f85c(a0) + 16)) = a1;
    v2 = v0;
    return;
}

void sub_4101f4(unsigned long long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    *((unsigned long *)sub_40f85c(a0)) = 1 | a1;
    v2 = v0;
    return;
}

int sub_410234(unsigned long long a0)
{
    char v0;  // [bp-0x19]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    return (unsigned int)sub_410280(v0, a0);
}

int sub_41025c(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_4102c0(a0);
}

void sub_410280(unsigned long a0, unsigned long long a1)
{
    char v0;  // [bp-0x11]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    unsigned long long v3;  // x29

    v1 = &v2;
    v0 = a0;
    sub_4102a8(a1);
    v3 = v1;
    return;
}

int sub_4102a8(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v1;  // x8

    v1 = -1;
    v0 = a0;
    return -1;
}

void sub_4102c0(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_4102e4(a0);
    v2 = v0;
    return;
}

void sub_4102e4(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

extern char _ZTISt12length_error;

void sub_4102f8(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x24]
    unsigned long long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]
    unsigned long v6;  // x30

    v3 = &v5;
    v4 = v6;
    v0 = ::0x40f010::__cxa_allocate_exception();
    sub_410354(v0, a0);
    v2 = ::0x40ecf0::__cxa_throw();
    *((char **)&v1) = &_ZTISt12length_error;
    ::0x40f0d0::__cxa_free_exception();
    sub_4270a0(v2);
}

extern char g_431f38;

void sub_410354(unsigned long long *a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    unsigned long long v3;  // x29

    v1 = &v2;
    v0 = a1;
    std::logic_error::__base_ctor__();
    *(a0) = &g_431f38;
    v3 = v1;
    return;
}

long long unsigned long std::__ndk1::basic_string::__align_it(unsigned long a0)
{
    unsigned long long v0;  // x8
    unsigned long long v1;  // x9

    v0 = -0x10;
    v1 = a0 + 15;
    return a0 + 15 & -0x10;
}

void sub_4103c8(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x30]
    char v1;  // [bp-0x11]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    unsigned long long v4;  // x29

    v2 = &v3;
    v1 = a2;
    if (((char)sub_410424(&v1, a0, a1) & 1))
    {
        v0 = a1;
        v4 = v2;
        return;
    }
    v0 = a0;
    v4 = v2;
    return;
}

int sub_410424(unsigned long a0, unsigned long long *a1, unsigned long long *a2)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v3;  // w10
    unsigned long long v5;  // x10

    v0 = a0;
    if (*(a2) > *(a1))
        v3 = 1;
    else
        v3 = 0;
    v5 = v3 & 1;
    return v5;
}

void sub_410460(unsigned int a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x9, Other Possible Types: unsigned long long
    unsigned long long v4;  // x29

    v1 = &v2;
    v0 = a2;
    if (sub_4102a8(a0) < a1)
        v3 = 0;
    else
        v3 = 1;
    if (!((char)v3 & 1))
        sub_4102f8("allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    sub_4104c4(1 * a1, 1);
    v4 = v1;
    return;
}

void sub_4104c4(unsigned long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    unsigned long long v4;  // x29

    v2 = &v3;
    v1 = a0;
    v0 = a1;
    ::0x40edb0::operator new();
    v4 = v2;
    return;
}

void sub_4104ec(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_410514(sub_410528(a0));
    v2 = v0;
    return;
}

void sub_410514(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

int sub_410528(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (((char)sub_40f5f4(a0) & 1))
    {
        v0 = sub_410580(a0);
        return v0;
    }
    v0 = sub_4105a8(a0);
    return v0;
}

int sub_410580(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *((long long *)(sub_40f6ec(a0) + 16));
}

int sub_4105a8(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned int)sub_4105d8(sub_40f6ec(a0) + 1);
}

void sub_4105d8(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_4105fc(a0);
    v2 = v0;
    return;
}

void sub_4105fc(unsigned long a0)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a0;
    return;
}

long long std::__throw_bad_alloc()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x19
    unsigned long v5;  // x30

    v0 = v4;
    v1 = &v3;
    v2 = v5;
    ::0x40f010::__cxa_allocate_exception();
    ::0x40f0c0::std::bad_alloc::__ctor__();
    ::0x40ecf0::__cxa_throw();
}

long long operator new(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x19, Other Possible Types: unsigned long long
    unsigned long long v3;  // x0
    struct struct_0 **v4;  // x0

    v0 = &v1;
    if (a0)
        v2 = a0;
    else
        v2 = 1;
    while (!v3)
    {
        v3 = malloc(v2);
        if (!::0x40eef0::std::get_new_handler())
        {
            ::0x40f010::__cxa_allocate_exception();
            ::0x40f0c0::std::bad_alloc::__ctor__();
            ::0x40ecf0::__cxa_throw();
        }
        v4();
    }
    return v3;
}

long long operator new()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return ::0x40edb0::operator new();
}

long long sub_4106bc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9)
{
    ::0x40f0b0::__cxa_begin_catch();
    ::0x40ed60::__cxa_end_catch();
    x30<8> = a9;
    return 0;
}

long long sub_4106d0()
{
    unsigned int v0;  // x0
    unsigned int v1;  // x1
    unsigned int v2;  // x2

    sub_40f79c(v0, v1, v2);
}

long long operator new[]()
{
    return ::0x40edb0::operator new();
}

long long operator new[]()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return ::0x40f090::operator new[]();
}

long long sub_4106ec(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9)
{
    ::0x40f0b0::__cxa_begin_catch();
    ::0x40ed60::__cxa_end_catch();
    x30<8> = a9;
    return 0;
}

long long sub_410700()
{
    unsigned int v0;  // x0
    unsigned int v1;  // x1
    unsigned int v2;  // x2

    sub_40f79c(v0, v1, v2);
}

long long operator delete(void* a0)
{
    return (unsigned long long)free(a0);
}

long long operator delete()
{
    return ::0x40f060::operator delete();
}

long long operator delete()
{
    return ::0x40f060::operator delete();
}

long long operator delete[]()
{
    return ::0x40f060::operator delete();
}

long long operator delete[]()
{
    return ::0x40efe0::operator delete[]();
}

long long operator delete[]()
{
    return ::0x40efe0::operator delete[]();
}

typedef struct struct_1 {
    char padding_0[40];
    unsigned long long field_28;
} struct_1;

long long operator new(unsigned long a0, unsigned long a1)
{
    void* v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x19, Other Possible Types: unsigned long long
    unsigned long v5;  // x20, Other Possible Types: unsigned long long
    struct_1 *v6;  // tpidr_el0
    struct struct_0 **v7;  // x0

    v2 = &v3;
    if (a0)
        v4 = a0;
    else
        v4 = 1;
    if (8 < a1)
        v5 = a1;
    else
        v5 = 8;
    v1 = v6->field_28;
    while (posix_memalign(&v0, v5, v4))
    {
        if (!::0x40eef0::std::get_new_handler())
        {
            ::0x40f010::__cxa_allocate_exception();
            ::0x40f0c0::std::bad_alloc::__ctor__();
            ::0x40ecf0::__cxa_throw();
            __stack_chk_fail(); /* do not return */
        }
        v7();
    }
    if (v6->field_28 != v1)
        __stack_chk_fail(); /* do not return */
    return v0;
}

long long operator new()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return ::0x40ee90::operator new();
}

long long sub_4107dc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9)
{
    ::0x40f0b0::__cxa_begin_catch();
    ::0x40ed60::__cxa_end_catch();
    x30<8> = a9;
    return 0;
}

long long sub_4107f0()
{
    unsigned int v0;  // x0
    unsigned int v1;  // x1
    unsigned int v2;  // x2

    sub_40f79c(v0, v1, v2);
}

long long operator new[]()
{
    return ::0x40ee90::operator new();
}

long long operator new[]()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return ::0x40ed10::operator new[]();
}

long long sub_41080c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9)
{
    ::0x40f0b0::__cxa_begin_catch();
    ::0x40ed60::__cxa_end_catch();
    x30<8> = a9;
    return 0;
}

long long sub_410820()
{
    unsigned int v0;  // x0
    unsigned int v1;  // x1
    unsigned int v2;  // x2

    sub_40f79c(v0, v1, v2);
}

long long operator delete(void* a0)
{
    return (unsigned long long)free(a0);
}

long long operator delete()
{
    return ::0x40ef80::operator delete();
}

long long operator delete(unsigned long a0, unsigned long a1, unsigned long a2)
{
    return ::0x40ef80::operator delete();
}

long long operator delete[]()
{
    return ::0x40ef80::operator delete();
}

long long operator delete[]()
{
    return ::0x40ede0::operator delete[]();
}

long long operator delete[](unsigned long a0, unsigned long a1, unsigned long a2)
{
    return ::0x40ede0::operator delete[]();
}

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
} struct_0;

extern char g_431e50;

long long std::logic_error::__ctor__(unsigned long long a0[2], struct_1 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v3;  // x20, Other Possible Types: unsigned long
    unsigned long long v4;  // x21
    struct_0 *v5;  // x0

    v0 = &v1;
    a0[0] = &g_431e50;
    if (!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(8->64, (Load(addr=x1<8>, size=1, endness=Iend_LE) & 0x1<8>)), 0x0<64>, 0x0<64>)))
        v3 = &a1->padding_0[1];
    else
        v3 = a1->field_10;
    v4 = strlen(v3);
    v5 = ::0x40edb0::operator new();
    v5->field_0 = v4;
    v5->field_8 = v4;
    v5->field_10 = 0;
    a0[1] = (char *)&v5[1].field_0 + 4;
    return memcpy((char *)&v5[1].field_0 + 4, v3, v4 + 1);
}

long long sub_4108bc()
{
    unsigned long long v0;  // x0

    std::exception::__base_dtor__();
    sub_4270a0(v0);
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
} struct_0;

extern char g_431e50;

long long std::logic_error::__ctor__(unsigned long long a0[2], char *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v3;  // x21
    struct_0 *v4;  // x0

    v0 = &v1;
    a0[0] = &g_431e50;
    v3 = strlen(a1);
    v4 = ::0x40edb0::operator new();
    v4->field_0 = v3;
    v4->field_8 = v3;
    v4->field_10 = 0;
    a0[1] = (char *)&v4[1].field_0 + 4;
    return memcpy((char *)&v4[1].field_0 + 4, a1, v3 + 1);
}

long long sub_41093c()
{
    unsigned long long v0;  // x0

    std::exception::__base_dtor__();
    sub_4270a0(v0);
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern char g_431e50;

long long std::logic_error::__base_ctor__(unsigned long long a0[2], struct_0 *a1)
{
    unsigned long long v0;  // x8
    int tmp_6;  // tmp #6
    int tmp_1;  // tmp #1
    unsigned long long v1;  // x8
    unsigned long long v3;  // x9

    a0[0] = &g_431e50;
    v0 = a1->field_8;
    a0[1] = v0;
    v1 = v0 - 8;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        v3 = tmp_1 + 1;
        [D] MBusEvent-Imbe_Fence
        [D] t6 = ( STle-Cond(t5) = t11 )
    } while ((unsigned int)(tmp_6 ^ 1));
    return a0;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long std::logic_error::operator=(struct_0 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_6;  // tmp #6
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v3;  // w10

    v0 = &v1;
    a0->field_8 = a1->field_8;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t6 = ( STle-Cond(t5) = t11 )
    } while ((unsigned int)(tmp_6 ^ 1));
    do
    {
        [D] t1 = LDle-Linked(t0)
        v3 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    return a0;
}

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
} struct_0;

extern char g_431e78;

long long std::runtime_error::__base_ctor__(unsigned long long a0[2], struct_1 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v3;  // x20, Other Possible Types: unsigned long
    unsigned long long v4;  // x21
    struct_0 *v5;  // x0

    v0 = &v1;
    a0[0] = &g_431e78;
    if (!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(8->64, (Load(addr=x1<8>, size=1, endness=Iend_LE) & 0x1<8>)), 0x0<64>, 0x0<64>)))
        v3 = &a1->padding_0[1];
    else
        v3 = a1->field_10;
    v4 = strlen(v3);
    v5 = ::0x40edb0::operator new();
    v5->field_0 = v4;
    v5->field_8 = v4;
    v5->field_10 = 0;
    a0[1] = (char *)&v5[1].field_0 + 4;
    return memcpy((char *)&v5[1].field_0 + 4, v3, v4 + 1);
}

long long sub_410a58()
{
    unsigned long long v0;  // x0

    std::exception::__base_dtor__();
    sub_4270a0(v0);
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
} struct_0;

extern char g_431e78;

long long std::runtime_error::__base_ctor__(unsigned long long a0[2], void* a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v3;  // x21
    struct_0 *v4;  // x0

    v0 = &v1;
    a0[0] = &g_431e78;
    v3 = strlen(a1);
    v4 = ::0x40edb0::operator new();
    v4->field_0 = v3;
    v4->field_8 = v3;
    v4->field_10 = 0;
    a0[1] = (char *)&v4[1].field_0 + 4;
    return memcpy((char *)&v4[1].field_0 + 4, a1, v3 + 1);
}

long long sub_410ad8()
{
    unsigned long long v0;  // x0

    std::exception::__base_dtor__();
    sub_4270a0(v0);
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern char g_431e78;

long long std::runtime_error::__ctor__(unsigned long long a0[2], struct_0 *a1)
{
    unsigned long long v0;  // x8
    int tmp_6;  // tmp #6
    int tmp_1;  // tmp #1
    unsigned long long v1;  // x8
    unsigned long long v3;  // x9

    a0[0] = &g_431e78;
    v0 = a1->field_8;
    a0[1] = v0;
    v1 = v0 - 8;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        v3 = tmp_1 + 1;
        [D] MBusEvent-Imbe_Fence
        [D] t6 = ( STle-Cond(t5) = t11 )
    } while ((unsigned int)(tmp_6 ^ 1));
    return a0;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long std::runtime_error::operator=(struct_0 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_6;  // tmp #6
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v3;  // w10

    v0 = &v1;
    a0->field_8 = a1->field_8;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t6 = ( STle-Cond(t5) = t11 )
    } while ((unsigned int)(tmp_6 ^ 1));
    do
    {
        [D] t1 = LDle-Linked(t0)
        v3 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    return a0;
}

long long __cxxabiv1::__setExceptionClass(unsigned long long *a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x8]

    v0 = a1;
    *(a0) = a1;
    return a0;
}

long long __cxxabiv1::__getExceptionClass(unsigned long long *a0)
{
    return *(a0);
}

long long __cxxabiv1::__isOurExceptionClass(unsigned long long *a0)
{
    if (18942722526358315 != *(a0) >> 8)
        return 0;
    return 1;
}

long long __cxa_allocate_exception(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x19
    void* v3;  // x0

    v0 = &v1;
    v2 = a0 + 143 & -0x10;
    (unsigned int)v3 = sub_4121b4(v2);
    if (v3)
    {
        memset(v3, 0, v2);
        return v3 + 128;
    }
    ::0x40f080::std::terminate();
    ::0x40ee20::__cxa_call_unexpected();
}

long long __cxa_free_exception(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return (unsigned long long)sub_412370(a0 - 128);
}

long long sub_410c1c()
{
    ::0x40ee20::__cxa_call_unexpected();
}

long long __cxa_allocate_dependent_exception()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    uint128_t v2[8];  // x0

    v0 = &v1;
    (unsigned int)v2[0] = sub_4121b4(128);
    if (v2)
    {
        v2[6] = 0;
        v2[7] = 0;
        v2[4] = 0;
        v2[5] = 0;
        v2[2] = 0;
        v2[3] = 0;
        v2[0] = 0;
        v2[1] = 0;
        return v2;
    }
    ::0x40f080::std::terminate();
}

long long __cxa_free_dependent_exception(unsigned long long a0)
{
    return (unsigned long long)sub_412370(a0);
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[104];
    unsigned long long field_68;
} struct_0;

long long __cxa_throw(unsigned long long a0[2305843009213693939])
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]
    unsigned long v7;  // x22
    unsigned long v8;  // x21
    unsigned long v9;  // x20
    unsigned long v10;  // x19
    unsigned long v11;  // x30
    struct_1 *v12;  // x22
    unsigned long v13;  // x1
    unsigned long v14;  // x2
    unsigned long long v15;  // x19
    struct_0 *v16;  // x21

    v0 = v7;
    v1 = v8;
    v2 = v9;
    v3 = v10;
    v4 = &v6;
    v5 = v11;
    v12 = ::0x40ef60::__cxa_get_globals();
    a0[13] = ::0x40f190::std::get_unexpected();
    a0[15] = v13;
    a0[14] = v14;
    v15 = &a0[4];
    a0[12] = ::0x40f170::std::get_terminate();
    sub_410ccc(v15);
    a0[16] = 1;
    v16 = &a0[16];
    v12->field_8 = v12->field_8 + 1;
    v16->field_68 = sub_410cf0;
    sub_426e34(v15);
    sub_410d50(v16); /* do not return */
}

void sub_410ccc(unsigned long a0)
{
    char v0;  // [bp-0x8]
    unsigned long long v1;  // x8

    v1 = 0x434c4e47432b2b00;
    strncpy(&v0, "CLNGC++", 7);
    *((long long *)x0<8>) = 0x434c4e47432b2b00;
    return;
}

typedef struct struct_0 {
    unsigned long long field_-40;
} struct_0;

typedef struct struct_2 {
    struct struct_1 *field_-50;
} struct_2;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

int sub_410cf0()
{
    unsigned long v0;  // [bp-0x10]
    int tmp_7;  // tmp #7
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w0
    struct_0 *v3;  // x1
    unsigned long v4;  // x8
    struct_2 *v6;  // x1
    struct struct_1 **v7;  // x8
    unsigned long long v8;  // x29

    v0 = &v1;
    if (v2 != 1)
        sub_411490(v3[8].field_-40); /* do not return */
    do
    {
        [D] t1 = LDle-Linked(t0)
        v4 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t7 = ( STle-Cond(t6) = t8 )
    } while ((unsigned int)(tmp_7 ^ 1));
    if ((char)[D] arm64g_calculate_condition(0x14<64>, x8<8>, 0x1<64>, 0x0<64>))
    {
        v8 = v0;
        return;
    }
    if (v6[10].field_-50)
        v7();
    sub_412370(v6 + 12);
    v8 = v0;
    return;
}

long long sub_410d48()
{
    ::0x40ee20::__cxa_call_unexpected();
    ::0x40ee20::__cxa_call_unexpected();
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

void sub_410d50(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x19
    unsigned long v5;  // x30

    v0 = v4;
    v1 = &v3;
    v2 = v5;
    ::0x40f0b0::__cxa_begin_catch();
    sub_411490(a0->field_20); /* do not return */
}

typedef struct struct_0 {
    unsigned long long field_-10;
} struct_0;

long long __cxa_get_exception_ptr(struct_0 *a0)
{
    return a0[2].field_-10;
}

typedef struct struct_0 {
    unsigned long long field_-38;
    unsigned int field_-30;
    char padding_-2c[28];
    unsigned long long field_-10;
    char padding_-8[8];
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
} struct_1;

long long __cxa_begin_catch(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v3;  // x19
    struct_1 *v4;  // x0
    unsigned long long v5;  // x8
    unsigned long v6;  // x9, Other Possible Types: unsigned int
    unsigned long long v7;  // x9

    v0 = &v1;
    v3 = a0;
    v4 = ::0x40ef60::__cxa_get_globals();
    v5 = &v3[1].padding_-2c[20];
    if (18942722526358315 != a0->field_-38 >> 8)
    {
        if (v4->field_0)
        {
            ::0x40f080::std::terminate();
            ::0x40ee20::__cxa_call_unexpected();
        }
        v4->field_0 = v5;
        return &v3->padding_-2c[20];
    }
    v6 = *((int *)&v3->padding_-8[0]);
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, x9<8>, 0x0<64>, 0x0<64>)))
        v6 = -((unsigned int)v6);
    *((unsigned int *)&v3->padding_-8[0]) = (unsigned int)v6 + 1;
    v7 = v4->field_0;
    if (v7 != v5)
    {
        v3->field_0 = v7;
        v4->field_0 = v5;
    }
    v4->field_8 = v4->field_8 - 1;
    return *((long long *)&v3->padding_-2c[4]);
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[8];
    struct struct_0 *field_10;
    char padding_18[16];
    unsigned long long field_28;
    unsigned int field_30;
    char padding_34[44];
    char field_60;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long __cxa_end_catch(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_7;  // tmp #7
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    struct struct_1 **v2;  // x0, Other Possible Types: unsigned long
    struct_1 *v3;  // x19, Other Possible Types: unsigned long
    struct struct_1 **v4;  // x20
    unsigned long long v5;  // x8
    unsigned long v6;  // x8
    struct struct_0 **v8;  // x8

    v0 = &v1;
    v2 = ::0x40ece0::__cxa_get_globals_fast();
    v3 = *(v2);
    if (!v3)
        return v2;
    v4 = v2;
    v2 = &v3->field_60;
    if (18942722526358315 != *((long long *)&v3->field_60) >> 8)
    {
        v2 = sub_427294(v2);
        *(v4) = 0;
        return v2;
    }
    v5 = v3->field_30;
    if (((char)(v5 >> 31) & 1))
    {
        v3->field_30 = (unsigned int)v5 + 1;
        if ((char)[D] arm64g_calculate_condition(0x14<64>, x8<8>, 0x1<64>, 0x0<64>))
            return &v3->field_60;
        *(v4) = v3->field_28;
    }
    else
    {
        v3->field_30 = (unsigned int)v5 - 1;
        if ((unsigned int)v5 != 1)
            return &v3->field_60;
        *(v4) = v3->field_28;
        if (v3->field_60 == 1)
        {
            sub_412370(v3);
            v3 = v3->field_0 - 128;
        }
        do
        {
            [D] t1 = LDle-Linked(t0)
            v6 = tmp_1;
            [D] MBusEvent-Imbe_Fence
            [D] MBusEvent-Imbe_Fence
            [D] t7 = ( STle-Cond(t6) = t8 )
        } while ((unsigned int)(tmp_7 ^ 1));
        if ((char)[D] arm64g_calculate_condition(0x14<64>, x8<8>, 0x1<64>, 0x0<64>))
            return v3 + 128;
        v8 = *((long long *)(v3 + 16));
        if (v8)
            v8();
        v2 = sub_412370(v3);
        return v2;
    }
}

long long sub_410ee0()
{
    ::0x40ee20::__cxa_call_unexpected();
    ::0x40ee20::__cxa_call_unexpected();
}

typedef struct struct_1 {
    struct struct_0 *field_-70;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long __cxa_decrement_exception_refcount(struct_1 *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_7;  // tmp #7
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned long v2;  // x8
    struct struct_0 **v4;  // x8

    v0 = &v1;
    if (!a0)
        return a0;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t7 = ( STle-Cond(t6) = t8 )
    } while ((unsigned int)(tmp_7 ^ 1));
    if ((char)[D] arm64g_calculate_condition(0x14<64>, x8<8>, 0x1<64>, 0x0<64>))
        return a0;
    if (a0[14].field_-70)
        v4();
    a0 = sub_412370(a0 + 16);
    return a0;
}

long long sub_410f30()
{
    ::0x40ee20::__cxa_call_unexpected();
    ::0x40ee20::__cxa_call_unexpected();
}

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[80];
    unsigned long long field_60;
} struct_0;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

long long __cxa_current_exception_type(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct struct_0 **v2;  // x0, Other Possible Types: unsigned long
    struct_0 *v3;  // x8

    v0 = &v1;
    v2 = ::0x40ece0::__cxa_get_globals_fast();
    if (!v2)
        return v2;
    v3 = *(v2);
    if (!v3)
    {
        return 0;
    }
    else if (18942722526358315 != v3->field_60 >> 8)
    {
        return 0;
    }
    else
    {
        return v3->field_8;
    }
}

typedef struct struct_3 {
    struct struct_1 *field_0;
    unsigned int field_8;
} struct_3;

typedef struct struct_1 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[44];
    unsigned long long field_60;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_-38;
    unsigned int field_-30;
    char padding_-2c[44];
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned int field_8;
} struct_2;

long long __cxa_rethrow(unsigned long a0)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x10]
    unsigned long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]
    unsigned long v8;  // x23
    unsigned long v9;  // x22
    unsigned long v10;  // x21
    unsigned long v11;  // x20
    unsigned long v12;  // x19
    unsigned long v13;  // x30
    struct_3 *v14;  // x0
    struct_1 *v15;  // x20
    struct_0 *v16;  // x19
    unsigned long long v17;  // x22
    struct_2 *v18;  // x0
    unsigned long long v19;  // x8
    unsigned long v20;  // x9, Other Possible Types: unsigned int
    unsigned long long v21;  // x9

    v0 = v8;
    v1 = v9;
    v2 = v10;
    v3 = v11;
    v4 = v12;
    v5 = &v7;
    v6 = v13;
    v14 = ::0x40ef60::__cxa_get_globals();
    v15 = v14->field_0;
    if (!v15)
    {
        ::0x40f080::std::terminate();
        ::0x40ee20::__cxa_call_unexpected();
    }
    v16 = &v15->field_60;
    v17 = v15->field_60 & -0x100;
    if (v17 != 0x434c4e47432b2b00)
    {
        v14->field_0 = 0;
    }
    else
    {
        v15->field_30 = -(v15->field_30);
        v14->field_8 = v14->field_8 + 1;
    }
    sub_426e34(v16);
    v18 = ::0x40ef60::__cxa_get_globals();
    v19 = &v16[1].padding_-2c[20];
    if ((v16->field_-38 & -0x100) == 0x434c4e47432b2b00)
    {
        v20 = *((int *)&v16->padding_-2c[36]);
        if (!((char)[D] arm64g_calculate_condition(0x53<64>, x9<8>, 0x0<64>, 0x0<64>)))
            v20 = -((unsigned int)v20);
        *((unsigned int *)&v16->padding_-2c[36]) = (unsigned int)v20 + 1;
        v21 = v18->field_0;
        if (v21 != v19)
        {
            v16->field_0 = v21;
            v18->field_0 = v19;
        }
        v18->field_8 = v18->field_8 - 1;
        if (v17 != 0x434c4e47432b2b00)
        {
            ::0x40f080::std::terminate();
            ::0x40ee20::__cxa_call_unexpected();
        }
    }
    else if (v18->field_0)
    {
        ::0x40f080::std::terminate();
        ::0x40ee20::__cxa_call_unexpected();
    }
    else
    {
        v18->field_0 = v19;
        if (v17 != 0x434c4e47432b2b00)
        {
            ::0x40f080::std::terminate();
            ::0x40ee20::__cxa_call_unexpected();
        }
    }
    sub_411490(v15->field_20); /* do not return */
}

long long __cxa_increment_exception_refcount(unsigned long a0)
{
    int tmp_6;  // tmp #6
    int tmp_1;  // tmp #1
    unsigned long v1;  // x9

    if (!a0)
        return a0;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v1 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t6 = ( STle-Cond(t5) = t7 )
    } while ((unsigned int)(tmp_6 ^ 1));
    return a0;
}

long long __cxa_current_primary_exception(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_6;  // tmp #6
    char v1;  // [bp+0x0]
    struct struct_0 **v2;  // x0, Other Possible Types: unsigned long
    unsigned long long v3[13];  // x8, Other Possible Types: unsigned long
    unsigned long long v4;  // x9

    v0 = &v1;
    v2 = ::0x40ece0::__cxa_get_globals_fast();
    if (!v2)
        return v2;
    v3 = *(v2);
    if (!v3)
        return 0;
    v4 = v3[12];
    if (18942722526358315 != v4 >> 8)
        return 0;
    if ((char)v4 == 1)
        v3 = v3[0] - 128;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t6 = ( STle-Cond(t5) = t7 )
    } while ((unsigned int)(tmp_6 ^ 1));
    return v3 + 128;
}

long long sub_4110f4()
{
    ::0x40ee20::__cxa_call_unexpected();
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[8];
    uint128_t field_10;
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[12];
    uint128_t field_40;
    uint128_t field_50;
    unsigned long long field_60;
    char padding_68[8];
    uint128_t field_70;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_-78;
    char padding_-70[112];
    unsigned long long field_0;
    unsigned int field_8;
} struct_5;

typedef struct struct_6 {
    struct struct_5 *field_0;
    unsigned long long field_8;
} struct_6;

typedef struct struct_7 {
    char padding_0[8];
    unsigned int field_8;
} struct_7;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_4 {
    struct struct_3 *field_-60;
    char padding_-58[24];
    unsigned long long field_-40;
} struct_4;

typedef struct struct_3 {
    struct struct_2 *field_-70;
} struct_3;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

extern char g_411218;

long long __cxa_rethrow_primary_exception(struct_5 *a0, struct_4 *a1)
{
    int tmp_6;  // tmp #6
    struct_5 *v0;  // [bp-0x50]
    int tmp_7;  // tmp #7
    int tmp_1;  // tmp #1
    struct_0 *v1;  // [bp-0x48]
    struct_1 *v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x20]
    struct_0 *v6;  // [bp-0x18]
    unsigned long v7;  // [bp-0x10]
    unsigned long v8;  // [bp-0x8]
    char v9;  // [bp+0x0]
    unsigned long v10;  // x20
    struct_0 *v11;  // x19, Other Possible Types: unsigned long
    unsigned long v12;  // x30
    struct_0 *v13;  // x0
    struct_6 *v15;  // x20
    struct_7 *v16;  // x0
    unsigned long v17;  // x8, Other Possible Types: unsigned int
    struct_5 *v18;  // x20, Other Possible Types: unsigned long
    unsigned long long v19;  // x8
    struct_3 *v20;  // x0
    unsigned long v21;  // x8
    struct struct_2 **v23;  // x8

    v5 = v10;
    v6 = v11;
    v7 = &v9;
    v8 = v12;
    if (!a0)
        return a0;
    v18 = a0;
    (unsigned int)v13 = sub_4121b4(128);
    if (v13)
    {
        v11 = v13;
        *((int128_t *)&v13->field_60) = 0;
        v13->field_70 = 0;
        v13->field_40 = 0;
        v13->field_50 = 0;
        *((int128_t *)&v13->field_20) = 0;
        *((int128_t *)&v13->field_30) = 0;
        *((int128_t *)&v13->field_0) = 0;
        v13->field_10 = 0;
        v13->field_0 = v18;
        do
        {
            [D] t1 = LDle-Linked(t0)
            [D] MBusEvent-Imbe_Fence
            [D] MBusEvent-Imbe_Fence
            [D] t6 = ( STle-Cond(t5) = t7 )
        } while ((unsigned int)(tmp_6 ^ 1));
        *((unsigned long long *)&v13->padding_8[0]) = v18->field_0;
        *((char **)((char *)&v13->field_10 + 8)) = ::0x40f190::std::get_unexpected();
        v13->field_20 = ::0x40f170::std::get_terminate();
        v4 = 4849336966747728641;
        v13->field_60 = 4849336966747728641;
        v15 = &v13->field_60;
        v16 = ::0x40ef60::__cxa_get_globals();
        v16->field_8 = v16->field_8 + 1;
        v15->field_8 = &g_411218;
        sub_426e34(v15);
        v18 = v15->field_0;
        a0 = ::0x40ef60::__cxa_get_globals();
        if ((v18 & -0x100) == 0x434c4e47432b2b00)
        {
            v17 = *((int *)(v11 + 48));
            if (!((char)[D] arm64g_calculate_condition(0x14<64>, x8<8>, 0x1<64>, 0x0<64>)))
                v17 = -((unsigned int)v17);
            *((unsigned int *)(v11 + 48)) = (unsigned int)v17 + 1;
            v19 = *((long long *)a0);
            if (v19 != v11)
            {
                *((unsigned long long *)(v11 + 40)) = v19;
                *((unsigned long *)a0) = v11;
            }
            *((int *)(a0 + 8)) = *((int *)(a0 + 8)) - 1;
            return a0;
        }
        else if (!*((long long *)a0))
        {
            *((unsigned long *)a0) = v11;
            return a0;
        }
    }
    ::0x40f080::std::terminate();
    v0 = v18;
    v1 = v11;
    v2 = &v7;
    v3 = &g_411218;
    if ((unsigned int)::0x40ee20::__cxa_call_unexpected() != 1)
        sub_411490(*((long long *)&a1[1].padding_-58[16])); /* do not return */
    v20 = *((long long *)&a1[2].padding_-58[8]);
    if (!v20)
        return (unsigned long long)sub_412370(&a1[2].padding_-58[8]);
    do
    {
        [D] t1 = LDle-Linked(t0)
        v21 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t7 = ( STle-Cond(t6) = t8 )
    } while ((unsigned int)(tmp_7 ^ 1));
    if ((char)[D] arm64g_calculate_condition(0x14<64>, x8<8>, 0x1<64>, 0x0<64>))
        return (unsigned long long)sub_412370(&a1[2].padding_-58[8]);
    if (v20[14].field_-70)
        v23();
    sub_412370(v20 + 16);
    return (unsigned long long)sub_412370(&a1[2].padding_-58[8]);
}

long long sub_41127c()
{
    ::0x40ee20::__cxa_call_unexpected();
    ::0x40ee20::__cxa_call_unexpected();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

long long __cxa_uncaught_exception(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x0, Other Possible Types: unsigned long

    v0 = &v1;
    v2 = ::0x40ece0::__cxa_get_globals_fast();
    if (!v2)
    {
        return v2;
    }
    else if (v2->field_8)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long long sub_4112a8()
{
    ::0x40ee20::__cxa_call_unexpected();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

long long __cxa_uncaught_exceptions(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x0, Other Possible Types: unsigned long

    v0 = &v1;
    v2 = ::0x40ece0::__cxa_get_globals_fast();
    if (v2)
    {
        v2 = v2->field_8;
        return v2;
    }
    return v2;
}

long long sub_4112c8()
{
    ::0x40ee20::__cxa_call_unexpected();
}

extern unsigned int g_435030;
extern char g_435034;

long long __cxa_get_globals()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x19, Other Possible Types: unsigned long long
    void* v3;  // x0

    v0 = &v1;
    if ((unsigned int)pthread_once(&g_435034, sub_411398))
        sub_41291c("execute once failure in __cxa_get_globals_fast()"); /* do not return */
    v2 = pthread_getspecific(g_435030);
    if (v2)
        return v2;
    (unsigned int)v3 = sub_412314(1, 16);
    if (!v3)
    {
        sub_41291c("cannot allocate __cxa_eh_globals"); /* do not return */
    }
    else if (pthread_setspecific(g_435030, v3))
    {
        sub_41291c("std::__libcpp_tls_set failure in __cxa_get_globals()"); /* do not return */
    }
    else
    {
        return v3;
    }
}

extern unsigned int g_435030;
extern char g_435034;

long long __cxa_get_globals_fast()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (!(unsigned int)pthread_once(&g_435034, sub_411398))
        return pthread_getspecific(g_435030);
    sub_41291c("execute once failure in __cxa_get_globals_fast()"); /* do not return */
}

extern unsigned long long g_435030;

long long sub_411398()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x0

    v0 = &v1;
    (unsigned int)v2 = pthread_key_create(&g_435030, sub_4113cc);
    if ((unsigned int)v2)
        sub_41291c("cannot create thread specific key for __cxa_get_globals()"); /* do not return */
    return v2;
}

extern unsigned int g_435030;

long long sub_4113cc(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x0

    v0 = &v1;
    sub_412494(a0);
    (unsigned int)v2 = pthread_setspecific(g_435030, NULL);
    if ((unsigned int)v2)
        sub_41291c("cannot zero out thread value for __cxa_get_globals()"); /* do not return */
    return v2;
}

extern unsigned long long __cxa_unexpected_handler;

long long std::get_unexpected()
{
    unsigned long long *v0;  // x8

    v0 = &__cxa_unexpected_handler;
    [D] MBusEvent-Imbe_Fence
    return __cxa_unexpected_handler;
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

extern unsigned long long __cxa_terminate_handler;

long long std::terminate(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v2;  // x19
    unsigned long v3;  // x30
    struct struct_0 **v4;  // x0
    struct_0 *v5;  // x19

    v0 = v2;
    v1 = v3;
    v4 = ::0x40ece0::__cxa_get_globals_fast();
    if (v4)
    {
        v5 = *(v4);
        if (v5 && ((char)::0x40efa0::__cxxabiv1::__isOurExceptionClass() & 1))
            sub_411490(v5->field_20); /* do not return */
    }
    [D] MBusEvent-Imbe_Fence
    sub_411490(__cxa_terminate_handler); /* do not return */
}

long long sub_411448(unsigned int a0, unsigned int a1, unsigned int a2)
{
    sub_40f79c((unsigned long long)sub_40f79c(a0, a1, a2), a1, a2);
}

void sub_411450()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x30
    struct struct_0 **v4;  // x0

    v0 = &v2;
    v1 = v3;
    v4();
    sub_41291c("unexpected_handler unexpectedly returned"); /* do not return */
}

long long std::unexpected()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x30

    v0 = &v2;
    v1 = v3;
    [D] MBusEvent-Imbe_Fence
    sub_411450(); /* do not return */
}

extern unsigned long long __cxa_terminate_handler;

long long std::get_terminate()
{
    unsigned long long *v0;  // x8

    v0 = &__cxa_terminate_handler;
    [D] MBusEvent-Imbe_Fence
    return __cxa_terminate_handler;
}

void sub_411490(struct struct_0 **a0)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x19
    unsigned long v5;  // x30

    v0 = v4;
    v1 = &v3;
    v2 = v5;
    a0();
    sub_41291c("terminate_handler unexpectedly returned"); /* do not return */
}

long long sub_4114ac()
{
    ::0x40f0b0::__cxa_begin_catch();
    sub_41291c("terminate_handler unexpectedly threw an exception"); /* do not return */
}

long long sub_4114bc(unsigned int a0, unsigned int a1, unsigned int a2)
{
    ::0x40ed60::__cxa_end_catch();
    sub_40f79c((unsigned long long)sub_40f79c(a0, a1, a2), a1, a2);
}

extern char __cxa_new_handler;

long long std::set_new_handler(unsigned long a0)
{
    unsigned long long v0;  // x9
    int tmp_3;  // tmp #3
    int tmp_1;  // tmp #1

    v0 = &__cxa_new_handler;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t3 = ( STle-Cond(t2) = t4 )
    } while ((unsigned int)(tmp_3 ^ 1));
    return tmp_1;
}

extern unsigned long long __cxa_new_handler;

long long std::get_new_handler()
{
    unsigned long long *v0;  // x8

    v0 = &__cxa_new_handler;
    [D] MBusEvent-Imbe_Fence
    return __cxa_new_handler;
}

typedef struct struct_1 {
    unsigned int field_-2c;
    uint128_t field_-28;
    uint128_t field_-18;
} struct_1;

typedef struct struct_0 {
    char field_0;
} struct_0;

int __gxx_personality_v0()
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    unsigned long v4;  // [bp-0x10]
    char v5;  // [bp+0x0]
    unsigned int v6;  // w0
    struct_1 *v7;  // x3
    unsigned long long v8;  // x4
    unsigned long v9;  // x2
    unsigned long long v10;  // x21
    unsigned long v11;  // x1
    void* v12;  // x2
    unsigned long long v13;  // x2
    struct_0 *v14;  // x0
    void* v15;  // x2
    unsigned long long v16;  // x2
    unsigned long v17;  // x21, Other Possible Types: unsigned long long
    unsigned long v18;  // x22, Other Possible Types: unsigned long long
    struct_0 *v19;  // x0
    unsigned long v20;  // x1, Other Possible Types: unsigned long long
    unsigned long v21;  // x0, Other Possible Types: unsigned long long
    unsigned long long v22;  // x29

    v4 = &v5;
    if (v6 != 1)
    {
        v22 = v4;
        return;
    }
    else if (!v7)
    {
        v22 = v4;
        return;
    }
    else if (!v8)
    {
        v22 = v4;
        return;
    }
    else
    {
        v10 = v9 & -0x100;
        if (((char)v11 & 1))
        {
            if (v10 != 0x434c4e47432b2b00)
                v12 = 0;
            else
                v13 = 1;
            v14 = &v0;
            sub_41169c();
            if (!(*((int *)&v3) == 6 && v10 == 0x434c4e47432b2b00))
            {
                v22 = v4;
                return;
            }
            *((unsigned int *)((char *)&v7->field_-18 + 12)) = v0;
            *((int128_t *)((char *)&v7->field_-18 + 8)) = (int128_t)v1;
            *((int128_t *)((char *)&v7->field_-28 + 8)) = (int128_t)v2;
        }
        else if (((char)(v11 >> 1) & 1))
        {
            if (((char)(v11 >> 2) & 1))
            {
                if (!((char)[D] arm64g_calculate_condition(0x14<64>, x21<8>, 0x434c4e47432b2b00<64>, 0x0<64>)))
                {
                    v17 = *((int *)((char *)&v7->field_-18 + 12));
                    v0 = v17;
                    *((int128_t *)&v1) = *((int128_t *)((char *)&v7->field_-18 + 8));
                    *((int128_t *)&v2) = *((int128_t *)((char *)&v7->field_-28 + 8));
                    v18 = (int128_t)v2;
                }
                else
                {
                    sub_41169c(&v0);
                    if (*((int *)&v3) != 6)
                        sub_411cb8(0, v7); /* do not return */
                    v18 = (long long)v2;
                    v17 = v0;
                }
                sub_425850(v8, 0, v7);
                sub_425850(v8, 1, v17);
                v21 = v8;
                v20 = v18;
            }
            else
            {
                if ((char)[D] arm64g_calculate_condition(0x14<64>, x21<8>, 0x434c4e47432b2b00<64>, 0x0<64>))
                    v15 = 0;
                else
                    v16 = 1;
                v19 = &v0;
                sub_41169c();
                if (*((int *)&v3) != 6)
                {
                    v22 = v4;
                    return;
                }
                sub_425850(v8, 0, v7);
                sub_425850(v8, 1, v0);
                v20 = (long long)v2;
                v21 = v8;
            }
            sub_4258c4(v21, v20);
            v22 = v4;
            return;
        }
        else
        {
            v22 = v4;
            return;
        }
    }
}

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned int field_28;
} struct_1;

typedef struct struct_4 {
    struct struct_5 *field_-60;
    unsigned long long field_-58;
} struct_4;

typedef struct struct_5 {
    char field_0;
} struct_5;

extern unsigned long long g_428dd0[4];

int sub_41169c()
{
    unsigned long v0;  // [bp-0xc0]
    struct_0 *v1;  // [bp-0xb8]
    unsigned int v2;  // [bp-0xac]
    char *v3;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned int v4;  // [bp-0x9c]
    unsigned int v5;  // [bp-0x8c]
    unsigned long long v6;  // [bp-0x88]
    char *v7;  // [bp-0x80], Other Possible Types: unsigned long
    char *v8;  // [bp-0x78]
    char *v9;  // [bp-0x70]
    unsigned long v10;  // [bp-0x68]
    unsigned long v11;  // [bp-0x10]
    char v12;  // [bp+0x0]
    struct_0 *v13;  // tpidr_el0
    struct_0 *v14;  // x21, Other Possible Types: unsigned long
    struct_1 *v15;  // x0
    struct_1 *v16;  // x19
    unsigned long v17;  // x1
    unsigned long long v18;  // x4
    char *v20;  // x24
    unsigned long long v22;  // x0
    unsigned long long v26;  // x0
    char *v27;  // x9
    unsigned long v28;  // x20, Other Possible Types: unsigned long long
    char *v29;  // x8, Other Possible Types: unsigned long
    void* v31;  // x10, Other Possible Types: unsigned long
    void* v32;  // x9, Other Possible Types: unsigned long
    char *v33;  // x28, Other Possible Types: unsigned long
    unsigned long long v34;  // x11
    char *v35;  // x21, Other Possible Types: unsigned long
    unsigned long long v36;  // x24
    void* v37;  // x10, Other Possible Types: unsigned long
    void* v38;  // x9, Other Possible Types: unsigned long
    unsigned long long v39;  // x27
    unsigned long long v40;  // x8
    unsigned long long v41;  // x23
    unsigned long long v42;  // x22
    unsigned long long v43;  // x25
    unsigned long long v45;  // x0
    char *v46;  // x9, Other Possible Types: unsigned long
    void* v47;  // x10, Other Possible Types: unsigned long
    void* v48;  // x8, Other Possible Types: unsigned long
    unsigned long long v49;  // x11
    unsigned int v50;  // w12
    struct_4 *v51;  // x3
    unsigned long long v52;  // x26
    unsigned int v53;  // w8
    unsigned int v54;  // w21
    void* v55;  // x9, Other Possible Types: unsigned long
    char *v56;  // x8, Other Possible Types: unsigned long
    char *v57;  // x20, Other Possible Types: unsigned long
    char *v58;  // x10
    unsigned int v59;  // w10
    unsigned int v60;  // w11
    unsigned int v61;  // w11
    unsigned long v62;  // x9, Other Possible Types: unsigned long long
    char *v63;  // x25
    struct_4 *v65;  // x22, Other Possible Types: unsigned long
    struct struct_3 **v66;  // x0
    char *v67;  // x23, Other Possible Types: unsigned long
    unsigned long long v69;  // x24
    char *v70;  // x8, Other Possible Types: unsigned long
    void* v71;  // x9, Other Possible Types: unsigned long
    void* v72;  // x8, Other Possible Types: unsigned long
    unsigned long v73;  // x22
    unsigned long long v74;  // x10
    struct struct_3 **v75;  // x0
    unsigned long v76;  // x8, Other Possible Types: unsigned long long
    void* v77;  // x9, Other Possible Types: unsigned long
    char *v78;  // x8, Other Possible Types: unsigned long
    char *v79;  // x10, Other Possible Types: unsigned long
    char *v80;  // x11
    unsigned int v81;  // w10
    unsigned int v82;  // w11
    unsigned int v83;  // w11
    unsigned long v84;  // x9, Other Possible Types: unsigned long long
    char *v85;  // x8
    char *v86;  // x27, Other Possible Types: unsigned long
    unsigned int v87;  // w2
    unsigned long long v90;  // x29

    v11 = &v12;
    v14 = v13;
    v16 = v15;
    v10 = v13->field_28;
    v15->field_20 = 0;
    *((int128_t *)&v15->field_0) = 0;
    *((int128_t *)&v15->field_10) = 0;
    v15->field_28 = 3;
    if (!((char)v17 & 1))
    {
        if (((char)(v17 >> 1) & 1))
        {
            if ((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Conv(64->32, x1<8>) & 0xe<32>)), 0x0<64>, 0x0<64>))
            {
                v5 = v17;
                *((int *)&v8) = sub_4258cc(v18);
                if (v8)
                {
                    v20 = v8;
                    v16->field_10 = v8;
                    (unsigned int)v22 = sub_4258d4(v18);
                    v8 = v20 + 1;
                    (unsigned int)v26 = sub_412060(&v8, *(v20));
                    v27 = v8;
                    if (!v26)
                        v28 = v22;
                    else
                        v28 = v26;
                    v1 = v13;
                    v29 = v27 + 1;
                    v8 = v29;
                    v6 = *(v27);
                    if (v6 == 255)
                    {
                        v33 = 0;
                    }
                    else
                    {
                        v31 = 0;
                        v32 = 0;
                        do
                        {
                            v34 = *((char *)v29);
                            v29 += 1;
                            v32 = (v34 & 127) << (char)(v31 & 63) | v32;
                            v31 += 7;
                        } while (((char)(v34 >> 7) & 1));
                        v33 = v29 + v32;
                        v8 = v29;
                    }
                    v35 = v29 + 1;
                    v8 = v35;
                    v36 = *((char *)v29);
                    v37 = 0;
                    v38 = 0;
                    v39 = sub_4258a8(v18) + ~(v22);
                    do
                    {
                        v40 = *((char *)v35);
                        v35 += 1;
                        v38 = (v40 & 127) << (char)(v37 & 63) | v38;
                        v37 += 7;
                    } while (((char)(v40 >> 7) & 1));
                    v41 = v38 & 4294967295;
                    v42 = v35 + v41;
                    v7 = v35;
                    v8 = v35;
                    if (v35 >= v42)
                        sub_411cb8(v87 & 1, v51); /* do not return */
                    while (true)
                    {
                        v43 = sub_412060(&v7, v36);
                        v45 = sub_412060(&v7, v36);
                        v46 = v7;
                        v47 = 0;
                        v48 = 0;
                        do
                        {
                            v49 = *((char *)v46);
                            v46 += 1;
                            v48 = (v49 & 127) << (char)(v47 & 63) | v48;
                            v47 += 7;
                        } while (((char)(v49 >> 7) & 1));
                        v7 = v46;
                        if (!(v39 < v43) && !(sub_412060(&v7, v36) + v43 <= v39))
                            break;
                        if (!(v39 >= v43) || !(v42 > v46))
                            sub_411cb8(v87 & 1, v51); /* do not return */
                    }
                    if (!v45)
                    {
                        v16->field_28 = 8;
                        if (v1->field_28 != v10)
                            __stack_chk_fail(); /* do not return */
                        v90 = v11;
                        return;
                    }
                    else if (v48)
                    {
                        v50 = v5;
                        v0 = v45 + v28;
                        v3 = &v51[2].field_-60;
                        v2 = v50 & 6;
                        v52 = v6 & 15;
                        v86 = v35 + v41 + v48 - 1;
                        if ((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Conv(64->32, x1<8>) & 0xe<32>)), 0x0<64>, 0x0<64>))
                            v53 = 0;
                        else
                            v53 = 1;
                        v54 = 7197 >> (char)(v52 & 31) & 1;
                        v4 = v53;
                        while (true)
                        {
                            v55 = 0;
                            v56 = 0;
                            v57 = v86;
                            do
                            {
                                v58 = *((char *)v57);
                                v57 += 1;
                                v56 = (v58 & 127) << (char)(v55 & 63) | v56;
                                v55 += 7;
                            } while (((char)(v58 >> 7) & 1));
                            v59 = (unsigned int)v58 & 64;
                            if (64 <= v55)
                                v60 = 0;
                            else
                                v61 = 1;
                            v62 = -1 << (char)(v55 & 63);
                            if (!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Conv(64->32, x1<8>) & 0xe<32>)), 0x0<64>, 0x0<64>)))
                                v62 = 0;
                            v63 = v56 | v62;
                            if (v63 >= 1)
                            {
                                v9 = v33;
                                if (!(v33) || !(12 >= (unsigned int)v52) || !(v54))
                                    sub_411cb8(v87 & 1, v51); /* do not return */
                                v9 = v33 - (v63 << ((char)g_428dd0[v52] & 63));
                                (unsigned int)v66 = sub_412060(&v9, v6);
                                if (!v66)
                                {
                                    if (!((char)v4 & 1))
                                    {
                                        v16->field_0 = v63;
                                        *((char **)&v16->padding_8[0]) = v86;
                                        *((unsigned long *)&v16->padding_18[0]) = v0;
                                    }
                                    if (!((char)(v5 >> 3) & 1))
                                        sub_411cb8(v87 & 1, v51); /* do not return */
                                    goto LABEL_411b2c;
                                }
                                if (!((char)v87 & 1))
                                    goto LABEL_411b2c;
                                v65 = v51;
                                v70 = v3;
                                if (::0x40f000::__cxxabiv1::__getExceptionClass() == 4849336966747728641)
                                    v70 = v51[6].field_-60;
                                v9 = v70;
                                if (v70 && v51[5].field_-58)
                                {
                                    if (!((char)*(v66)->field_20(v66) & 1))
                                    {
                                        goto LABEL_411b2c;
                                    }
                                    else
                                    {
                                        v76 = v5;
                                        if (((char)v76 & 1))
                                        {
                                            v16->field_0 = v63;
                                            *((char **)&v16->padding_8[0]) = v86;
                                            *((unsigned long *)&v16->padding_18[0]) = v0;
                                            v16->field_28 = 6;
                                            v16->field_20 = v9;
                                            if (v1->field_28 != v10)
                                                __stack_chk_fail(); /* do not return */
                                            v90 = v11;
                                            return;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                if (!((char)(v63 >> 63) & 1))
                                {
                                    if (v2 != 2)
                                    {
                                        goto LABEL_411b2c;
                                    }
                                    else
                                    {
                                        v16->field_0 = v63;
                                        *((char **)&v16->padding_8[0]) = v86;
                                        *((unsigned long *)&v16->padding_18[0]) = v0;
                                        if (::0x40f000::__cxxabiv1::__getExceptionClass() == 4849336966747728641)
                                            v3 = v51[6].field_-60;
                                        v16->field_20 = v3;
                                        v16->field_28 = 6;
                                        if (v1->field_28 == v10)
                                        {
                                            v90 = v11;
                                            return;
                                        }
                                        __stack_chk_fail(); /* do not return */
                                    }
                                }
                                if (!((char)v87 & 1))
                                {
                                    if (!((char)v4 & 1))
                                    {
                                        v16->field_0 = v63;
                                        *((char **)&v16->padding_8[0]) = v86;
                                        *((unsigned long *)&v16->padding_18[0]) = v0;
                                        if (::0x40f000::__cxxabiv1::__getExceptionClass() == 4849336966747728641)
                                            v3 = v51[6].field_-60;
                                        v16->field_20 = v3;
                                        v16->field_28 = 6;
                                        if (v1->field_28 != v10)
                                            __stack_chk_fail(); /* do not return */
                                        v90 = v11;
                                        return;
                                    }
                                    if (!((char)(v5 >> 3) & 1))
                                        sub_411cb8(0, v51); /* do not return */
                                    goto LABEL_411b2c;
                                }
                                v65 = v51;
                                v67 = v3;
                                if (::0x40f000::__cxxabiv1::__getExceptionClass() == 4849336966747728641)
                                    v67 = v51[6].field_-60;
                                if (!(v67) || !((v69 = v51[5].field_-58, v69)))
                                    sub_411cb8(1, v65); /* do not return */
                                if (!v33)
                                    sub_411cb8(0, v51); /* do not return */
                                v71 = 0;
                                v72 = 0;
                                v73 = ~(v63);
                                while (true)
                                {
                                    while (true)
                                    {
                                        v74 = *((char *)(v33 + v73));
                                        v72 = (v74 & 127) << (char)(v71 & 63) | v72;
                                        if (!((char)(v74 >> 7) & 1))
                                            break;
                                        v71 += 7;
                                        v73 += 1;
                                    }
                                    if (!v72)
                                        break;
                                    v9 = v33;
                                    if (12 < (unsigned int)v52)
                                        sub_411cb8(1, v51); /* do not return */
                                    if (!v54)
                                        sub_411cb8(1, v51); /* do not return */
                                    v9 = v33 - (v72 << ((char)g_428dd0[v52] & 63));
                                    (unsigned int)v75 = sub_412060(&v9, v6);
                                    v9 = v67;
                                    if (((char)*(v75)->field_20(v75, v69, &v9) & 1))
                                    {
                                        goto LABEL_411b2c;
                                    }
                                    else
                                    {
                                        v71 = 0;
                                        v72 = 0;
                                        v73 += 1;
                                    }
                                }
                                v76 = v5;
                                if (((char)v76 & 1))
                                {
                                    v16->field_0 = v63;
                                    *((char **)&v16->padding_8[0]) = v86;
                                    *((unsigned long *)&v16->padding_18[0]) = v0;
                                    v16->field_20 = v67;
                                    v16->field_28 = 6;
                                    if (v1->field_28 == v10)
                                    {
                                        v90 = v11;
                                        return;
                                    }
                                    __stack_chk_fail(); /* do not return */
                                }
                                if (!((char)(v76 >> 3) & 1))
                                    sub_411cb8(1, v51); /* do not return */
                                v77 = 0;
                                v78 = 0;
                                v79 = v57;
                                do
                                {
LABEL_411b2c:
                                    v80 = *((char *)v79);
                                    v79 += 1;
                                    v78 = (v80 & 127) << (char)(v77 & 63) | v78;
                                    v77 += 7;
                                } while (((char)(v80 >> 7) & 1));
                                v81 = (unsigned int)v80 & 64;
                                if (64 <= v77)
                                    v82 = 0;
                                else
                                    v83 = 1;
                                v84 = -1 << (char)(v77 & 63);
                                if (!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Conv(64->32, x1<8>) & 0xe<32>)), 0x0<64>, 0x0<64>)))
                                    v84 = 0;
                                v85 = v78 | v84;
                                if (!v85)
                                    break;
                                v86 = &v85[v57];
                            }
                        }
                    }
                    else
                    {
                        v14 = v1;
                        if (((char)v5 & 6) == 2)
                        {
                            v16->field_0 = 0;
                            *((unsigned long *)&v16->padding_18[0]) = v0;
                            v16->field_28 = 6;
                            if (*((long long *)(v14 + 40)) != v10)
                                __stack_chk_fail(); /* do not return */
                            v90 = v11;
                            return;
                        }
                    }
                }
                v16->field_28 = 8;
                if (*((long long *)(v14 + 40)) != v10)
                    __stack_chk_fail(); /* do not return */
                v90 = v11;
                return;
            }
            else
            {
                v15->field_28 = 2;
                if (v13->field_28 != v10)
                    __stack_chk_fail(); /* do not return */
                v90 = v11;
                return;
            }
        }
    }
    else
    {
        if (!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Conv(64->32, x1<8>) & 0xe<32>)), 0x0<64>, 0x0<64>)))
        {
            v5 = v17;
            sub_4258cc(v18);
        }
    }
    v15->field_28 = 3;
    if (v13->field_28 != v10)
        __stack_chk_fail(); /* do not return */
    v90 = v11;
    return;
}

typedef struct struct_0 {
    struct struct_0 **field_-40;
} struct_0;

void sub_411cb8(unsigned long a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]
    unsigned long v5;  // x20
    unsigned long v6;  // x19
    unsigned long v7;  // x30

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    ::0x40f0b0::__cxa_begin_catch();
    if (((char)a0 & 1))
        sub_411490(a1[8].field_-40); /* do not return */
    ::0x40f080::std::terminate();
}

typedef struct struct_0 {
    unsigned long long field_-20;
} struct_0;

long long __cxa_call_unexpected(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x50]
    unsigned long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x20]
    unsigned long v10;  // [bp-0x18]
    unsigned long v11;  // [bp-0x10]
    unsigned long v12;  // [bp-0x8]
    char v13;  // [bp+0x0]
    unsigned long v14;  // x28
    unsigned long v15;  // x27
    unsigned long v16;  // x26
    unsigned long v17;  // x25
    unsigned long v18;  // x24
    unsigned long v19;  // x23
    unsigned long v20;  // x22
    unsigned long v21;  // x21
    unsigned long v22;  // x20
    unsigned long v23;  // x19
    unsigned long v24;  // x30

    v1 = v14;
    v2 = v15;
    v3 = v16;
    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = v23;
    v11 = &v13;
    v12 = v24;
    if (!a0)
        sub_411cb8(a0, NULL); /* do not return */
    ::0x40f0b0::__cxa_begin_catch();
    if (((char)::0x40efa0::__cxxabiv1::__isOurExceptionClass() & 1))
    {
        v0 = a0[4].field_-20;
    }
    else
    {
        ::0x40f170::std::get_terminate();
        ::0x40f190::std::get_unexpected();
    }
    sub_411450(); /* do not return */
}

typedef struct struct_4 {
    struct struct_3 *field_0;
    unsigned int field_8;
} struct_4;

typedef struct struct_3 {
    struct struct_0 *field_0;
    unsigned long long field_8;
    char padding_10[32];
    unsigned int field_30;
} struct_3;

typedef struct struct_0 {
    char field_0;
} struct_0;

extern unsigned long long _ZTISt13bad_exception;
extern unsigned long long g_428dd0[4];
extern unsigned long long g_428e38[4];
extern char g_431de0;

long long sub_411d5c()
{
    struct_4 *v0;  // [bp+0x0]
    struct_0 *v1;  // [bp+0x8]
    unsigned long long v2;  // [bp+0x10]
    struct_0 *v3;  // [bp+0x18]
    unsigned long long v4;  // [bp+0x20]
    unsigned long v5;  // [bp+0x28]
    char *v6;  // [bp+0x30]
    struct_0 *v7;  // [bp+0x38]
    unsigned long v8;  // x21
    char *v9;  // x22
    char *v10;  // x8
    unsigned long long v12;  // x9
    void* v13;  // x8, Other Possible Types: unsigned long
    char *v14;  // x23, Other Possible Types: unsigned long
    void* v15;  // x27, Other Possible Types: unsigned long
    struct_3 *v16;  // x8
    struct_3 *v17;  // x26, Other Possible Types: unsigned long
    void* **v19;  // x20
    unsigned long v20;  // x24
    struct_0 *v21;  // x8, Other Possible Types: unsigned long
    void* v22;  // x9, Other Possible Types: unsigned long
    void* v23;  // x8, Other Possible Types: unsigned long
    unsigned long long v24;  // x28
    unsigned long v25;  // x25
    unsigned long v26;  // x24
    unsigned long long v27;  // x10
    struct struct_2 **v28;  // x0
    struct_0 *v29;  // x21
    unsigned long long v30;  // x24
    unsigned long v31;  // x25
    void* v32;  // x9, Other Possible Types: unsigned long
    void* v33;  // x8, Other Possible Types: unsigned long
    unsigned long long v34;  // x10
    struct struct_2 **v35;  // x0
    void* v36;  // x19
    void* **v37;  // x20
    struct_4 *v38;  // x9

    ::0x40f0b0::__cxa_begin_catch();
    if (!((char)v8 & 1))
    {
        ::0x40ed60::__cxa_end_catch();
        sub_411490(v37); /* do not return */
    }
    v6 = v9 + 1;
    sub_412060(&v6, *(v9));
    v10 = v6;
    v6 = v10 + 1;
    v4 = *(v10);
    if (v4 == 255)
        sub_411490(v19); /* do not return */
    v14 = v6;
    v13 = 0;
    v15 = 0;
    do
    {
        v12 = *((char *)v14);
        v14 += 1;
        v15 = (v12 & 127) << (char)(v13 & 63) | v15;
        v13 += 7;
    } while (((char)(v12 >> 7) & 1));
    v6 = v14;
    v0 = &::0x40ece0::__cxa_get_globals_fast();
    v16 = v0->field_0;
    if (v16)
    {
        v17 = v16;
        v3 = v14 + v15;
        if (v16 != v20 && !(((char)(unsigned int)::0x40efa0::__cxxabiv1::__isOurExceptionClass() ^ 1) & 1))
        {
            v2 = v16->field_8;
            if (::0x40f000::__cxxabiv1::__getExceptionClass() != 4849336966747728641)
                v21 = &v16[2].padding_10[8];
            else
                v21 = v16->field_0;
            v1 = v21;
            v22 = 0;
            v23 = 0;
            v24 = v4 & 15;
            v26 = v25 + v15;
            while (true)
            {
                while (true)
                {
                    v27 = *((char *)(v14 + v26));
                    v23 = (v27 & 127) << (char)(v22 & 63) | v23;
                    if (!((char)(v27 >> 7) & 1))
                        break;
                    v22 += 7;
                    v26 += 1;
                }
                if (!v23)
                    break;
                v7 = v3;
                if (12 < (unsigned int)v24)
                    sub_411cb8(1, v36); /* do not return */
                if (!((char)(7197 >> (char)(v24 & 31)) & 1))
                    sub_411cb8(1, v36); /* do not return */
                v7 = &v3[-1 * (v23 << ((char)g_428dd0[v24] & 63))];
                (unsigned int)v28 = sub_412060(&v7, v4);
                v7 = v1;
                if (((char)*(v28)->field_20(v28, v2, &v7) & 1))
                {
                    v38 = v0;
                    *((int *)(v17 + 48)) = -(*((int *)(v17 + 48)));
                    v38->field_8 = v38->field_8 + 1;
                    ::0x40ed60::__cxa_end_catch();
                }
                v22 = 0;
                v23 = 0;
                v26 += 1;
            }
        }
        v29 = v3;
        v5 = &g_431de0;
        v30 = (unsigned int)v4 + 6 & 15;
        v31 = v25 + v15;
        v32 = 0;
        v33 = 0;
        v17 = 1863 >> (char)(v30 & 31) & 1;
        while (true)
        {
            while (true)
            {
                v34 = *((char *)(v14 + v31));
                v33 = (v34 & 127) << (char)(v32 & 63) | v33;
                if (!((char)(v34 >> 7) & 1))
                    break;
                v32 += 7;
                v31 += 1;
            }
            if (!v33)
            {
                std::bad_exception::__dtor__();
                ::0x40ed60::__cxa_end_catch();
                sub_411490(v37); /* do not return */
            }
            v7 = v29;
            if (!(10 >= (unsigned int)v30) || !((unsigned int)v17))
                break;
            v7 = &v29[-1 * (v33 << ((char)g_428e38[v30] & 63))];
            (unsigned int)v35 = sub_412060(&v7, v4);
            v7 = &v5;
            if (!((char)*(v35)->field_20(v35, &_ZTISt13bad_exception, &v7) & 1))
            {
                v32 = 0;
                v33 = 0;
                v31 += 1;
            }
            else
            {
                ::0x40ed60::__cxa_end_catch();
                *(&::0x40f010::__cxa_allocate_exception()) = &g_431de0;
                ::0x40ecf0::__cxa_throw();
                while (true)
                {
                    v38 = v0;
                    *((int *)(v17 + 48)) = -(*((int *)(v17 + 48)));
                    v38->field_8 = v38->field_8 + 1;
                    ::0x40ed60::__cxa_end_catch();
                    ::0x40ed60::__cxa_end_catch();
                    ::0x40f0b0::__cxa_begin_catch();
                    ::0x40f130::__cxa_rethrow();
                }
            }
        }
        sub_411cb8(1, v36); /* do not return */
    }
}

long long sub_412028(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    std::bad_exception::__dtor__();
    ::0x40ed60::__cxa_end_catch();
    sub_40f79c((unsigned long long)sub_4270a0(a0), a1, a2);
}

long long sub_41202c(unsigned long a0)
{
}

long long sub_412030()
{
}

long long sub_412034()
{
}

// No decompilation output for function sub_412038
int sub_412060()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned int v2;  // w1
    unsigned long long v3;  // x9
    unsigned long long v18;  // x29

    v0 = &v1;
    v3 = v2 & 255;
    if ((unsigned int)v3 == 255)
    {
        v18 = v0;
        return;
    }
    if (12 < ((unsigned int)v3 & 15))
        goto LABEL_0x4121b0;
    else
        goto LABEL_0x412080;
}

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
} struct_0;

int sub_4121b4(unsigned long a0)
{
    void* v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x19, Other Possible Types: unsigned long long
    struct_0 *v5;  // tpidr_el0
    unsigned long v6;  // x0, Other Possible Types: unsigned int

    v2 = &v3;
    if (a0)
        v4 = a0;
    else
        v4 = 1;
    v1 = v5->field_28;
    if (!posix_memalign(&v0, 16, v4))
        v6 = (unsigned int)v0;
    else
        (unsigned int)v6 = sub_412220(v4);
    if (v5->field_28 != v1)
        __stack_chk_fail(); /* do not return */
    return v6;
}

extern char g_435040;
extern struct_0 *g_435068;
extern unsigned int g_435070;
extern char g_435270;
extern char g_800080;

int sub_412220(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_12;  // tmp #12
    char v1;  // [bp+0x0]
    unsigned short *v2;  // x11, Other Possible Types: unsigned long
    unsigned long long v3;  // x10
    unsigned short *v4;  // x19
    unsigned long long v5;  // x11
    unsigned long long v6;  // x11
    unsigned short *v7;  // x12, Other Possible Types: unsigned long
    unsigned short v8;  // x8
    unsigned short v9[2];  // x8
    unsigned long long v11;  // x10

    v0 = &v1;
    pthread_mutex_lock(&g_435040);
    v2 = g_435068;
    if (!g_435068)
    {
        v2 = &g_435070;
        g_435068 = &g_435070;
        *((char **)&g_435070) = &g_800080;
    }
    if (!(v2 && v2 != 4412016))
    {
        pthread_mutex_unlock(&g_435040);
        return 0;
    }
    v7 = 0;
    v3 = (__ROL__(a0 + 3, 62) & 4611686018427387903) + 1;
    do
    {
        v4 = v2;
        v5 = *((short *)(v2 + 2));
        if (v3 < v5)
        {
            v8 = v5 - v3;
            v4[1] = v8;
            v9 = &v4[2 * v8];
            v9[0] = 0;
            v9[1] = v3;
            pthread_mutex_unlock(&g_435040);
            return (unsigned int)(v9 + 1);
        }
        if ((char)[D] arm64g_calculate_condition(0x4<64>, x10<8>, x11<8>, 0x0<64>))
        {
            v11 = *(v4);
            if (v7)
                *((unsigned short *)v7) = v11;
            else
                g_435068 = &(&g_435070)[v11];
            *(v4) = 0;
            pthread_mutex_unlock(&g_435040);
            return (unsigned int)(v4 + 2);
        }
        v7 = v4;
        v6 = __ROL__(*(v4), 2) & -4;
        tmp_12 = v6;
        v2 = (char *)&g_435070 + v6;
    } while (tmp_12 != 0x200);
}

long long sub_412310(unsigned int a0, unsigned int a1, unsigned int a2)
{
    sub_40f79c(a0, a1, a2);
}

int sub_412314(unsigned int a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v3;  // x0
    unsigned long v5;  // x20
    void* v6;  // x0

    v0 = &v1;
    v3 = calloc(a0, a1);
    if (v3)
        return v3;
    v5 = a0 * a1;
    (unsigned int)v6 = sub_412220(v5);
    if (v6)
    {
        memset(v6, 0, v5);
        return (unsigned int)v6;
    }
    return (unsigned int)v6;
}

typedef struct struct_0 {
    unsigned short field_-2;
} struct_0;

extern char g_435040;
extern struct_1 *g_435068;
extern char g_435070;
extern char g_435270;

void sub_412370(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x20]
    int tmp_12;  // tmp #12
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]
    unsigned long v7;  // x20
    unsigned long v8;  // x19
    unsigned long v9;  // x30
    unsigned short v10[2];  // x20
    unsigned long long v13;  // x12
    unsigned short v14[2];  // x10, Other Possible Types: unsigned long
    unsigned short *v16;  // x11
    unsigned short v17[2];  // x14, Other Possible Types: unsigned long
    unsigned long long v18;  // x15
    unsigned long long v20;  // x10
    unsigned long long v28;  // x29

    if (!(4412016 > a0 && a0 >= 4411504))
    {
        free(a0);
        return;
    }
    v0 = v7;
    v1 = v8;
    v2 = &v4;
    v3 = v9;
    v10 = a0 + 2;
    pthread_mutex_lock(&g_435040);
    if (g_435068 && g_435068 != 4412016)
    {
        v13 = a0[1].field_-2;
        v14 = 0;
        v16 = &v10[v13];
        v17 = g_435068;
        do
        {
            v18 = *((short *)(v17 + 2));
            if (v17 + (v18 << 2) == v10)
            {
                *((unsigned short *)(v17 + 2)) = v13 + v18;
                pthread_mutex_unlock(&g_435040);
                v28 = v2;
                return;
            }
            if (v16 == v17)
            {
                a0[1].field_-2 = v13 + v18;
                if (!v14)
                {
                    g_435068 = &v10[0];
                    v10[0] = *(v16);
                    pthread_mutex_unlock(&g_435040);
                    v28 = v2;
                    return;
                }
                *((unsigned short *)v14) = __ROL__(v10 - &g_435070, 30) & 1073741823;
                pthread_mutex_unlock(&g_435040);
                v28 = v2;
                return;
            }
            v20 = __ROL__(*((short *)v17), 2) & -4;
            tmp_12 = v20;
            v14 = v17;
            v17 = &(&g_435070)[v20];
        } while (tmp_12 != 0x200);
    }
    v10[0] = __ROL__((unsigned int)(g_435068 - &g_435070), 30) & 1073741823;
    g_435068 = &v10[0];
    pthread_mutex_unlock(&g_435040);
    v28 = v2;
    return;
}

long long sub_412490(unsigned int a0, unsigned int a1, unsigned int a2)
{
    sub_40f79c(a0, a1, a2);
}

extern char g_435070;
extern char g_435270;

void sub_412494(void* a0)
{
    free(a0);
    return;
}

long long std::bad_alloc::__base_dtor__()
{
    unsigned long v0;  // x0

    return v0;
}

long long std::exception::__deleting_dtor__()
{
    return ::0x40f060::operator delete();
}

long long std::exception::what const()
{
    return "std::exception";
}

long long std::bad_exception::__deleting_dtor__()
{
    return ::0x40f060::operator delete();
}

long long std::bad_exception::what const()
{
    return "std::bad_exception";
}

extern char g_431d58;

long long std::bad_alloc::__ctor__(unsigned long long *a0)
{
    unsigned long long v0;  // x8

    v0 = &g_431d58;
    *(a0) = &g_431d58;
    return a0;
}

long long std::bad_alloc::__deleting_dtor__()
{
    return ::0x40f060::operator delete();
}

long long std::bad_alloc::what const()
{
    return "std::bad_alloc";
}

extern char g_431d80;

long long std::bad_array_new_length::__base_ctor__(unsigned long long *a0)
{
    unsigned long long v0;  // x8

    v0 = &g_431d80;
    *(a0) = &g_431d80;
    return a0;
}

long long std::bad_array_new_length::__deleting_dtor__()
{
    return ::0x40f060::operator delete();
}

long long std::bad_array_new_length::what const()
{
    return "bad_array_new_length";
}

extern char g_431e50;

long long std::invalid_argument::__base_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e50;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    return std::exception::__base_dtor__();
}

extern char g_431e50;

long long std::logic_error::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e50;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long std::logic_error::what const(struct_0 *a0)
{
    return a0->field_8;
}

extern char g_431e78;

long long std::range_error::__base_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e78;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    return std::exception::__base_dtor__();
}

extern char g_431e78;

long long std::runtime_error::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e78;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long std::runtime_error::what const(struct_0 *a0)
{
    return a0->field_8;
}

extern char g_431e50;

long long std::domain_error::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e50;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

extern char g_431e50;

long long std::invalid_argument::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e50;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

extern char g_431e50;

long long std::length_error::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e50;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

extern char g_431e50;

long long std::out_of_range::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e50;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

extern char g_431e78;

long long std::range_error::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e78;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

extern char g_431e78;

long long std::overflow_error::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e78;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

extern char g_431e78;

long long std::underflow_error::__deleting_dtor__(unsigned long long *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_9;  // tmp #9
    int tmp_1;  // tmp #1
    char v1;  // [bp+0x0]
    unsigned int v2;  // w10

    v0 = &v1;
    *(a0) = &g_431e78;
    do
    {
        [D] t1 = LDle-Linked(t0)
        v2 = tmp_1;
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t9 = ( STle-Cond(t8) = t16 )
    } while ((unsigned int)(tmp_9 ^ 1));
    if (!((char)[D] arm64g_calculate_condition(0x53<64>, Conv(32->64, w10<4>), 0x1<64>, 0x0<64>)))
        ::0x40f060::operator delete();
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char field_0;
} struct_0;

void sub_41291c(char *a0)
{
    int <0x41291c[is_29]|Stack bp-0xe0, 1 B>;  // [bp-0xe0]
    int v0;  // [bp-0x1a0]
    int v1;  // [bp-0x190]
    int v2;  // [bp-0x180]
    int v3;  // [bp-0x170]
    int v4;  // [bp-0x160]
    int v5;  // [bp-0x150]
    int v6;  // [bp-0x140]
    int v7;  // [bp-0x130]
    char v8;  // [bp-0x120]
    unsigned long v9;  // [bp-0x118]
    unsigned long v10;  // [bp-0x110]
    unsigned long v11;  // [bp-0x108]
    unsigned long v12;  // [bp-0x100]
    unsigned long v13;  // [bp-0xf8]
    unsigned long v14;  // [bp-0xf0]
    unsigned long v15;  // [bp-0xe8]
    int v16;  // [bp-0xe0]
    int v17;  // [bp-0xd0]
    unsigned long v18;  // [bp-0xb8]
    struct_0 *v19;  // [bp-0xb0]
    unsigned long v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa0]
    char *v22;  // [bp-0x98]
    int v23;  // [bp-0x90]
    int v24;  // [bp-0x80]
    unsigned long v25;  // [bp-0x70]
    struct_0 *v26;  // [bp-0x68]
    unsigned long v27;  // [bp-0x60]
    unsigned long long v28;  // [bp-0x58]
    unsigned long v29;  // [bp-0x50]
    unsigned long v30;  // [bp-0x48]
    unsigned long v31;  // [bp-0x40]
    unsigned long v32;  // [bp-0x38]
    unsigned long v33;  // [bp-0x30]
    unsigned long v34;  // [bp-0x28]
    unsigned long v35;  // [bp-0x20]
    unsigned long v36;  // [bp-0x18]
    unsigned long v37;  // [bp-0x10]
    unsigned long v38;  // [bp-0x8]
    char v39;  // [bp+0x0]
    unsigned long v40;  // x28
    unsigned long v41;  // x25
    unsigned long v42;  // x24
    unsigned long v43;  // x23
    unsigned long v44;  // x22
    unsigned long v45;  // x21
    unsigned long v46;  // x20
    unsigned long v47;  // x19
    unsigned long v48;  // x30
    int v49;  // q0
    int v50;  // q1
    unsigned long v51;  // x1
    unsigned long v52;  // x2
    unsigned long v53;  // x3
    unsigned long v54;  // x4
    unsigned long v55;  // x5
    unsigned long v56;  // x6
    unsigned long v57;  // x7
    int v58;  // q2
    int v59;  // q3
    int v60;  // q4
    int v61;  // q5
    int v62;  // q6
    int v63;  // q7

    v29 = v40;
    v30 = v41;
    v31 = v42;
    v32 = v43;
    v33 = v44;
    v34 = v45;
    v35 = v46;
    v36 = v47;
    v37 = &v39;
    v38 = v48;
    v27 = &v8;
    v28 = -545460846648;
    v25 = &v39;
    v26 = &<0x41291c[is_29]|Stack bp-0xe0, 1 B>;
    v0 = v49;
    v1 = v50;
    v9 = v51;
    v10 = v52;
    v11 = v53;
    v12 = v54;
    v13 = v55;
    v14 = v56;
    v15 = v57;
    v2 = v58;
    v3 = v59;
    v4 = v60;
    v5 = v61;
    v6 = v62;
    v7 = v63;
    *((int128_t *)&v23) = *((int128_t *)&v25);
    *((int128_t *)&v24) = *((int128_t *)&v27);
    vfprintf(0x500130, a0, &v23);
    fputc(10, 0x500130);
    v20 = &v8;
    v21 = -545460846648;
    v18 = &v39;
    v19 = &<0x41291c[is_29]|Stack bp-0xe0, 1 B>;
    *((int128_t *)&v16) = *((int128_t *)&v18);
    *((int128_t *)&v17) = *((int128_t *)&v20);
    vasprintf(&v22, a0, &<0x41291c[is_29]|Stack bp-0xe0, 1 B>);
    android_set_abort_message(v22);
    openlog("libc++abi", 0, 0);
    syslog(2, "%s");
    closelog();
    abort(); /* do not return */
}

extern char __cxa_unexpected_handler;

long long std::set_unexpected(unsigned long a0)
{
    unsigned long long v0;  // x9
    int tmp_3;  // tmp #3
    int tmp_1;  // tmp #1
    unsigned long long v1;  // x8
    unsigned long long v2;  // x8

    v0 = &__cxa_unexpected_handler;
    v1 = sub_412b7c;
    if (a0)
        v2 = a0;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t3 = ( STle-Cond(t2) = t4 )
    } while ((unsigned int)(tmp_3 ^ 1));
    return tmp_1;
}

extern char __cxa_terminate_handler;

long long std::set_terminate(unsigned long a0)
{
    unsigned long long v0;  // x9
    int tmp_3;  // tmp #3
    int tmp_1;  // tmp #1
    unsigned long long v1;  // x8
    unsigned long long v2;  // x8

    v0 = &__cxa_terminate_handler;
    v1 = sub_412a5c;
    if (a0)
        v2 = a0;
    do
    {
        [D] t1 = LDle-Linked(t0)
        [D] MBusEvent-Imbe_Fence
        [D] MBusEvent-Imbe_Fence
        [D] t3 = ( STle-Cond(t2) = t4 )
    } while ((unsigned int)(tmp_3 ^ 1));
    return tmp_1;
}

typedef struct struct_3 {
    struct struct_4 *field_0;
    unsigned long long field_8;
} struct_3;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern struct_2 *_ZTISt9exception;

long long sub_412a5c(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x440]
    unsigned long v2;  // [bp-0x30]
    struct struct_1 **v3;  // [bp-0x28]
    unsigned long v4;  // [bp-0x20]
    unsigned long v5;  // [bp-0x18]
    unsigned long v6;  // [bp-0x10]
    unsigned long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]
    unsigned long v9;  // x28
    unsigned long v10;  // x20
    unsigned long v11;  // x19
    unsigned long v12;  // x30
    struct struct_3 **v13;  // x0
    struct_3 *v14;  // x20
    struct struct_1 **v15;  // x8, Other Possible Types: unsigned long
    unsigned long long v16;  // x20

    v2 = v9;
    v4 = v10;
    v5 = v11;
    v6 = &v8;
    v7 = v12;
    v13 = ::0x40ece0::__cxa_get_globals_fast();
    if (!v13)
        sub_41291c("terminating"); /* do not return */
    v14 = *(v13);
    if (v14)
    {
        if (!((char)::0x40efa0::__cxxabiv1::__isOurExceptionClass() & 1))
            sub_41291c("terminating with %s foreign exception"); /* do not return */
        if (::0x40f000::__cxxabiv1::__getExceptionClass() != 4849336966747728641)
            v15 = v14 + 8;
        else
            v15 = v14->field_0;
        v3 = v15;
        v16 = v14->field_8;
        v0 = 0x400;
        ::0x40efb0::__cxa_demangle();
        if (((char)_ZTISt9exception->field_20(&_ZTISt9exception, v16, &v3) & 1))
        {
            *(v3)->field_10(v3);
            sub_41291c("terminating with %s exception of type %s: %s"); /* do not return */
        }
        sub_41291c("terminating with %s exception of type %s"); /* do not return */
    }
}

extern unsigned long long g_435018;

long long sub_412b7c()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x30

    v0 = &v2;
    v1 = v3;
    g_435018 = "unexpected";
    ::0x40f080::std::terminate();
}

extern char g_432090;
extern char g_4337d0;

long long __cxa_demangle(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    int <0x412b98[is_19]|Stack bp-0x1238, 1 B>;  // [bp-0x1238]
    int <0x412b98[is_27]|Stack bp-0x10c8, 1 B>;  // [bp-0x10c8]
    int <0x412b98[is_32]|Stack bp-0x1120, 1 B>;  // [bp-0x1120]
    int tmp_3;  // tmp #3
    unsigned long v0;  // [bp-0x1398]
    unsigned long v1;  // [bp-0x1390]
    unsigned long v2;  // [bp-0x1388]
    unsigned long v3;  // [bp-0x1380]
    unsigned long v4;  // [bp-0x1378]
    unsigned long v5;  // [bp-0x1370]
    unsigned long v6;  // [bp-0x1368]
    unsigned long v7;  // [bp-0x1360]
    unsigned long v8;  // [bp-0x1358]
    unsigned long v9;  // [bp-0x1350]
    unsigned long v10;  // [bp-0x1348]
    unsigned long v11;  // [bp-0x1340]
    char v12;  // [bp-0x1338]
    unsigned long v13;  // [bp-0x1238]
    unsigned long v14;  // [bp-0x1230]
    unsigned long v15;  // [bp-0x1228]
    char v16;  // [bp-0x1220]
    unsigned long v17;  // [bp-0x1120]
    unsigned long v18;  // [bp-0x1118]
    unsigned long v19;  // [bp-0x1110]
    char v20;  // [bp-0x1108]
    unsigned long v21;  // [bp-0x10c8]
    unsigned long v22;  // [bp-0x10c0]
    unsigned long v23;  // [bp-0x10b8]
    char v24;  // [bp-0x10b0]
    unsigned short v25;  // [bp-0x1090]
    char v26;  // [bp-0x108e]
    int v27;  // [bp-0x1080], Other Possible Types: unsigned long
    unsigned long v28;  // [bp-0x1078]
    unsigned long v29;  // [bp-0x80]
    unsigned long v30;  // [bp-0x70]
    unsigned long v31;  // [bp-0x10]
    char v32;  // [bp+0x0]
    unsigned long v33;  // tpidr_el0
    unsigned long v34;  // x20
    unsigned long v35;  // x21
    unsigned long v36;  // x20
    unsigned long v37;  // x10
    unsigned long v38;  // x11
    unsigned long v39;  // x9
    unsigned long v40;  // x0
    unsigned long v41;  // x8
    unsigned long v42;  // x9
    unsigned long v43;  // x10
    unsigned long v44;  // x11
    unsigned long v45;  // x0
    unsigned long v46;  // x8
    unsigned long v47;  // x26
    unsigned long v48;  // x9
    unsigned long v49;  // x10
    unsigned long v50;  // x11
    unsigned long v51;  // x8
    unsigned long v52;  // x0
    unsigned long v53;  // x9
    unsigned long v54;  // x8
    unsigned long v55;  // x8
    unsigned long v56;  // x9
    unsigned long v57;  // x10
    unsigned long v58;  // x11
    unsigned long v59;  // x23
    unsigned long v60;  // x0
    unsigned long v61;  // x9
    unsigned long v62;  // x8
    unsigned long v63;  // x24
    unsigned long v64;  // x27
    unsigned long v65;  // x28
    unsigned long v66;  // x10
    unsigned long v67;  // x11
    unsigned long v68;  // x12
    unsigned long v69;  // x9
    unsigned long v70;  // x12
    unsigned long v71;  // x11
    unsigned int v72;  // w10
    unsigned long v73;  // x13
    unsigned long v74;  // x12
    unsigned int v76;  // w11
    unsigned long v77;  // x10
    unsigned int v78;  // w9
    unsigned int v79;  // w8
    unsigned long v80;  // x23
    unsigned long v81;  // x26
    unsigned long v82;  // x0
    unsigned long v84;  // x8
    unsigned long v85;  // x10
    unsigned long v86;  // x9
    unsigned long v87;  // x0
    unsigned long v88;  // x1
    unsigned long v89;  // x8
    unsigned long v91;  // x0
    unsigned long v92;  // x0
    unsigned long v93;  // x0
    unsigned long v94;  // x0
    unsigned long v95;  // x0
    unsigned long v96;  // x0
    unsigned long v97;  // x0
    unsigned long v98;  // x0
    unsigned long v99;  // x0

    v31 = &v32;
    v30 = *((long long *)(v33 + 40));
    if (a0)
    {
        v34 = a2;
        v35 = a1;
        if (!(a1) || !(!a2))
        {
            v7 = a0;
            v8 = a0 + strlen(a0);
            v65 = &v12;
            *((int128_t *)&v27) = 0;
            v64 = &v16;
            v63 = &v20;
            v25 = 1;
            v10 = &v12;
            v11 = &<0x412b98[is_19]|Stack bp-0x1238, 1 B>;
            v26 = 0;
            v13 = &v16;
            v14 = &v16;
            v19 = &<0x412b98[is_27]|Stack bp-0x10c8, 1 B>;
            v9 = &v12;
            v15 = &<0x412b98[is_32]|Stack bp-0x1120, 1 B>;
            v17 = &v20;
            v18 = &v20;
            v21 = &v24;
            v2 = &v24;
            v22 = &v24;
            v23 = &v25;
            v29 = &v27;
            v6 = -1 CONCAT -1;
            (unsigned int)v40 = __strlen_chk("_Z", 3);
            v41 = v7;
            if (v8 - v41 >= v40)
            {
                if (!v40)
                    v7 = v41 + v40;
                v39 = "_Z";
                v37 = v40;
                for (v38 = v41; *((char *)v39) == *((char *)v38); v7 = v41 + v40)
                {
                    v39 += 1;
                    tmp_3 = v37;
                    v37 -= 1;
                    v38 += 1;
                }
            }
            (unsigned int)v40 = __strlen_chk("__Z", 4);
            v41 = v7;
            if (v8 - v41 >= v40)
            {
                if (v40)
                {
                    v42 = "__Z";
                    v43 = v40;
                    for (v44 = v41; *((char *)v42) == *((char *)v44); v7 = v41 + v40)
                    {
                        v42 += 1;
                        tmp_3 = v43;
                        v43 -= 1;
                        v44 += 1;
                    }
                }
                else
                {
                    v7 = v41 + v40;
                    v59 = sub_4132d4(&v7);
                    if (!v59)
                        goto LABEL_412f68;
                    v1 = a2;
                    v64 = v7;
                    v47 = v8;
                    if (v47 != v64)
                    {
                        if (*((char *)v64) == 46)
                        {
                            v0 = &v12;
                            v65 = v29;
                            v51 = *((long long *)(v65 + 8));
                            if (v51 + 48 >= 4080)
                            {
                                v52 = malloc(0x1000);
                                if (v52)
                                {
                                    v51 = 0;
                                    *((unsigned long *)v52) = v65;
                                    *((long long *)(v52 + 8)) = 0;
                                    v65 = v52;
                                    v29 = v52;
                                }
                            }
                            v53 = v51 + 48;
                            v54 = v65 + v51;
                            *((unsigned long *)(v65 + 8)) = v53;
                            *((long long **)(v54 + 16)) = &g_4337d0;
                            v55 = v54 + 16;
                            *((int *)(v55 + 8)) = 16843009;
                            *((unsigned long *)(v55 + 16)) = v59;
                            *((unsigned long *)(v55 + 24)) = v64;
                            *((unsigned long *)(v55 + 32)) = v47;
                            v65 = v0;
                            v59 = v55;
                            v7 = v8;
                        }
                        else
                        {
                            v79 = -2;
                            v64 = &v16;
                            v63 = &v20;
                            if (!(a3))
                                goto LABEL_412f74;
                            goto LABEL_412f70;
                        }
                    }
                    v64 = &v16;
                    v63 = &v20;
                    v34 = v1;
                    if (!v59)
                        goto LABEL_412f68;
                    goto LABEL_412de0;
                }
            }
            (unsigned int)v45 = __strlen_chk("___Z", 5);
            v46 = v7;
            if (v8 - v46 >= v45)
            {
                if (!v45)
                    v7 = v46 + v45;
                v48 = "___Z";
                v49 = v45;
                for (v50 = v46; *((char *)v48) == *((char *)v50); v7 = v46 + v45)
                {
                    v48 += 1;
                    tmp_3 = v49;
                    v49 -= 1;
                    v50 += 1;
                }
            }
            (unsigned int)v45 = __strlen_chk("____Z", 6);
            v46 = v7;
            if (v8 - v46 >= v45)
            {
                if (v45)
                {
                    v56 = "____Z";
                    v57 = v45;
                    for (v58 = v46; *((char *)v56) == *((char *)v58); v7 = v46 + v45)
                    {
                        v56 += 1;
                        tmp_3 = v57;
                        v57 -= 1;
                        v58 += 1;
                    }
                }
                else
                {
                    v7 = v46 + v45;
                    v1 = sub_4132d4(&v7);
                    if (!(v1) || !(((unsigned int)v60 = __strlen_chk("_block_invoke", 14), v61 = v7, v62 = v8, v62 - v61 >= v60)))
                    {
LABEL_412f68:
                        v79 = -2;
                        if (!a3)
                            goto LABEL_412f74;
                        goto LABEL_412f70;
                    }
                    if (v60)
                    {
                        v66 = "_block_invoke";
                        v67 = v60;
                        v68 = v61;
                        do
                        {
                            if (*((char *)v66) != *((char *)v68))
                                goto LABEL_412f68;
                        } while ((v66 += 1, tmp_3 = v67, v67 -= 1, v68 += 1, tmp_3 != 1));
                    }
                    v69 = v61 + v60;
                    v7 = v69;
                    if (v69 != v62)
                    {
                        if (*((char *)v69) == 95)
                        {
                            v71 = v69 + 1;
                            v72 = 1;
                            v69 = v71;
                            v7 = v71;
                            if (v62 != v71)
                                goto LABEL_413068;
                            goto LABEL_412f3c;
                        }
                        else
                        {
                            v72 = 0;
                            v71 = v69;
                            if (v62 == v69)
                            {
LABEL_412f3c:
                                v71 = 0;
                                v73 = 0;
                                v70 = v62;
                            }
                            else
                            {
LABEL_413068:
                                if (9 < *((char *)v69) - 48)
                                {
                                    v73 = 0;
                                    v70 = v71;
                                    v71 = 0;
                                }
                                else
                                {
                                    v74 = v69 + 1;
                                    do
                                    {
                                        v69 = v74;
                                        v7 = v74;
                                        if (v62 == v74)
                                        {
                                            v70 = v62;
                                            v73 = v62;
                                            goto LABEL_4130c4;
                                        }
                                    } while ((v66 += 1, tmp_3 = v67, v67 -= 1, v68 += 1, tmp_3 != 1));
                                    v70 = v74 - 1;
                                    v73 = v70;
                                }
                            }
                        }
LABEL_4130c4:
                        if (v71 == v73)
                            v76 = 1;
                        else
                            v76 = 0;
                        v77 = v72 & v76;
                        if ((v77 & 1))
                            goto LABEL_412f68;
                        if (v62 == v69)
                            goto LABEL_4130f0;
                    }
                    else
                    {
                        v70 = v69;
                        v69 = v62;
                        if (v62 == v62)
                            goto LABEL_4130f0;
                    }
                    v78 = *((char *)v69);
                    if (v78 == 46)
                    {
                        v7 = v62;
LABEL_4130f8:
                        v80 = v29;
                        v81 = *((long long *)(v80 + 8));
                        if (v81 + 48 >= 4080)
                        {
                            v82 = malloc(0x1000);
                            if (v82)
                            {
                                v81 = 0;
                                *((unsigned long *)v82) = v80;
                                *((long long *)(v82 + 8)) = 0;
                                v80 = v82;
                                v29 = v82;
                            }
                        }
                        *((unsigned long *)(v80 + 8)) = v81 + 48;
                        v59 = v80 + v81 + 16;
                        *((char **)(v59 + 16)) = "invocation function for block in ";
                        *((char **)(v59 + 24)) = (char *)(4364258 + __strlen_chk("invocation function for block in ", 34));
                        *((int *)(v59 + 8)) = 16843028;
                        *((long long **)v59) = &g_432090;
                        *((unsigned long *)(v59 + 32)) = v1;
                        if (!a1)
                        {
LABEL_413180:
                            v35 = malloc(0x400);
                            if (v35)
                            {
                                v4 = 0;
                                v5 = 0x400;
                                v3 = v35;
                                *((long long *)(*((long long *)v59) + 32))(v59, &v3);
                                if (*((char *)(v59 + 9)) != 1)
                                    *((long long *)(*((long long *)v59) + 40))(v59, &v3);
                                v84 = v4;
                                v85 = v5;
                                v86 = v84 + 1;
                                if (v85 > v86)
                                {
                                    v87 = v3;
                                }
                                else
                                {
                                    if (a1 < v86)
                                        v88 = v86;
                                    else
                                        v88 = __ROL__(v85, 1) & -2;
                                    v5 = v88;
                                    v87 = realloc(v3, v88);
                                    v3 = v87;
                                    if (v87)
                                    {
                                        v84 = v4;
                                        v86 = v84 + 1;
                                    }
                                    else
                                    {
                                        v89 = v29;
                                        if (v89)
                                        {
                                            while (true)
                                            {
                                                v29 = v89;
                                                if (&v27 == v89)
                                                {
                                                    v89 = *((long long *)v89);
                                                    if (!v89)
                                                        break;
                                                }
                                                else
                                                {
                                                    free(v89);
                                                    v89 = v29;
                                                    if (!v89)
                                                        break;
                                                }
                                            }
                                        }
                                        v27 = 0;
                                        v28 = 0;
                                        v91 = v21;
                                        v29 = &v27;
                                        if (v91 != v2)
                                            free(v91);
                                        v93 = v17;
                                        if (v93 != v63)
                                            free(v93);
                                        v94 = v13;
                                        if (v94 != v64)
                                            free(v94);
                                        v96 = v9;
                                        if (v96 == v65)
                                            sub_4270a0(::0x40f080::std::terminate());
                                        free(v96);
                                    }
                                }
                                v4 = v86;
                                *((char *)(v87 + v84)) = 0;
                                if (v34)
                                    *((unsigned long *)v34) = v4;
                                v35 = v3;
                                v79 = 0;
                                if (!(a3))
                                    goto LABEL_412f74;
                            }
                            else
                            {
                                v79 = -1;
                                if (!(a3))
                                    goto LABEL_412f74;
                            }
LABEL_412f70:
                            *((unsigned int *)a3) = v79;
LABEL_412f74:
                            v92 = v29;
                            if (!v79)
                                v36 = v35;
                            else
                                v36 = 0;
                            if (v92)
                            {
                                while (true)
                                {
                                    v29 = v92;
                                    if (&v27 != v92)
                                    {
                                        free(v92);
                                        v92 = v29;
                                        if (!v92)
                                            break;
                                    }
                                    else
                                    {
                                        v92 = *((long long *)v92);
                                        if (!v92)
                                            break;
                                    }
                                }
                            }
                            v27 = 0;
                            v28 = 0;
                            v95 = v21;
                            v29 = &v27;
                            if (v95 != v2)
                                free(v95);
                            v97 = v17;
                            if (v97 != v63)
                                free(v97);
                            v98 = v13;
                            if (v98 != v64)
                                free(v98);
                            v99 = v9;
                            if (v99 != v65)
                                free(v99);
                            if (*((long long *)(v33 + 40)) != v30)
                                __stack_chk_fail(); /* do not return */
                            return v36;
                        }
LABEL_412de4:
                        v4 = 0;
                        v5 = *((long long *)v34);
                        v3 = a1;
                        *((long long *)(*((long long *)v59) + 32))(v59, &v3);
                    }
LABEL_4130f0:
                    if (!(v62 != v70))
                        goto LABEL_4130f8;
                    goto LABEL_412f68;
                }
            }
            v59 = sub_413e1c(&v7, 6, a2, a3, a4, a5, a6, a7);
            if (!(v8 == v7) || !(v59))
                goto LABEL_412f68;
LABEL_412de0:
            if (!a1)
                goto LABEL_413180;
            goto LABEL_412de4;
        }
    }
    if (a3)
        *((int *)a3) = -3;
    if (*((long long *)(v33 + 40)) == v30)
        return 0;
    __stack_chk_fail(); /* do not return */
}

typedef struct struct_4 {
    struct struct_5 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[544];
    struct struct_6 *field_240;
    unsigned long long field_248;
    char padding_250[72];
    unsigned long long field_298;
    unsigned long long field_2a0;
    char padding_2a8[4152];
    struct struct_3 *field_12e0;
} struct_4;

typedef struct struct_12 {
    char padding_0[40];
    unsigned long long field_28;
} struct_12;

typedef struct struct_1 {
    struct struct_2 *field_0;
    struct struct_2 *field_8;
    char padding_10[4816];
    struct struct_3 *field_12e0;
} struct_1;

typedef struct struct_9 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_3 *field_12e0;
} struct_9;

typedef struct struct_10 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_10;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_7 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_7;

typedef struct struct_13 {
    char padding_0[8];
    unsigned long long field_8;
} struct_13;

typedef struct struct_8 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned int field_38;
    char field_3c;
} struct_8;

typedef struct struct_5 {
    char field_0;
    char field_1;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_3;

typedef struct struct_2 {
    char field_0;
} struct_2;

extern char g_429804;
extern char g_42981b;
extern char g_429829;
extern char g_42983c;
extern char g_429857;
extern char g_429879;
extern char g_4298a2;
extern char g_4298a6;
extern char g_4298b8;
extern char g_4298cc;
extern char g_4298f2;
extern char g_432090;
extern char g_432110;
extern char g_4336f0;
extern char g_433760;

int sub_4132d4(struct_4 *a0)
{
    unsigned long v80;  // x8
    struct_9 *v82;  // x19
    unsigned long long v83;  // x1
    unsigned long long v84;  // x2
    unsigned long long v85;  // x3
    unsigned long long v86;  // x4
    unsigned long long v87;  // x5
    unsigned long long v88;  // x6
    unsigned long long v89;  // x7
    unsigned long long v90;  // x0
    unsigned long v96;  // x21
    unsigned long long v98[2];  // x20, Other Possible Types: unsigned long
    void* v99;  // x8, Other Possible Types: unsigned long
    unsigned long long v119[2];  // x0
    unsigned long v146;  // x20
    unsigned long v147;  // x19
    unsigned long v148;  // x1

    v82->field_0 = v80 + 2;
    (unsigned int)v90 = sub_413e1c(v82, v83, v84, v85, v86, v87, v88, v89);
    if (!v90)
        goto LABEL_0x413dd0;
    v98 = v82->field_12e0;
    v96 = v90;
    v99 = v98[1];
    if (v99 + 48 >= 4080)
    {
        v119 = malloc(0x1000);
        if (!v119)
            goto LABEL_0x413e18;
        v99 = 0;
        v119[0] = v98;
        v119[1] = 0;
        v98 = v119;
        v82->field_12e0 = &v119[0];
    }
    *((unsigned long *)(v98 + 8)) = v99 + 48;
    v146 = v98 + v99;
    v147 = "VTT for ";
    v148 = 9;
}

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
} struct_0;

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
    char field_0;
} struct_2;

int sub_413e1c(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    void* v0;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    struct_0 *v4;  // tpidr_el0
    char *v5;  // x8
    unsigned int v6;  // w20

    v2 = &v3;
    v1 = v4->field_28;
    v0 = 0;
    v5 = a0->field_0;
    if (a0->field_8 != v5 && 57 >= *(v5) - 65)
        goto sub_413e7c + (*((short *)(4362404 + (a0->field_0->field_0 - 65 << 1))) << 2);
    v0 = sub_422474(a0, a1, a2, a3, a4, a5, a6, a7);
    if (!v0)
    {
        v6 = 0;
    }
    else
    {
        sub_4162b0(&a0[18].field_8, &v0);
        v6 = v0;
    }
    if (v4->field_28 != v1)
        __stack_chk_fail(); /* do not return */
    return v6;
}

long long sub_413e7c(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // [bp+0x0]
    unsigned int v1;  // w11
    char *v2;  // x9, Other Possible Types: unsigned long
    unsigned long v3;  // x10
    char *v4;  // x11, Other Possible Types: unsigned long
    unsigned long v5;  // x8
    unsigned long v6;  // x11
    unsigned int v7;  // w11
    unsigned long v8;  // x9
    unsigned long long v10;  // x8
    unsigned long long v11;  // x19
    unsigned long long v13;  // x19

    if (v1 != 114)
        v2 = 0;
    else
        v2 = 1;
    if (v3 > v2)
    {
        if (v1 != 114)
            v4 = 1;
        else
            v4 = 2;
        if (*((char *)(v5 + v2)) == 86)
            v2 = v4;
    }
    v6 = v2;
    if (v3 > v2)
    {
        if (*((char *)(v5 + v2)) != 75)
            v6 = v2;
        else
            v6 = (unsigned int)v2 + 1;
        v2 = v6;
    }
    if (v3 > v6)
    {
        v7 = *((char *)(v5 + v6));
        if (!(v7 != 70) || !(v7 != 68) && !(v3 <= v8) && !(41 < (unsigned int)v10) && !(!((char)[D] arm64g_calculate_condition(0x1a<64>, And((0x1<64> << Conv(64->8, (x8<8> & 0x3f<64>))), 0x30100000001<64>), 0x0<64>, 0x0<64>))))
        {
            *((int *)&v0) = sub_421aa0(v13, a1, a2, a3, a4, a5, a6, a7);
            if (v0)
                goto LABEL_0x4145e4;
        }
    }
    *((int *)&v0) = sub_4220b4(v11, a1, a2, a3, a4, a5, a6, a7);
    if (v0)
        goto LABEL_0x4145e4;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_2 *field_12e0;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_432180;

long long sub_413f28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    struct_1 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0
    struct_0 *v6;  // x20
    struct_3 *v7;  // x20

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            ::0x40f080::std::terminate();
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
    v6 = v1 + v4;
    v6->field_10 = &g_432180;
    v7 = &v6->field_10;
    v7->field_8 = 16843015;
    v7->field_10 = "unsigned long long";
    v7->field_18 = (char *)(4366052 + __strlen_chk("unsigned long long", 19));
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_413f7c()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_413fcc()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414020()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414074()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4140c8()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

typedef struct struct_3 {
    struct struct_4 *field_0;
    unsigned long long field_8;
    char padding_10[704];
    char field_2d0;
    char padding_2d1[4111];
    struct struct_5 *field_12e0;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_4 {
    char field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_5;

extern char g_4335a0;

long long sub_41411c()
{
    struct_0 *v0;  // [bp+0x0], Other Possible Types: unsigned long
    unsigned long v1;  // x10
    struct_2 *v2;  // x8
    unsigned long long v4;  // x8
    struct_3 *v5;  // x19
    struct_0 *v6;  // x0
    char *v8;  // x8
    unsigned long long v10;  // x0
    unsigned long long v11[2];  // x23, Other Possible Types: unsigned long
    void* v13;  // x8, Other Possible Types: unsigned long
    unsigned long long v14[2];  // x0
    unsigned long long v15;  // x9
    struct_1 *v16;  // x8

    if (v1 >= 2)
    {
        v4 = v2->field_1 - 101;
        if (16 >= (unsigned int)v4)
            if ((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, ((0x1<32> << Conv(64->8, (x8<8> & 0x1f<64>))) & 0x14001<32>)), 0x0<64>, 0x0<64>))
                goto LABEL_0x4145d4;
            else
                goto LABEL_41414c;
    }
LABEL_41414c:
    (unsigned int)v6 = sub_417064(v5);
    v0 = v6;
    if (!v6)
        goto LABEL_0x4153e4;
    if (!v5->field_2d0)
        goto LABEL_0x4145e4;
    v8 = v5->field_0;
    if (v5->field_8 == v8)
        goto LABEL_0x4145e4;
    if (*(v8) != 73)
        goto LABEL_0x4145e4;
    (unsigned int)v10 = sub_416b98(v5, 0);
    if (!v10)
        goto LABEL_0x4153e0;
    v11 = v5->field_12e0;
    v13 = v11[1];
    if (v13 + 32 >= 4080)
    {
        v14 = malloc(0x1000);
        if (!v14)
            goto LABEL_0x415498;
        v13 = 0;
        v14[0] = v11;
        v14[1] = 0;
        v11 = v14;
        v5->field_12e0 = &v14[0];
    }
    v15 = v13 + 32;
    v16 = v11 + v13;
    *((unsigned long long *)(v11 + 8)) = v15;
    v16->field_10 = &g_4335a0;
    v0->field_8 = 16843040;
    v0->field_10 = v6;
    v0->field_18 = v10;
    v0 = &v16->field_10;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414184()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4141d4()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414228()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_41427c()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_2 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_4 *field_12e0;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_1;

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_4;

extern char g_433bc0;

long long sub_4142d0(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    char v0[3];  // x8
    char v1[3];  // x9
    char v2[3];  // x10
    struct_2 *v3;  // x19
    char v4[3];  // x12, Other Possible Types: unsigned long
    char v5[3];  // x11
    unsigned long long v6;  // x12
    char v7[3];  // x12, Other Possible Types: unsigned long
    char v8[3];  // x23, Other Possible Types: unsigned long, unsigned long long
    char v9[3];  // x20, Other Possible Types: unsigned long long, unsigned long
    unsigned long v10;  // x8, Other Possible Types: unsigned long long
    char *v14;  // x8
    unsigned long long v15;  // x0
    unsigned long long v16[2];  // x24, Other Possible Types: unsigned long
    void* v18;  // x8, Other Possible Types: unsigned long
    unsigned long long v19[2];  // x0
    struct_0 *v20;  // x0
    struct_1 *v21;  // x0

    if (v0 != v1)
    {
        v2 = &v0[1];
        v3->field_0 = &v2[0];
        if (v1 == v2 || 9 < v2[0] - 48)
        {
            if (v2 != v1 && v2[0] == 95)
            {
                v10 = &v0[2];
                v3->field_0 = v10;
                sub_413e1c(v3, a1, a2, a3, a4, a5, a6, a7);
            }
            if (!sub_4181a0(v3, a1, a2, a3, a4, a5, a6, a7, a8))
                goto LABEL_0x4145dc;
            v14 = v3->field_0;
            if (v14 != v3->field_8 && *(v14) == 95)
            {
                v10 = v14 + 1;
                v3->field_0 = v10;
                sub_413e1c(v3, a1, a2, a3, a4, a5, a6, a7);
            }
        }
        else
        {
            v4 = v0;
            do
            {
                v5 = v4;
                v6 = v4 + 2;
                v3->field_0 = v6;
                if (v1 == v6)
                {
                    v7 = v1;
                    goto LABEL_414c90;
                }
            } while ((v4 = v5 + 1, v5[2] - 48 < 10));
            v7 = v4 + 1;
LABEL_414c90:
            if (!v7)
                v9 = &v0[2];
            else
                v9 = v2;
            if ((char)[D] arm64g_calculate_condition(0x14<64>, x12<8>, 0x0<64>, 0x0<64>))
                v8 = v7;
            else
                v8 = 1;
            if (&v1[2] != v5 && v5[2] == 95)
            {
                v3->field_0 = &v5[1];
                (unsigned int)v15 = sub_413e1c(v3, a1, a2, a3, a4, a5, a6, a7);
                if (!v15)
                    goto LABEL_0x4145dc;
                v16 = v3->field_12e0;
                v18 = v16[1];
                if (v18 + 48 >= 4080)
                {
                    v19 = malloc(0x1000);
                    if (!v19)
                        goto LABEL_0x415498;
                    v18 = 0;
                    v19[0] = v16;
                    v19[1] = 0;
                    v16 = v19;
                    v3->field_12e0 = &v19[0];
                }
                v20 = v16 + v18;
                *((unsigned long *)(v16 + 8)) = v18 + 48;
                v20->field_10 = &g_433bc0;
                v21 = &v20->field_10;
                v21->field_8 = 16777230;
                v21->field_10 = v15;
                v21->field_18 = v9;
                v21->field_20 = v8;
                if (v21)
                    goto LABEL_0x4145e4;
            }
        }
    }
    if (0)
        goto LABEL_0x4145e4;
    else
        goto LABEL_0x4153e0;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_2 *field_12e0;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_433df0;

long long sub_41432c(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    struct_0 *v0;  // [bp+0x0]
    unsigned long v1;  // x8
    struct_1 *v3;  // x19
    unsigned long long v4;  // x20
    unsigned long long v5[2];  // x0
    void* v6;  // x8, Other Possible Types: unsigned long
    unsigned long long v7[2];  // x21, Other Possible Types: unsigned long
    struct_3 *v8;  // x23
    struct_0 *v9;  // x23

    v3->field_0 = v1 + 1;
    v4 = sub_413e1c(v3, a1, a2, a3, a4, a5, a6, a7);
    if (!v4)
        goto LABEL_0x4153e4;
    v7 = v3->field_12e0;
    v6 = v7[1];
    if (v6 + 48 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v6 = 0;
        v5[0] = v7;
        v5[1] = 0;
        v7 = v5;
        v3->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v7 + 8)) = v6 + 48;
    v8 = v7 + v6;
    v8->field_10 = &g_433df0;
    v9 = &v8->field_10;
    v9->field_8 = 16843013;
    v9->field_10 = v4;
    v9->field_18 = " complex";
    v9->field_20 = (char *)(4366197 + __strlen_chk(" complex", 9));
    v0 = v9;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414390(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // x8
    struct_0 *v2;  // x19
    void* v3;  // x8, Other Possible Types: unsigned long
    unsigned long long v4[2];  // x0
    unsigned long long v5[2];  // x21, Other Possible Types: unsigned long

    v2->field_0 = v0 + 1;
    if (!sub_413e1c(v2, a1, a2, a3, a4, a5, a6, a7))
        goto LABEL_0x4153e4;
    v5 = v2->field_12e0;
    v3 = v5[1];
    if (v3 + 48 >= 4080)
    {
        v4 = malloc(0x1000);
        if (!v4)
            goto LABEL_0x415498;
        v3 = 0;
        v4[0] = v5;
        v4[1] = 0;
        v5 = v4;
        v2->field_12e0 = &v4[0];
    }
    *((unsigned long *)(v5 + 8)) = v3 + 48;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414424()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414478()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4144c8()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_2 *field_12e0;
} struct_1;

typedef struct struct_0 {
    char padding_0[9];
    char field_9;
} struct_0;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

typedef struct struct_3 {
    char padding_0[8];
    char field_8;
    char field_9;
    unsigned short field_a;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_433c30;

long long sub_41451c(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    struct_3 *v0;  // [bp+0x0]
    unsigned long v1;  // x8
    unsigned long v2;  // x9
    struct_1 *v3;  // x19
    unsigned long long v4;  // x0
    struct_0 *v6;  // x0
    struct_0 *v7;  // x21
    unsigned long long v8[2];  // x0
    void* v9;  // x8, Other Possible Types: unsigned long
    unsigned long long v10[2];  // x23, Other Possible Types: unsigned long
    char v11;  // x9
    struct_4 *v12;  // x0
    struct_3 *v13;  // x0

    if (v1 == v2)
        goto LABEL_0x4153d4;
    v3->field_0 = v1 + 1;
    (unsigned int)v4 = sub_413e1c(v3, a1, a2, a3, a4, a5, a6, a7);
    if (!v4)
        goto LABEL_0x4145dc;
    (unsigned int)v6 = sub_413e1c(v3, a1, a2, a3, a4, a5, a6, a7);
    if (!v6)
        goto LABEL_0x4145dc;
    v10 = v3->field_12e0;
    v7 = v6;
    v9 = v10[1];
    if (v9 + 32 >= 4080)
    {
        v8 = malloc(0x1000);
        if (!v8)
            goto LABEL_0x415498;
        v9 = 0;
        v8[0] = v10;
        v8[1] = 0;
        v10 = v8;
        v3->field_12e0 = &v8[0];
    }
    *((unsigned long *)(v10 + 8)) = v9 + 32;
    v11 = v7->field_9;
    v12 = v10 + v9;
    v12->field_10 = &g_433c30;
    v13 = &v12->field_10;
    v13->field_8 = 13;
    v13->field_a = 257;
    v13->field_9 = v11;
    v13->field_10 = v4;
    v13->field_18 = v7;
    v0 = v13;
    if (v0)
        goto LABEL_0x4145e4;
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    char padding_10[704];
    char field_2d0;
} struct_1;

typedef struct struct_2 {
    char field_0;
} struct_2;

long long sub_4145bc()
{
    unsigned long v0;  // x10
    struct_0 *v1;  // x8
    unsigned int v2;  // w8
    struct_1 *v3;  // x19
    char *v5;  // x8

    if (v0 < 2)
        goto LABEL_0x4145d4;
    v2 = v1->field_1;
    if (!v2)
        goto LABEL_0x4145d4;
    if (!(v2 != 116))
        goto LABEL_0x4145d4;
    if (!sub_416810(v3))
        goto LABEL_0x4153e4;
    if (!v3->field_2d0)
        goto LABEL_0x4153e4;
    v5 = v3->field_0;
    if (v3->field_8 == v5)
        goto LABEL_0x4153e4;
    if (*(v5) != 73)
        goto LABEL_0x4153e4;
    else
        goto LABEL_0x414b90;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4145f8()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_0 *field_12e0;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long sub_41464c()
{
    unsigned long v0;  // x8
    char *v1;  // x8, Other Possible Types: unsigned long
    struct_1 *v2;  // x19
    char *v3;  // x9
    char *v4;  // x11
    void* v6;  // x10, Other Possible Types: unsigned long
    unsigned long long v7;  // x10, Other Possible Types: unsigned long
    char *v8;  // x20, Other Possible Types: unsigned long
    unsigned long long v9;  // x21
    struct_0 *v10;  // x23
    unsigned long long v11[2];  // x0

    v1 = v0 + 1;
    v2->field_0 = v1;
    if (v3 != v1 && 9 >= *(v1) - 48)
    {
        if (v1 == v3)
        {
            v7 = -48;
        }
        else
        {
            v6 = 0;
            do
            {
                v4 = v1;
                v1 += 1;
                v2->field_0 = v1;
                v7 = v6 + *(v4) - 48;
                if (v3 == v1 || 10 <= *((char *)v1) - 48)
                {
                    v8 = v1;
                    goto LABEL_414bfc;
                }
            } while ((v6 = __ROL__(v7 + (v7 << 2), 1) & -2, v3 != v1));
            v7 = v6 - 48;
        }
        v8 = v3;
LABEL_414bfc:
        if (v7 <= &v3[-1 * v1])
        {
            v9 = v8 + v7;
            v2->field_0 = v9;
LABEL_414c18:
            v10 = v2->field_12e0;
            if (v10->field_8 + 32 >= 4080)
            {
                v11 = malloc(0x1000);
                if (!v11)
                    goto LABEL_0x415498;
                v11[0] = v10;
                v11[1] = 0;
                v2->field_12e0 = &v11[0];
            }
        }
    }
    if (!(!0))
        goto LABEL_414c18;
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

long long sub_4146c0()
{
    unsigned long v0;  // x10
    struct_0 *v1;  // x8

    if (v0 < 2)
        goto LABEL_0x4153e0;
    if (41 < v1->field_1 - 79)
        goto LABEL_0x4153e4;
    goto 4278004 + (*((short *)(4362520 + (v1->field_1 - 79 << 1))) << 2);
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414708()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_3 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_4 *field_12e0;
} struct_3;

typedef struct struct_2 {
    char padding_0[9];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
    char field_9;
    unsigned short field_a;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
    char field_1c;
} struct_0;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_4;

extern char g_433d80;

long long sub_41475c(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // x8
    struct_3 *v2;  // x19
    struct_2 *v3;  // x20
    unsigned long long v4[2];  // x0
    void* v5;  // x8, Other Possible Types: unsigned long
    unsigned long long v6[2];  // x21, Other Possible Types: unsigned long
    struct_1 *v7;  // x8
    char v8;  // x10
    struct_0 *v9;  // x8

    v2->field_0 = v0 + 1;
    v3 = sub_413e1c(v2, a1, a2, a3, a4, a5, a6, a7);
    if (!v3)
        goto LABEL_0x4153e4;
    v6 = v2->field_12e0;
    v5 = v6[1];
    if (v5 + 32 >= 4080)
    {
        v4 = malloc(0x1000);
        if (!v4)
            goto LABEL_0x415498;
        v5 = 0;
        v4[0] = v6;
        v4[1] = 0;
        v6 = v4;
        v2->field_12e0 = &v4[0];
    }
    *((unsigned long *)(v6 + 8)) = v5 + 32;
    v7 = v6 + v5;
    v8 = v3->field_9;
    v7->field_10 = &g_433d80;
    v9 = &v7->field_10;
    v9->field_8 = 12;
    v9->field_a = 257;
    v9->field_10 = v3;
    v9->field_18 = 1;
    v9->field_1c = 0;
    v9->field_9 = v8;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4147e0()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
    char padding_9[1];
    unsigned short field_a;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

extern char g_433d80;

long long sub_414834(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // x8
    struct_0 *v2;  // x19
    unsigned long long v3;  // x20
    unsigned long long v4[2];  // x0
    void* v5;  // x8, Other Possible Types: unsigned long
    unsigned long long v6[2];  // x21, Other Possible Types: unsigned long
    struct_3 *v7;  // x8
    struct_2 *v8;  // x8

    v2->field_0 = v0 + 1;
    v3 = sub_413e1c(v2, a1, a2, a3, a4, a5, a6, a7);
    if (!v3)
        goto LABEL_0x4153e4;
    v6 = v2->field_12e0;
    v5 = v6[1];
    if (v5 + 32 >= 4080)
    {
        v4 = malloc(0x1000);
        if (!v4)
            goto LABEL_0x415498;
        v5 = 0;
        v4[0] = v6;
        v4[1] = 0;
        v6 = v4;
        v2->field_12e0 = &v4[0];
    }
    *((unsigned long *)(v6 + 8)) = v5 + 32;
    v7 = v6 + v5;
    v7->field_10 = &g_433d80;
    v8 = &v7->field_10;
    v8->field_8 = 12;
    v8->field_a = 257;
    v8->field_10 = v3;
    v8->field_18 = 0;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4148bc()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414910()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_3 *field_12e0;
} struct_2;

typedef struct struct_1 {
    char padding_0[9];
    char field_9;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_4 {
    char padding_0[8];
    char field_8;
    char field_9;
    unsigned short field_a;
    char padding_c[4];
    unsigned long long field_10;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_3;

extern char g_433d10;

long long sub_414964(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // x8
    struct_2 *v2;  // x19
    struct_1 *v3;  // x20
    unsigned long long v4[2];  // x0
    void* v5;  // x8, Other Possible Types: unsigned long
    unsigned long long v6[2];  // x21, Other Possible Types: unsigned long
    char v7;  // x9
    struct_0 *v8;  // x8
    struct_4 *v9;  // x8

    v2->field_0 = v0 + 1;
    v3 = sub_413e1c(v2, a1, a2, a3, a4, a5, a6, a7);
    if (!v3)
        goto LABEL_0x4153e4;
    v6 = v2->field_12e0;
    v5 = v6[1];
    if (v5 + 32 >= 4080)
    {
        v4 = malloc(0x1000);
        if (!v4)
            goto LABEL_0x415498;
        v5 = 0;
        v4[0] = v6;
        v4[1] = 0;
        v6 = v4;
        v2->field_12e0 = &v4[0];
    }
    *((unsigned long *)(v6 + 8)) = v5 + 32;
    v7 = v3->field_9;
    v8 = v6 + v5;
    v8->field_10 = &g_433d10;
    v9 = &v8->field_10;
    v9->field_8 = 11;
    v9->field_a = 257;
    v9->field_10 = v3;
    v9->field_9 = v7;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4149e4()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414a38()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414a8c()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 1;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

long long sub_414d38(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // [bp+0x0]
    unsigned long long v1;  // x19

    *((int *)&v0) = sub_4172f4(v1, a1, a2, a3, a4, a5, a6, a7);
    if (v0)
        goto LABEL_0x4145e4;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414d4c()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414d9c()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414df0()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414e44()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414e98()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414eec()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414f40()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_414f94()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

extern char g_432650;

long long sub_414fe8(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // x8
    struct_0 *v2;  // x19
    unsigned long long v3;  // x20
    unsigned long long v4[2];  // x0
    void* v5;  // x8, Other Possible Types: unsigned long
    unsigned long long v6[2];  // x21, Other Possible Types: unsigned long
    unsigned long long v7;  // x9
    struct_2 *v8;  // x8
    struct_3 *v9;  // x8

    v2->field_0 = v0 + 2;
    v3 = sub_413e1c(v2, a1, a2, a3, a4, a5, a6, a7);
    if (!v3)
        goto LABEL_0x4153e4;
    v6 = v2->field_12e0;
    v5 = v6[1];
    if (v5 + 32 >= 4080)
    {
        v4 = malloc(0x1000);
        if (!v4)
            goto LABEL_0x415498;
        v5 = 0;
        v4[0] = v6;
        v4[1] = 0;
        v6 = v4;
        v2->field_12e0 = &v4[0];
    }
    v7 = v5 + 32;
    v8 = v6 + v5;
    *((unsigned long long *)(v6 + 8)) = v7;
    v8->field_10 = &g_432650;
    v9 = &v8->field_10;
    v9->field_8 = 16843037;
    v9->field_10 = v3;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_41505c()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

long long sub_4150b0()
{
    struct_0 *v0;  // x19
    unsigned long long v1[2];  // x20, Other Possible Types: unsigned long
    unsigned long v2;  // x8
    void* v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0

    v1 = v0->field_12e0;
    v0->field_0 = v2 + 2;
    v4 = v1[1];
    if (v4 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x415498;
        v4 = 0;
        v5[0] = v1;
        v5[1] = 0;
        v1 = v5;
        v0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v1 + 8)) = v4 + 32;
}

typedef struct struct_4 {
    struct struct_5 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_6 *field_12e0;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    uint128_t field_18;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_3;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_6;

extern char g_433ae0;
extern char g_433b50;

long long sub_415104(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    unsigned long long v0;  // x0
    int tmp_3;  // tmp #3
    struct_4 *v1;  // x19
    char *v2;  // x10
    unsigned long long v3;  // x8
    char *v4;  // x9, Other Possible Types: unsigned long
    unsigned long v5;  // x11, Other Possible Types: unsigned long long
    char *v6;  // x12, Other Possible Types: unsigned long
    char *v7;  // x9, Other Possible Types: unsigned long
    unsigned int v8;  // w11
    char *v9;  // x11, Other Possible Types: unsigned long
    char *v10;  // x21, Other Possible Types: unsigned long
    void* v11;  // x23, Other Possible Types: unsigned long
    unsigned long long v14;  // x0
    unsigned long long v15;  // x0
    unsigned long long v16[2];  // x21, Other Possible Types: unsigned long
    void* v18;  // x8, Other Possible Types: unsigned long
    char *v19;  // x8
    char *v20;  // x10
    unsigned long long v21[2];  // x0
    unsigned long long v23;  // x0
    unsigned long long v24[2];  // x20, Other Possible Types: unsigned long
    void* v25;  // x8, Other Possible Types: unsigned long
    unsigned long long v26;  // x0
    unsigned long long v27[2];  // x0
    struct_0 *v28;  // x0
    struct_2 *v29;  // x0
    unsigned long long v30[2];  // x23, Other Possible Types: unsigned long
    void* v32;  // x8, Other Possible Types: unsigned long
    unsigned long long v33[2];  // x24, Other Possible Types: unsigned long
    void* v35;  // x8, Other Possible Types: unsigned long
    unsigned long long v36[2];  // x0
    unsigned long long v37[2];  // x0
    struct_0 *v38;  // x0
    char *v39;  // x9, Other Possible Types: unsigned long
    struct_0 *v40;  // x0
    struct_3 *v41;  // x0
    struct_0 *v42;  // x0
    unsigned long v43;  // x11, Other Possible Types: unsigned long long
    char *v44;  // x9, Other Possible Types: unsigned long
    struct_1 *v45;  // x0
    unsigned long v46;  // x11, Other Possible Types: unsigned long long
    struct_3 *v47;  // x0

    (unsigned int)v0 = __strlen_chk("Dv", 3);
    v2 = v1->field_0;
    v3 = v1->field_8;
    if (v3 - v2 < v0)
        goto LABEL_0x4153d4;
    if (v0)
    {
        v4 = "Dv";
        v5 = v0;
        v6 = v2;
        do
        { } while ((v4 += 1, tmp_3 = v5, v5 -= 1, v6 += 1, tmp_3 != 1));
    }
    v7 = &v2[v0];
    v1->field_0 = v7;
    if (v3 != v7)
    {
        v8 = *(v7);
        if (8 >= v8 - 49)
        {
            if (9 >= v8 - 48)
            {
                v9 = &v2[v0 + 1];
                do
                {
                    v1->field_0 = v9;
                    if (v3 == v9)
                    {
                        v10 = v7;
                        v7 = v9;
                        v11 = v3;
                        if (v9 != v3)
                            goto LABEL_415334;
                    }
                } while ((v4 += 1, tmp_3 = v5, v5 -= 1, v6 += 1, tmp_3 != 1));
                v10 = v7;
                v11 = v9 - 1;
                v7 = v9;
            }
            else
            {
                v10 = 0;
                v11 = 0;
            }
LABEL_415334:
            if (*((char *)v7) != 95)
                goto LABEL_0x4153d4;
            v20 = v7 + 1;
            v1->field_0 = v20;
            if (v20 != v3 && *(v20) == 112)
            {
                v24 = v1->field_12e0;
                v1->field_0 = v7 + 2;
                v25 = v24[1];
                if (v25 + 32 >= 4080)
                {
                    v27 = malloc(0x1000);
                    if (!v27)
                        goto LABEL_0x415498;
                    v25 = 0;
                    v27[0] = v24;
                    v27[1] = 0;
                    v24 = v27;
                    v1->field_12e0 = &v27[0];
                }
                v38 = v24 + v25;
                *((unsigned long *)(v24 + 8)) = v25 + 32;
                if (v11)
                    v39 = v10;
                else
                    v39 = v10 + 1;
                if ((char)[D] arm64g_calculate_condition(0x14<64>, x23<8>, 0x0<64>, 0x0<64>))
                    v43 = v11;
                else
                    v43 = 1;
                v38->field_10 = &g_433ae0;
                v45 = &v38->field_10;
                v45->field_8 = 16843034;
                v45->field_10 = v39;
                v45->field_18 = v43;
                if (v45)
                    goto LABEL_0x4145e4;
            }
            (unsigned int)v26 = sub_413e1c(v1, 3, a2, a3, a4, a5, a6, a7);
            if (!v26)
                goto LABEL_0x4145dc;
            v33 = v1->field_12e0;
            v35 = v33[1];
            if (v35 + 48 >= 4080)
            {
                v37 = malloc(0x1000);
                if (!v37)
                    goto LABEL_0x415498;
                v35 = 0;
                v37[0] = v33;
                v37[1] = 0;
                v33 = v37;
                v1->field_12e0 = &v37[0];
            }
            v42 = v33 + v35;
            *((unsigned long *)(v33 + 8)) = v35 + 48;
            if (v11)
                v44 = v10;
            else
                v44 = v10 + 1;
            if ((char)[D] arm64g_calculate_condition(0x14<64>, x23<8>, 0x0<64>, 0x0<64>))
                v46 = v11;
            else
                v46 = 1;
            v42->field_10 = &g_433b50;
            v47 = &v42->field_10;
            v47->field_8 = 16843033;
            v47->field_10 = v26;
            v47->field_18 = v44;
            v47->field_20 = v46;
            if (v47)
                goto LABEL_0x4145e4;
        }
    }
    if (v7 != v3 && *(v7) == 95)
    {
        v1->field_0 = &v7[1];
        (unsigned int)v14 = sub_413e1c(v1, 3, a2, a3, a4, a5, a6, a7);
        if (!v14)
            goto LABEL_0x4145dc;
        v16 = v1->field_12e0;
        v18 = v16[1];
        if (v18 + 48 >= 4080)
        {
            v21 = malloc(0x1000);
            if (!v21)
                goto LABEL_0x415498;
            v18 = 0;
            v21[0] = v16;
            v21[1] = 0;
            v16 = v21;
            v1->field_12e0 = &v21[0];
        }
        v28 = v16 + v18;
        *((unsigned long *)(v16 + 8)) = v18 + 48;
        v28->field_10 = &g_433b50;
        v29 = &v28->field_10;
        v29->field_8 = 16843033;
        v29->field_10 = v14;
        (&v29->field_10)[1] = 1 CONCAT 1;
        if (v29)
            goto LABEL_0x4145e4;
    }
    (unsigned int)v15 = sub_4181a0(v1, 3, a2, a3, a4, a5, a6, a7, a8);
    if (!v15)
        goto LABEL_0x4145dc;
    v19 = v1->field_0;
    if (v19 == v1->field_8)
        goto LABEL_0x4153d4;
    if (*(v19) != 95)
        goto LABEL_0x4153d4;
    v1->field_0 = &v19[1];
    (unsigned int)v23 = sub_413e1c(v1, 3, a2, a3, a4, a5, a6, a7);
    if (!v23)
        goto LABEL_0x4145dc;
    v30 = v1->field_12e0;
    v32 = v30[1];
    if (v32 + 48 >= 4080)
    {
        v36 = malloc(0x1000);
        if (!v36)
            goto LABEL_0x415498;
        v32 = 0;
        v36[0] = v30;
        v36[1] = 0;
        v30 = v36;
        v1->field_12e0 = &v36[0];
    }
    v40 = v30 + v32;
    *((unsigned long *)(v30 + 8)) = v32 + 48;
    v40->field_10 = &g_433b50;
    v41 = &v40->field_10;
    v41->field_8 = 16843033;
    v41->field_10 = v23;
    v41->field_18 = v15;
    v41->field_20 = 0;
    if (v41)
        goto LABEL_0x4145e4;
}

typedef struct struct_2 {
    struct struct_3 *field_0;
    struct struct_3 *field_8;
    char padding_10[280];
    unsigned long long field_128;
    unsigned long long field_130;
    char padding_138[4520];
    struct struct_4 *field_12e0;
} struct_2;

typedef struct struct_6 {
    char padding_0[1];
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    char field_8;
} struct_6;

typedef struct struct_5 {
    char padding_0[40];
    unsigned long long field_28;
} struct_5;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_3 {
    char field_0;
    char field_1;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_4;

extern char g_432180;
extern char g_4321f0;
extern char g_4333e0;
extern char g_4335a0;
extern char g_433610;

int sub_41549c(struct_2 *a0, struct_6 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    int tmp_3;  // tmp #3
    struct_0 *v1;  // [bp-0x70], Other Possible Types: unsigned long, void*
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x10]
    char v4;  // [bp+0x0]
    struct_2 *v5;  // x19
    struct_6 *v6;  // x20
    struct_5 *v7;  // tpidr_el0
    char v8[2];  // x10, Other Possible Types: unsigned long
    char *v9;  // x8
    unsigned int v10;  // w11
    unsigned long long v11;  // x0
    unsigned long v12;  // x0, Other Possible Types: unsigned long long
    unsigned long long v13;  // x0
    char v14[2];  // x9
    unsigned long v15;  // w10, Other Possible Types: unsigned int
    char v16[2];  // x9, Other Possible Types: unsigned long, char *
    char v17[2];  // x8, Other Possible Types: unsigned long
    char v18[2];  // x8
    char *v19;  // x10
    unsigned long v20;  // x21, Other Possible Types: unsigned long long
    char *v21;  // x9, Other Possible Types: unsigned long
    unsigned long v22;  // x10, Other Possible Types: unsigned long long
    char v23[2];  // x11, Other Possible Types: unsigned long
    unsigned int v24;  // w8
    char v25[2];  // x10
    void* v27;  // x1
    unsigned long long v28;  // x1
    unsigned int v29;  // w11
    unsigned long long v30;  // x0
    struct_2 *v31;  // x0
    struct_0 *v32;  // x0
    char *v33;  // x11
    char v34[2];  // x11, Other Possible Types: unsigned long
    unsigned int v35;  // w11
    char *v36;  // x9, Other Possible Types: unsigned long
    char v37[2];  // x9
    char *v38;  // x9, Other Possible Types: unsigned long
    unsigned long v39;  // x10, Other Possible Types: unsigned long long
    char v40[2];  // x11, Other Possible Types: unsigned long
    unsigned int v41;  // w11
    unsigned int v42;  // w10
    char v43[2];  // x10
    unsigned long long v44;  // x0
    struct_0 *v45;  // x0
    unsigned long long v46[2];  // x20, Other Possible Types: unsigned long
    void* v47;  // x8, Other Possible Types: unsigned long
    unsigned int v48;  // w11
    char v49[2];  // x9, Other Possible Types: unsigned long
    char v50[2];  // x10, Other Possible Types: unsigned long, char *
    unsigned int v51;  // w11
    char *v52;  // x9, Other Possible Types: unsigned long
    unsigned int v53;  // w10
    char v54[2];  // x10, Other Possible Types: unsigned long
    struct_0 *v55;  // x22, Other Possible Types: unsigned long, unsigned int
    unsigned long long v56[2];  // x0
    char v57[2];  // x8, Other Possible Types: unsigned long
    char v58[2];  // x8, Other Possible Types: unsigned long
    unsigned long long v60[2];  // x23, Other Possible Types: unsigned long
    void* v62;  // x8, Other Possible Types: unsigned long
    char v63[2];  // x10, Other Possible Types: unsigned long
    unsigned long long v64[2];  // x0
    unsigned long long v65;  // x0
    unsigned int v66;  // w11
    struct_1 *v67;  // x22
    unsigned long long v68[2];  // x20, Other Possible Types: unsigned long
    void* v69;  // x8, Other Possible Types: unsigned long
    unsigned long long v70;  // x0
    unsigned long long v71[2];  // x0
    unsigned long long v72[2];  // x23, Other Possible Types: unsigned long
    unsigned long v73;  // x20, Other Possible Types: unsigned long long
    char v74[2];  // x8
    struct_1 *v75;  // x22
    char v76[2];  // x8
    unsigned long long v78;  // x10
    unsigned int v80;  // w8
    struct_1 *v81;  // x23
    void* v82;  // x8, Other Possible Types: unsigned long
    struct_0 *v83;  // x23, Other Possible Types: unsigned long
    unsigned long long v84[2];  // x20, Other Possible Types: unsigned long
    void* v85;  // x8, Other Possible Types: unsigned long
    unsigned long long v86[2];  // x0
    unsigned long long v87[2];  // x21, Other Possible Types: unsigned long
    void* v88;  // x8, Other Possible Types: unsigned long
    unsigned long long v89[2];  // x0
    unsigned long long v90[2];  // x0
    void* v91;  // x1
    unsigned long long v92;  // x1
    struct_2 *v93;  // x0
    unsigned long long v94;  // x0
    struct_1 *v95;  // x22
    struct_1 *v96;  // x22
    struct_1 *v97;  // x23
    struct_0 *v99;  // x23
    unsigned long long v100[2];  // x20, Other Possible Types: unsigned long
    void* v101;  // x8, Other Possible Types: unsigned long
    unsigned long long v144[2];  // x0
    unsigned long long v146;  // x9
    struct_1 *v147;  // x8
    struct_0 *v148;  // x8

    v3 = &v4;
    v5 = a0;
    v6 = a1;
    v2 = v7->field_28;
    v8 = a0->field_0;
    v9 = a0->field_8;
    if (v8 != v9 && v8[0] == 76)
    {
        v8 = &v8[1];
        a0->field_0 = v8;
    }
    if (v9 == v8)
    {
LABEL_415574:
        (unsigned int)v12 = __strlen_chk("StL", 4);
        v17 = v5->field_0;
        if (v5->field_8 - v17 >= v12)
        {
            if (!v12)
                goto LABEL_415620;
            v21 = "StL";
            v22 = v12;
            v23 = v17;
            while (*((char *)v21) == *((char *)v23))
            {
                v21 += 1;
                tmp_3 = v22;
                v22 -= 1;
                v23 += 1;
                if (tmp_3 == 1)
                    goto LABEL_415620;
            }
        }
        (unsigned int)v12 = __strlen_chk("St", 3);
        v17 = v5->field_0;
        if (&(&v5->field_8->field_0)[-1 * v17] >= v12)
        {
            if (v12)
            {
                v38 = "St";
                v39 = v12;
                v40 = v17;
            }
            else
            {
LABEL_415620:
                v5->field_0 = v17 + v12;
                (unsigned int)v44 = sub_41779c(v5, a1);
                if (!v44)
                {
                    v55 = 0;
                    v1 = 0;
                    goto LABEL_415ef0;
                }
                else
                {
                    v60 = v5->field_12e0;
                    v62 = v60[1];
                    if (v62 + 32 >= 4080)
                    {
                        v64 = malloc(0x1000);
                        if (!v64)
                            goto LABEL_4160d4;
                        v62 = 0;
                        v64[0] = v60;
                        v64[1] = 0;
                        v60 = v64;
                        v5->field_12e0 = &v64[0];
                    }
                    v75 = v60 + v62;
                    *((unsigned long *)(v60 + 8)) = v62 + 32;
                    v75->field_10 = &g_433610;
                    v55 = &v75->field_10;
                    *((int *)(v55 + 8)) = 16843042;
                    *((unsigned long long *)(v55 + 16)) = v44;
                    v1 = v55;
                    goto LABEL_4156b4;
                }
            }
            while (*((char *)v38) == *((char *)v40))
            {
                v38 += 1;
                tmp_3 = v39;
                v39 -= 1;
                v40 += 1;
                if (!(tmp_3 != 1))
                    goto LABEL_415620;
            }
        }
        (unsigned int)v45 = sub_41779c(v5, a1);
        v55 = v45;
        v1 = v45;
        if (!v45)
            goto LABEL_415ef0;
LABEL_4156b4:
        v76 = v5->field_0;
        if (!(v5->field_8 != v76) || !((v80 = (unsigned int)v76[0], v80 == 73)))
            goto LABEL_415ef0;
        sub_4162b0(&v5->field_128, &v1);
        if (!a1)
            v91 = 0;
        else
            v92 = 1;
        v93 = v5;
        v94 = sub_416b98();
        if (v94)
        {
            if (v6)
                v6->field_1 = 1;
            v100 = v5->field_12e0;
            v101 = v100[1];
            if (v101 + 32 < 4080)
            {
LABEL_41572c:
                v146 = v101 + 32;
                v147 = v100 + v101;
                *((unsigned long long *)(v100 + 8)) = v146;
                v147->field_10 = &g_4335a0;
                v148 = &v147->field_10;
                v148->field_10 = v55;
                v148->field_18 = v94;
                v55 = (unsigned int)v148;
                v148->field_8 = 16843040;
                goto LABEL_415ef0;
            }
            else
            {
                v144 = malloc(0x1000);
                if (v144)
                {
                    v101 = 0;
                    v144[0] = v100;
                    v144[1] = 0;
                    v100 = v144;
                    v5->field_12e0 = &v144[0];
                    goto LABEL_41572c;
                }
            }
        }
    }
    else
    {
        v10 = *((char *)v8);
        if (v10 == 90)
        {
            if (!(v8 != v9) || !(v11) || !(v14 != v57) || !(v14[0] == 69))
                goto LABEL_415eec;
            v19 = &v14[1];
            v20 = v11;
            v5->field_0 = &v19;
            if (v19 != v57)
            {
                if (*(v19) == 115)
                {
                    v25 = v14 + 1;
                    v5->field_0 = &v25[0];
                    if (v25 != v57)
                    {
                        v29 = v25[0];
                        if (v29 == 95)
                        {
                            v33 = &v14[1 + 1];
                            if (v33 != v57)
                            {
                                v35 = *(v33);
                                if (9 >= v35 - 48)
                                {
                                    v57 = v14 + 2;
                                    goto LABEL_415f8c;
                                }
                                else
                                {
                                    if (v35 == 95 && (v49 = v14 + 4, v49 != v57))
                                    {
                                        do
                                        {
                                            v48 = *((char *)v49);
                                            if (9 < v48 - 48)
                                            {
                                                if (v48 == 95)
                                                    v57 = v49 + 1;
                                                else
                                                    v57 = v25;
                                                goto LABEL_415f8c;
                                            }
                                        } while ((v49 += 1, v57 != v49));
                                    }
                                }
                            }
                        }
                        else if (9 >= v29 - 48)
                        {
                            v36 = &v14[1 + 1];
                            while (v57 != v36)
                            {
                                v41 = *((char *)v36);
                                v36 += 1;
                                if (v41 - 48 >= 10)
                                    goto LABEL_415f88;
                            }
                        }
LABEL_415f88:
                        v57 = v25;
                    }
LABEL_415f8c:
                    v68 = v5->field_12e0;
                    v5->field_0 = v57;
                    v69 = v68[1];
                    if (v69 + 32 >= 4080)
                    {
                        v71 = malloc(0x1000);
                        if (!v71)
                            goto LABEL_4160d4;
                        v69 = 0;
                        v71[0] = v68;
                        v71[1] = 0;
                        v68 = v71;
                        v5->field_12e0 = &v71[0];
                    }
                    *((unsigned long *)(v68 + 8)) = v69 + 32;
                    v81 = v68 + v69;
                    v81->field_10 = &g_432180;
                    v83 = &v81->field_10;
                    *((int *)(v83 + 8)) = 16843015;
                    *((char **)(v83 + 16)) = "string literal";
                    *((char **)(v83 + 24)) = (char *)(4365891 + __strlen_chk("string literal", 15));
                    v84 = v5->field_12e0;
                    v85 = v84[1];
                    if (v85 + 32 < 4080)
                    {
LABEL_416028:
                        v96 = v84 + v85;
                        *((unsigned long *)(v84 + 8)) = v85 + 32;
                        v96->field_10 = &g_4333e0;
                        v55 = &v96->field_10;
                        *((int *)(v55 + 8)) = 16843032;
LABEL_41604c:
                        *((unsigned long *)(v55 + 16)) = v20;
                        *((unsigned long *)(v55 + 24)) = v83;
                        goto LABEL_415ef0;
                    }
                    else
                    {
                        v89 = malloc(0x1000);
                        if (v89)
                        {
                            v85 = 0;
                            v89[0] = v84;
                            v89[1] = 0;
                            v84 = v89;
                            v5->field_12e0 = &v89[0];
                            goto LABEL_416028;
                        }
                    }
                }
                if (*(v19) == 100)
                {
                    v50 = v14 + 1;
                    v5->field_0 = &v50[0];
                    if (v50 == v57)
                    {
                        v34 = v50;
                        v50 = v57;
                    }
                    else
                    {
                        v34 = v50;
                        if (v50[0] == 110)
                        {
                            v50 = &v14[1 + 1];
                            v5->field_0 = &v50;
                            if (!(v50 != v57))
                                goto LABEL_415eb4;
                            goto LABEL_415e7c;
                        }
                    }
                    if (v34 == v57)
                        goto LABEL_415eb4;
LABEL_415e7c:
                    if (9 >= *((char *)v50) - 48)
                    {
                        v52 = v50 + 1;
                        do
                        {
                            v50 = v52;
                            v5->field_0 = v52;
                        } while (v57 != v52 && (v51 = (unsigned int)(char)*((char *)v52), v52 += 1, v51 - 48 < 10));
                    }
LABEL_415eb4:
                    if (v50 != v57 && *((char *)v50) == 95 && (v5->field_0 = (struct struct_3 *)(v50 + 1), (unsigned int)v65 = sub_41549c(v5, a1, a2, a3, a4, a5, a6, a7), v65))
                    {
                        v72 = v5->field_12e0;
                        v73 = v65;
LABEL_416060:
                        v82 = *((long long *)(v72 + 8));
                        if (v82 + 32 < 4080)
                        {
LABEL_41608c:
                            v95 = v72 + v82;
                            *((unsigned long *)(v72 + 8)) = v82 + 32;
                            v95->field_10 = &g_4333e0;
                            v55 = &v95->field_10;
                            *((int *)(v55 + 8)) = 16843032;
                            *((unsigned long long *)(v55 + 16)) = v20;
                            *((unsigned long *)(v55 + 24)) = v73;
LABEL_415ef0:
                            if (v7->field_28 != v2)
                                __stack_chk_fail(); /* do not return */
                            return v55;
                        }
                        else
                        {
                            v86 = malloc(0x1000);
                            if (v86)
                            {
                                v82 = 0;
                                v86[0] = v72;
                                v86[1] = 0;
                                v72 = v86;
                                v5->field_12e0 = &v86[0];
                                goto LABEL_41608c;
                            }
                        }
LABEL_4160d4:
                        ::0x40f080::std::terminate();
                    }
                    goto LABEL_415eec;
                }
            }
            (unsigned int)v30 = sub_41549c(v5, a1, a2, a3, a4, a5, a6, a7);
            if (v30)
            {
                v58 = v5->field_0;
                v37 = v5->field_8;
                v73 = v30;
                if (v58 != v37)
                {
                    v42 = v58[0];
                    if (v42 == 95)
                    {
                        v43 = &v58[1];
                        if (v43 != v37)
                        {
                            v53 = v43[0];
                            if (9 >= v53 - 48)
                            {
                                v58 += 1;
                            }
                            else
                            {
                                if (v53 == 95)
                                {
                                    v63 = v58 + 1;
                                    if (v63 != v37)
                                    {
                                        do
                                        {
                                            v66 = *((char *)v63);
                                            if (9 < v66 - 48)
                                            {
                                                if (v66 == 95)
                                                    v58 = v63 + 1;
                                                break;
                                            }
                                        } while ((v49 += 1, v57 != v49));
                                    }
                                }
                            }
                        }
                    }
                    else if (9 >= v42 - 48)
                    {
                        v54 = &v58[1];
                        do
                        {
                            if (v37 == v54)
                            {
                                v58 = v37;
                                break;
                            }
                        } while ((v49 += 1, v57 != v49));
                    }
                }
                v72 = v5->field_12e0;
                v5->field_0 = v58;
                goto LABEL_416060;
            }
LABEL_415eec:
            v55 = 0;
            goto LABEL_415ef0;
        }
        if (v10 != 83)
        {
            if (v10 != 78)
                goto LABEL_415574;
            if (v8 == v9)
                goto LABEL_415eec;
            v16 = v8 + 1;
            a0->field_0 = &v16[0];
            if (v16 != v9)
            {
                if (v16[0] == 114)
                {
                    v16 = v8 + 2;
                    v15 = 4;
                    a0->field_0 = v16;
                    if (!(v16 != v9))
                        goto LABEL_4158e4;
                }
                else
                {
                    v15 = 0;
                    if (v16 == v9)
                        goto LABEL_4158e4;
                }
                if (*((char *)v16) == 86)
                {
                    v16 += 1;
                    v15 = (unsigned int)v15 | 2;
                    a0->field_0 = v16;
                }
                if (v16 != v9 && *((char *)v16) == 75)
                {
                    v16 += 1;
                    v15 = (unsigned int)v15 | 1;
                    a0->field_0 = &v16[0];
                }
LABEL_4158e4:
                if (!a1)
                    goto LABEL_4158ec;
            }
            else
            {
                v15 = 0;
                v16 = v9;
                if (!(a1))
                    goto LABEL_4158ec;
            }
            a1->field_4 = v15;
LABEL_4158ec:
            if (v16 != v9)
            {
                if (*((char *)v16) == 79)
                {
                    a0->field_0 = v16 + 1;
                    if (a1)
                    {
                        a1->field_8 = 2;
                        goto LABEL_415944;
                    }
                }
                if (*((char *)v16) == 82)
                {
                    a0->field_0 = v16 + 1;
                    if (a1)
                    {
                        a1->field_8 = 1;
                        goto LABEL_415944;
                    }
                }
            }
            if (a1)
                a1->field_8 = 0;
LABEL_415944:
            v1 = 0;
            (unsigned int)v70 = __strlen_chk("St", 3);
            v74 = v5->field_0;
            if (v5->field_8 - v74 >= v70)
            {
                if (v70)
                {
                    v78 = v70;
                    do
                    {
                        if ((unsigned int)"St" != v74[0])
                            goto LABEL_415a10;
                    } while ((v49 += 1, v57 != v49));
                }
                v87 = v5->field_12e0;
                v5->field_0 = &v74[v70];
                v88 = v87[1];
                if (v88 + 32 >= 4080)
                {
                    v90 = malloc(0x1000);
                    if (!v90)
                        goto LABEL_4160d4;
                    v88 = 0;
                    v90[0] = v87;
                    v90[1] = 0;
                    v87 = v90;
                    v5->field_12e0 = &v90[0];
                }
                *((unsigned long *)(v87 + 8)) = v88 + 32;
                v97 = v87 + v88;
                v97->field_10 = &g_432180;
                v99 = &v97->field_10;
                v99->field_8 = 16843015;
                v99->field_10 = "std";
                v99->field_18 = (char *)(4364550 + __strlen_chk("std", 4));
                v1 = v99;
            }
LABEL_415a10:
        }
        else if (!(&v9[-1 * v8] >= 2) || !(*((char *)(v8 + 1)) == 116))
        {
            (unsigned int)v13 = sub_416810(a0);
            if (!(v13) || !(v5->field_8 != v18) || !((v24 = (unsigned int)v18[0], v24 == 73)))
                goto LABEL_415eec;
            v20 = v13;
            if (!a1)
                v27 = 0;
            else
                v28 = 1;
            v31 = v5;
            v32 = sub_416b98();
            if (!v32)
                goto LABEL_415eec;
            v83 = v32;
            if (v6)
                v6->field_1 = 1;
            v46 = v5->field_12e0;
            v47 = v46[1];
            if (v47 + 32 >= 4080)
            {
                v56 = malloc(0x1000);
                if (!v56)
                    goto LABEL_4160d4;
                v47 = 0;
                v56[0] = v46;
                v56[1] = 0;
                v46 = v56;
                v5->field_12e0 = &v56[0];
            }
            v67 = v46 + v47;
            *((unsigned long *)(v46 + 8)) = v47 + 32;
            v67->field_10 = &g_4335a0;
            v55 = &v67->field_10;
            *((int *)(v55 + 8)) = 16843040;
            goto LABEL_41604c;
        }
    }
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[4800];
    struct struct_2 *field_12e0;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_1 {
    char field_0;
    char field_1;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_433680;

int sub_4160d8(struct_0 *a0)
{
    char v0;  // [bp-0x40]
    struct_0 *v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    char v4[2];  // x9
    unsigned long long v5;  // x8
    struct_0 *v6;  // x19
    unsigned int v7;  // w11
    unsigned long long v9;  // x10
    char v10[2];  // x9, Other Possible Types: unsigned long
    unsigned long long v11;  // x1
    unsigned long long v12;  // x2
    unsigned long long v13;  // x3
    unsigned long long v14;  // x4
    unsigned long long v15;  // x5
    unsigned long long v16;  // x6
    unsigned long long v17;  // x7
    unsigned long long v18;  // x1
    unsigned long long v19;  // x2
    unsigned long long v20;  // x3
    unsigned long long v21;  // x4
    unsigned long long v22;  // x5
    unsigned long long v23;  // x6
    unsigned long long v24;  // x7
    unsigned long long v26;  // x21
    unsigned long long v27[2];  // x22, Other Possible Types: unsigned long
    unsigned long long v28;  // x20
    void* v29;  // x8, Other Possible Types: unsigned long
    unsigned long long v30[2];  // x0
    char v31[2];  // x8
    struct_3 *v32;  // x0
    unsigned long v33;  // x1

    v2 = &v3;
    v4 = a0->field_0;
    v5 = *((long long *)&a0->field_8);
    v6 = a0;
    if (v5 == v4)
        return sub_413e1c(a0, v18, v19, v20, v21, v22, v23, v24);
    v7 = v4[0];
    if (v7 == 74)
    {
        v10 = &v4[1];
        *((char *[2])a0) = v10;
        v9 = *((long long *)(a0 + 24)) - *((long long *)(a0 + 16));
        if (v10 == v5)
            sub_4160d8(a0);
        while (*((char *)v10) != 69)
        {
            do
            {
                (unsigned int)a0 = sub_4160d8(a0);
                v1 = a0;
                if (!a0)
                    return a0;
            } while ((sub_4162b0(a0 + 16, &v1), v10 = v6->field_0, v10 == *((long long *)&v6->field_8)));
        }
        v26 = __ROL__(*((long long *)(a0 + 24)) - *((long long *)(a0 + 16)) >> 63 & 0xe000000000000000 | __ROL__(v9, 61) & 2305843009213693951, 3) & -8;
        v6->field_0 = v10 + 1;
        v27 = v6->field_12e0;
        v28 = sub_41d90c(a0, *((long long *)(a0 + 16)) + v26, *((long long *)(a0 + 24)));
        v6->field_18 = v6->field_10 + v26;
        v29 = v27[1];
        if (v29 + 32 >= 4080)
        {
            v30 = malloc(0x1000);
            if (!v30)
                ::0x40f080::std::terminate();
            v29 = 0;
            v30[0] = v27;
            v30[1] = 0;
            v27 = v30;
            v6->field_12e0 = &v30[0];
        }
        v32 = v27 + v29;
        *((unsigned long *)(v27 + 8)) = v29 + 32;
        v32->field_10 = &g_433680;
        a0 = &v32->field_10;
        *((int *)(a0 + 8)) = 16843036;
        *((unsigned long long *)(a0 + 16)) = v28;
        *((unsigned long *)(a0 + 24)) = v33;
        return a0;
    }
    if (v7 == 76)
    {
        if (v5 - (char *)v4 < 2)
            return (unsigned int)sub_419e78(a0);
        if (v4[1] != 90)
            return (unsigned int)sub_419e78(a0);
        *((char *[2])a0) = v4 + 1;
        (unsigned int)a0 = sub_4132d4(a0);
        if (!a0)
            return a0;
LABEL_41612c:
        v31 = v6->field_0;
        if (!(v31 != *((long long *)&v6->field_8) && v31[0] == 69))
            return 0;
        v6->field_0 = &v31[1];
        return a0;
    }
    else if (v7 == 88)
    {
        *((char *[2])a0) = &v4[1];
        (unsigned int)a0 = sub_4181a0(a0, v11, v12, v13, v14, v15, v16, v17, *((long long *)&v0));
        if (!a0)
            return a0;
        goto LABEL_41612c;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    struct struct_1 *field_8;
    unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

void sub_4162b0(struct_0 *a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long *v2;  // x8, Other Possible Types: unsigned long
    struct_0 *v3;  // x19
    void* v4;  // x23
    unsigned long v5;  // x21
    void* v6;  // x0
    unsigned long long v7;  // x22, Other Possible Types: unsigned long
    unsigned long long v8;  // x9
    unsigned long long v9;  // x29

    v0 = &v1;
    v2 = a0->field_8;
    v3 = a0;
    if (v2 != a0->field_10)
    {
        v8 = *(a1);
        a0->field_8 = v2 + 8;
        *((unsigned long long *)v2) = v8;
        v9 = v0;
        return;
    }
    v4 = a0->field_0;
    v5 = v2 - v4;
    if (a0 + 1 == v4)
    {
        v6 = malloc(__ROL__(v5, 1) & -2);
        if (v6)
        {
            if (v5)
                memmove(v6, v4, v5);
            v3->field_0 = v6;
            v2 = v6 + ((v5 >> 63 & 0xe000000000000000 | __ROL__(v5, 61) & 2305843009213693951) << 3);
            v3->field_8 = v2;
            v3->field_10 = v6 + ((v5 >> 63 & 0xc000000000000000 | __ROL__(v5, 62) & 4611686018427387903) << 3);
            v8 = *(a1);
            v3->field_8 = v2 + 8;
            *((unsigned long long *)v2) = v8;
            v9 = v0;
            return;
        }
    }
    else
    {
        v7 = realloc(v4, __ROL__(v5, 1) & -2);
        v3->field_0 = v7;
        if (v7)
        {
            v2 = v7 + ((v5 >> 63 & 0xe000000000000000 | __ROL__(v5, 61) & 2305843009213693951) << 3);
            v3->field_8 = v2;
            v3->field_10 = v7 + ((v5 >> 63 & 0xc000000000000000 | __ROL__(v5, 62) & 4611686018427387903) << 3);
            v8 = *(a1);
            v3->field_8 = v2 + 8;
            *((unsigned long long *)v2) = v8;
            v9 = v0;
            return;
        }
    }
    ::0x40f080::std::terminate();
}

int sub_41636c(struct struct_0 *a0[2])
{
    char *v0;  // x11
    char *v1;  // x9
    char *v2;  // x8, Other Possible Types: unsigned long
    char *v4;  // x12, Other Possible Types: unsigned long
    char *v5;  // x10, Other Possible Types: unsigned long
    char *v7;  // x10, Other Possible Types: unsigned long
    char *v8;  // x12, Other Possible Types: unsigned long
    char *v9;  // x10, Other Possible Types: unsigned long
    char *v10;  // x11, Other Possible Types: unsigned long
    char *v12;  // x10, Other Possible Types: unsigned long
    char *v13;  // x8, Other Possible Types: unsigned long
    char *v14;  // x11, Other Possible Types: unsigned long
    unsigned int v15;  // w11
    char *v17;  // x8, Other Possible Types: unsigned long
    char *v18;  // x12, Other Possible Types: unsigned long
    char *v19;  // x11, Other Possible Types: unsigned long
    char *v21;  // x10, Other Possible Types: unsigned long
    char *v22;  // x10, Other Possible Types: unsigned long

    v0 = a0[0];
    v1 = a0[1];
    if (v0 == v1)
        return 1;
    if (*(v0) == 104)
    {
        v2 = v0 + 1;
        a0[0] = v2;
        if (v2 != v1)
        {
            v8 = v2;
            v7 = v2;
            if (*(v2) == 110)
            {
                v7 = v0 + 2;
                v8 = v7;
                a0[0] = v7;
            }
            if (!(v8 != v1))
                goto LABEL_416454;
        }
        else
        {
            v7 = v1;
            if (v2 == v1)
                goto LABEL_416454;
        }
        if (9 >= *((char *)v7) - 48)
        {
            v9 = v7 + 1;
            do
            {
                a0[0] = v9;
                if (v1 == v9)
                {
                    v7 = v1;
                    v10 = v1;
                    goto LABEL_41645c;
                }
            } while ((v15 = (unsigned int)(char)*((char *)v12), v12 += 1, v15 - 48 < 10));
            v7 = v9 - 1;
            v10 = v7;
            goto LABEL_41645c;
        }
LABEL_416454:
        v2 = 0;
        v10 = 0;
LABEL_41645c:
        if (v2 == v10)
            return 1;
        if (v7 == v1)
            return 1;
        if (*((char *)v7) == 95)
        {
            a0[0] = v7 + 1;
            return 0;
        }
    }
    else if (*(v0) == 118)
    {
        v13 = v0 + 1;
        a0[0] = v13;
        if (v13 != v1)
        {
            v4 = v13;
            v5 = v13;
            if (*(v13) == 110)
            {
                v5 = v0 + 2;
                v4 = v5;
                a0[0] = v5;
            }
            if (!(v4 != v1))
                goto LABEL_4164d8;
        }
        else
        {
            v5 = v1;
            if (v13 == v1)
                goto LABEL_4164d8;
        }
        if (9 >= *((char *)v5) - 48)
        {
            v12 = v5 + 1;
            do
            {
                a0[0] = v12;
                if (v1 == v12)
                {
                    v5 = v1;
                    v14 = v1;
                    goto LABEL_4164e0;
                }
            } while ((v15 = (unsigned int)(char)*((char *)v12), v12 += 1, v15 - 48 < 10));
            v5 = v12 - 1;
            v14 = v5;
            goto LABEL_4164e0;
        }
LABEL_4164d8:
        v13 = 0;
        v14 = 0;
LABEL_4164e0:
        if (v13 == v14)
        {
            return 1;
        }
        else if (v5 == v1)
        {
            return 1;
        }
        else if (*((char *)v5) == 95)
        {
            v17 = v5 + 1;
            a0[0] = v17;
            if (v17 == v1)
            {
                v19 = v1;
                v18 = v17;
            }
            else
            {
                v18 = v17;
                v19 = v17;
                if (*(v17) == 110)
                {
                    v19 = v5 + 2;
                    a0[0] = v19;
                    if (!(v19 != v1))
                        goto LABEL_4165a0;
                    goto LABEL_416564;
                }
            }
            if (v18 == v1)
                goto LABEL_4165a0;
LABEL_416564:
            if (9 >= *((char *)v19) - 48)
            {
                v21 = v19 + 1;
                do
                {
                    a0[0] = v21;
                    if (v1 == v21)
                    {
                        v19 = v1;
                        v22 = v1;
                        goto LABEL_4165a8;
                    }
                } while ((v15 = (unsigned int)(char)*((char *)v12), v12 += 1, v15 - 48 < 10));
                v19 = v21 - 1;
                v22 = v19;
                goto LABEL_4165a8;
            }
LABEL_4165a0:
            v17 = 0;
            v22 = 0;
LABEL_4165a8:
            if (v17 == v22)
            {
                return 1;
            }
            else if (v19 == v1)
            {
                return 1;
            }
            else if (*((char *)v19) == 95)
            {
                a0[0] = v19 + 1;
                return 0;
            }
        }
    }
}

long long sub_4165f4()
{
    return 0;
}

long long sub_4165fc()
{
    return 0;
}

long long sub_416604()
{
    return 0;
}

long long sub_41660c()
{
    unsigned long v0;  // x0

    return v0;
}

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    struct struct_2 *field_20;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_416610(struct_3 *a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v2;  // x20

    v0 = &v1;
    sub_416694(a1, a0->field_10, a0->field_18);
    v2 = a0->field_20;
    if (v2->field_9 == 1)
        return v2->field_0->field_20(v2, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_416680()
{
    unsigned long v0;  // x0

    return v0;
}

long long sub_416684()
{
    return 0;
}

long long sub_416690()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_4 *field_10;
    struct struct_2 *field_18;
} struct_6;

typedef struct struct_4 {
    struct struct_5 *field_0;
    char padding_8[1];
    char field_9;
} struct_4;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_5 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_5;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern char g_416720;

void sub_416694(unsigned long long a0[3], unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x50]
    unsigned long long v2[3];  // [bp-0x48]
    struct_3 *v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]
    unsigned long v11;  // x21
    unsigned long v12;  // x20
    unsigned long v13;  // x19
    unsigned long v14;  // x30
    unsigned long v15;  // x20
    unsigned long long v16;  // x10
    void* v17;  // x21
    unsigned long long v18[3];  // x19
    unsigned long long v19;  // x9
    unsigned long v20;  // x0, Other Possible Types: unsigned long long
    void* v21;  // x0
    unsigned long v22;  // x1
    unsigned long v23;  // x8, Other Possible Types: unsigned long long
    struct_6 *v24;  // x20
    unsigned long long v27;  // x29
    struct_4 *v31;  // x21
    struct_2 *v33;  // x20
    struct_3 *v35;  // x29

    v5 = v11;
    v6 = v12;
    v7 = v13;
    v8 = &v10;
    v9 = v14;
    v15 = a2 - a1;
    if (a2 == a1)
    {
        v27 = v8;
        return;
    }
    v23 = a0[1];
    v16 = a0[2];
    v17 = a1;
    v18 = a0;
    v19 = v23 + v15;
    if (v16 > v19)
    {
        v20 = a0[0];
    }
    else
    {
        v21 = a0[0];
        if (a1 < v19)
            v22 = v19;
        else
            v22 = __ROL__(v16, 1) & -2;
        v18[2] = v22;
        v20 = realloc(v21, v22);
        v18[0] = v20;
        if (v20)
        {
            v23 = v18[1];
        }
        else
        {
            v0 = v17;
            v1 = v15;
            v2[0] = v18;
            v3 = &v8;
            v4 = &g_416720;
            v24 = ::0x40f080::std::terminate();
            sub_416694(v22, "construction vtable for ", (char *)(4364517 + __strlen_chk("construction vtable for ", 25)));
            v31 = v24->field_10;
            v31->field_0->field_20(v31, v22);
            if (v31->field_9 != 1)
                v31->field_0->field_28(v31, v22);
            sub_416694(v22, "-in-", (char *)(4364542 + __strlen_chk("-in-", 5)));
            v33 = v24->field_18;
            v33->field_0->field_20(v33, v22);
            if ((unsigned int)v33->field_9 == 1)
            {
                v35 = v3;
                return;
            }
            goto *((long long *)(*((long long *)x20<8>) + 40));
        }
    }
    memmove(v20 + v23, v17, v15);
    v18[1] = v18[1] + v15;
}

long long sub_41680c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    char padding_10[280];
    struct struct_3 *field_128;
    unsigned long long field_130;
    char padding_138[4520];
    struct struct_4 *field_12e0;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_4;

extern char g_433450;

int sub_416810(struct_1 *a0)
{
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    char *v3;  // x22
    unsigned long long v4;  // x20
    char *v5;  // x21
    struct_1 *v6;  // x19
    unsigned long long *v7;  // x8
    unsigned long long v8;  // x9
    unsigned int v11[4];  // w20, Other Possible Types: unsigned int, unsigned long
    unsigned long v12;  // x10, Other Possible Types: unsigned long long
    void* v15;  // x8, Other Possible Types: unsigned long
    char *v16;  // x12, Other Possible Types: unsigned long
    char *v17;  // x9, Other Possible Types: unsigned long
    unsigned long v18;  // x12, Other Possible Types: unsigned long long
    unsigned long long *v20;  // x10
    unsigned long long v22;  // x8

    v1 = &v2;
    v3 = a0->field_0;
    v4 = a0->field_8;
    if (!(v3 != v4) || !(*(v3) == 83))
    {
LABEL_416b78:
        v11 = 0;
LABEL_416b7c:
        return v11;
    }
    v5 = v3 + 1;
    v6 = a0;
    a0->field_0 = v5;
    if (v4 != v5)
    {
        if (!islower(*(v5)))
            goto LABEL_4168d0;
    }
    else
    {
        if (!islower(0))
        {
LABEL_4168d0:
            if (v5 != v4 && *(v5) == 95)
            {
                v7 = a0->field_128;
                v8 = a0->field_130;
                a0->field_0 = &v3[2];
                if (v7 != v8)
                {
                    v11 = *(v7);
                    goto LABEL_416b7c;
                }
            }
            else if (v4 != v5 && (unsigned int)v12 >= 48 && ((unsigned int)v12 < 58 || 25 >= ((unsigned int)v12 - 65 & 255)))
            {
                v15 = 0;
                v16 = v3 + 2;
                do
                {
                    v17 = v16;
                    if (58 > ((unsigned int)v12 & 255))
                    {
                        v18 = -48;
                    }
                    else if (25 >= ((unsigned int)v12 - 65 & 255))
                    {
                        v18 = -55;
                    }
                    else
                    {
                        v17 = v16 - 1;
                        break;
                    }
                } while ((v15 = v18 + (v12 & 255) + 36 * v15, a0->field_0 = (struct struct_2 *)v17, v4 != v17 && (v12 = (unsigned long long)*(v17), v16 = v17 + 1, 47 < (unsigned int)v12)));
                if (v17 != v4 && *((char *)v17) == 95 && (v20 = a0->field_128, v22 = v15 + 1, a0->field_0 = (struct struct_2 *)(v17 + 1), a0->field_130 - v20 >> 3 > v22))
                {
                    v11 = v20[v22];
                    goto LABEL_416b7c;
                }
            }
        }
    }
    if (v4 == v5)
        goto LABEL_416b78;
    v11 = 0;
    if (18 < *(v5) - 97)
        goto LABEL_416b7c;
}

typedef struct struct_1 {
    char padding_0[40];
    unsigned long long field_28;
} struct_1;

typedef struct struct_7 {
    struct struct_8 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[544];
    struct struct_2 *field_240;
    struct struct_9 *field_248;
    struct struct_2 *field_250;
    char padding_258[4232];
    struct struct_10 *field_12e0;
} struct_7;

typedef struct struct_11 {
    char padding_0[8];
    unsigned long long field_8;
} struct_11;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_4 {
    char padding_0[8];
    char field_8;
    char padding_9[7];
    struct struct_5 *field_10;
    unsigned long long field_18;
} struct_4;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_6 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_6;

typedef struct struct_8 {
    char field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_10 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_10;

typedef struct struct_5 {
    struct struct_0 *field_0;
} struct_5;

typedef struct struct_0 {
    char padding_0[9];
    char field_9;
    char field_a;
    char field_b;
} struct_0;

extern char g_4334c0;
extern char g_433530;

int sub_416b98()
{
    unsigned long v0;  // [bp-0xe8]
    int tmp_0;  // tmp #0
    struct_1 *v1;  // [bp-0xe0]
    struct_2 *v2;  // [bp-0xd8]
    unsigned long v3;  // [bp-0xd0]
    struct_4 *v4;  // [bp-0xc8]
    struct_2 *v5;  // [bp-0xc0], Other Possible Types: unsigned long
    struct_2 *v6;  // [bp-0xb8], Other Possible Types: int, unsigned long
    struct_2 *v7;  // [bp-0xb0]
    char v8;  // [bp-0xa8]
    unsigned long v9;  // [bp-0x68]
    unsigned long v10;  // [bp-0x10]
    char v11;  // [bp+0x0]
    struct_1 *v12;  // tpidr_el0
    struct_1 *v13;  // x11, Other Possible Types: unsigned long
    struct_7 *v14;  // x0
    char *v15;  // x8
    unsigned long long v16;  // x9
    struct_7 *v17;  // x19
    unsigned long long v18;  // x20
    struct_11 *v19;  // x21
    struct_2 *v20;  // x25, Other Possible Types: unsigned long
    struct_2 *v21;  // x23
    struct struct_2 **v22;  // x28
    unsigned long long v24;  // x10
    struct_2 *v25;  // x8, Other Possible Types: unsigned long
    void* v26;  // x9, Other Possible Types: unsigned long
    struct_2 *v27;  // x10, Other Possible Types: unsigned long
    struct_2 *v28;  // x9, Other Possible Types: unsigned long
    struct_2 *v29;  // x9
    unsigned long long v30;  // x10
    unsigned long long v31[2];  // x27, Other Possible Types: unsigned long
    struct struct_0 **v32;  // x25, Other Possible Types: unsigned long
    unsigned long long v33;  // x26
    void* v34;  // x8, Other Possible Types: unsigned long
    unsigned long long v35[2];  // x0
    struct_3 *v36;  // x24
    unsigned long v37;  // x8, Other Possible Types: unsigned long long
    unsigned long v38;  // x9, Other Possible Types: unsigned long long
    struct struct_0 **v39;  // x10, Other Possible Types: unsigned long
    char v40[12];  // x11
    unsigned long v42;  // x9, Other Possible Types: unsigned long long
    struct struct_0 **v43;  // x10, Other Possible Types: unsigned long
    char v44[12];  // x11
    char v46[12];  // x9
    struct_4 *v48;  // x24, Other Possible Types: unsigned long
    unsigned long long *v49;  // x8, Other Possible Types: unsigned long
    struct_2 *v50;  // x27
    unsigned long v51;  // x25
    struct_2 *v52;  // x1, Other Possible Types: unsigned long
    void* v53;  // x0
    unsigned long v54;  // x26, Other Possible Types: unsigned long long
    unsigned long long v57;  // x9
    struct_2 *v58;  // x8, Other Possible Types: unsigned long
    unsigned int v59;  // w24
    char *v60;  // x8, Other Possible Types: unsigned long
    unsigned long long v61;  // x21
    unsigned long long v62[2];  // x22, Other Possible Types: unsigned long
    unsigned long long v63;  // x20
    void* v64;  // x8, Other Possible Types: unsigned long
    unsigned long long v65[2];  // x0
    struct_3 *v66;  // x0
    struct_6 *v67;  // x0
    unsigned long long v68;  // x29

    v10 = &v11;
    v13 = v12;
    v9 = v12->field_28;
    v15 = v14->field_0;
    v16 = v14->field_8;
    if (!(v15 == v16 || *(v15) != 73))
    {
        v17 = v14;
        v18 = v52;
        v60 = v15 + 1;
        v1 = v12;
        v14->field_0 = v60;
        if (((char)v52 & 1))
            v14->field_248 = &v14->field_240;
        v19 = &v14->field_10;
        v20 = &v9;
        v21 = &v19[36].field_8;
        v22 = &v19[35].field_8;
        v24 = v19->field_8 - v14->field_10 >> 63 & 0xe000000000000000 | __ROL__(v19->field_8 - v14->field_10, 61) & 2305843009213693951;
        v2 = &v9;
        v3 = &v19[40].field_8;
        v0 = v24;
        if (v60 == v16)
            goto LABEL_416c58;
        while (*((char *)v60) != 69)
        {
            do
            {
LABEL_416c58:
                if (!((char)v18 & 1))
                {
                    v5 = sub_4160d8(v17);
                    if (!v5)
                        goto LABEL_41700c;
                    else
                        sub_4162b0(v19, &v5);
                    continue;
                }
                v5 = &v8;
                v6 = &v8;
                v7 = v20;
                v25 = v17->field_240;
                if (v25 != v21)
                {
                    v5 = v25;
                    *((int128_t *)&v6) = *((int128_t *)&v22);
                    v17->field_240 = v21;
                    v17->field_248 = &v21;
                    v17->field_250 = v3;
                }
                else
                {
                    if (*(v22) != v25)
                    {
                        __memmove_chk(&v8, v21);
                        v25 = v17->field_240;
                        v27 = v5;
                        v26 = (char *)v17->field_248 - v25;
                    }
                    else
                    {
                        v26 = 0;
                        v27 = &v8;
                    }
                    v6 = v27 + v26;
                    *(v22) = v25;
                }
                v28 = v5;
                v4 = sub_4160d8(v17);
                v58 = v17->field_240;
                v48 = v4;
                if (v28 == &v8)
                {
                    if (v58 == v21)
                    {
                        v52 = &v8;
                    }
                    else
                    {
                        free(v58);
                        v17->field_240 = v21;
                        v17->field_248 = &v21;
                        v17->field_250 = v3;
                        v28 = v5;
                        v58 = v21;
                        v52 = v28;
                    }
                    v30 = (long long)v6;
                    if (v30 != v28)
                        memmove(v58, v52, v30 - v28);
                    v58 = v5;
                    v17->field_248 = &v17->field_240[v6 + -1 * v58];
                    v6 = v58;
                    if (!(v4))
                        goto LABEL_416ef0;
LABEL_416d3c:
                    sub_4162b0(v19, &v4);
                    if (v48->field_8 == 28)
                    {
                        v31 = v17->field_12e0;
                        v32 = v48->field_10;
                        v33 = v48->field_18;
                        v34 = v31[1];
                        if (v34 + 32 >= 4080)
                        {
                            v35 = malloc(0x1000);
                            if (!v35)
                            {
                                ::0x40f080::std::terminate();
                                __stack_chk_fail(); /* do not return */
                            }
                            v34 = 0;
                            v35[0] = v31;
                            v35[1] = 0;
                            v31 = v35;
                            v17->field_12e0 = &v35[0];
                        }
                        v36 = v31 + v34;
                        *((unsigned long *)(v31 + 8)) = v34 + 32;
                        v36->field_10 = &g_4334c0;
                        v48 = &v36->field_10;
                        *((int *)(v48 + 8)) = 33686043;
                        v37 = __ROL__(v33, 3) & -8;
                        *((struct struct_0 ***)(v48 + 16)) = v32;
                        *((unsigned long long *)(v48 + 24)) = v33;
                        if (!v33)
                        {
                            *((char *)(v48 + 10)) = 1;
                        }
                        else
                        {
                            v38 = v37;
                            v39 = v32;
                            while (true)
                            {
                                v40 = *((long long *)v39);
                                v39 += 8;
                                if (v40[10] != 1)
                                    break;
                                tmp_0 = v38;
                                v38 -= 8;
                                if (tmp_0 == 8)
                                {
                                    *((char *)(v48 + 10)) = 1;
                                    break;
                                }
                            }
                        }
                        if (!v33)
                        {
                            *((char *)(v48 + 11)) = 1;
                        }
                        else
                        {
                            v42 = v37;
                            v43 = v32;
                            while (true)
                            {
                                v44 = *((long long *)v43);
                                v43 += 8;
                                if (v44[11] != 1)
                                    break;
                                tmp_0 = v42;
                                v42 -= 8;
                                if (tmp_0 == 8)
                                {
                                    *((char *)(v48 + 11)) = 1;
                                    break;
                                }
                            }
                        }
                        if (!v33)
                        {
                            *((char *)(v48 + 9)) = 1;
                        }
                        else
                        {
                            while (true)
                            {
                                v46 = *((long long *)v32);
                                v32 += 8;
                                if (v46[9] != 1)
                                    break;
                                tmp_0 = v37;
                                v37 -= 8;
                                if (tmp_0 == 8)
                                {
                                    *((char *)(v48 + 9)) = 1;
                                    break;
                                }
                            }
                        }
                        v20 = v2;
                    }
                    v49 = v17->field_248;
                    if (v49 == v17->field_250)
                    {
                        v50 = v17->field_240;
                        v51 = v49 - v50;
                        v52 = __ROL__(v51, 1) & -2;
                        if (v21 == v50)
                        {
                            v53 = malloc(v52);
                            if (!v53)
                            {
                                ::0x40f080::std::terminate();
                                __stack_chk_fail(); /* do not return */
                            }
                            v54 = v53;
                            if (v51)
                                memmove(v53, v50, v51);
                            v17->field_240 = v53;
                        }
                        else
                        {
                            v54 = realloc(v50, v52);
                            v17->field_240 = v54;
                            if (!v54)
                            {
                                ::0x40f080::std::terminate();
                                __stack_chk_fail(); /* do not return */
                            }
                        }
                        v20 = v2;
                        v49 = v54 + ((v51 >> 63 & 0xe000000000000000 | __ROL__(v51, 61) & 2305843009213693951) << 3);
                        v57 = v54 + ((v51 >> 63 & 0xc000000000000000 | __ROL__(v51, 62) & 4611686018427387903) << 3);
                        v17->field_248 = v49;
                        v17->field_250 = v57;
                    }
                    *(v22) = v49 + 8;
                    *((unsigned long *)v49) = v48;
                    v58 = v5;
                    v59 = 0;
                    if (v58 == &v8)
                        goto LABEL_416c48;
                    goto LABEL_416f60;
                }
                else
                {
                    v17->field_240 = v28;
                    if (v58 != v21)
                    {
                        v5 = v58;
                        v29 = v17->field_250;
                        *((int128_t *)&v22) = (int128_t)v6;
                        v7 = v29;
                        v6 = v58;
                        if (!v4)
                            goto LABEL_416ef0;
                        goto LABEL_416d3c;
                    }
                    else
                    {
                        v58 = &v8;
                        *((int128_t *)&v22) = (int128_t)v6;
                        v5 = &v8;
                        v6 = &v8;
                        v7 = v20;
                        if (v4)
                        {
LABEL_416d3c:
                            sub_4162b0(v19, &v4);
                        }
LABEL_416ef0:
                        v59 = 1;
                        if (!(v58 != &v8))
                            goto LABEL_416c48;
LABEL_416f60:
                        free(v58);
LABEL_416c48:
                        if (v59)
                            goto LABEL_41700c;
                    }
                }
            } while ((v60 = v17->field_0, v60 == v17->field_8));
        }
        v17->field_0 = v60 + 1;
        v61 = __ROL__(v0, 3) & -8;
        v62 = v17->field_12e0;
        v63 = sub_41d90c(v17, v17->field_10 + v61, v17->field_18);
        v17->field_18 = v17->field_10 + v61;
        v64 = v62[1];
        if (v64 + 32 >= 4080)
        {
            v65 = malloc(0x1000);
            if (!v65)
            {
                ::0x40f080::std::terminate();
                __stack_chk_fail(); /* do not return */
            }
            v64 = 0;
            v65[0] = v62;
            v65[1] = 0;
            v62 = v65;
            v17->field_12e0 = &v65[0];
        }
        v66 = v62 + v64;
        *((unsigned long *)(v62 + 8)) = v64 + 32;
        v66->field_10 = &g_433530;
        v67 = &v66->field_10;
        v67->field_8 = 16843038;
        v67->field_10 = v63;
        v67->field_18 = v52;
        v13 = v1;
    }
LABEL_41700c:
    if (*((long long *)(v13 + 40)) != v9)
        __stack_chk_fail(); /* do not return */
    v68 = v10;
    return;
}

int sub_417044()
{
    char v0;  // [bp+0x30]
    unsigned long long v1;  // x8
    unsigned long v2;  // x22
    unsigned long long v3;  // x0

    v1 = *((long long *)&v0);
    if (v1 != v2)
        free(v1);
    sub_4270a0(v3);
}

typedef struct struct_2 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    char padding_10[560];
    struct struct_4 *field_240;
    unsigned long long field_248;
    char padding_250[72];
    unsigned long long field_298;
    struct struct_4 *field_2a0;
    unsigned long long field_2a8;
    char padding_2b0[33];
    char field_2d1;
    char field_2d2;
    char padding_2d3[4109];
    struct struct_5 *field_12e0;
} struct_2;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_3 {
    char field_0;
    char field_1;
    char field_2;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_5;

extern char g_432180;
extern char g_432260;

int sub_417064(struct_2 *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char v2[3];  // x10, Other Possible Types: unsigned long
    unsigned long long v3;  // x8
    struct_2 *v4;  // x19
    unsigned int v5;  // w9
    unsigned long long v6;  // x11
    unsigned int v7;  // w14
    void* v8;  // x11, Other Possible Types: unsigned long
    char v9[3];  // x9, Other Possible Types: unsigned long
    void* v10;  // x21, Other Possible Types: unsigned long
    unsigned int v11;  // w8
    unsigned long long v12[2];  // x20, Other Possible Types: unsigned long
    void* v13;  // x8, Other Possible Types: unsigned long
    unsigned long long v14[2];  // x0
    unsigned long long v15[2];  // x22, Other Possible Types: unsigned long
    void* v16;  // x8, Other Possible Types: unsigned long
    unsigned long long v18[2];  // x0
    unsigned long v19;  // w20
    struct_0 *v20;  // x20
    struct_0 *v21;  // x20
    unsigned long long *v22;  // x8, Other Possible Types: unsigned long
    void* v23;  // x23
    unsigned long v24;  // x21
    void* v25;  // x0
    unsigned long long v26;  // x22, Other Possible Types: unsigned long

    v0 = &v1;
    v2 = a0->field_0;
    v3 = a0->field_8;
    if (!(v2 != v3 && v2[0] == 84))
        return 0;
    v9 = &v2[1];
    v4 = a0;
    a0->field_0 = &v9[0];
    if (v9 != v3 && v9[0] == 95)
    {
        v10 = 0;
        goto LABEL_4170b4;
    }
    else if (v3 != v9 && (v5 = (unsigned int)v9[0], 9 >= v5 - 48))
    {
        v8 = 0;
        do
        {
            v6 = __ROL__(v8 + (v8 << 2), 1) & -2;
            if (v3 - 1 == v2)
            {
                v8 = v6 - 48;
                v9 = v2 + 1;
                break;
            }
        } while ((v9 = v2 + 2, a0->field_0 = (struct struct_3 *)v9, v8 = v6 + (unsigned long long)(char)*((char *)(v2 + 1)) - 48, v3 - 2 != v2 && (v7 = (unsigned int)(char)*((char *)(v2 + 2)), v2 += 1, v7 - 48 < 10)));
        if (v9 != v3 && *((char *)v9) == 95)
        {
            v10 = v8 + 1;
LABEL_4170b4:
            v11 = a0->field_2d2;
            a0->field_0 = v9 + 1;
            if (v11)
            {
                v12 = a0->field_12e0;
                v13 = v12[1];
                if (v13 + 32 >= 4080)
                {
                    v14 = malloc(0x1000);
                    if (!v14)
                        ::0x40f080::std::terminate();
                    v13 = 0;
                    v14[0] = v12;
                    v14[1] = 0;
                    v12 = v14;
                    v4->field_12e0 = &v14[0];
                }
                *((unsigned long *)(v12 + 8)) = v13 + 32;
                v20 = v12 + v13;
                v20->field_10 = &g_432180;
                v19 = &v20->field_10;
                *((int *)(v19 + 8)) = 16843015;
                *((char **)(v19 + 16)) = "auto";
                *((char **)(v19 + 24)) = (char *)(4364554 + __strlen_chk("auto", 5));
                return v19;
            }
            else if (a0->field_2d1)
            {
                v15 = a0->field_12e0;
                v16 = v15[1];
                if (v16 + 48 >= 4080)
                {
                    v18 = malloc(0x1000);
                    if (!v18)
                        ::0x40f080::std::terminate();
                    v16 = 0;
                    v18[0] = v15;
                    v18[1] = 0;
                    v15 = v18;
                    v4->field_12e0 = &v18[0];
                }
                v21 = v15 + v16;
                *((unsigned long *)(v15 + 8)) = v16 + 48;
                v21->field_10 = &g_432260;
                v19 = &v21->field_10;
                *((int *)(v19 + 8)) = 33686047;
                *((unsigned long *)(v19 + 16)) = v10;
                *((long long *)(v19 + 24)) = 0;
                *((char *)(v19 + 32)) = 0;
                v22 = v4->field_2a0;
                if (v22 != v4->field_2a8)
                {
                    v4->field_2a0 = v22 + 8;
                    *((unsigned long *)v22) = v19;
                    return v19;
                }
                v23 = v4->field_298;
                v24 = v22 - v23;
                if (&v4->padding_2b0 == v23)
                {
                    v25 = malloc(__ROL__(v24, 1) & -2);
                    if (v25)
                    {
                        if (v24)
                            memmove(v25, v23, v24);
                        v4->field_298 = v25;
                        v22 = v25 + ((v24 >> 63 & 0xe000000000000000 | __ROL__(v24, 61) & 2305843009213693951) << 3);
                        v4->field_2a0 = v22;
                        v4->field_2a8 = v25 + ((v24 >> 63 & 0xc000000000000000 | __ROL__(v24, 62) & 4611686018427387903) << 3);
                        v4->field_2a0 = v22 + 8;
                        *((unsigned long *)v22) = v19;
                        return v19;
                    }
                }
                else
                {
                    v26 = realloc(v23, __ROL__(v24, 1) & -2);
                    v4->field_298 = v26;
                    if (v26)
                    {
                        v22 = v26 + ((v24 >> 63 & 0xe000000000000000 | __ROL__(v24, 61) & 2305843009213693951) << 3);
                        v4->field_2a0 = v22;
                        v4->field_2a8 = v26 + ((v24 >> 63 & 0xc000000000000000 | __ROL__(v24, 62) & 4611686018427387903) << 3);
                        v4->field_2a0 = v22 + 8;
                        *((unsigned long *)v22) = v19;
                        return v19;
                    }
                }
                ::0x40f080::std::terminate();
            }
            else if (a0->field_248 - (char *)a0->field_240 >> 3 > v10)
            {
                return a0->field_240[v10].field_0;
            }
        }
    }
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

int sub_4172f4(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    char *v4;  // x8
    unsigned long long v5;  // x9
    char *v6;  // x10
    struct_0 *v7;  // x19
    char *v8;  // x8
    unsigned long v9;  // x0, Other Possible Types: unsigned int

    v2 = &v3;
    v4 = a0->field_0;
    v5 = a0->field_8;
    if (!(v4 != v5 && *(v4) == 68))
        return 0;
    v6 = v4 + 1;
    v7 = a0;
    a0->field_0 = v6;
    if (v6 != v5 && (*(v6) == 116 || *(v6) == 84))
    {
        a0->field_0 = &v4[2];
        v9 = sub_4181a0(a0, a1, a2, a3, a4, a5, a6, a7, *((long long *)&v0));
        *((unsigned int *)&v1) = v9;
        if (!v9)
            return v9;
        v8 = v7->field_0;
        if (v8 != v7->field_8 && *(v8) == 69)
        {
            v7->field_0 = &v8[1];
            (unsigned int)v9 = sub_419db4(v7, "decltype(", &v1);
            return v9;
        }
    }
}

typedef struct struct_3 {
    char padding_0[8];
    char field_8;
    char padding_9[3];
    unsigned int field_c;
} struct_3;

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_2 *field_12e0;
} struct_0;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

typedef struct struct_5 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char field_18;
    char padding_19[3];
    unsigned int field_1c;
} struct_5;

typedef struct struct_1 {
    char field_0;
    char field_1;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_433140;
extern char g_4331b0;

int sub_4173a4(struct_0 *a0, struct struct_3 **a1, char *a2)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_0;  // tmp #0
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x8
    struct_0 *v3;  // x20
    unsigned int v4;  // w22
    void* v5;  // x8, Other Possible Types: unsigned long
    unsigned long long v6[2];  // x0
    unsigned long long v7[2];  // x23, Other Possible Types: unsigned long
    unsigned long long v8;  // x9
    struct_4 *v9;  // x8
    unsigned int v10[4];  // x8
    char v11[2];  // x8
    unsigned long long v12;  // x9
    char *v13;  // x10, Other Possible Types: unsigned long
    unsigned long v15;  // w0
    unsigned int v16;  // w8
    unsigned int v17;  // w22
    unsigned long long v18;  // x22
    unsigned long long v19;  // x3
    unsigned long long v20;  // x4
    unsigned long long v21;  // x5
    unsigned long long v22;  // x6
    unsigned long long v23;  // x7
    unsigned long long v24[2];  // x21, Other Possible Types: unsigned long
    void* v25;  // x8, Other Possible Types: unsigned long
    unsigned long long v26[2];  // x0
    unsigned long long v27[2];  // x21, Other Possible Types: unsigned long
    void* v28;  // x8, Other Possible Types: unsigned long
    unsigned long long v29[2];  // x0
    struct_4 *v31;  // x0
    struct_4 *v33;  // x0

    v0 = &v1;
    v2 = *(a1);
    v3 = a0;
    if (v2->field_8 == 36)
    {
        v4 = v2->field_c;
        if (3 >= v4 - 2)
        {
            v7 = a0->field_12e0;
            v5 = v7[1];
            if (v5 + 16 >= 4080)
            {
                v6 = malloc(0x1000);
                if (!v6)
                    ::0x40f080::std::terminate();
                v5 = 0;
                v6[0] = v7;
                v6[1] = 0;
                v7 = v6;
                v3->field_12e0 = &v6[0];
            }
            v8 = v5 + 16;
            v9 = v7 + v5;
            *((unsigned long long *)(v7 + 8)) = v8;
            v9->field_10 = &g_433140;
            v10 = &v9->field_10;
            v10[2] = 16843043;
            v10[3] = v4;
            *(a1) = &v10[0];
        }
    }
    v11 = v3->field_0;
    v12 = v3->field_8;
    if (v11 == v12 || v11[0] != 67)
    {
        tmp_0 = v12;
        if (tmp_0 != v11)
        {
            if (v12 - (char *)v11 == 1)
            {
                return 0;
            }
            else if (v11[0] != 68)
            {
                return 0;
            }
            else
            {
                v18 = v11[1];
                if (53 < (unsigned int)v18)
                {
                    return 0;
                }
                else if ((char)[D] arm64g_calculate_condition(0xa<64>, And((0x1<64> << Conv(64->8, (x22<8> & 0x3f<64>))), 0x37000000000000<64>), 0x0<64>, 0x0<64>))
                {
                    return 0;
                }
                else
                {
                    v3->field_0 = &v11[1];
                    if (a2)
                        *(a2) = 1;
                    v24 = v3->field_12e0;
                    v25 = v24[1];
                    if (v25 + 32 >= 4080)
                    {
                        v26 = malloc(0x1000);
                        if (!v26)
                            ::0x40f080::std::terminate();
                        v25 = 0;
                        v26[0] = v24;
                        v26[1] = 0;
                        v24 = v26;
                        v3->field_12e0 = &v26[0];
                    }
                    *((unsigned long *)(v24 + 8)) = v25 + 32;
                    v31 = v24 + v25;
                    v31->field_10 = &g_4331b0;
                    v15 = &v31->field_10;
                    *((int *)(v15 + 8)) = 16843045;
                    *((char *)(v15 + 24)) = 1;
                    *((struct struct_3 **)(v15 + 16)) = *(a1);
                    *((unsigned int *)(v15 + 28)) = (unsigned int)v18 - 48;
                    return v15;
                }
            }
        }
    }
    else
    {
        v13 = &v11[1];
        v3->field_0 = &v13;
        if (v13 != v12)
        {
            if (*(v13) != 73)
            {
                v16 = 0;
                if (v12 == v13)
                    return 0;
            }
            else
            {
                v13 = v11 + 1;
                v16 = 1;
                v3->field_0 = v13;
                if (v12 == v13)
                    return 0;
            }
            v17 = *((char *)v13);
            if (4 >= v17 - 49)
            {
                v3->field_0 = v13 + 1;
                if (a2)
                    *(a2) = 1;
                if (v16)
                {
                    (unsigned int)v15 = sub_41549c(v3, a2, a2, v19, v20, v21, v22, v23);
                    if (!v15)
                        return v15;
                }
                v27 = v3->field_12e0;
                v28 = v27[1];
                if (v28 + 32 >= 4080)
                {
                    v29 = malloc(0x1000);
                    if (!v29)
                        ::0x40f080::std::terminate();
                    v28 = 0;
                    v29[0] = v27;
                    v29[1] = 0;
                    v27 = v29;
                    v3->field_12e0 = &v29[0];
                }
                *((unsigned long *)(v27 + 8)) = v28 + 32;
                v33 = v27 + v28;
                v33->field_10 = &g_4331b0;
                v15 = &v33->field_10;
                *((int *)(v15 + 8)) = 16843045;
                *((char *)(v15 + 24)) = 0;
                *((struct struct_3 **)(v15 + 16)) = *(a1);
                *((unsigned int *)(v15 + 28)) = v17 - 48;
                return v15;
            }
        }
    }
    return 0;
}

typedef struct struct_3 {
    struct struct_4 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_5 *field_12e0;
} struct_3;

typedef struct struct_2 {
    char padding_0[9];
    unsigned short field_9;
    char field_b;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
    unsigned short field_9;
    char field_b;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_1;

typedef struct struct_4 {
    char field_0;
    char field_1;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_5;

extern char g_433220;

int sub_417614(struct_3 *a0, struct_2 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char v2[2];  // x9, Other Possible Types: unsigned long
    unsigned long v3;  // x8, Other Possible Types: unsigned long long
    struct_2 *v4;  // x20, Other Possible Types: unsigned long, struct_1 *
    struct_3 *v5;  // x19
    char *v6;  // x10
    unsigned int v7;  // w10
    unsigned long long v8;  // x9
    char *v9;  // x24, Other Possible Types: unsigned long
    unsigned long long v10;  // x10
    unsigned long v11;  // x9, Other Possible Types: unsigned long long
    char *v12;  // x10, Other Possible Types: unsigned long
    void* v13;  // x25, Other Possible Types: unsigned long
    unsigned long long v14[2];  // x26, Other Possible Types: unsigned long
    void* v15;  // x8, Other Possible Types: unsigned long
    unsigned long long v16[2];  // x0
    struct_0 *v17;  // x10
    unsigned short v18;  // x8
    char v19;  // x9
    struct_1 *v20;  // x10

    v0 = &v1;
    v2 = a0->field_0;
    v3 = a0->field_8;
    v4 = a1;
    if (v2 == v3)
        return (unsigned int)a1;
    v5 = a0;
    while (true)
    {
        if (*((char *)v2) != 66)
            return v4;
        v6 = v2 + 1;
        v5->field_0 = &v6;
        if (!(v3 != v6) || !((v7 = (unsigned int)*(v6), 9 >= v7 - 48)))
        {
LABEL_41771c:
            v13 = 0;
            v9 = 0;
            break;
        }
        else
        {
            v12 = v2 + 2;
            v5->field_0 = &v12;
            v8 = *((char *)(v2 + 1));
            v9 = v12;
            v11 = v8 - 48;
            if (v3 != v12)
            {
                do
                {
                    if (10 <= *((char *)v12) - 48)
                    {
                        v9 = v12;
                        break;
                    }
                } while ((v9 = v12 + 1, v5->field_0 = (struct struct_4 *)v9, v10 = (unsigned long long)(char)*((char *)v12), v11 = v10 + 10 * v11 - 48, v12 = v9, v3 != v9));
            }
            if (!(v11 <= v3 - v9))
                goto LABEL_41771c;
            v13 = v9 + v11;
            v5->field_0 = v13;
            if (v9 == v13)
                break;
            v14 = v5->field_12e0;
            v15 = v14[1];
            if (v15 + 48 >= 4080)
            {
                v16 = malloc(0x1000);
                if (!v16)
                    ::0x40f080::std::terminate();
                v15 = 0;
                v16[0] = v14;
                v16[1] = 0;
                v14 = v16;
                v5->field_12e0 = &v16[0];
            }
            *((unsigned long *)(v14 + 8)) = v15 + 48;
            v17 = v14 + v15;
            v18 = *((short *)(v4 + 9));
            v19 = *((char *)(v4 + 11));
            v17->field_10 = &g_433220;
            v20 = &v17->field_10;
            v20->field_8 = 8;
            *((unsigned long *)&v20->padding_c[3]) = v4;
            v20->field_10 = v9;
            v20->field_18 = v13;
            *((unsigned short *)&(&v20->field_8)[1]) = v18;
            *((char *)&v20->field_9 + 1) = v19;
            v2 = v5->field_0;
            v3 = v5->field_8;
            v4 = v20;
            if (v2 == v3)
                return (unsigned int)v20;
        }
    }
    return 0;
}

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[690];
    char field_2d2;
    char padding_2d3[4109];
    struct struct_3 *field_12e0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
    char field_8;
    char padding_9[7];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
} struct_0;

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
} struct_4;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
} struct_5;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_3;

extern char g_432180;
extern char g_433290;
extern char g_433300;
extern char g_433370;

int sub_41779c(struct_1 *a0, unsigned long long a1[3])
{
    int tmp_3;  // tmp #3
    unsigned long long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    char *v3;  // x8
    struct_1 *v4;  // x19
    unsigned int v5;  // w8
    unsigned long long v6;  // x0
    char *v7;  // x10
    unsigned long long v8;  // x8
    unsigned long long v9;  // x0
    char *v10;  // x8
    char *v11;  // x9, Other Possible Types: unsigned long
    unsigned long v12;  // x11, Other Possible Types: unsigned long long
    char *v13;  // x12, Other Possible Types: unsigned long
    char *v14;  // x9, Other Possible Types: unsigned long
    unsigned long v15;  // x10, Other Possible Types: unsigned long long
    char *v16;  // x11, Other Possible Types: unsigned long
    char *v17;  // x9, Other Possible Types: unsigned long
    unsigned long long v18;  // x0
    char *v19;  // x8
    struct_0 *v20;  // x0, Other Possible Types: unsigned long
    char *v21;  // x11, Other Possible Types: unsigned long
    char *v22;  // x10
    char *v24;  // x9, Other Possible Types: unsigned long
    unsigned long v25;  // x10, Other Possible Types: unsigned long long
    char *v26;  // x11, Other Possible Types: unsigned long
    unsigned long long v28;  // x21
    char *v29;  // x8
    char v30;  // x23
    unsigned long long v31;  // x0
    unsigned long long v32;  // x0
    unsigned long long v33;  // x21
    char *v35;  // x9
    char *v36;  // x9
    unsigned long long v37;  // x8
    unsigned long long v38[2];  // x0
    unsigned long long v39[2];  // x0
    unsigned long v40;  // x11, Other Possible Types: unsigned long long
    char *v41;  // x12, Other Possible Types: unsigned long
    unsigned long long v43;  // x11
    void* v45;  // x8, Other Possible Types: unsigned long
    unsigned long long v46[2];  // x22, Other Possible Types: unsigned long
    char *v47;  // x10, Other Possible Types: unsigned long
    void* v48;  // x8, Other Possible Types: unsigned long
    unsigned long long v49[2];  // x22, Other Possible Types: unsigned long
    unsigned long long v51;  // x10
    unsigned long v53;  // x22
    char *v55;  // x9, Other Possible Types: unsigned long
    void* v56;  // x20, Other Possible Types: unsigned long long, unsigned long
    void* v57;  // x21, Other Possible Types: unsigned long long, unsigned long
    struct_4 *v58;  // x20
    unsigned long long v60;  // x21
    char *v61;  // x10, Other Possible Types: unsigned long
    unsigned long long v63;  // x10
    unsigned long long v64;  // x2
    unsigned long long v65;  // x3
    unsigned long long v66;  // x4
    unsigned long long v67;  // x5
    unsigned long long v68;  // x6
    unsigned long long v69;  // x7
    char *v70;  // x8
    unsigned long long v71;  // x22
    char *v72;  // x8
    char *v73;  // x9, Other Possible Types: unsigned long
    unsigned long v74;  // x8, Other Possible Types: unsigned long long
    unsigned int v75;  // w11
    char *v76;  // x11, Other Possible Types: unsigned long
    char *v77;  // x24, Other Possible Types: unsigned long
    void* v78;  // x25, Other Possible Types: unsigned long
    char *v79;  // x10
    unsigned int v80;  // w12
    unsigned long long v81[2];  // x20, Other Possible Types: unsigned long
    void* v82;  // x8, Other Possible Types: unsigned long
    unsigned long long v83[2];  // x0
    unsigned long long v84[2];  // x26, Other Possible Types: unsigned long
    void* v85;  // x8, Other Possible Types: unsigned long
    unsigned long long v86[2];  // x0
    unsigned long long v87;  // x9
    unsigned long long v88;  // x8
    char *v89;  // x20, Other Possible Types: unsigned long, void*
    void* v90;  // x21, Other Possible Types: unsigned long, unsigned long long
    struct_5 *v91;  // x22

    v1 = &v2;
    v3 = a0->field_0;
    v4 = a0;
    if (a0->field_8 != v3)
    {
        v5 = *(v3);
        if (v5 == 85)
        {
            (unsigned int)v6 = __strlen_chk("Ut", 3);
            v7 = v4->field_0;
            v8 = v4->field_8;
            if (v8 - v7 < v6)
            {
                (unsigned int)v18 = __strlen_chk("Ul", 3);
                v19 = v4->field_0;
                if (v4->field_8 - v19 >= v18)
                {
                    if (!v18)
                    {
                        v30 = v4->field_2d2;
                        v4->field_0 = &v19[v18];
                        v4->field_2d2 = 1;
                        (unsigned int)v31 = __strlen_chk("vE", 3);
                        v35 = v4->field_0;
                        v74 = v4->field_8;
                        if (v74 - v35 >= v31)
                        {
                            if (v31)
                            {
                                v47 = "vE";
                                v40 = v31;
                                v41 = v35;
                            }
                            else
                            {
LABEL_417ab4:
                                v55 = &v35[v31];
                                v56 = 0;
                                v57 = 0;
                                v4->field_0 = v55;
                                if (!(v74 != v55))
                                    goto LABEL_417d58;
                                goto LABEL_417d08;
                            }
                            while (*((char *)v47) == *((char *)v41))
                            {
                                v47 += 1;
                                tmp_3 = v40;
                                v40 -= 1;
                                v41 += 1;
                                if (!(tmp_3 != 1))
                                    goto LABEL_417ab4;
                            }
                        }
                        v58 = &v4->field_10;
                        v60 = v58->field_8 - v4->field_10 >> 63 & 0xe000000000000000 | __ROL__(v58->field_8 - v4->field_10, 61) & 2305843009213693951;
                        do
                        {
                            v0 = sub_413e1c(v4, a1, v64, v65, v66, v67, v68, v69);
                            if (!v0)
                                goto LABEL_417e10;
                        } while ((sub_4162b0(v58, &v0), v70 = v4->field_0, !(v70 != v4->field_8) || !(*(v70) == 69)));
                        v71 = __ROL__(v60, 3) & -8;
                        v72 = v70 + 1;
                        a1 = v4->field_10 + v71;
                        v4->field_0 = v72;
                        v74 = v4->field_8;
                        v55 = v4->field_0;
                        v57 = sub_41d90c(v4, a1, v4->field_18);
                        v56 = a1;
                        v4->field_18 = v4->field_10 + v71;
                        if (v74 == v55)
                            goto LABEL_417d58;
LABEL_417d08:
                        if (9 >= *((char *)v55) - 48)
                        {
                            v76 = v55 + 1;
                            while (true)
                            {
                                v79 = v76;
                                v4->field_0 = v76;
                                if (v74 == v76)
                                    break;
                                v80 = *((char *)v76);
                                v76 += 1;
                                if (v80 - 48 >= 10)
                                {
                                    v77 = v55;
                                    v78 = v76 - 1;
                                    v55 = v79;
                                    goto LABEL_417e10;
                                }
                            }
                            v77 = v55;
                            v55 = v76;
                            v78 = v74;
                            goto LABEL_417e10;
                        }
LABEL_417d58:
                        v77 = 0;
                        v78 = 0;
                        if (v55 == v74)
                            goto LABEL_417e10;
                        if (*((char *)v55) == 95)
                        {
                            v84 = v4->field_12e0;
                            v4->field_0 = v55 + 1;
                            v85 = v84[1];
                            if (v85 + 48 >= 4080)
                            {
                                v86 = malloc(0x1000);
                                if (!v86)
                                {
                                    v4->field_2d2 = v30;
                                    v4->field_2d2 = v30;
                                    return (unsigned int)sub_416694(a1, *((long long *)((unsigned long long)sub_4270a0((unsigned long long)sub_4270a0(::0x40f080::std::terminate())) + 16)), *((long long *)((unsigned long long)sub_4270a0((unsigned long long)sub_4270a0(::0x40f080::std::terminate())) + 24)));
                                }
                                v85 = 0;
                                v86[0] = v84;
                                v86[1] = 0;
                                v84 = v86;
                                v4->field_12e0 = &v86[0];
                            }
                            v91 = v84 + v85;
                            *((unsigned long *)(v84 + 8)) = v85 + 48;
                            v91->field_10 = &g_433300;
                            v53 = &v91->field_10;
                            *((int *)(v53 + 8)) = 16843048;
                            *((unsigned long *)(v53 + 16)) = v57;
                            *((unsigned long *)(v53 + 24)) = v56;
                            *((unsigned long *)(v53 + 32)) = v77;
                            *((unsigned long *)(v53 + 40)) = v78;
                            v4->field_2d2 = v30;
                            if (v53)
                                return sub_417614(v4, v53);
                            return 0;
                        }
LABEL_417e10:
                        v4->field_2d2 = v30;
                        if (true)
                            return 0;
                        return sub_417614(v4, NULL);
                    }
                    else
                    {
                        v24 = "Ul";
                        v25 = v18;
                        v26 = v19;
                        while (*((char *)v24) == *((char *)v26))
                        {
                            v24 += 1;
                            tmp_3 = v25;
                            v25 -= 1;
                            v26 += 1;
                            if (tmp_3 == 1)
                            {
                                v4->field_0 = &v19[v18];
                                v4->field_2d2 = 1;
                                __strlen_chk("vE", 3);
                            }
                        }
                    }
                }
                (unsigned int)v32 = __strlen_chk("Ub", 3);
                v36 = v4->field_0;
                v37 = v4->field_8;
                if (v37 - v36 < v32)
                    return 0;
                if (v32)
                {
                    v43 = v32;
                    do
                    {
                        if ((unsigned int)"Ub" != *(v36))
                            return 0;
                    } while ((sub_4162b0(v58, &v0), v70 = v4->field_0, !(v70 != v4->field_8) || !(*(v70) == 69)));
                }
                v61 = &v36[v32];
                v4->field_0 = v61;
                if (v37 != v61 && 9 >= *(v61) - 48)
                {
                    v73 = &v36[v32 + 1];
                    do
                    {
                        v61 = v73;
                        v4->field_0 = v73;
                    } while (v37 != v73 && (v75 = (unsigned int)(char)*((char *)v73), v73 += 1, v75 - 48 < 10));
                }
                if (v61 == v37)
                {
                    return 0;
                }
                else if (*((char *)v61) != 95)
                {
                    return 0;
                }
                else
                {
                    v81 = v4->field_12e0;
                    v4->field_0 = v61 + 1;
                    v82 = v81[1];
                    if (v82 + 32 >= 4080)
                    {
                        v83 = malloc(0x1000);
                        if (v83)
                        {
                            v82 = 0;
                            v83[0] = v81;
                            v83[1] = 0;
                            v81 = v83;
                            v4->field_12e0 = &v83[0];
                        }
                    }
                    v87 = v82 + 32;
                    v88 = v81 + v82;
                    *((unsigned long long *)(v81 + 8)) = v87;
                    v53 = v88 + 16;
                    v90 = (char *)(4365855 + __strlen_chk("'block-literal'", 16));
                    *((char *)(v53 + 8)) = 7;
                    *((char **)v53) = &g_432180;
                    *((short *)(v53 + 9)) = 257;
                    *((char *)(v53 + 11)) = 1;
                    *((char **)(v53 + 16)) = "'block-literal'";
                    *((unsigned long *)(v53 + 24)) = v90;
                    return sub_417614(v4, v88 + 16);
                }
            }
            else
            {
                if (v6)
                {
                    v11 = "Ut";
                    v12 = v6;
                    v13 = v7;
                    while (*((char *)v11) == *((char *)v13))
                    {
                        v11 += 1;
                        tmp_3 = v12;
                        v12 -= 1;
                        v13 += 1;
                        if (tmp_3 == 1)
                            goto LABEL_417964;
                    }
                }
LABEL_417964:
                v17 = &v7[v6];
                v4->field_0 = v17;
                if (v8 == v17 || 9 < *(v17) - 48)
                {
                    v89 = 0;
                    v90 = 0;
                    if (v17 == v8)
                        return 0;
                }
                else
                {
                    v21 = &v7[v6 + 1];
                    do
                    {
                        v22 = v21;
                        v4->field_0 = v21;
                        if (v8 == v21)
                        {
                            v89 = v17;
                            v17 = v21;
                            v90 = v8;
                            if (v21 == v8)
                                return 0;
                            goto LABEL_417c04;
                        }
                    } while ((sub_4162b0(v58, &v0), v70 = v4->field_0, !(v70 != v4->field_8) || !(*(v70) == 69)));
                    v89 = v17;
                    v90 = v21 - 1;
                    v17 = v22;
                    if (v22 == v8)
                        return 0;
                }
LABEL_417c04:
                if (*((char *)v17) != 95)
                    return 0;
                v46 = v4->field_12e0;
                v4->field_0 = v17 + 1;
                v45 = v46[1];
                if (v45 + 32 >= 4080)
                {
                    v38 = malloc(0x1000);
                    if (v38)
                    {
                        v45 = 0;
                        v38[0] = v46;
                        v38[1] = 0;
                        v46 = v38;
                        v4->field_12e0 = &v38[0];
                    }
                }
                v51 = v46 + v45;
                *((unsigned long *)(v46 + 8)) = v45 + 32;
                v53 = v51 + 16;
                *((char *)(v53 + 8)) = 39;
                *((char **)v53) = &g_433290;
                *((short *)(v53 + 9)) = 257;
                *((char *)(v53 + 11)) = 1;
                *((unsigned long *)(v53 + 16)) = v89;
                *((unsigned long *)(v53 + 24)) = v90;
                return sub_417614(v4, v51 + 16);
            }
        }
        if (8 >= v5 - 49)
        {
            (unsigned int)v20 = sub_41dfbc(a0);
LABEL_4179ec:
            if (v20)
                return sub_417614(v4, v20);
            return 0;
        }
    }
    (unsigned int)v9 = __strlen_chk("DC", 3);
    v10 = v4->field_0;
    if (v4->field_8 - v10 >= v9)
    {
        if (!v9)
        {
            v4->field_0 = &v10[v9];
            v0 = sub_41dfbc(v4);
            if (!v0)
                return 0;
            v28 = v4->field_18 - v4->field_10 >> 63 & 0xe000000000000000 | __ROL__(v4->field_18 - v4->field_10, 61) & 2305843009213693951;
            while (true)
            {
                sub_4162b0(&v4->field_10, &v0);
                v29 = v4->field_0;
                if (!(v29 == v4->field_8) && !(*(v29) != 69))
                    break;
                v0 = sub_41dfbc(v4);
                if (!v0)
                    return 0;
            }
            v33 = __ROL__(v28, 3) & -8;
            a1 = v4->field_10 + v33;
            v4->field_0 = &v29[1];
            v49 = v4->field_12e0;
            v89 = sub_41d90c(v4, a1, v4->field_18);
            v4->field_18 = v4->field_10 + v33;
            v48 = v49[1];
            if (v48 + 32 >= 4080)
            {
                v39 = malloc(0x1000);
                if (v39)
                {
                    v48 = 0;
                    v39[0] = v49;
                    v39[1] = 0;
                    v49 = v39;
                    v4->field_12e0 = &v39[0];
                }
            }
            v63 = v49 + v48;
            *((unsigned long *)(v49 + 8)) = v48 + 32;
            v53 = v63 + 16;
            *((char *)(v53 + 8)) = 41;
            *((char **)v53) = &g_433370;
            *((short *)(v53 + 9)) = 257;
            *((char *)(v53 + 11)) = 1;
            *((unsigned long *)(v53 + 16)) = v89;
            *((unsigned long *)(v53 + 24)) = a1;
            return sub_417614(v4, v51 + 16);
        }
        else
        {
            v14 = "DC";
            v15 = v9;
            for (v16 = v10; *((char *)v14) == *((char *)v16); v4->field_0 = &v10[v9])
            {
                v14 += 1;
                tmp_3 = v15;
                v15 -= 1;
                v16 += 1;
            }
        }
    }
    (unsigned int)v20 = sub_41e274(v4, a1);
    goto LABEL_4179ec;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

long long sub_417e84(struct_0 *a0)
{
    unsigned long long v0;  // x8

    v0 = a0->field_10;
    return a0->field_10;
}

long long sub_417e90()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
    struct struct_2 *field_18;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_4;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_417e94(struct_5 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x21
    struct_2 *v5;  // x20

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, "::", (char *)(4365965 + __strlen_chk("::", 3)));
    v5 = a0->field_18;
    if (v5->field_9 == 1)
        return v5->field_0->field_20(v5, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_417f58(unsigned long a0)
{
    goto *((long long *)(*((long long *)*((long long *)(x0<8> + 24))) + 48));
}

long long sub_417f68()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[24];
    struct struct_1 *field_18;
    char field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_417f6c(struct_3 *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned int v2;  // w8
    struct_3 *v3;  // x19
    struct_1 *v4;  // x0
    unsigned int v5;  // w8

    v0 = &v1;
    if (a0->field_20)
        return 0 & 1;
    v3 = a0;
    v4 = a0->field_18;
    v3->field_20 = 1;
    v5 = v4->field_9;
    if (v5 == 2)
    {
        v2 = v4->field_0->field_0(v4);
    }
    else if (!v5)
    {
        v2 = 1;
    }
    else
    {
        v2 = 0;
    }
    v3->field_20 = 0;
    return v2 & 1;
}

typedef struct struct_4 {
    char padding_0[32];
    char field_20;
} struct_4;

typedef struct struct_3 {
    char padding_0[24];
    struct struct_2 *field_18;
    char field_20;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[2];
    char field_a;
} struct_2;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_0 *field_8;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern char g_417fdc;

long long sub_417fd4(unsigned long long a0)
{
    struct_4 *v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    struct_4 *v4;  // x19
    struct_3 *v5;  // x0
    struct_3 *v6;  // x19
    struct_2 *v7;  // x0
    unsigned int v8;  // w8
    void* v9;  // x8, Other Possible Types: unsigned long long, unsigned long

    v4->field_20 = 0;
    v5 = sub_4270a0(a0);
    v0 = v4;
    v1 = &v3;
    v2 = &g_417fdc;
    if (v5->field_20)
    {
        v9 = 0;
    }
    else
    {
        v6 = v5;
        v7 = v5->field_18;
        v6->field_20 = 1;
        v8 = v7->field_a;
        if (v8 == 2)
        {
            v9 = v7->field_0->field_8(v7);
        }
        else if (v8)
        {
            v9 = 0;
        }
        else
        {
            v9 = 1;
        }
        v6->field_20 = 0;
    }
    return (unsigned int)v9 & 1;
}

typedef struct struct_0 {
    char padding_0[32];
    char field_20;
} struct_0;

typedef struct struct_4 {
    char padding_0[24];
    struct struct_3 *field_18;
    char field_20;
} struct_4;

typedef struct struct_3 {
    struct struct_2 *field_0;
    char padding_8[3];
    char field_b;
} struct_3;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_2;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

extern char g_41804c;

long long sub_418044(unsigned long long a0)
{
    struct_0 *v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    struct_0 *v4;  // x19
    struct_4 *v5;  // x0
    struct_4 *v6;  // x19
    struct_3 *v7;  // x0
    unsigned int v8;  // w8
    void* v9;  // x8, Other Possible Types: unsigned long long, unsigned long

    v4->field_20 = 0;
    v5 = sub_4270a0(a0);
    v0 = v4;
    v1 = &v3;
    v2 = &g_41804c;
    if (v5->field_20)
    {
        v9 = 0;
    }
    else
    {
        v6 = v5;
        v7 = v5->field_18;
        v6->field_20 = 1;
        v8 = v7->field_b;
        if (v8 == 2)
        {
            v9 = v7->field_0->field_10(v7);
        }
        else if (v8)
        {
            v9 = 0;
        }
        else
        {
            v9 = 1;
        }
        v6->field_20 = 0;
    }
    return (unsigned int)v9 & 1;
}

typedef struct struct_0 {
    char padding_0[32];
    char field_20;
} struct_0;

typedef struct struct_3 {
    char padding_0[24];
    struct struct_4 *field_18;
    char field_20;
} struct_3;

typedef struct struct_4 {
    struct struct_2 *field_0;
} struct_4;

typedef struct struct_2 {
    char padding_0[24];
    struct struct_1 *field_18;
} struct_2;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

extern char g_4180bc;

long long sub_4180b4(unsigned long long a0)
{
    struct_0 *v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    struct_0 *v4;  // x19
    struct_3 *v5;  // x0
    struct_3 *v7;  // x19, Other Possible Types: unsigned long
    struct struct_2 **v8;  // x0
    struct struct_1 **v9;  // x8
    struct_3 *v10;  // x0

    v4->field_20 = 0;
    v5 = sub_4270a0(a0);
    v0 = v4;
    v1 = &v3;
    v2 = &g_4180bc;
    v7 = v5;
    if (!(unsigned int)v5->field_20)
    {
        v8 = v5->field_18;
        v7->field_20 = 1;
        v9 = *(v8)->field_18;
        v7->field_20 = 0;
        v7 = v9(v8);
    }
    v10 = v7;
    return v10;
}

typedef struct struct_0 {
    char padding_0[32];
    char field_20;
} struct_0;

typedef struct struct_3 {
    char padding_0[24];
    struct struct_4 *field_18;
    char field_20;
} struct_3;

typedef struct struct_4 {
    struct struct_2 *field_0;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_1 *field_20;
} struct_2;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

extern char g_41810c;

long long sub_418104(unsigned long long a0)
{
    struct_0 *v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    struct_0 *v4;  // x19
    struct_3 *v5;  // x0, Other Possible Types: unsigned long
    struct_3 *v7;  // x19
    struct struct_2 **v8;  // x0

    v4->field_20 = 0;
    v5 = sub_4270a0(a0);
    v0 = v4;
    v1 = &v3;
    v2 = &g_41810c;
    if (!(unsigned int)v5->field_20)
    {
        v7 = v5;
        v8 = v5->field_18;
        v7->field_20 = 1;
        v5 = *(v8)->field_20(v8);
        v7->field_20 = 0;
    }
    return v5;
}

typedef struct struct_4 {
    char padding_0[32];
    char field_20;
} struct_4;

typedef struct struct_2 {
    char padding_0[24];
    struct struct_3 *field_18;
    char field_20;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[40];
    struct struct_0 *field_28;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern char g_418154;

long long sub_41814c(unsigned long long a0)
{
    struct_4 *v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    struct_4 *v4;  // x19
    struct_2 *v5;  // x0, Other Possible Types: unsigned long
    struct_2 *v7;  // x19
    struct struct_1 **v8;  // x0

    v4->field_20 = 0;
    v5 = sub_4270a0(a0);
    v0 = v4;
    v1 = &v3;
    v2 = &g_418154;
    if (!(unsigned int)v5->field_20)
    {
        v7 = v5;
        v8 = v5->field_18;
        v7->field_20 = 1;
        v5 = *(v8)->field_28(v8);
        v7->field_20 = 0;
    }
    return v5;
}

typedef struct struct_0 {
    char padding_0[32];
    char field_20;
} struct_0;

extern char g_41819c;

long long sub_418194(unsigned long long a0)
{
    struct_0 *v0;  // x19

    v0->field_20 = 0;
    x30<8> = &g_41819c;
    sub_4270a0(a0);
    return ::0x40f060::operator delete();
}

typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char field_18;
    char padding_19[7];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    char field_38;
    char field_39;
} struct_0;

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[688];
    char field_2d0;
    char padding_2d1[4111];
    struct struct_0 *field_12e0;
} struct_1;

typedef struct struct_4 {
    char padding_0[40];
    unsigned long long field_28;
} struct_4;

typedef struct struct_3 {
    char padding_0[1];
    char field_1;
} struct_3;

typedef struct struct_8 {
    char padding_0[8];
    unsigned long long field_8;
} struct_8;

typedef struct struct_6 {
    char padding_0[16];
    unsigned long long field_10;
} struct_6;

typedef struct struct_7 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_7;

typedef struct struct_2 {
    char field_0;
    char field_1;
} struct_2;

extern unsigned short g_42921a[4];
extern unsigned short g_429240[4];
extern unsigned short g_429296[4];
extern unsigned short g_4292e4[4];
extern unsigned short g_429336[4];
extern unsigned short g_429378[4];
extern unsigned short g_4293a8[4];
extern unsigned short g_4293f2[4];
extern unsigned short g_429436[4];
extern unsigned short g_429478[4];
extern unsigned short g_4294a0[4];
extern unsigned long long g_42991c;
extern char g_429926;
extern char g_429931;
extern char g_42993e;
extern char g_42993f;
extern unsigned long long g_429941;
extern char g_42994c;
extern char g_42995d;
extern char g_429969;
extern char g_42997e;
extern unsigned long long g_429987;
extern char g_429a5f;
extern char g_429a6a;
extern char g_429abc;
extern unsigned long long g_429ad2;
extern char g_429adc;
extern char g_429ae6;
extern char g_429b1c;
extern char g_429b26;
extern char g_429b31;
extern char g_429b3b;
extern char g_429b46;
extern char g_429b7c;
extern char g_429b7d;
extern char g_429b87;
extern char g_429b88;
extern char g_429ba7;
extern char g_429bb2;
extern char g_429bbd;
extern char g_429bbe;
extern char g_429bd7;
extern char g_429bd8;
extern char g_429bf9;
extern char g_429c04;
extern char g_429c0e;
extern char g_429c19;
extern char g_429c2f;
extern char g_429c3a;
extern char g_429c3b;
extern char g_429c45;
extern char g_429c5a;
extern char g_429c64;
extern char g_429c6f;
extern char g_429c7a;
extern char g_429c7b;
extern char g_429ca3;
extern char g_429ca6;
extern char g_429ca9;
extern char g_429d46;
extern char g_429eb9;
extern char g_429ebc;
extern char g_42b0c9;
extern char g_432180;
extern char g_432650;
extern char g_432730;
extern char g_4327a0;
extern char g_432810;
extern char g_432880;
extern char g_4328f0;
extern char g_432b90;
extern char g_432c00;
extern char g_432d50;
extern char g_432dc0;
extern char g_432e30;
extern char g_432ea0;
extern char g_432f10;
extern char g_432f80;
extern char g_432ff0;
extern char g_433060;
extern char g_4330d0;

int sub_4181a0(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    int tmp_3;  // tmp #3
    char v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x68]
    struct_5 *v2;  // [bp-0x10]
    struct_0 *v7;  // x20
    struct_1 *v8;  // x19
    struct_4 *v9;  // tpidr_el0
    unsigned long long v10;  // x0
    unsigned long v181;  // x8
    unsigned long long v183;  // x10
    unsigned long v265;  // x11
    unsigned long v352;  // x9
    unsigned long v353;  // x20
    unsigned short v354;  // x10
    unsigned long v355;  // x8
    unsigned long long v362;  // x0
    char v375[2];  // x8
    char *v398;  // x9, Other Possible Types: unsigned long
    unsigned long v399;  // x10, Other Possible Types: unsigned long long
    char v400[2];  // x11, Other Possible Types: unsigned long
    unsigned long v411;  // x0, Other Possible Types: unsigned long long
    unsigned long long v412;  // x0
    char v415[2];  // x8
    unsigned long long v416;  // x9
    char *v418;  // x9, Other Possible Types: unsigned long
    unsigned long v419;  // x10, Other Possible Types: unsigned long long
    char v420[2];  // x11, Other Possible Types: unsigned long
    void* v433;  // x8, Other Possible Types: unsigned long
    struct_0 *v435;  // x0
    unsigned long v443;  // x21
    unsigned long v444;  // x22

    v2 = &a8;
    v7 = 25;
    v8 = a0;
    v1 = v9->field_28;
    (unsigned int)v10 = __strlen_chk("gs", 3);
    v181 = v8->field_0;
    v183 = v8->field_8 - v181;
    if (v183 >= v10)
    {
        if (!v10)
            goto LABEL_418218;
        v265 = 0;
        while (*((char *)(4364569 + v265)) == *((char *)(v181 + v265)))
        {
            v265 += 1;
            if (v10 == v265)
            {
LABEL_418218:
                v181 += v10;
                v8->field_0 = v181;
                goto LABEL_41825c;
            }
        }
    }
LABEL_41825c:
    if (67 >= *((char *)v181) - 49)
        goto 4293252 + (*((short *)(4362642 + (*((char *)v181) - 49 << 1))) << 2);
    (unsigned int)v362 = __strlen_chk("u8__uuidoft", 12);
    v375 = v8->field_0;
    if (v8->field_8 - (char *)v375 >= v362)
    {
        if (!v362)
            goto LABEL_418868;
        v398 = "u8__uuidoft";
        v399 = v362;
        v400 = v375;
        while (*((char *)v398) == *((char *)v400))
        {
            v398 += 1;
            tmp_3 = v399;
            v399 -= 1;
            v400 += 1;
            if (tmp_3 == 1)
            {
LABEL_418868:
                v8->field_0 = &v375[v362];
                (unsigned int)v411 = sub_413e1c(v8, 12, a2, a3, a4, a5, a6, a7);
                goto LABEL_4188e8;
            }
        }
    }
    (unsigned int)v412 = __strlen_chk("u8__uuidofz", 12);
    v415 = v8->field_0;
    v416 = v8->field_8;
    if (v412)
    {
        v418 = "u8__uuidofz";
        v419 = v412;
        v420 = v415;
        do
        { } while ((v418 += 1, tmp_3 = v419, v419 -= 1, v420 += 1, tmp_3 != 1));
    }
    v8->field_0 = &v415[v412];
    (unsigned int)v411 = sub_4181a0(v8, 12, a2, a3, a4, a5, a6, a7, *((long long *)&v0));
LABEL_4188e8:
    v444 = v8->field_12e0;
    v443 = v411;
    v433 = *((long long *)(v444 + 8));
    if (v433 + 32 >= 4080)
    {
        v435 = malloc(0x1000);
        v433 = 0;
        v435->field_0 = v444;
        *((long long *)&v435->field_8) = 0;
        v444 = v435;
        v8->field_12e0 = v435;
    }
    v352 = v433 + 32;
    v353 = v444 + v433;
    v354 = 315;
    v355 = &g_4330d0;
}

typedef struct struct_1 {
    char padding_0[4832];
    struct struct_2 *field_12e0;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_432ea0;

int sub_419db4(struct_1 *a0, char *a1, unsigned long long *a2)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2[2];  // x22, Other Possible Types: unsigned long
    void* v3;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0
    struct_3 *v6;  // x21
    unsigned long long v7;  // x22
    struct_0 *v9;  // x21

    v0 = &v1;
    v2 = a0->field_12e0;
    v3 = v2[1];
    if (v3 + 64 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            ::0x40f080::std::terminate();
        v3 = 0;
        v5[0] = v2;
        v5[1] = 0;
        v2 = v5;
        a0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v2 + 8)) = v3 + 64;
    v6 = v2 + v3;
    v7 = *(a2);
    v6->field_10 = &g_432ea0;
    v9 = &v6->field_10;
    v9->field_8 = 16843055;
    v9->field_10 = a1;
    v9->field_18 = &a1[strlen(a1)];
    v9->field_20 = v7;
    v9->field_28 = ")";
    v9->field_30 = (char *)(4365010 + __strlen_chk(")", 2));
    return (unsigned int)v9;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_2 *field_12e0;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_4;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_432500;

void sub_419e78(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v2;  // x20
    unsigned long long v3;  // x21
    char *v4;  // x8
    struct_0 *v5;  // x19
    unsigned long long v7;  // x8
    unsigned long long v8;  // x1
    unsigned long long v9;  // x2
    unsigned long long v10;  // x3
    unsigned long long v11;  // x4
    unsigned long long v12;  // x5
    unsigned long long v13;  // x6
    unsigned long long v14;  // x7
    unsigned long long v15;  // x0
    char *v16;  // x8, Other Possible Types: unsigned long
    unsigned long long v17;  // x9
    char *v19;  // x11, Other Possible Types: unsigned long
    char *v20;  // x21, Other Possible Types: unsigned long
    void* v21;  // x22, Other Possible Types: unsigned long
    char *v22;  // x10
    unsigned int v23;  // w12
    unsigned int v24;  // w8
    unsigned long long v25[2];  // x23, Other Possible Types: unsigned long
    void* v26;  // x8, Other Possible Types: unsigned long
    unsigned long long v27[2];  // x0
    struct_3 *v28;  // x0
    struct_4 *v29;  // x0
    unsigned long long v30;  // x29

    v0 = &v1;
    v2 = a0->field_0;
    v3 = a0->field_8;
    if (!(v2 != v3 && *(v2) == 76))
    {
        v30 = v0;
        return;
    }
    v4 = v2 + 1;
    v5 = a0;
    a0->field_0 = v4;
    if (v3 != v4)
    {
        v7 = *(v4) - 84;
        if (37 >= (unsigned int)v7)
            goto sub_419ee4 + (*((short *)(4363514 + (x8<8> << 1))) << 2);
    }
    (unsigned int)v15 = sub_413e1c(a0, v8, v9, v10, v11, v12, v13, v14);
    if (!v15)
    {
        v30 = v0;
        return;
    }
    v16 = v5->field_0;
    v17 = v5->field_8;
    if (!(v17 != v16) || !(9 >= *(v16) - 48))
    {
        v20 = 0;
        v21 = 0;
        if (v16 == v17)
            goto LABEL_41a02c;
    }
    else
    {
        v19 = v16 + 1;
        while (true)
        {
            v22 = v19;
            v5->field_0 = v19;
            if (v17 == v19)
                break;
            v23 = *((char *)v19);
            v19 += 1;
            if (v23 - 48 >= 10)
            {
                v20 = v16;
                v21 = v19 - 1;
                v16 = v22;
                goto LABEL_41a02c;
            }
        }
        v20 = v16;
        v16 = v19;
        v21 = v17;
        goto LABEL_41a02c;
    }
    if (*((char *)v16) == 69)
    {
        v5->field_0 = v16 + 1;
        v24 = 1;
        if (v20 != v21)
            goto LABEL_41a038;
        goto LABEL_41a00c;
    }
LABEL_41a02c:
    v24 = 0;
    if (v20 != v21)
    {
LABEL_41a038:
        if (!v24)
        {
            v30 = v0;
            return;
        }
        v25 = v5->field_12e0;
        v26 = v25[1];
        if (v26 + 48 >= 4080)
        {
            v27 = malloc(0x1000);
            if (!v27)
                ::0x40f080::std::terminate();
            v26 = 0;
            v27[0] = v25;
            v27[1] = 0;
            v25 = v27;
            v5->field_12e0 = &v27[0];
        }
        v28 = v25 + v26;
        *((unsigned long *)(v25 + 8)) = v26 + 48;
        v28->field_10 = &g_432500;
        v29 = &v28->field_10;
        v29->field_8 = 16843069;
        v29->field_10 = v15;
        v29->field_18 = v20;
        v29->field_20 = v21;
        v30 = v0;
        return;
    }
LABEL_41a00c:
    v30 = v0;
    return;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

long long sub_419ee4()
{
    unsigned long long v0;  // x0
    int tmp_3;  // tmp #3
    struct_0 *v1;  // x19
    char *v2;  // x8
    char *v3;  // x9, Other Possible Types: unsigned long
    unsigned long v4;  // x10, Other Possible Types: unsigned long long
    char *v5;  // x11, Other Possible Types: unsigned long
    char *v6;  // x8

    (unsigned int)v0 = __strlen_chk("_Z", 3);
    v2 = v1->field_0;
    if (v1->field_8 - v2 < v0)
        goto LABEL_0x41a650;
    if (v0)
    {
        v3 = "_Z";
        v4 = v0;
        v5 = v2;
        do
        { } while ((v3 += 1, tmp_3 = v4, v4 -= 1, v5 += 1, tmp_3 != 1));
    }
    v1->field_0 = &v2[v0];
    if (!sub_4132d4(v1))
        goto LABEL_0x41a654;
    v6 = v1->field_0;
    if (v6 == v1->field_8)
        goto LABEL_0x41a650;
    if (*(v6) != 69)
        goto LABEL_0x41a650;
    v1->field_0 = &v6[1];
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    char padding_10[4816];
    struct struct_2 *field_12e0;
} struct_0;

typedef struct struct_6 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
} struct_6;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    struct struct_1 *field_20;
    unsigned long long field_28;
} struct_5;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_7 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned int field_18;
    char padding_1c[4];
    struct struct_1 *field_20;
    unsigned long long field_28;
} struct_7;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_41c3e4;
extern char g_4322d0;

long long sub_41a09c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15)
{
    struct_0 *v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    struct_3 *v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    struct_0 *v5;  // x19
    unsigned long v6;  // x20
    unsigned long long v7;  // x2
    char *v8;  // x8
    char *v10;  // x9, Other Possible Types: unsigned long
    char *v11;  // x9, Other Possible Types: unsigned long
    char *v12;  // x22, Other Possible Types: unsigned long
    char *v13;  // x23, Other Possible Types: unsigned long
    unsigned int v14;  // w10
    struct_6 *v16;  // x0, Other Possible Types: unsigned long
    unsigned long long v18[2];  // x24, Other Possible Types: unsigned long
    void* v19;  // x8, Other Possible Types: unsigned long
    unsigned long long v20[2];  // x0
    struct_5 *v21;  // x0, Other Possible Types: unsigned long
    struct_4 *v23;  // x0
    struct_7 *v27;  // x20
    char *v35;  // x1, Other Possible Types: unsigned long, unsigned long long
    unsigned long v36;  // x2
    char *v38;  // x8
    unsigned long long v39;  // x0

    v5->field_0 = v6 + 2;
    v7 = (char *)(4364758 + __strlen_chk("ll", 3));
    a8 = a8;
    a9 = a9;
    a10 = a10;
    a11 = a11;
    a12 = a12;
    a13 = a13;
    a14 = a14;
    a15 = a15;
    v12 = v5->field_0;
    v8 = v5->field_8;
    if (v12 == v8)
    {
        v11 = v12;
        if (v12 == v8)
            goto LABEL_41c334;
    }
    else
    {
        v11 = v12;
        if (*(v12) == 110)
        {
            v11 = v12 + 1;
            v5->field_0 = v11;
        }
        if (v11 == v8)
            goto LABEL_41c334;
    }
    if (9 < (unsigned int)(*((char *)v11) - 48))
    {
        v12 = 0;
        v13 = 0;
    }
    else
    {
        v10 = v11 + 1;
        do
        {
            v5->field_0 = v10;
            if (v8 == v10)
            {
                v11 = v8;
                v13 = v8;
                goto LABEL_41c334;
            }
        } while ((v14 = (unsigned int)(char)*((char *)v10), v10 += 1, (unsigned int)(unsigned long long)(v14 - 48) < 10));
        v11 = v10 - 1;
        v13 = v11;
    }
LABEL_41c334:
    v16 = 0;
    if (!(v12 != v13 && v11 != v8))
        return v16;
    if ((unsigned int)*((char *)v11) != 69)
    {
        v16 = 0;
    }
    else
    {
        v18 = v5->field_12e0;
        v5->field_0 = v11 + 1;
        v19 = v18[1];
        if (v19 + 48 >= 4080)
        {
            v20 = malloc(0x1000);
            if (v20)
            {
                v19 = 0;
                v20[0] = v18;
                v20[1] = 0;
                v18 = v20;
                v5->field_12e0 = &v20[0];
            }
            else
            {
                v21 = ::0x40f080::std::terminate();
                v0 = v5;
                v1 = "ll";
                v2 = v7;
                v3 = &a14;
                v4 = &g_41c3e4;
                v27 = v21;
                if (v21->field_18 - v21->field_10 >= 4)
                {
                    sub_416694("ll", "(", (char *)(4364668 + __strlen_chk("(", 2)));
                    sub_416694("ll", *((long long *)&v27->field_10), *((long long *)&v27->field_18));
                    (unsigned int)v21 = __strlen_chk(")", 2);
                    sub_416694("ll", ")", 4365010 + v21);
                }
                v35 = *((long long *)(v21 + 32));
                if (*(v35) != 110)
                {
                    v36 = *((long long *)(v21 + 40));
                }
                else
                {
                    sub_416694("ll", "-", (char *)(4365246 + __strlen_chk("-", 2)));
                    v38 = v27->field_20;
                    v36 = v27->field_28;
                    if (v36 == v38)
                        v35 = v38;
                    else
                        v35 = v38 + 1;
                }
                v39 = sub_416694("ll", v35, v36);
                if (3 >= *((long long *)&v27->field_18) - *((long long *)&v27->field_10))
                    return (unsigned long long)sub_416694("ll", *((long long *)&v27->field_10), *((long long *)&v27->field_18));
                return v39;
            }
        }
        v23 = v18 + v19;
        *((unsigned long *)(v18 + 8)) = v19 + 48;
        v23->field_10 = &g_4322d0;
        v16 = &v23->field_10;
        *((int *)(v16 + 8)) = 16843070;
        *((char **)(v16 + 16)) = "ll";
        *((unsigned long long *)(v16 + 24)) = v7;
        *((unsigned long *)(v16 + 32)) = v12;
        *((unsigned long *)(v16 + 40)) = v13;
    }
}

long long sub_41a0b4()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a0cc()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a0e0()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a0f8()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a110()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_2 *field_12e0;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_432420;

long long sub_41a128()
{
    char v0[18];  // x20
    unsigned long long v1;  // x22
    struct_1 *v2;  // x19
    unsigned long v3;  // x21
    char *v4;  // x23
    unsigned long long v5[2];  // x0
    void* v6;  // x8, Other Possible Types: unsigned long
    unsigned long long v7[2];  // x21, Other Possible Types: unsigned long
    struct_3 *v8;  // x0
    struct_0 *v9;  // x0

    v1 = &v0[2];
    v2->field_0 = v1;
    if (v3 - v1 < 17)
        goto LABEL_0x41a650;
    if (!isxdigit(v0[2]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[3]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[4]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[5]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[6]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[7]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[8]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[9]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[10]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[11]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[12]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[13]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[14]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[15]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[16]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[17]))
        goto LABEL_0x41a650;
    v4 = v0 + 1;
    v2->field_0 = v4;
    if (v4 == v3)
        goto LABEL_0x41a650;
    if (*(v4) != 69)
        goto LABEL_0x41a650;
    v7 = v2->field_12e0;
    v2->field_0 = &v0[1 + 1];
    v6 = v7[1];
    if (v6 + 32 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            goto LABEL_0x41a668;
        v6 = 0;
        v5[0] = v7;
        v5[1] = 0;
        v7 = v5;
        v2->field_12e0 = &v5[0];
    }
    v8 = v7 + v6;
    *((unsigned long *)(v7 + 8)) = v6 + 32;
    v8->field_10 = &g_432420;
    v9 = &v8->field_10;
    v9->field_8 = 16843072;
    v9->field_10 = v1;
    v9->field_18 = v4;
}

long long sub_41a268()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_0 *field_12e0;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long sub_41a280()
{
    unsigned long v0;  // x20
    char *v1;  // x22
    struct_1 *v2;  // x19
    unsigned long v3;  // x21
    unsigned long v4;  // x24
    char *v5;  // x23
    struct_0 *v6;  // x21
    unsigned long long v7[2];  // x0

    v1 = v0 + 2;
    v2->field_0 = v1;
    if (v3 - v1 < 33)
        goto LABEL_0x41a650;
    v4 = 0;
    v5 = v0 + 34;
    do
    { } while ((v4 += 1, v4 != 32));
    v2->field_0 = v5;
    if (v5 == v3)
        goto LABEL_0x41a650;
    if (*(v5) != 69)
        goto LABEL_0x41a650;
    v6 = v2->field_12e0;
    v2->field_0 = v0 + 35;
    if (v6->field_8 + 32 >= 4080)
    {
        v7 = malloc(0x1000);
        if (!v7)
            goto LABEL_0x41a668;
        v7[0] = v6;
        v7[1] = 0;
        v2->field_12e0 = &v7[0];
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_0 *field_12e0;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long sub_41a330()
{
    char v0[10];  // x20
    unsigned long long v1;  // x22
    struct_1 *v2;  // x19
    unsigned long v3;  // x21
    char *v4;  // x23
    struct_0 *v5;  // x21
    unsigned long long v6[2];  // x0

    v1 = &v0[2];
    v2->field_0 = v1;
    if (v3 - v1 < 9)
        goto LABEL_0x41a650;
    if (!isxdigit(v0[2]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[3]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[4]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[5]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[6]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[7]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[8]))
        goto LABEL_0x41a650;
    if (!isxdigit(v0[9]))
        goto LABEL_0x41a650;
    v4 = v0 + 1;
    v2->field_0 = v4;
    if (v4 == v3)
        goto LABEL_0x41a650;
    if (*(v4) != 69)
        goto LABEL_0x41a650;
    v5 = v2->field_12e0;
    v2->field_0 = &v0[1 + 1];
    if (v5->field_8 + 32 >= 4080)
    {
        v6 = malloc(0x1000);
        if (!v6)
            goto LABEL_0x41a668;
        v6[0] = v5;
        v6[1] = 0;
        v2->field_12e0 = &v6[0];
    }
}

long long sub_41a410()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a428()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_3 *field_12e0;
} struct_1;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char field_c;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_3;

extern char g_432340;

long long sub_41a440()
{
    unsigned long long v0;  // x0
    int tmp_3;  // tmp #3
    struct_1 *v1;  // x19
    char *v2;  // x8
    char *v3;  // x9, Other Possible Types: unsigned long
    unsigned long v4;  // x10, Other Possible Types: unsigned long long
    char *v5;  // x11, Other Possible Types: unsigned long
    unsigned long long v6[2];  // x20, Other Possible Types: unsigned long
    void* v7;  // x8, Other Possible Types: unsigned long
    unsigned long long v8;  // x0
    unsigned long long v9[2];  // x0
    char *v10;  // x8
    char *v11;  // x9, Other Possible Types: unsigned long
    unsigned long v12;  // x10, Other Possible Types: unsigned long long
    char *v13;  // x11, Other Possible Types: unsigned long
    struct_4 *v14;  // x0
    struct_0 *v15;  // x0
    unsigned long long v16[2];  // x20, Other Possible Types: unsigned long
    void* v17;  // x8, Other Possible Types: unsigned long
    unsigned long long v18[2];  // x0
    struct_4 *v19;  // x0
    struct_0 *v20;  // x0

    (unsigned int)v0 = __strlen_chk("b0E", 4);
    v2 = v1->field_0;
    if (v1->field_8 - v2 < v0)
    {
        (unsigned int)v8 = __strlen_chk("b1E", 4);
        v10 = v1->field_0;
        if (v1->field_8 - v10 < v8)
            goto LABEL_0x41a650;
        if (v8)
        {
            v11 = "b1E";
            v12 = v8;
            v13 = v10;
            do
            { } while ((v11 += 1, tmp_3 = v12, v12 -= 1, v13 += 1, tmp_3 != 1));
        }
        v16 = v1->field_12e0;
        v1->field_0 = &v10[v8];
        v17 = v16[1];
        if (v17 + 16 < 4080)
        {
            v19 = v16 + v17;
            *((unsigned long *)(v16 + 8)) = v17 + 16;
            v19->field_10 = &g_432340;
            v20 = &v19->field_10;
            v20->field_8 = 16843068;
            v20->field_c = 1;
        }
        v18 = malloc(0x1000);
        if (!v18)
            goto LABEL_0x41a668;
        v17 = 0;
        v18[0] = v16;
        v18[1] = 0;
        v16 = v18;
        v1->field_12e0 = &v18[0];
    }
    else
    {
        if (v0)
        {
            v3 = "b0E";
            v4 = v0;
            v5 = v2;
            while (*((char *)v3) == *((char *)v5))
            {
                v3 += 1;
                tmp_3 = v4;
                v4 -= 1;
                v5 += 1;
                if (tmp_3 == 1)
                    goto LABEL_41a494;
            }
        }
LABEL_41a494:
        v6 = v1->field_12e0;
        v1->field_0 = &v2[v0];
        v7 = v6[1];
        if (v7 + 16 < 4080)
        {
            v14 = v6 + v7;
            *((unsigned long *)(v6 + 8)) = v7 + 16;
            v14->field_10 = &g_432340;
            v15 = &v14->field_10;
            v15->field_8 = 16843068;
            v15->field_c = 0;
        }
        v9 = malloc(0x1000);
        if (!v9)
            goto LABEL_0x41a668;
        v7 = 0;
        v9[0] = v6;
        v9[1] = 0;
        v6 = v9;
        v1->field_12e0 = &v9[0];
    }
}

long long sub_41a4f8()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a510()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a528()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a540()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

long long sub_41a558()
{
    unsigned long long *v0;  // x19
    unsigned long v1;  // x20

    *(v0) = v1 + 2;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    char padding_10[4816];
    struct struct_2 *field_12e0;
} struct_0;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_4;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_432570;

int sub_41a66c(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_3;  // tmp #3
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x19
    unsigned long long v3;  // x0
    char *v4;  // x9
    char *v5;  // x10, Other Possible Types: unsigned long
    unsigned long v6;  // x11, Other Possible Types: unsigned long long
    char *v7;  // x12, Other Possible Types: unsigned long
    unsigned long long v8;  // x0
    char *v9;  // x9
    char *v10;  // x10, Other Possible Types: unsigned long
    unsigned long v11;  // x11, Other Possible Types: unsigned long long
    char *v12;  // x12, Other Possible Types: unsigned long
    char *v13;  // x10, Other Possible Types: unsigned long
    char *v14;  // x12, Other Possible Types: unsigned long
    char *v15;  // x9, Other Possible Types: unsigned long
    char *v16;  // x12, Other Possible Types: unsigned long
    char *v17;  // x11
    unsigned int v18;  // w9
    char *v19;  // x11, Other Possible Types: unsigned long
    unsigned int v20;  // w12
    unsigned int v21;  // w12
    char *v22;  // x21, Other Possible Types: unsigned long
    char *v23;  // x9, Other Possible Types: unsigned long
    char *v24;  // x8, Other Possible Types: unsigned long
    char *v25;  // x10, Other Possible Types: unsigned long
    char *v26;  // x20, Other Possible Types: unsigned long
    unsigned long long v27[2];  // x22, Other Possible Types: unsigned long
    void* v28;  // x8, Other Possible Types: unsigned long
    unsigned long v29;  // w0
    unsigned long long v30[2];  // x0
    struct_3 *v31;  // x0

    v0 = &v1;
    v2 = a0;
    (unsigned int)v3 = __strlen_chk("fp", 3);
    v4 = v2->field_0;
    v24 = v2->field_8;
    if (v24 - v4 >= v3)
    {
        if (v3)
        {
            v5 = "fp";
            v6 = v3;
            v7 = v4;
        }
        else
        {
LABEL_41a6d4:
            v23 = &v4[v3];
            v2->field_0 = v23;
            if (v23 != v24)
            {
                if (*(v23) == 114)
                {
                    v23 += 1;
                    v2->field_0 = v23;
                }
                if (v23 != v24)
                {
                    if (*((char *)v23) == 86)
                    {
                        v23 += 1;
                        v2->field_0 = v23;
                    }
                    if (v23 != v24)
                    {
                        if (*((char *)v23) == 75)
                        {
                            v23 += 1;
                            v2->field_0 = v23;
                        }
                        if (!(v24 != v23))
                            goto LABEL_41a930;
                        goto LABEL_41a7f8;
                    }
                }
            }
            v23 = v24;
            if (v24 == v24)
                goto LABEL_41a930;
LABEL_41a7f8:
            if (9 >= *((char *)v23) - 48)
            {
                v19 = v23 + 1;
                while (true)
                {
                    v25 = v19;
                    v2->field_0 = v19;
                    if (v24 == v19)
                        break;
                    v20 = *((char *)v19);
                    v19 += 1;
                    if (!(v20 - 48 < 10))
                        goto LABEL_41a830;
                }
                goto LABEL_41a9b0;
            }
        }
        while (*((char *)v5) == *((char *)v7))
        {
            v5 += 1;
            tmp_3 = v6;
            v6 -= 1;
            v7 += 1;
            if (!(tmp_3 != 1))
                goto LABEL_41a6d4;
        }
    }
    (unsigned int)v8 = __strlen_chk("fL", 3);
    v9 = v2->field_0;
    v24 = v2->field_8;
    if (v24 - v9 < v8)
        return 0;
    if (v8)
    {
        v10 = "fL";
        v11 = v8;
        v12 = v9;
        while (*((char *)v10) == *((char *)v12))
        {
            v10 += 1;
            tmp_3 = v11;
            v11 -= 1;
            v12 += 1;
            if (tmp_3 == 1)
                goto LABEL_41a790;
        }
    }
LABEL_41a790:
    v13 = &v9[v8];
    v2->field_0 = v13;
    if (v24 == v13 || 9 < *(v13) - 48)
    {
        v15 = 0;
        v16 = 0;
    }
    else
    {
        v14 = &v9[v8 + 1];
        do
        {
            v17 = v14;
            v2->field_0 = v14;
            if (v24 == v14)
            {
                v15 = v13;
                v13 = v14;
                v16 = v24;
                goto LABEL_41a850;
            }
        } while ((v18 = (unsigned int)(char)*((char *)v14), v14 += 1, v18 - 48 < 10));
        v15 = v13;
        v16 = v14 - 1;
        v13 = v17;
    }
LABEL_41a850:
    if (v15 == v16)
        return 0;
    if (v13 == v24)
        return 0;
    if (*((char *)v13) != 112)
        return 0;
    v23 = v13 + 1;
    v2->field_0 = v23;
    if (v23 == v24)
    {
        v23 = v24;
    }
    else
    {
        if (*((char *)v23) == 114)
        {
            v23 = v13 + 2;
            v2->field_0 = v23;
        }
        if (v23 != v24)
        {
            if (*((char *)v23) == 86)
            {
                v23 += 1;
                v2->field_0 = v23;
            }
            if (v23 != v24 && *((char *)v23) == 75)
            {
                v23 += 1;
                v2->field_0 = v23;
                if (v24 == v23)
                    goto LABEL_41a930;
                goto LABEL_41a8f4;
            }
        }
    }
    if (v24 == v23)
        goto LABEL_41a930;
LABEL_41a8f4:
    if (9 >= *((char *)v23) - 48)
    {
        v19 = v23 + 1;
        while (true)
        {
            v25 = v19;
            v2->field_0 = v19;
            if (v24 == v19)
                break;
            v21 = *((char *)v19);
            v19 += 1;
            if (v21 - 48 >= 10)
            {
LABEL_41a830:
                v26 = v23;
                v22 = v19 - 1;
                v23 = v25;
                if (v25 == v24)
                    return 0;
                goto LABEL_41a940;
            }
        }
LABEL_41a9b0:
        v26 = v23;
        v23 = v25;
        v22 = v24;
        if (v25 == v24)
            return 0;
LABEL_41a940:
        if (*((char *)v23) != 95)
            return 0;
        v27 = v2->field_12e0;
        v2->field_0 = v23 + 1;
        v28 = v27[1];
        if (v28 + 32 >= 4080)
        {
            v30 = malloc(0x1000);
            if (!v30)
                ::0x40f080::std::terminate();
            v28 = 0;
            v30[0] = v27;
            v30[1] = 0;
            v27 = v30;
            v2->field_12e0 = &v30[0];
        }
        v31 = v27 + v28;
        *((unsigned long *)(v27 + 8)) = v28 + 32;
        v31->field_10 = &g_432570;
        v29 = &v31->field_10;
        *((int *)(v29 + 8)) = 16843062;
        *((unsigned long *)(v29 + 16)) = v26;
        *((unsigned long *)(v29 + 24)) = v22;
        return v29;
    }
LABEL_41a930:
    v26 = 0;
    v22 = 0;
    if (v23 == v24)
        return 0;
    goto LABEL_41a940;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

void sub_41a9dc(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v2;  // x8
    unsigned long long v3;  // x9
    char *v4;  // x10
    unsigned long long v5;  // x29

    v0 = &v1;
    v2 = a0->field_0;
    v3 = a0->field_8;
    if (v2 != v3 && *(v2) == 102)
    {
        v4 = v2 + 1;
        a0->field_0 = v4;
        if (v3 != v4)
        {
            if (38 >= *(v4) - 76)
            {
                goto sub_41aa50 + (*((short *)(4363590 + (a0->field_0[1].field_0 - 76 << 1))) << 2);
            }
            else
            {
                v5 = v0;
                return;
            }
        }
    }
    v5 = v0;
    return;
}

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_3 *field_12e0;
} struct_1;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_3;

extern char g_42993e;
extern char g_42993f;
extern char g_429abc;
extern char g_429adc;
extern char g_429b1c;
extern char g_429b26;
extern char g_429b31;
extern char g_429b3b;
extern char g_429b46;
extern char g_429b7c;
extern char g_429b7d;
extern char g_429b87;
extern char g_429b88;
extern char g_429ba7;
extern char g_429bb2;
extern char g_429bbe;
extern char g_429bd7;
extern char g_429bd8;
extern char g_429bf9;
extern char g_429c04;
extern char g_429c0e;
extern char g_429c2f;
extern char g_429c3b;
extern char g_429c5a;
extern char g_429c64;
extern char g_429c6f;
extern char g_429c7b;
extern char g_429d46;
extern char g_429eb9;
extern char g_429ebc;
extern char g_4325e0;

long long sub_41aa50(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    unsigned long v0;  // x8
    int tmp_3;  // tmp #3
    struct_1 *v2;  // x19
    unsigned long long v3;  // x0
    char *v4;  // x8
    char *v5;  // x11, Other Possible Types: unsigned long
    char *v6;  // x9, Other Possible Types: unsigned long
    unsigned long v7;  // x10, Other Possible Types: unsigned long long
    unsigned long long v8;  // x0
    char *v9;  // x8
    char *v10;  // x9, Other Possible Types: unsigned long
    unsigned long v11;  // x10, Other Possible Types: unsigned long long
    char *v12;  // x11, Other Possible Types: unsigned long
    unsigned long long v13;  // x0
    char *v14;  // x8
    char *v15;  // x9, Other Possible Types: unsigned long
    unsigned long v16;  // x10, Other Possible Types: unsigned long long
    char *v17;  // x11, Other Possible Types: unsigned long
    unsigned long long v18;  // x0
    char *v19;  // x8
    char *v20;  // x9, Other Possible Types: unsigned long
    unsigned long v21;  // x10, Other Possible Types: unsigned long long
    char *v22;  // x11, Other Possible Types: unsigned long
    unsigned long long v23;  // x0
    char *v24;  // x8
    char *v25;  // x9, Other Possible Types: unsigned long
    unsigned long v26;  // x10, Other Possible Types: unsigned long long
    char *v27;  // x11, Other Possible Types: unsigned long
    unsigned long long v28;  // x0
    char *v29;  // x8
    char *v30;  // x11, Other Possible Types: unsigned long
    char *v31;  // x9, Other Possible Types: unsigned long
    unsigned long v32;  // x10, Other Possible Types: unsigned long long
    unsigned long v33;  // x20, Other Possible Types: unsigned long long
    unsigned long long v34;  // x0
    char *v35;  // x8
    char *v36;  // x9, Other Possible Types: unsigned long
    unsigned long v37;  // x10, Other Possible Types: unsigned long long
    char *v38;  // x11, Other Possible Types: unsigned long
    unsigned long long v40;  // x0
    char *v41;  // x8
    char *v42;  // x9, Other Possible Types: unsigned long
    unsigned long v43;  // x10, Other Possible Types: unsigned long long
    char *v44;  // x11, Other Possible Types: unsigned long
    unsigned long long v45;  // x0
    char *v46;  // x8
    char *v47;  // x9, Other Possible Types: unsigned long
    unsigned long v48;  // x10, Other Possible Types: unsigned long long
    char *v49;  // x11, Other Possible Types: unsigned long
    unsigned long long v50;  // x0
    char *v51;  // x8
    char *v52;  // x9, Other Possible Types: unsigned long
    unsigned long v53;  // x10, Other Possible Types: unsigned long long
    char *v54;  // x11, Other Possible Types: unsigned long
    unsigned long long v55;  // x0
    char *v56;  // x8
    char *v57;  // x9, Other Possible Types: unsigned long
    unsigned long v58;  // x10, Other Possible Types: unsigned long long
    char *v59;  // x11, Other Possible Types: unsigned long
    unsigned long long v60;  // x0
    char *v61;  // x8
    char *v62;  // x9, Other Possible Types: unsigned long
    unsigned long v63;  // x10, Other Possible Types: unsigned long long
    char *v64;  // x11, Other Possible Types: unsigned long
    unsigned long long v65;  // x0
    char *v66;  // x8
    char *v67;  // x9, Other Possible Types: unsigned long
    unsigned long v68;  // x10, Other Possible Types: unsigned long long
    char *v69;  // x11, Other Possible Types: unsigned long
    unsigned long long v70;  // x0
    char *v71;  // x8
    char *v72;  // x9, Other Possible Types: unsigned long
    unsigned long v73;  // x10, Other Possible Types: unsigned long long
    char *v74;  // x11, Other Possible Types: unsigned long
    unsigned long long v75;  // x0
    char *v76;  // x8
    char *v77;  // x9, Other Possible Types: unsigned long
    unsigned long v78;  // x10, Other Possible Types: unsigned long long
    char *v79;  // x11, Other Possible Types: unsigned long
    unsigned long long v80;  // x0
    char *v81;  // x8
    char *v82;  // x9, Other Possible Types: unsigned long
    unsigned long v83;  // x10, Other Possible Types: unsigned long long
    char *v84;  // x11, Other Possible Types: unsigned long
    unsigned long long v85;  // x0
    char *v86;  // x8
    char *v87;  // x9, Other Possible Types: unsigned long
    unsigned long v88;  // x10, Other Possible Types: unsigned long long
    char *v89;  // x11, Other Possible Types: unsigned long
    unsigned long long v90;  // x0
    char *v91;  // x8
    char *v92;  // x9, Other Possible Types: unsigned long
    unsigned long v93;  // x10, Other Possible Types: unsigned long long
    char *v94;  // x11, Other Possible Types: unsigned long
    unsigned long long v95;  // x0
    char *v96;  // x8
    char *v97;  // x9, Other Possible Types: unsigned long
    unsigned long v98;  // x10, Other Possible Types: unsigned long long
    char *v99;  // x11, Other Possible Types: unsigned long
    unsigned long long v100;  // x0
    char *v101;  // x8
    char *v102;  // x9, Other Possible Types: unsigned long
    unsigned long v103;  // x10, Other Possible Types: unsigned long long
    char *v104;  // x11, Other Possible Types: unsigned long
    unsigned long long v105;  // x0
    char *v106;  // x8
    char *v107;  // x9, Other Possible Types: unsigned long
    unsigned long v108;  // x10, Other Possible Types: unsigned long long
    char *v109;  // x11, Other Possible Types: unsigned long
    unsigned long long v110;  // x0
    char *v111;  // x8
    char *v112;  // x9, Other Possible Types: unsigned long
    unsigned long v113;  // x10, Other Possible Types: unsigned long long
    char *v114;  // x11, Other Possible Types: unsigned long
    unsigned long long v115;  // x0
    char *v116;  // x8
    char *v117;  // x9, Other Possible Types: unsigned long
    unsigned long v118;  // x10, Other Possible Types: unsigned long long
    char *v119;  // x11, Other Possible Types: unsigned long
    unsigned long long v120;  // x0
    char *v121;  // x8
    char *v122;  // x9, Other Possible Types: unsigned long
    unsigned long v123;  // x10, Other Possible Types: unsigned long long
    char *v124;  // x11, Other Possible Types: unsigned long
    unsigned long long v125;  // x0
    char *v126;  // x8
    char *v127;  // x9, Other Possible Types: unsigned long
    unsigned long v128;  // x10, Other Possible Types: unsigned long long
    char *v129;  // x11, Other Possible Types: unsigned long
    unsigned long long v130;  // x0
    char *v131;  // x8
    char *v132;  // x9, Other Possible Types: unsigned long
    unsigned long v133;  // x10, Other Possible Types: unsigned long long
    char *v134;  // x11, Other Possible Types: unsigned long
    unsigned long long v135;  // x0
    char *v136;  // x8
    char *v137;  // x9, Other Possible Types: unsigned long
    unsigned long v138;  // x10, Other Possible Types: unsigned long long
    char *v139;  // x11, Other Possible Types: unsigned long
    unsigned long long v140;  // x0
    char *v141;  // x8
    char *v142;  // x9, Other Possible Types: unsigned long
    unsigned long v143;  // x10, Other Possible Types: unsigned long long
    char *v144;  // x11, Other Possible Types: unsigned long
    unsigned long long v145;  // x0
    char *v146;  // x8
    char *v147;  // x9, Other Possible Types: unsigned long
    unsigned long v148;  // x10, Other Possible Types: unsigned long long
    char *v149;  // x11, Other Possible Types: unsigned long
    unsigned long long v150;  // x0
    char *v151;  // x8
    char *v152;  // x9, Other Possible Types: unsigned long
    unsigned long v153;  // x10, Other Possible Types: unsigned long long
    char *v154;  // x11, Other Possible Types: unsigned long
    unsigned long long v155;  // x0
    char *v156;  // x8
    char *v157;  // x9, Other Possible Types: unsigned long
    unsigned long v158;  // x10, Other Possible Types: unsigned long long
    char *v159;  // x11, Other Possible Types: unsigned long
    unsigned long long v162;  // x0
    unsigned long v163;  // x21, Other Possible Types: unsigned long long
    unsigned int v164;  // w23
    unsigned long long v165;  // x0
    void* v166;  // x23, Other Possible Types: unsigned long long, unsigned long
    unsigned long v167;  // x8, Other Possible Types: unsigned long long
    unsigned long long v168[2];  // x25, Other Possible Types: unsigned long
    void* v169;  // x8, Other Possible Types: unsigned long
    unsigned long long v170[2];  // x0
    struct_4 *v171;  // x0
    struct_0 *v172;  // x0

    v2->field_0 = v0 + 2;
    (unsigned int)v3 = __strlen_chk("aa", 3);
    v4 = v2->field_0;
    if (v2->field_8 - v4 >= v3)
    {
        if (!v3)
        {
            v2->field_0 = &v4[v3];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v6 = "aa";
            v7 = v3;
            v5 = v4;
            while (*((char *)v6) == *((char *)v5))
            {
                v6 += 1;
                tmp_3 = v7;
                v7 -= 1;
                v5 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v4[v3];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v8 = __strlen_chk("an", 3);
    v9 = v2->field_0;
    if (v2->field_8 - v9 >= v8)
    {
        if (!v8)
        {
            v2->field_0 = &v9[v8];
        }
        else
        {
            v10 = "an";
            v11 = v8;
            v12 = v9;
            while (*((char *)v10) == *((char *)v12))
            {
                v10 += 1;
                tmp_3 = v11;
                v11 -= 1;
                v12 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v9[v8];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v13 = __strlen_chk("aN", 3);
    v14 = v2->field_0;
    if (v2->field_8 - v14 >= v13)
    {
        if (!v13)
        {
            v2->field_0 = &v14[v13];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v15 = "aN";
            v16 = v13;
            v17 = v14;
            while (*((char *)v15) == *((char *)v17))
            {
                v15 += 1;
                tmp_3 = v16;
                v16 -= 1;
                v17 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v14[v13];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v18 = __strlen_chk("aS", 3);
    v19 = v2->field_0;
    if (v2->field_8 - v19 >= v18)
    {
        if (!v18)
        {
            v2->field_0 = &v19[v18];
        }
        else
        {
            v20 = "aS";
            v21 = v18;
            v22 = v19;
            while (*((char *)v20) == *((char *)v22))
            {
                v20 += 1;
                tmp_3 = v21;
                v21 -= 1;
                v22 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v19[v18];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v23 = __strlen_chk("cm", 3);
    v24 = v2->field_0;
    if (v2->field_8 - v24 >= v23)
    {
        if (!v23)
        {
            v2->field_0 = &v24[v23];
        }
        else
        {
            v25 = "cm";
            v26 = v23;
            v27 = v24;
            while (*((char *)v25) == *((char *)v27))
            {
                v25 += 1;
                tmp_3 = v26;
                v26 -= 1;
                v27 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v24[v23];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v28 = __strlen_chk("ds", 3);
    v29 = v2->field_0;
    if (v2->field_8 - v29 >= v28)
    {
        if (!v28)
        {
            v2->field_0 = &v29[v28];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v31 = "ds";
            v32 = v28;
            v30 = v29;
            while (*((char *)v31) == *((char *)v30))
            {
                v31 += 1;
                tmp_3 = v32;
                v32 -= 1;
                v30 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v29[v28];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v34 = __strlen_chk("dv", 3);
    v35 = v2->field_0;
    if (v2->field_8 - v35 >= v34)
    {
        if (!v34)
        {
            v2->field_0 = &v35[v34];
        }
        else
        {
            v36 = "dv";
            v37 = v34;
            v38 = v35;
            while (*((char *)v36) == *((char *)v38))
            {
                v36 += 1;
                tmp_3 = v37;
                v37 -= 1;
                v38 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v35[v34];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v40 = __strlen_chk("dV", 3);
    v41 = v2->field_0;
    if (v2->field_8 - v41 >= v40)
    {
        if (!v40)
        {
            v2->field_0 = &v41[v40];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v42 = "dV";
            v43 = v40;
            v44 = v41;
            while (*((char *)v42) == *((char *)v44))
            {
                v42 += 1;
                tmp_3 = v43;
                v43 -= 1;
                v44 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v41[v40];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v45 = __strlen_chk("eo", 3);
    v46 = v2->field_0;
    if (v2->field_8 - v46 >= v45)
    {
        if (!v45)
        {
            v2->field_0 = &v46[v45];
        }
        else
        {
            v47 = "eo";
            v48 = v45;
            v49 = v46;
            while (*((char *)v47) == *((char *)v49))
            {
                v47 += 1;
                tmp_3 = v48;
                v48 -= 1;
                v49 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v46[v45];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v50 = __strlen_chk("eO", 3);
    v51 = v2->field_0;
    if (v2->field_8 - v51 >= v50)
    {
        if (!v50)
        {
            v2->field_0 = &v51[v50];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v52 = "eO";
            v53 = v50;
            v54 = v51;
            while (*((char *)v52) == *((char *)v54))
            {
                v52 += 1;
                tmp_3 = v53;
                v53 -= 1;
                v54 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v51[v50];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v55 = __strlen_chk("eq", 3);
    v56 = v2->field_0;
    if (v2->field_8 - v56 >= v55)
    {
        if (!v55)
        {
            v2->field_0 = &v56[v55];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v57 = "eq";
            v58 = v55;
            v59 = v56;
            while (*((char *)v57) == *((char *)v59))
            {
                v57 += 1;
                tmp_3 = v58;
                v58 -= 1;
                v59 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v56[v55];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v60 = __strlen_chk("ge", 3);
    v61 = v2->field_0;
    if (v2->field_8 - v61 >= v60)
    {
        if (!v60)
        {
            v2->field_0 = &v61[v60];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v62 = "ge";
            v63 = v60;
            v64 = v61;
            while (*((char *)v62) == *((char *)v64))
            {
                v62 += 1;
                tmp_3 = v63;
                v63 -= 1;
                v64 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v61[v60];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v65 = __strlen_chk("gt", 3);
    v66 = v2->field_0;
    if (v2->field_8 - v66 >= v65)
    {
        if (!v65)
        {
            v2->field_0 = &v66[v65];
        }
        else
        {
            v67 = "gt";
            v68 = v65;
            v69 = v66;
            while (*((char *)v67) == *((char *)v69))
            {
                v67 += 1;
                tmp_3 = v68;
                v68 -= 1;
                v69 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v66[v65];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v70 = __strlen_chk("le", 3);
    v71 = v2->field_0;
    if (v2->field_8 - v71 >= v70)
    {
        if (!v70)
        {
            v2->field_0 = &v71[v70];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v72 = "le";
            v73 = v70;
            v74 = v71;
            while (*((char *)v72) == *((char *)v74))
            {
                v72 += 1;
                tmp_3 = v73;
                v73 -= 1;
                v74 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v71[v70];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v75 = __strlen_chk("ls", 3);
    v76 = v2->field_0;
    if (v2->field_8 - v76 >= v75)
    {
        if (!v75)
        {
            v2->field_0 = &v76[v75];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v77 = "ls";
            v78 = v75;
            v79 = v76;
            while (*((char *)v77) == *((char *)v79))
            {
                v77 += 1;
                tmp_3 = v78;
                v78 -= 1;
                v79 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v76[v75];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v80 = __strlen_chk("lS", 3);
    v81 = v2->field_0;
    if (v2->field_8 - v81 >= v80)
    {
        if (!v80)
        {
            v2->field_0 = &v81[v80];
LABEL_41b1a4:
            goto LABEL_41b088;
        }
        else
        {
            v82 = "lS";
            v83 = v80;
            v84 = v81;
            while (*((char *)v82) == *((char *)v84))
            {
                v82 += 1;
                tmp_3 = v83;
                v83 -= 1;
                v84 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v81[v80];
                    goto LABEL_41b1a4;
                }
            }
        }
    }
    (unsigned int)v85 = __strlen_chk("lt", 3);
    v86 = v2->field_0;
    if (v2->field_8 - v86 >= v85)
    {
        if (!v85)
        {
            v2->field_0 = &v86[v85];
        }
        else
        {
            v87 = "lt";
            v88 = v85;
            v89 = v86;
            while (*((char *)v87) == *((char *)v89))
            {
                v87 += 1;
                tmp_3 = v88;
                v88 -= 1;
                v89 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v86[v85];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v90 = __strlen_chk("mi", 3);
    v91 = v2->field_0;
    if (v2->field_8 - v91 >= v90)
    {
        if (!v90)
        {
            v2->field_0 = &v91[v90];
        }
        else
        {
            v92 = "mi";
            v93 = v90;
            v94 = v91;
            while (*((char *)v92) == *((char *)v94))
            {
                v92 += 1;
                tmp_3 = v93;
                v93 -= 1;
                v94 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v91[v90];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v95 = __strlen_chk("mI", 3);
    v96 = v2->field_0;
    if (v2->field_8 - v96 >= v95)
    {
        if (!v95)
        {
            v2->field_0 = &v96[v95];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v97 = "mI";
            v98 = v95;
            v99 = v96;
            while (*((char *)v97) == *((char *)v99))
            {
                v97 += 1;
                tmp_3 = v98;
                v98 -= 1;
                v99 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v96[v95];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v100 = __strlen_chk("ml", 3);
    v101 = v2->field_0;
    if (v2->field_8 - v101 >= v100)
    {
        if (!v100)
        {
            v2->field_0 = &v101[v100];
        }
        else
        {
            v102 = "ml";
            v103 = v100;
            v104 = v101;
            while (*((char *)v102) == *((char *)v104))
            {
                v102 += 1;
                tmp_3 = v103;
                v103 -= 1;
                v104 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v101[v100];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v105 = __strlen_chk("mL", 3);
    v106 = v2->field_0;
    if (v2->field_8 - v106 >= v105)
    {
        if (!v105)
        {
            v2->field_0 = &v106[v105];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v107 = "mL";
            v108 = v105;
            v109 = v106;
            while (*((char *)v107) == *((char *)v109))
            {
                v107 += 1;
                tmp_3 = v108;
                v108 -= 1;
                v109 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v106[v105];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v110 = __strlen_chk("ne", 3);
    v111 = v2->field_0;
    if (v2->field_8 - v111 >= v110)
    {
        if (!v110)
        {
            v2->field_0 = &v111[v110];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v112 = "ne";
            v113 = v110;
            v114 = v111;
            while (*((char *)v112) == *((char *)v114))
            {
                v112 += 1;
                tmp_3 = v113;
                v113 -= 1;
                v114 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v111[v110];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v115 = __strlen_chk("oo", 3);
    v116 = v2->field_0;
    if (v2->field_8 - v116 >= v115)
    {
        if (!v115)
        {
            v2->field_0 = &v116[v115];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v117 = "oo";
            v118 = v115;
            v119 = v116;
            while (*((char *)v117) == *((char *)v119))
            {
                v117 += 1;
                tmp_3 = v118;
                v118 -= 1;
                v119 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v116[v115];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v120 = __strlen_chk("or", 3);
    v121 = v2->field_0;
    if (v2->field_8 - v121 >= v120)
    {
        if (!v120)
        {
            v2->field_0 = &v121[v120];
        }
        else
        {
            v122 = "or";
            v123 = v120;
            v124 = v121;
            while (*((char *)v122) == *((char *)v124))
            {
                v122 += 1;
                tmp_3 = v123;
                v123 -= 1;
                v124 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v121[v120];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v125 = __strlen_chk("oR", 3);
    v126 = v2->field_0;
    if (v2->field_8 - v126 >= v125)
    {
        if (!v125)
        {
            v2->field_0 = &v126[v125];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v127 = "oR";
            v128 = v125;
            v129 = v126;
            while (*((char *)v127) == *((char *)v129))
            {
                v127 += 1;
                tmp_3 = v128;
                v128 -= 1;
                v129 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v126[v125];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v130 = __strlen_chk("pl", 3);
    v131 = v2->field_0;
    if (v2->field_8 - v131 >= v130)
    {
        if (!v130)
        {
            v2->field_0 = &v131[v130];
        }
        else
        {
            v132 = "pl";
            v133 = v130;
            v134 = v131;
            while (*((char *)v132) == *((char *)v134))
            {
                v132 += 1;
                tmp_3 = v133;
                v133 -= 1;
                v134 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v131[v130];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v135 = __strlen_chk("pL", 3);
    v136 = v2->field_0;
    if (v2->field_8 - v136 >= v135)
    {
        if (!v135)
        {
            v2->field_0 = &v136[v135];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v137 = "pL";
            v138 = v135;
            v139 = v136;
            while (*((char *)v137) == *((char *)v139))
            {
                v137 += 1;
                tmp_3 = v138;
                v138 -= 1;
                v139 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v136[v135];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v140 = __strlen_chk("rm", 3);
    v141 = v2->field_0;
    if (v2->field_8 - v141 >= v140)
    {
        if (!v140)
        {
            v2->field_0 = &v141[v140];
        }
        else
        {
            v142 = "rm";
            v143 = v140;
            v144 = v141;
            while (*((char *)v142) == *((char *)v144))
            {
                v142 += 1;
                tmp_3 = v143;
                v143 -= 1;
                v144 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v141[v140];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v145 = __strlen_chk("rM", 3);
    v146 = v2->field_0;
    if (v2->field_8 - v146 >= v145)
    {
        if (!v145)
        {
            v2->field_0 = &v146[v145];
LABEL_41b088:
            goto LABEL_41b088;
        }
        else
        {
            v147 = "rM";
            v148 = v145;
            v149 = v146;
            while (*((char *)v147) == *((char *)v149))
            {
                v147 += 1;
                tmp_3 = v148;
                v148 -= 1;
                v149 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v146[v145];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v150 = __strlen_chk("rs", 3);
    v151 = v2->field_0;
    if (v2->field_8 - v151 >= v150)
    {
        if (!v150)
        {
            v2->field_0 = &v151[v150];
LABEL_41b088:
        }
        else
        {
            v152 = "rs";
            v153 = v150;
            v154 = v151;
            while (*((char *)v152) == *((char *)v154))
            {
                v152 += 1;
                tmp_3 = v153;
                v153 -= 1;
                v154 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v151[v150];
                    goto LABEL_41b088;
                }
            }
        }
    }
    (unsigned int)v155 = __strlen_chk("rS", 3);
    v156 = v2->field_0;
    if (v2->field_8 - v156 < v155)
        goto LABEL_0x41b7dc;
    if (v155)
    {
        v157 = "rS";
        v158 = v155;
        v159 = v156;
        do
        { } while ((v157 += 1, tmp_3 = v158, v158 -= 1, v159 += 1, tmp_3 != 1));
    }
    v33 = ">>=";
    v2->field_0 = &v156[v155];
LABEL_41b1a4:
    (unsigned int)v162 = sub_4181a0(v2, 4, a2, a3, a4, a5, a6, a7, a8);
    if (!v162)
        goto LABEL_0x41b7e0;
    v163 = v162;
    if (v164 == 82 || v164 == 76)
    {
        (unsigned int)v165 = sub_4181a0(v2, 4, a2, a3, a4, a5, a6, a7, a8);
        if (!v165)
            goto LABEL_0x41b7e0;
        if (false)
            v167 = v165;
        else
            v167 = v163;
        if ((char)[D] arm64g_calculate_condition(0x13<64>, 0x0<64>, 0x0<64>, 0x0<64>))
            v166 = v163;
        else
            v166 = v165;
        v163 = v167;
    }
    else
    {
        v166 = 0;
    }
    v168 = v2->field_12e0;
    v169 = v168[1];
    if (v169 + 64 >= 4080)
    {
        v170 = malloc(0x1000);
        if (!v170)
            ::0x40f080::std::terminate();
        v169 = 0;
        v170[0] = v168;
        v170[1] = 0;
        v168 = v170;
        v2->field_12e0 = &v170[0];
    }
    v171 = v168 + v169;
    *((unsigned long *)(v168 + 8)) = v169 + 64;
    v171->field_10 = &g_4325e0;
    v172 = &v171->field_10;
    v172->field_8 = 16843065;
    v172->field_10 = v163;
    v172->field_18 = v166;
    v172->field_20 = ">>=";
    v172->field_28 = v33 + __strlen_chk(v33, 4);
    v172->field_30 = 0;
}

typedef struct struct_0 {
    char padding_0[4832];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

extern char g_4326c0;

void sub_41b7fc(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    struct_0 *v3;  // x23
    unsigned long long v4;  // x3
    unsigned long long v5;  // x4
    unsigned long long v6;  // x5
    unsigned long long v7;  // x6
    unsigned long long v8;  // x7
    unsigned long long v9;  // x0
    unsigned long long v11;  // x0
    void* v13;  // x8, Other Possible Types: unsigned long
    unsigned long long v14[2];  // x0
    unsigned long long v15[2];  // x24, Other Possible Types: unsigned long
    struct_3 *v16;  // x0
    struct_2 *v17;  // x0
    unsigned long long v18;  // x29

    v1 = &v2;
    v3 = a0;
    (unsigned int)v9 = sub_4181a0(a0, a1, a2, v4, v5, v6, v7, v8, *((long long *)&v0));
    if (!v9)
    {
        v18 = v1;
        return;
    }
    (unsigned int)v11 = sub_4181a0(v3, a1, a2, v4, v5, v6, v7, v8, *((long long *)&v0));
    if (!v11)
    {
        v18 = v1;
        return;
    }
    v15 = v3->field_12e0;
    v13 = v15[1];
    if (v13 + 48 >= 4080)
    {
        v14 = malloc(0x1000);
        if (!v14)
            ::0x40f080::std::terminate();
        v13 = 0;
        v14[0] = v15;
        v14[1] = 0;
        v15 = v14;
        v3->field_12e0 = &v14[0];
    }
    v16 = v15 + v13;
    *((unsigned long *)(v15 + 8)) = v13 + 48;
    v16->field_10 = &g_4326c0;
    v17 = &v16->field_10;
    v17->field_8 = 16843050;
    v17->field_10 = v9;
    v17->field_18 = a1;
    v17->field_20 = a2;
    v17->field_28 = v11;
    v18 = v1;
    return;
}

typedef struct struct_3 {
    struct struct_4 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_5 *field_12e0;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_1;

typedef struct struct_4 {
    char field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_5;

extern char g_432960;
extern char g_432b20;
extern char g_4335a0;

void sub_41b8ac(struct_3 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_3;  // tmp #3
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x19
    unsigned long long v3;  // x0
    char *v4;  // x8
    char *v5;  // x9, Other Possible Types: unsigned long
    unsigned long v6;  // x10, Other Possible Types: unsigned long long
    char *v7;  // x11, Other Possible Types: unsigned long
    struct_0 *v8;  // x0
    unsigned long long v9;  // x0
    char *v10;  // x8
    char *v11;  // x8
    char *v13;  // x9, Other Possible Types: unsigned long
    unsigned long v14;  // x10, Other Possible Types: unsigned long long
    char *v15;  // x11, Other Possible Types: unsigned long
    unsigned long long v16;  // x0
    unsigned long long v17;  // x8
    unsigned long long v19[2];  // x22, Other Possible Types: unsigned long
    void* v21;  // x8, Other Possible Types: unsigned long
    unsigned long long v22;  // x0
    unsigned long long v23[2];  // x0
    char *v24;  // x9
    unsigned long long v25;  // x8
    char *v26;  // x10, Other Possible Types: unsigned long
    unsigned long v27;  // x11, Other Possible Types: unsigned long long
    char *v28;  // x12, Other Possible Types: unsigned long
    unsigned long long v29;  // x9
    struct_2 *v30;  // x8
    struct_0 *v31;  // x8
    char *v32;  // x9
    char *v33;  // x8
    struct_0 *v34;  // x0
    char *v35;  // x8
    unsigned long long v37;  // x22
    unsigned long long v38[2];  // x27, Other Possible Types: unsigned long
    void* v39;  // x8, Other Possible Types: unsigned long
    unsigned long long v40[2];  // x0
    unsigned long long v41;  // x9
    struct_2 *v42;  // x8
    struct_0 *v43;  // x8
    struct_0 *v44;  // x21, Other Possible Types: unsigned long
    unsigned long long v45[2];  // x22, Other Possible Types: unsigned long
    void* v46;  // x8, Other Possible Types: unsigned long
    unsigned long long v47[2];  // x0
    unsigned long long v48;  // x9
    struct_2 *v49;  // x8
    struct_0 *v50;  // x8
    struct_0 *v51;  // x20, Other Possible Types: unsigned long, struct_1 *, unsigned long long, void*
    unsigned long long v52;  // x22
    unsigned long v53;  // x0, Other Possible Types: unsigned long long
    struct_0 *v54;  // x0, Other Possible Types: unsigned long
    unsigned long long v55;  // x0
    unsigned long long v56[2];  // x20, Other Possible Types: unsigned long
    void* v57;  // x8, Other Possible Types: unsigned long
    struct_0 *v58;  // x21, Other Possible Types: unsigned long
    char *v59;  // x8
    unsigned long long v60[2];  // x0
    char *v61;  // x8
    unsigned long long v63;  // x22
    unsigned long long v64[2];  // x27, Other Possible Types: unsigned long
    void* v65;  // x8, Other Possible Types: unsigned long
    unsigned long long v66[2];  // x0
    unsigned long long v67;  // x9
    struct_2 *v68;  // x8
    struct_0 *v69;  // x8
    unsigned long long v70[2];  // x22, Other Possible Types: unsigned long
    void* v71;  // x8, Other Possible Types: unsigned long
    unsigned long long v72[2];  // x0
    unsigned long long v73[2];  // x20, Other Possible Types: unsigned long
    void* v74;  // x8, Other Possible Types: unsigned long
    unsigned long long v75[2];  // x0
    unsigned long long v76;  // x9
    struct_2 *v77;  // x8
    struct_1 *v78;  // x8, Other Possible Types: unsigned long
    unsigned long long *v79;  // x9, Other Possible Types: unsigned long
    unsigned long long v80;  // x9
    struct_2 *v81;  // x8
    char *v82;  // x8
    unsigned long long v84;  // x0
    unsigned long long v85;  // x9
    struct_2 *v86;  // x8
    struct_1 *v87;  // x8
    unsigned long long v88[2];  // x22, Other Possible Types: unsigned long
    void* v90;  // x8, Other Possible Types: unsigned long
    unsigned long long v91[2];  // x0
    unsigned long long v92;  // x9
    struct_2 *v93;  // x8
    struct_0 *v94;  // x8
    unsigned long long v95[2];  // x24, Other Possible Types: unsigned long
    unsigned long long v96;  // x21
    void* v97;  // x8, Other Possible Types: unsigned long
    unsigned long long v98[2];  // x0
    struct_2 *v99;  // x22
    struct_0 *v100;  // x22
    unsigned long long v101;  // x29

    v0 = &v1;
    v2 = a0;
    (unsigned int)v3 = __strlen_chk("srN", 4);
    v4 = v2->field_0;
    if (v2->field_8 - v4 >= v3)
    {
        if (v3)
        {
            v5 = "srN";
            v6 = v3;
            v7 = v4;
            while (*((char *)v5) == *((char *)v7))
            {
                v5 += 1;
                tmp_3 = v6;
                v6 -= 1;
                v7 += 1;
                if (tmp_3 == 1)
                {
                    v2->field_0 = &v4[v3];
                    sub_41dc5c(v2);
                }
            }
        }
        else
        {
            v2->field_0 = &v4[v3];
            (unsigned int)v8 = sub_41dc5c(v2);
            if (!v8)
            {
LABEL_41beb0:
                v101 = v0;
                return;
            }
            v11 = v2->field_0;
            v51 = v8;
            if (v2->field_8 != v11 && *(v11) == 73)
            {
                (unsigned int)v16 = sub_416b98(v8, 4);
                if (!v16)
                {
LABEL_41beb0:
                    v101 = v0;
                    return;
                }
                v19 = v2->field_12e0;
                v21 = v19[1];
                if (v21 + 32 >= 4080)
                {
                    v23 = malloc(0x1000);
                    if (!v23)
                        ::0x40f080::std::terminate();
                    v21 = 0;
                    v23[0] = v19;
                    v23[1] = 0;
                    v19 = v23;
                    v2->field_12e0 = &v23[0];
                }
                v29 = v21 + 32;
                v30 = v19 + v21;
                *((unsigned long long *)(v19 + 8)) = v29;
                v30->field_10 = &g_4335a0;
                v31 = &v30->field_10;
                v31->field_10 = v51;
                v31->field_18 = v16;
                v51 = v31;
                v31->field_8 = 16843040;
            }
            while (true)
            {
                v33 = v2->field_0;
                if (!(v33 == v2->field_8) && !(*(v33) != 69))
                    break;
                (unsigned int)v34 = sub_41dfbc(v2);
                if (!v34)
                {
LABEL_41beb0:
                    v101 = v0;
                    return;
                }
                v35 = v2->field_0;
                v44 = v34;
                if (v2->field_8 != v35 && *(v35) == 73)
                {
                    v37 = sub_416b98(v34, 4);
                    if (!v37)
                    {
                        v101 = v0;
                        return;
                    }
                    v38 = v2->field_12e0;
                    v39 = v38[1];
                    if (v39 + 32 >= 4080)
                    {
                        v40 = malloc(0x1000);
                        if (!v40)
                            ::0x40f080::std::terminate();
                        v39 = 0;
                        v40[0] = v38;
                        v40[1] = 0;
                        v38 = v40;
                        v2->field_12e0 = &v40[0];
                    }
                    v41 = v39 + 32;
                    v42 = v38 + v39;
                    *((unsigned long long *)(v38 + 8)) = v41;
                    v42->field_10 = &g_4335a0;
                    v43 = &v42->field_10;
                    v43->field_10 = v44;
                    v43->field_18 = v37;
                    v44 = v43;
                    v43->field_8 = 16843040;
                }
                v45 = v2->field_12e0;
                v46 = v45[1];
                if (v46 + 32 >= 4080)
                {
                    v47 = malloc(0x1000);
                    if (!v47)
                        ::0x40f080::std::terminate();
                    v46 = 0;
                    v47[0] = v45;
                    v47[1] = 0;
                    v45 = v47;
                    v2->field_12e0 = &v47[0];
                }
                v48 = v46 + 32;
                v49 = v45 + v46;
                *((unsigned long long *)(v45 + 8)) = v48;
                v49->field_10 = &g_432960;
                v50 = &v49->field_10;
                v50->field_8 = 16843030;
                v50->field_10 = v51;
                v50->field_18 = v44;
                v51 = v50;
            }
            v2->field_0 = &v33[1];
            (unsigned int)v53 = sub_41dce4(v2);
            if (!v53)
            {
LABEL_41beb0:
                v101 = v0;
                return;
            }
            goto LABEL_41be44;
        }
    }
    (unsigned int)v9 = __strlen_chk("gs", 3);
    v10 = v2->field_0;
    if (v2->field_8 - v10 >= v9)
    {
        if (!v9)
        {
            v17 = &v10[v9];
            v2->field_0 = v17;
LABEL_41bb34:
            __strlen_chk("sr", 3);
        }
        v13 = "gs";
        v14 = v9;
        v15 = v10;
        while (*((char *)v13) == *((char *)v15))
        {
            v13 += 1;
            tmp_3 = v14;
            v14 -= 1;
            v15 += 1;
            if (tmp_3 == 1)
            {
                v17 = &v10[v9];
                v2->field_0 = v17;
                goto LABEL_41bb34;
            }
        }
    }
LABEL_41bb34:
    (unsigned int)v22 = __strlen_chk("sr", 3);
    v24 = v2->field_0;
    v25 = v2->field_8;
    if (v25 - v24 >= v22)
    {
        if (v22)
        {
            v26 = "sr";
            v27 = v22;
            v28 = v24;
            while (*((char *)v26) == *((char *)v28))
            {
                v26 += 1;
                tmp_3 = v27;
                v27 -= 1;
                v28 += 1;
                if (tmp_3 == 1)
                    goto LABEL_41bb90;
            }
        }
        else
        {
LABEL_41bb90:
            v32 = &v24[v22];
            v2->field_0 = v32;
            if (v25 != v32 && 9 >= *(v32) - 48)
            {
                (unsigned int)v54 = sub_41dfbc(v2);
                if (!v54)
                {
LABEL_41beb0:
                    goto LABEL_0x41beb4;
                }
                else
                {
                    v58 = v54;
                    v51 = 0;
                    while (true)
                    {
                        v61 = v2->field_0;
                        if (v2->field_8 != v61 && *(v61) == 73)
                        {
                            v63 = sub_416b98(v54, 3);
                            if (!v63)
                            {
                                v101 = v0;
                                return;
                            }
                            v64 = v2->field_12e0;
                            v65 = v64[1];
                            if (v65 + 32 >= 4080)
                            {
                                v66 = malloc(0x1000);
                                if (!v66)
                                    ::0x40f080::std::terminate();
                                v65 = 0;
                                v66[0] = v64;
                                v66[1] = 0;
                                v64 = v66;
                                v2->field_12e0 = &v66[0];
                            }
                            v67 = v65 + 32;
                            v68 = v64 + v65;
                            *((unsigned long long *)(v64 + 8)) = v67;
                            v68->field_10 = &g_4335a0;
                            v69 = &v68->field_10;
                            v69->field_10 = v58;
                            v69->field_18 = v63;
                            v58 = v69;
                            v69->field_8 = 16843040;
                        }
                        if (v51)
                        {
                            v70 = v2->field_12e0;
                            v71 = v70[1];
                            if (v71 + 32 >= 4080)
                            {
                                v72 = malloc(0x1000);
                                if (!v72)
                                    ::0x40f080::std::terminate();
                                v71 = 0;
                                v72[0] = v70;
                                v72[1] = 0;
                                v70 = v72;
                                v2->field_12e0 = &v72[0];
                            }
                            v76 = v71 + 32;
                            v77 = v70 + v71;
                            *((unsigned long long *)(v70 + 8)) = v76;
                            v77->field_10 = &g_432960;
                            v78 = &v77->field_10;
                            v78->field_8 = 16843030;
                            v78->field_10 = v51;
                            v79 = v78 + 1;
                        }
                        else
                        {
                            v51 = v58;
                            if (!0)
                                goto LABEL_41bd18;
                            v73 = v2->field_12e0;
                            v74 = v73[1];
                            if (v74 + 32 >= 4080)
                            {
                                v75 = malloc(0x1000);
                                if (!v75)
                                    ::0x40f080::std::terminate();
                                v74 = 0;
                                v75[0] = v73;
                                v75[1] = 0;
                                v73 = v75;
                                v2->field_12e0 = &v75[0];
                            }
                            v80 = v74 + 32;
                            v81 = v73 + v74;
                            *((unsigned long long *)(v73 + 8)) = v80;
                            v81->field_10 = &g_432b20;
                            v78 = &v81->field_10;
                            *((int *)(v78 + 8)) = 16843041;
                            v79 = v78 + 16;
                        }
                        v51 = v78;
                        *((unsigned long *)v79) = v58;
LABEL_41bd18:
                        v82 = v2->field_0;
                        if (v82 == v2->field_8 || *(v82) != 69)
                        {
                            (unsigned int)v54 = sub_41dfbc(v2);
                            v58 = v54;
                            if (!v54)
                            {
                                v101 = v0;
                                return;
                            }
                        }
                        else
                        {
                            v2->field_0 = &v82[1];
                            break;
                        }
                    }
                }
            }
            else
            {
                (unsigned int)v55 = sub_41dc5c(v2);
                if (!v55)
                {
LABEL_41beb0:
                    v101 = v0;
                    return;
                }
                v59 = v2->field_0;
                v51 = v55;
                if (v2->field_8 != v59 && *(v59) == 73)
                {
                    (unsigned int)v84 = sub_416b98(v55, 3);
                    if (v84)
                    {
                        v88 = v2->field_12e0;
                        v90 = v88[1];
                        if (v90 + 32 >= 4080)
                        {
                            v91 = malloc(0x1000);
                            if (!v91)
                                ::0x40f080::std::terminate();
                            v90 = 0;
                            v91[0] = v88;
                            v91[1] = 0;
                            v88 = v91;
                            v2->field_12e0 = &v91[0];
                        }
                        v92 = v90 + 32;
                        v93 = v88 + v90;
                        *((unsigned long long *)(v88 + 8)) = v92;
                        v93->field_10 = &g_4335a0;
                        v94 = &v93->field_10;
                        v94->field_10 = v51;
                        v94->field_18 = v84;
                        v94->field_8 = 16843040;
                        sub_41dce4(v2);
                    }
                    goto LABEL_41beb0;
                }
            }
            (unsigned int)v53 = sub_41dce4(v2);
            if (!v53)
            {
LABEL_41beb0:
                v101 = v0;
                return;
            }
LABEL_41be44:
            v95 = v2->field_12e0;
            v96 = v53;
            v97 = v95[1];
            if (v97 + 32 < 4080)
            {
                v99 = v95 + v97;
                *((unsigned long *)(v95 + 8)) = v97 + 32;
                v99->field_10 = &g_432960;
                v100 = &v99->field_10;
                v100->field_8 = 16843030;
                v100->field_10 = v51;
                v100->field_18 = v53;
                v101 = v0;
                return;
            }
            v98 = malloc(0x1000);
            if (v98)
            {
                v98[0] = v95;
                v98[1] = 0;
                v2->field_12e0 = &v98[0];
                v99 = v98;
                v98[1] = 0 + 32;
                v99->field_10 = &g_432960;
                v100 = &v99->field_10;
                v100->field_8 = 16843030;
                v100->field_10 = v51;
                v100->field_18 = v96;
                v101 = v0;
                return;
            }
            ::0x40f080::std::terminate();
        }
    }
    v52 = sub_41dce4(v2);
    if (!v52)
    {
        v101 = v0;
        return;
    }
    else if (true)
    {
        v101 = v0;
        return;
    }
    else
    {
        v56 = v2->field_12e0;
        v57 = v56[1];
        if (v57 + 32 >= 4080)
        {
            v60 = malloc(0x1000);
            if (!v60)
                ::0x40f080::std::terminate();
            v57 = 0;
            v60[0] = v56;
            v60[1] = 0;
            v56 = v60;
            v2->field_12e0 = &v60[0];
        }
        v85 = v57 + 32;
        v86 = v56 + v57;
        *((unsigned long long *)(v56 + 8)) = v85;
        v86->field_10 = &g_432b20;
        v87 = &v86->field_10;
        v87->field_8 = 16843041;
        v87->field_10 = v52;
        v101 = v0;
        return;
    }
}

typedef struct struct_2 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_4 *field_12e0;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_3 {
    char field_0;
    char field_1;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_4;

extern char g_432c70;
extern char g_432ce0;

int sub_41bed8(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    int tmp_27;  // tmp #27
    char v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    char v3[2];  // x8
    unsigned long long v4;  // x9
    struct_2 *v5;  // x19
    unsigned int v7;  // w9
    unsigned long long v8;  // x3
    unsigned long long v9;  // x4
    unsigned long long v10;  // x5
    unsigned long long v11;  // x6
    unsigned long long v12;  // x7
    struct_0 *v13;  // x0, Other Possible Types: unsigned long
    unsigned long long v14;  // x3
    unsigned long long v15;  // x4
    unsigned long long v16;  // x5
    unsigned long long v17;  // x6
    unsigned long long v18;  // x7
    unsigned long long v19;  // x3
    unsigned long long v20;  // x4
    unsigned long long v21;  // x5
    unsigned long long v22;  // x6
    unsigned long long v23;  // x7
    struct_0 *v25;  // x20
    struct_0 *v26;  // x20
    struct_0 *v27;  // x20
    struct_0 *v28;  // x21
    unsigned long long v29[2];  // x22, Other Possible Types: unsigned long
    struct_0 *v30;  // x21
    void* v31;  // x8, Other Possible Types: unsigned long
    unsigned long long v32[2];  // x22, Other Possible Types: unsigned long
    struct_0 *v33;  // x21
    void* v34;  // x8, Other Possible Types: unsigned long
    unsigned long long v35[2];  // x0
    unsigned long long v36[2];  // x23, Other Possible Types: unsigned long
    struct_0 *v37;  // x22
    void* v38;  // x8, Other Possible Types: unsigned long
    unsigned long long v39[2];  // x0
    unsigned long long v40[2];  // x0
    struct_1 *v41;  // x0
    struct_1 *v42;  // x0
    struct_1 *v43;  // x0

    v1 = &v2;
    v3 = a0->field_0;
    v4 = a0->field_8;
    v5 = a0;
    tmp_27 = v4;
    if (!(tmp_27 != v3 && v4 - (char *)v3 != 1 && v3[0] == 100))
        return sub_4181a0(a0, a1, a2, v19, v20, v21, v22, v23, *((long long *)&v2));
    v7 = v3[1];
    if (v7 == 88)
    {
        a0->field_0 = &v3[1];
        (unsigned int)v13 = sub_4181a0(a0, a1, a2, v8, v9, v10, v11, v12, *((long long *)&v0));
        if (!v13)
            return v13;
        v25 = v13;
        (unsigned int)v13 = sub_4181a0(v5, a1, a2, v8, v9, v10, v11, v12, *((long long *)&v0));
        if (!v13)
            return v13;
        v28 = v13;
        (unsigned int)v13 = sub_41bed8(v5, a1, a2);
        if (!v13)
            return v13;
        v36 = v5->field_12e0;
        v37 = v13;
        v38 = v36[1];
        if (v38 + 48 < 4080)
        {
            v43 = v36 + v38;
            *((unsigned long *)(v36 + 8)) = v38 + 48;
            v43->field_10 = &g_432ce0;
            v13 = &v43->field_10;
            *((int *)(v13 + 8)) = 16843075;
            *((struct_0 **)(v13 + 16)) = v25;
            *((struct_0 **)(v13 + 24)) = v28;
            *((struct_0 **)(v13 + 32)) = v37;
            return v13;
        }
        v40 = malloc(0x1000);
        if (v40)
        {
            v40[0] = v36;
            v40[1] = 0;
            v36 = v40;
            v5->field_12e0 = &v40[0];
            v43 = v40;
            *((long long *)(v36 + 8)) = 0 + 48;
            v43->field_10 = &g_432ce0;
            v13 = &v43->field_10;
            *((int *)(v13 + 8)) = 16843075;
            *((struct_0 **)(v13 + 16)) = v25;
            *((struct_0 **)(v13 + 24)) = v28;
            *((struct_0 **)(v13 + 32)) = v37;
            return v13;
        }
LABEL_41c100:
        ::0x40f080::std::terminate();
    }
    else if (v7 == 120)
    {
        a0->field_0 = &v3[1];
        (unsigned int)v13 = sub_4181a0(a0, a1, a2, v14, v15, v16, v17, v18, *((long long *)&v0));
        if (!v13)
            return v13;
        v26 = v13;
        (unsigned int)v13 = sub_41bed8(v5, a1, a2);
        if (!v13)
            return v13;
        v29 = v5->field_12e0;
        v30 = v13;
        v31 = v29[1];
        if (v31 + 48 < 4080)
        {
            v41 = v29 + v31;
            *((unsigned long *)(v29 + 8)) = v31 + 48;
            v41->field_10 = &g_432c70;
            v13 = &v41->field_10;
            *((int *)(v13 + 8)) = 16843074;
            *((struct_0 **)(v13 + 16)) = v26;
            *((struct_0 **)(v13 + 24)) = v30;
            *((char *)(v13 + 32)) = 1;
            return v13;
        }
        v35 = malloc(0x1000);
        if (v35)
        {
            v35[0] = v29;
            v35[1] = 0;
            v29 = v35;
            v5->field_12e0 = &v35[0];
            v41 = v35;
            *((long long *)(v29 + 8)) = 0 + 48;
            v41->field_10 = &g_432c70;
            v13 = &v41->field_10;
            *((int *)(v13 + 8)) = 16843074;
            *((struct_0 **)(v13 + 16)) = v26;
            *((struct_0 **)(v13 + 24)) = v30;
            *((char *)(v13 + 32)) = 1;
            return v13;
        }
        goto LABEL_41c100;
    }
    else if (v7 == 105)
    {
        a0->field_0 = &v3[1];
        (unsigned int)v13 = sub_41dfbc(a0);
        if (!v13)
            return v13;
        v27 = v13;
        (unsigned int)v13 = sub_41bed8(v5, a1, a2);
        if (!v13)
            return v13;
        v32 = v5->field_12e0;
        v33 = v13;
        v34 = v32[1];
        if (v34 + 48 < 4080)
        {
            v42 = v32 + v34;
            *((unsigned long *)(v32 + 8)) = v34 + 48;
            v42->field_10 = &g_432c70;
            v13 = &v42->field_10;
            *((int *)(v13 + 8)) = 16843074;
            *((struct_0 **)(v13 + 16)) = v27;
            *((struct_0 **)(v13 + 24)) = v33;
            *((char *)(v13 + 32)) = 0;
            return v13;
        }
        v39 = malloc(0x1000);
        if (v39)
        {
            v39[0] = v32;
            v39[1] = 0;
            v32 = v39;
            v5->field_12e0 = &v39[0];
            v42 = v39;
            *((long long *)(v32 + 8)) = 0 + 48;
            v42->field_10 = &g_432c70;
            v13 = &v42->field_10;
            *((int *)(v13 + 8)) = 16843074;
            *((struct_0 **)(v13 + 16)) = v27;
            *((struct_0 **)(v13 + 24)) = v33;
            *((char *)(v13 + 32)) = 0;
            return v13;
        }
        goto LABEL_41c100;
    }
}

typedef struct struct_0 {
    char padding_0[4832];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

extern char g_432ea0;

int sub_41c104(struct_0 *a0, char *a1, unsigned long long *a2)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2[2];  // x22, Other Possible Types: unsigned long
    void* v3;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0
    struct_2 *v6;  // x21
    unsigned long long v7;  // x22
    struct_3 *v9;  // x21

    v0 = &v1;
    v2 = a0->field_12e0;
    v3 = v2[1];
    if (v3 + 64 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            ::0x40f080::std::terminate();
        v3 = 0;
        v5[0] = v2;
        v5[1] = 0;
        v2 = v5;
        a0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v2 + 8)) = v3 + 64;
    v6 = v2 + v3;
    v7 = *(a2);
    v6->field_10 = &g_432ea0;
    v9 = &v6->field_10;
    v9->field_8 = 16843055;
    v9->field_10 = a1;
    v9->field_18 = &a1[strlen(a1)];
    v9->field_20 = v7;
    v9->field_28 = ")";
    v9->field_30 = (char *)(4365010 + __strlen_chk(")", 2));
    return (unsigned int)v9;
}

typedef struct struct_0 {
    char padding_0[4832];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

extern char g_432ea0;

int sub_41c1c8(struct_0 *a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2[2];  // x21, Other Possible Types: unsigned long
    void* v3;  // x8, Other Possible Types: unsigned long
    unsigned long long v5[2];  // x0
    struct_3 *v6;  // x20
    unsigned long long v7;  // x22
    struct_2 *v9;  // x20

    v0 = &v1;
    v2 = a0->field_12e0;
    v3 = v2[1];
    if (v3 + 64 >= 4080)
    {
        v5 = malloc(0x1000);
        if (!v5)
            ::0x40f080::std::terminate();
        v3 = 0;
        v5[0] = v2;
        v5[1] = 0;
        v2 = v5;
        a0->field_12e0 = &v5[0];
    }
    *((unsigned long *)(v2 + 8)) = v3 + 64;
    v6 = v2 + v3;
    v7 = *(a1);
    v6->field_10 = &g_432ea0;
    v9 = &v6->field_10;
    v9->field_8 = 16843055;
    v9->field_10 = "sizeof... (";
    v9->field_18 = (char *)(4364658 + __strlen_chk("sizeof... (", 12));
    v9->field_20 = v7;
    v9->field_28 = ")";
    v9->field_30 = (char *)(4365010 + __strlen_chk(")", 2));
    return (unsigned int)v9;
}

long long sub_41c4e4()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char padding_0[12];
    char field_c;
} struct_0;

long long sub_41c4e8(struct_0 *a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v3;  // x20
    unsigned long v4;  // x1, Other Possible Types: unsigned long long
    unsigned long v5;  // x2

    v0 = &v1;
    if (a0->field_c)
    {
        v3 = "true";
        v4 = 5;
    }
    else
    {
        v3 = "false";
        v4 = 6;
    }
    v5 = v3 + __strlen_chk(v3, v4);
    return (unsigned long long)sub_416694(a1, v3, v5);
}

long long sub_41c53c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    char padding_0[40];
    unsigned long long field_28;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
    unsigned long long field_18;
} struct_2;

typedef struct struct_0 {
    char field_-1;
    char field_0;
} struct_0;

typedef struct struct_3 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
} struct_3;

long long sub_41c540(struct_2 *a0, unsigned long long a1[3], unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x58]
    int tmp_15;  // tmp #15
    char v1;  // [bp-0x57]
    char v2;  // [bp-0x56]
    char v3;  // [bp-0x55]
    void* v4;  // [bp-0x50]
    void* v5;  // [bp-0x48]
    void* v6;  // [bp-0x40]
    unsigned long v7;  // [bp-0x38]
    unsigned long v8;  // [bp-0x10]
    char v9;  // [bp+0x0]
    struct_1 *v10;  // tpidr_el0
    char v11[8];  // x8
    unsigned int v12;  // w9
    unsigned int v13;  // w11
    unsigned int v14;  // w14
    unsigned int v15;  // w9
    unsigned int v16;  // w14
    unsigned int v17;  // w11
    unsigned int v18;  // w14
    unsigned int v19;  // w15
    unsigned int v20;  // w11
    unsigned int v21;  // w15
    unsigned int v22;  // w11
    unsigned int v23;  // w14
    unsigned int v24;  // w15
    unsigned int v25;  // w11
    unsigned int v26;  // w15
    unsigned int v27;  // w11
    unsigned int v28;  // w14
    struct_0 *v29;  // x8, Other Possible Types: unsigned long
    unsigned int v30;  // w10
    unsigned int v31;  // w10
    unsigned int v32;  // w11
    char v33;  // x10
    struct_0 *v34;  // x9, Other Possible Types: unsigned long
    char v35;  // x11

    v8 = &v9;
    v7 = v10->field_28;
    v11 = a0->field_10;
    if (1 + a0->field_18 - (char *)v11 >= 9)
    {
        v12 = v11[0];
        v13 = v11[1];
        if (v12 - 48 >= 10)
            v14 = 9;
        else
            v14 = 0;
        v15 = v14 + v12;
        if (v13 - 48 >= 10)
            v16 = -87;
        else
            v16 = -48;
        v0 = v16 + v13 + (v15 << 4);
        v17 = v11[2];
        v18 = v11[3];
        if (v17 - 48 >= 10)
            v19 = 9;
        else
            v19 = 0;
        v20 = v19 + v13;
        if (v18 - 48 >= 10)
            v21 = -87;
        else
            v21 = -48;
        v1 = v21 + v18 + (v20 << 4);
        v22 = v11[4];
        v23 = v11[5];
        if (v22 - 48 >= 10)
            v24 = 9;
        else
            v24 = 0;
        v25 = v24 + v13;
        if (v23 - 48 >= 10)
            v26 = -87;
        else
            v26 = -48;
        v2 = v26 + v18 + (v25 << 4);
        v27 = v11[6];
        v28 = v11[7];
        v29 = &v0 | 2;
        if (v27 - 48 >= 10)
            v30 = 9;
        else
            v30 = 0;
        v31 = v30 + v13;
        if (v28 - 48 >= 10)
            v32 = -87;
        else
            v32 = -48;
        v33 = v32 + v18 + (v31 << 4);
        v3 = v0;
        v34 = v29;
        v0 = v33;
        do
        {
            v35 = *((char *)(v29 - 1));
            *((char *)(v29 - 1)) = *((char *)v34);
            *((char *)v34) = v35;
            v34 -= 1;
            tmp_15 = v29;
            v29 += 1;
        } while (tmp_15 < v34);
        v5 = 0;
        v6 = 0;
        v4 = 0;
        a0 = sub_416694(a1, &v4, (char *)&v4 + sub_41c6d8(&v4, 24, 24, "%af", a4, a5, a6, a7));
    }
    if (v10->field_28 != v7)
        __stack_chk_fail(); /* do not return */
    return a0;
}

long long sub_41c6d4()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    char padding_0[40];
    unsigned long long field_28;
} struct_1;

typedef struct struct_0 {
    char field_0;
} struct_0;

int sub_41c6d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    int v0;  // [bp-0x110]
    int <0x41c6d8[is_32]|Stack bp-0x70, 1 B>;  // [bp-0x70]
    int v1;  // [bp-0x100]
    int v2;  // [bp-0xf0]
    int v3;  // [bp-0xe0]
    int v4;  // [bp-0xd0]
    int v5;  // [bp-0xc0]
    int v6;  // [bp-0xb0]
    int v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x90]
    unsigned long v9;  // [bp-0x88]
    unsigned long v10;  // [bp-0x80]
    unsigned long v11;  // [bp-0x78]
    int v12;  // [bp-0x70]
    int v13;  // [bp-0x60]
    unsigned long v14;  // [bp-0x48]
    unsigned long v15;  // [bp-0x40]
    struct_0 *v16;  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    unsigned long v18;  // [bp-0x28]
    unsigned long v19;  // [bp-0x10]
    char v20;  // [bp+0x0]
    int v21;  // q0
    int v22;  // q1
    int v23;  // q2
    int v24;  // q3
    int v25;  // q4
    int v26;  // q5
    int v27;  // q6
    int v28;  // q7
    struct_1 *v29;  // tpidr_el0

    v19 = &v20;
    v8 = a4;
    v9 = a5;
    v10 = a6;
    v11 = a7;
    v0 = v21;
    v1 = v22;
    v2 = v23;
    v3 = v24;
    v4 = v25;
    v5 = v26;
    v6 = v27;
    v7 = v28;
    v18 = v29->field_28;
    v14 = &v20;
    v15 = &<0x41c6d8[is_32]|Stack bp-0x70, 1 B>;
    v16 = &v8;
    v17 = -545460846624;
    *((int128_t *)&v12) = *((int128_t *)&v14);
    *((int128_t *)&v13) = *((int128_t *)&v16);
    if (v29->field_28 != v18)
        __stack_chk_fail(); /* do not return */
    return (unsigned int)__vsnprintf_chk();
}

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_3 {
    char field_-1;
    char field_0;
} struct_3;

typedef struct struct_2 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
    char field_a;
    char field_b;
    char field_c;
    char field_d;
    char field_e;
    char field_f;
} struct_2;

long long sub_41c77c(struct_1 *a0, unsigned long long a1[3], unsigned long a2, unsigned long a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    char v0;  // [bp-0x68]
    int tmp_15;  // tmp #15
    char v1;  // [bp-0x67]
    char v2;  // [bp-0x66]
    char v3;  // [bp-0x65]
    char v4;  // [bp-0x64]
    char v5;  // [bp-0x63]
    char v6;  // [bp-0x62]
    char v7;  // [bp-0x61]
    int v8;  // [bp-0x60]
    int v9;  // [bp-0x50]
    unsigned long v10;  // [bp-0x38]
    unsigned long v11;  // [bp-0x10]
    char v12;  // [bp+0x0]
    struct_0 *v13;  // tpidr_el0
    char v14[16];  // x8
    unsigned int v15;  // w12
    unsigned int v16;  // w13
    unsigned int v17;  // w14
    unsigned int v18;  // w12
    unsigned int v19;  // w14
    unsigned int v20;  // w12
    unsigned int v21;  // w13
    unsigned int v22;  // w14
    unsigned int v23;  // w12
    unsigned int v24;  // w14
    unsigned int v25;  // w12
    unsigned int v26;  // w13
    unsigned int v27;  // w14
    unsigned int v28;  // w12
    unsigned int v29;  // w14
    unsigned int v30;  // w12
    unsigned int v31;  // w13
    unsigned int v32;  // w14
    unsigned int v33;  // w12
    unsigned int v34;  // w14
    unsigned int v35;  // w12
    unsigned int v36;  // w13
    unsigned int v37;  // w14
    unsigned int v38;  // w12
    unsigned int v39;  // w14
    unsigned int v40;  // w12
    unsigned int v41;  // w13
    unsigned int v42;  // w14
    unsigned int v43;  // w12
    unsigned int v44;  // w14
    unsigned int v45;  // w13
    unsigned int v46;  // w14
    unsigned int v47;  // w17
    unsigned int v48;  // w16
    unsigned int v49;  // w14
    struct_3 *v51;  // x12, Other Possible Types: unsigned long
    struct_3 *v52;  // x13, Other Possible Types: unsigned long
    char v53;  // x15
    unsigned int v54;  // w9
    unsigned int v55;  // w10
    char v56;  // x9

    v11 = &v12;
    v10 = v13->field_28;
    v14 = a0->field_10;
    if (1 + a0->field_18 - (char *)v14 >= 17)
    {
        v15 = v14[0];
        v16 = v14[1];
        if (v15 - 48 >= 10)
            v17 = 9;
        else
            v17 = 0;
        v18 = v17 + v15;
        if (v16 - 48 >= 10)
            v19 = -87;
        else
            v19 = -48;
        v0 = v19 + v16 + (v18 << 4);
        v20 = v14[2];
        v21 = v14[3];
        if (v20 - 48 >= 10)
            v22 = 9;
        else
            v22 = 0;
        v23 = v22 + v15;
        if (v21 - 48 >= 10)
            v24 = -87;
        else
            v24 = -48;
        v1 = v24 + v16 + (v23 << 4);
        v25 = v14[4];
        v26 = v14[5];
        if (v25 - 48 >= 10)
            v27 = 9;
        else
            v27 = 0;
        v28 = v27 + v15;
        if (v26 - 48 >= 10)
            v29 = -87;
        else
            v29 = -48;
        v2 = v29 + v16 + (v28 << 4);
        v30 = v14[6];
        v31 = v14[7];
        if (v30 - 48 >= 10)
            v32 = 9;
        else
            v32 = 0;
        v33 = v32 + v15;
        if (v31 - 48 >= 10)
            v34 = -87;
        else
            v34 = -48;
        v3 = v34 + v16 + (v33 << 4);
        v35 = v14[8];
        v36 = v14[9];
        if (v35 - 48 >= 10)
            v37 = 9;
        else
            v37 = 0;
        v38 = v37 + v15;
        if (v36 - 48 >= 10)
            v39 = -87;
        else
            v39 = -48;
        v4 = v39 + v16 + (v38 << 4);
        v40 = v14[10];
        v41 = v14[11];
        if (v40 - 48 >= 10)
            v42 = 9;
        else
            v42 = 0;
        v43 = v42 + v15;
        if (v41 - 48 >= 10)
            v44 = -87;
        else
            v44 = -48;
        v5 = v44 + v16 + (v43 << 4);
        v45 = v14[12];
        v46 = v14[13];
        if (v45 - 48 >= 10)
            v47 = 9;
        else
            v47 = 0;
        if (v46 - 48 >= 10)
            v48 = -87;
        else
            v48 = -48;
        v6 = v48 + v46 + (v47 + v16 << 4);
        v49 = v14[14];
        v51 = &v0 | 2;
        v52 = &v0 | 6;
        v53 = v0;
        if (v49 - 48 >= 10)
            v54 = 9;
        else
            v54 = 0;
        if (!((char)[D] arm64g_calculate_condition(0x33<64>, Conv(32->64, (w8<4> - 0x30<32>)), 0xa<64>, 0x0<64>)))
            v55 = -87;
        else
            v55 = -48;
        v7 = v55 + v14[15] + (v54 + v46 << 4);
        v0 = v7;
        v7 = v53;
        do
        {
            v56 = *((char *)(v51 - 1));
            *((char *)(v51 - 1)) = *((char *)v52);
            *((char *)v52) = v56;
            v52 -= 1;
            tmp_15 = v51;
            v51 += 1;
        } while (tmp_15 < v52);
        *((int128_t *)&v8) = 0;
        *((int128_t *)&v9) = 0;
        a0 = sub_416694(a1, &v8, &v8 + sub_41c6d8(&v8, 32, 32, "%a", a4, a5, a6, a7));
    }
    if (v13->field_28 != v10)
        __stack_chk_fail(); /* do not return */
    return a0;
}

long long sub_41c9d4()
{
    return ::0x40f060::operator delete();
}

long long sub_41c9d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    int v0;  // [bp-0x70], Other Possible Types: char
    int tmp_1;  // tmp #1
    int tmp_85;  // tmp #85
    int tmp_87;  // tmp #87
    int tmp_74;  // tmp #74
    int tmp_212;  // tmp #212
    int tmp_223;  // tmp #223
    int tmp_224;  // tmp #224
    int tmp_15;  // tmp #15
    int v1;  // [bp-0x60], Other Possible Types: char
    int v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x10]
    char v6;  // [bp+0x0]
    unsigned long v7;  // tpidr_el0
    unsigned long v8;  // x9
    unsigned long v9;  // x8
    int v13;  // q4
    char v15;  // x11
    unsigned long v16;  // x11
    unsigned int v17;  // w16
    unsigned int v18;  // w11
    unsigned long v19;  // x8
    unsigned int v20;  // w17
    unsigned int v21;  // w16
    unsigned int v22;  // w17
    unsigned long v23;  // x10
    unsigned long v24;  // x9
    char v25;  // x12
    unsigned long v26;  // x8
    unsigned long v27;  // x8
    unsigned long v28;  // x9
    char v29;  // x11

    v5 = &v6;
    v4 = *((long long *)(v7 + 40));
    v8 = *((long long *)(a0 + 16));
    if (*((long long *)(a0 + 24)) - v8 + 1 >= 33)
    {
        v9 = &v1;
        if (v8 + 32 <= &v0 || &v1 <= v8)
        {
            tmp_1 = CatOddLanesV(tmp_85, tmp_87);
            v24 = 15;
            tmp_74 = InterleaveLOV(tmp_212, 0);
            v13 = (12225489209634957737 CONCAT 12225489209634957737) ^ ((12225489209634957737 CONCAT 12225489209634957737) ^ (15046755950319947984 CONCAT 15046755950319947984)) & ([D] ZeroHI64ofV128(t216) | tmp_74);
            tmp_223 = ShlNV(tmp_224, 4);
            v0 = v13 + tmp_1 + tmp_223;
            v15 = (int128_t)v0;
        }
        else
        {
            v19 = 0;
            v23 = 0;
            do
            {
                v16 = v8 + v19;
                v17 = *((char *)v16);
                v18 = *((char *)(v16 + 1));
                v19 += 2;
                if (v17 - 48 >= 10)
                    v20 = 9;
                else
                    v20 = 0;
                v21 = v20 + v17;
                if (v18 - 48 >= 10)
                    v22 = -87;
                else
                    v22 = -48;
                v15 = v22 + v18 + (v21 << 4);
                *((char *)&v0 + v23) = v15;
                v23 += 1;
            } while (v19 != 32);
            v9 = &v0 + v23;
            v24 = v23 - 1;
        }
        if (v9 != &v0 && &v0 + v24 > &v0)
        {
            v25 = (char)v0;
            v26 = v24 - 1;
            v0 = v15;
            *((char *)&v0 + v24) = v25;
            if (v26 >= 2)
            {
                v27 = &v0 + v26;
                v28 = &v0 | 2;
                do
                {
                    v29 = *((char *)(v28 - 1));
                    *((char *)(v28 - 1)) = *((char *)v27);
                    *((char *)v27) = v29;
                    v27 -= 1;
                    tmp_15 = v28;
                    v28 += 1;
                } while (tmp_15 < v27);
            }
        }
        v3 = 0;
        *((int128_t *)&v1) = 0;
        *((int128_t *)&v2) = 0;
        a0 = sub_416694(a1, &v1, &(&v1)[sub_41c6d8(&v1, 40, 40, "%LaL", a4, a5, a6, a7)]);
    }
    if (*((long long *)(v7 + 40)) != v4)
        __stack_chk_fail(); /* do not return */
    return a0;
}

long long sub_41cc10()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41cc14(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v3;  // x21

    v0 = &v1;
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    v3 = a0->field_10;
    v3->field_0->field_20(v3, a1);
    if (v3->field_9 != 1)
        v3->field_0->field_28(v3, a1);
    sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    return (unsigned long long)sub_416694(a1, *((long long *)&a0->field_18), *((long long *)&a0->field_20));
}

long long sub_41ccc4()
{
    return ::0x40f060::operator delete();
}

long long sub_41ccc8(unsigned int a0[7], unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    sub_416694(a1, "fp", (char *)(4364802 + __strlen_chk("fp", 3)));
    return (unsigned long long)sub_416694(a1, *((long long *)&a0[4]), *((long long *)&a0[6]));
}

long long sub_41cd1c()
{
    unsigned long v0;  // x0

    return v0;
}

long long sub_41cd20()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_8 {
    char padding_0[16];
    unsigned long long field_10;
    struct struct_3 *field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
} struct_8;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
    struct struct_3 *field_18;
    unsigned int field_20;
    char padding_24[4];
    unsigned int field_28;
    char padding_2c[4];
    char field_30;
} struct_5;

typedef struct struct_6 {
    char padding_0[40];
    unsigned long long field_28;
} struct_6;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_7 {
    char padding_0[40];
    struct struct_2 *field_28;
} struct_7;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_4;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

extern struct_7 g_432650;

long long sub_41cd24(struct_8 *a0, struct_0 *a1)
{
    struct_7 *v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned long v4;  // [bp-0x10]
    char v5;  // [bp+0x0]
    struct_0 *v6;  // x19
    struct_5 *v7;  // x20
    struct_6 *v8;  // tpidr_el0
    struct_0 *v9;  // x10
    char *v10;  // x0
    unsigned long v11;  // x0
    char *v12;  // x8, Other Possible Types: unsigned long
    struct_0 *v13;  // x9, Other Possible Types: unsigned long
    struct_3 *v14;  // x21
    char *v15;  // x8, Other Possible Types: unsigned long
    struct_0 *v16;  // x10
    struct_0 *v17;  // x9, Other Possible Types: unsigned long
    unsigned long v18;  // x0
    char *v19;  // x0
    char *v20;  // x8, Other Possible Types: unsigned long
    struct_0 *v21;  // x10
    struct_0 *v22;  // x9, Other Possible Types: unsigned long
    unsigned long v23;  // x0
    char *v24;  // x0
    char *v25;  // x8, Other Possible Types: unsigned long
    struct_0 *v26;  // x10
    struct_0 *v27;  // x9, Other Possible Types: unsigned long
    unsigned long v28;  // x0
    char *v29;  // x0
    char *v30;  // x8, Other Possible Types: unsigned long
    struct_0 *v31;  // x10
    struct_0 *v32;  // x9, Other Possible Types: unsigned long
    unsigned long v33;  // x0
    char *v34;  // x0
    struct_0 *v35;  // x10
    unsigned long v36;  // x0
    char *v37;  // x0
    struct_0 *v39;  // x10
    char *v40;  // x8, Other Possible Types: unsigned long
    struct_0 *v41;  // x9, Other Possible Types: unsigned long
    unsigned long v42;  // x0
    char *v43;  // x0
    char *v45;  // x8, Other Possible Types: unsigned long
    struct_0 *v46;  // x10
    struct_0 *v47;  // x9, Other Possible Types: unsigned long
    char *v48;  // x8, Other Possible Types: unsigned long
    struct_0 *v49;  // x9, Other Possible Types: unsigned long
    unsigned long v50;  // x0
    char *v51;  // x0
    char *v52;  // x8, Other Possible Types: unsigned long
    struct_0 *v53;  // x10
    struct_0 *v54;  // x9, Other Possible Types: unsigned long
    unsigned long v55;  // x0
    char *v56;  // x0
    char *v57;  // x8, Other Possible Types: unsigned long
    struct_0 *v58;  // x10
    struct_0 *v59;  // x9, Other Possible Types: unsigned long
    unsigned long v60;  // x0
    char *v61;  // x0
    char *v62;  // x8, Other Possible Types: unsigned long
    struct_0 *v63;  // x10
    struct_0 *v64;  // x9, Other Possible Types: unsigned long
    unsigned long v65;  // x0
    char *v66;  // x0
    struct_3 *v67;  // x20
    char *v68;  // x8, Other Possible Types: unsigned long
    struct_0 *v69;  // x10
    struct_0 *v70;  // x9, Other Possible Types: unsigned long
    unsigned long v71;  // x0
    char *v72;  // x0
    struct_0 *v73;  // x1, Other Possible Types: unsigned long

    v4 = &v5;
    v6 = a1;
    v7 = a0;
    v3 = v8->field_28;
    v12 = a1->field_8;
    v9 = a1->field_10;
    v13 = v12 + 1;
    if (v9 > v13)
    {
        v11 = a1->field_0;
    }
    else
    {
        v10 = a1->field_0;
        if (a1 < v13)
            a1 = v13;
        else
            a1 = __ROL__(v9, 1) & -2;
        v6->field_10 = a1;
        v11 = realloc(v10, a1);
        v6->field_0 = v11;
        if (!v11)
        {
LABEL_41d298:
            ::0x40f080::std::terminate();
            __stack_chk_fail(); /* do not return */
        }
        v12 = v6->field_8;
        v13 = v12 + 1;
    }
    v6->field_8 = v13;
    *((char *)(v11 + v12)) = 40;
    if (v7->field_30)
    {
        v14 = v7->field_18;
        if (v14)
        {
            v14->field_0->field_20(v14, v6);
            if (v14->field_9 != 1)
                v14->field_0->field_28(v14, v6);
            v20 = v6->field_8;
            v21 = v6->field_10;
            v22 = v20 + 1;
            if (v21 > v22)
            {
                v23 = v6->field_0;
            }
            else
            {
                v24 = v6->field_0;
                if (a1 < v22)
                    a1 = v22;
                else
                    a1 = __ROL__(v21, 1) & -2;
                v6->field_10 = a1;
                v23 = realloc(v24, a1);
                v6->field_0 = v23;
                if (!v23)
                {
LABEL_41d298:
                    ::0x40f080::std::terminate();
                    __stack_chk_fail(); /* do not return */
                }
                v20 = v6->field_8;
                v22 = v20 + 1;
            }
            v6->field_8 = v22;
            *((char *)(v23 + v20)) = 32;
            sub_416694(v6, *((long long *)&v7->field_20), *((long long *)&v7->field_28));
            v30 = v6->field_8;
            v31 = v6->field_10;
            v32 = v30 + 1;
            if (v31 > v32)
            {
                v33 = v6->field_0;
            }
            else
            {
                v34 = v6->field_0;
                if (a1 < v32)
                    a1 = v32;
                else
                    a1 = __ROL__(v31, 1) & -2;
                v6->field_10 = a1;
                v33 = realloc(v34, a1);
                v6->field_0 = v33;
                if (!v33)
                {
LABEL_41d298:
                    ::0x40f080::std::terminate();
                    __stack_chk_fail(); /* do not return */
                }
                v30 = v6->field_8;
                v32 = v30 + 1;
            }
            v6->field_8 = v32;
            *((char *)(v33 + v30)) = 32;
        }
        sub_416694(v6, "... ", (char *)(4365470 + __strlen_chk("... ", 5)));
        sub_416694(v6, *((long long *)&v7->field_20), *((long long *)&v7->field_28));
        v48 = v6->field_8;
        v39 = v6->field_10;
        v49 = v48 + 1;
        if (v39 > v49)
        {
            v42 = v6->field_0;
        }
        else
        {
            v43 = v6->field_0;
            if (a1 < v49)
                a1 = v49;
            else
                a1 = __ROL__(v39, 1) & -2;
            v6->field_10 = a1;
            v42 = realloc(v43, a1);
            v6->field_0 = v42;
            if (!v42)
            {
LABEL_41d298:
                ::0x40f080::std::terminate();
                __stack_chk_fail(); /* do not return */
            }
            v48 = v6->field_8;
            v49 = v48 + 1;
        }
        v6->field_8 = v49;
        *((char *)(v42 + v48)) = 32;
        v52 = v6->field_8;
        v53 = v6->field_10;
        v54 = v52 + 1;
        if (v53 > v54)
        {
            v55 = v6->field_0;
        }
        else
        {
            v56 = v6->field_0;
            if (a1 < v54)
                a1 = v54;
            else
                a1 = __ROL__(v53, 1) & -2;
            v6->field_10 = a1;
            v55 = realloc(v56, a1);
            v6->field_0 = v55;
            if (!v55)
            {
LABEL_41d298:
                ::0x40f080::std::terminate();
                __stack_chk_fail(); /* do not return */
            }
            v52 = v6->field_8;
            v54 = v52 + 1;
        }
        v6->field_8 = v54;
        *((char *)(v55 + v52)) = 40;
        v1 = 16843037;
        v0 = &g_432650.padding_0[0];
        v2 = v7->field_10;
        sub_41d2ac(&v0, v6);
        if (*((char *)&v1 + 1) != 1)
            v0->field_28(&v0, v6);
        v62 = v6->field_8;
        v63 = v6->field_10;
        v64 = v62 + 1;
        if (v63 > v64)
        {
            v65 = v6->field_0;
        }
        else
        {
            v66 = v6->field_0;
            if (a1 < v64)
                a1 = v64;
            else
                a1 = __ROL__(v63, 1) & -2;
            v6->field_10 = a1;
            v65 = realloc(v66, a1);
            v6->field_0 = v65;
            if (!v65)
            {
LABEL_41d298:
                ::0x40f080::std::terminate();
                __stack_chk_fail(); /* do not return */
            }
            v62 = v6->field_8;
            v64 = v62 + 1;
        }
        v6->field_8 = v64;
        *((char *)(v65 + v62)) = 41;
    }
    else
    {
        v15 = v6->field_8;
        v16 = v6->field_10;
        v17 = v15 + 1;
        if (v16 > v17)
        {
            v18 = v6->field_0;
        }
        else
        {
            v19 = v6->field_0;
            if (a1 < v17)
                a1 = v17;
            else
                a1 = __ROL__(v16, 1) & -2;
            v6->field_10 = a1;
            v18 = realloc(v19, a1);
            v6->field_0 = v18;
            if (!v18)
            {
LABEL_41d298:
                ::0x40f080::std::terminate();
                __stack_chk_fail(); /* do not return */
            }
            v15 = v6->field_8;
            v17 = v15 + 1;
        }
        v6->field_8 = v17;
        *((char *)(v18 + v15)) = 40;
        v1 = 16843037;
        v0 = &g_432650.padding_0[0];
        v2 = v7->field_10;
        sub_41d2ac(&v0, v6);
        if (*((char *)&v1 + 1) != 1)
            v0->field_28(&v0, v6);
        v25 = v6->field_8;
        v26 = v6->field_10;
        v27 = v25 + 1;
        if (v26 > v27)
        {
            v28 = v6->field_0;
        }
        else
        {
            v29 = v6->field_0;
            if (a1 < v27)
                a1 = v27;
            else
                a1 = __ROL__(v26, 1) & -2;
            v6->field_10 = a1;
            v28 = realloc(v29, a1);
            v6->field_0 = v28;
            if (!v28)
            {
LABEL_41d298:
                ::0x40f080::std::terminate();
                __stack_chk_fail(); /* do not return */
            }
            v25 = v6->field_8;
            v27 = v25 + 1;
        }
        v6->field_8 = v27;
        *((char *)(v28 + v25)) = 41;
        v40 = v6->field_8;
        v35 = v6->field_10;
        v41 = v40 + 1;
        if (v35 > v41)
        {
            v36 = v6->field_0;
        }
        else
        {
            v37 = v6->field_0;
            if (a1 < v41)
                a1 = v41;
            else
                a1 = __ROL__(v35, 1) & -2;
            v6->field_10 = a1;
            v36 = realloc(v37, a1);
            v6->field_0 = v36;
            if (!v36)
            {
LABEL_41d298:
                ::0x40f080::std::terminate();
                __stack_chk_fail(); /* do not return */
            }
            v40 = v6->field_8;
            v41 = v40 + 1;
        }
        v6->field_8 = v41;
        *((char *)(v36 + v40)) = 32;
        sub_416694(v6, *((long long *)&v7->field_20), *((long long *)&v7->field_28));
        sub_416694(v6, " ...", (char *)(4364892 + __strlen_chk(" ...", 5)));
        if (v7->field_18)
        {
            v45 = v6->field_8;
            v46 = v6->field_10;
            v47 = v45 + 1;
            if (v46 > v47)
            {
                v50 = v6->field_0;
            }
            else
            {
                v51 = v6->field_0;
                if (a1 < v47)
                    a1 = v47;
                else
                    a1 = __ROL__(v46, 1) & -2;
                v6->field_10 = a1;
                v50 = realloc(v51, a1);
                v6->field_0 = v50;
                if (!v50)
                {
LABEL_41d298:
                    ::0x40f080::std::terminate();
                    __stack_chk_fail(); /* do not return */
                }
                v45 = v6->field_8;
                v47 = v45 + 1;
            }
            v6->field_8 = v47;
            *((char *)(v50 + v45)) = 32;
            sub_416694(v6, *((long long *)&v7->field_20), *((long long *)&v7->field_28));
            v57 = v6->field_8;
            v58 = v6->field_10;
            v59 = v57 + 1;
            if (v58 > v59)
            {
                v60 = v6->field_0;
            }
            else
            {
                v61 = v6->field_0;
                if (a1 < v59)
                    a1 = v59;
                else
                    a1 = __ROL__(v58, 1) & -2;
                v6->field_10 = a1;
                v60 = realloc(v61, a1);
                v6->field_0 = v60;
                if (!v60)
                {
LABEL_41d298:
                    ::0x40f080::std::terminate();
                    __stack_chk_fail(); /* do not return */
                }
                v57 = v6->field_8;
                v59 = v57 + 1;
            }
            v6->field_8 = v59;
            *((char *)(v60 + v57)) = 32;
            v67 = v7->field_18;
            v67->field_0->field_20(v67, v6);
            if (v67->field_9 != 1)
                v67->field_0->field_28(v67, v6);
        }
    }
    v68 = v6->field_8;
    v69 = v6->field_10;
    v70 = v68 + 1;
    if (v69 > v70)
    {
        v71 = v6->field_0;
        v6->field_8 = v70;
        *((char *)(v71 + v68)) = 41;
        if (v8->field_28 == v3)
            return v6->field_0;
        __stack_chk_fail(); /* do not return */
    }
    else
    {
        v72 = v6->field_0;
        if (a1 < v70)
            v73 = v70;
        else
            a1 = __ROL__(v69, 1) & -2;
        v6->field_10 = v73;
        v71 = realloc(v72, v73);
        v6->field_0 = v71;
        if (v71)
        {
            v68 = v6->field_8;
            v6->field_8 = v68 + 1;
            *((char *)(v71 + v68)) = 41;
            if (v8->field_28 != v3)
                __stack_chk_fail(); /* do not return */
            return v71;
        }
    }
    goto LABEL_41d298;
}

extern char g_41d2a8;

long long sub_41d2a0(unsigned long long a0)
{
    x30<8> = &g_41d2a8;
    sub_4270a0((unsigned long long)sub_4270a0(a0));
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[8];
    unsigned int field_18;
} struct_0;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_4;

typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_1 *field_20;
    struct struct_1 *field_28;
} struct_3;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

void sub_41d2ac(struct_4 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned int v2;  // w24
    struct_2 *v3;  // x21
    unsigned long long v4;  // x25
    unsigned int v6;  // w26
    struct_2 *v8;  // x22
    unsigned long long v9;  // x29

    v0 = &v1;
    v2 = *((int *)&a1[1].padding_0[0]);
    *((long long *)&a1->field_18) = -1 CONCAT -1;
    v3 = a0->field_10;
    v3->field_0->field_20(v3);
    if (v3->field_9 != 1)
        v3->field_0->field_28(v3, a1);
    v4 = *((int *)&a1[1].padding_0[0]);
    if ((char)[D] arm64g_calculate_condition(0x1<64>, x25<8>, 0x1<64>, 0x0<64>))
    {
        sub_416694(a1, "...", (char *)(4364893 + __strlen_chk("...", 4)));
    }
    else if (!(unsigned int)v4)
    {
        a1->field_8 = a1->field_8;
    }
    else if ((unsigned int)v4 >= 2)
    {
        v6 = 1;
        do
        {
            sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
            a1->field_18 = v6;
            v8 = a0->field_10;
            v8->field_0->field_20(v8, a1);
            if (v8->field_9 != 1)
                v8->field_0->field_28(v8, a1);
        } while ((v6 += 1, (unsigned int)v4 != v6));
    }
    a1->field_18 = a1->field_18;
    *((unsigned int *)&a1[1].padding_0[0]) = v2;
    v9 = v0;
    return;
}

extern char g_41d3fc;

long long sub_41d3ec(unsigned long long a0)
{
    unsigned int v0[8];  // x19
    unsigned long v1;  // x23
    unsigned long v2;  // x24

    v0[6] = v1;
    v0[7] = v2;
    v0[6] = v1;
    v0[7] = v2;
    x30<8> = &g_41d3fc;
    sub_4270a0((unsigned long long)sub_4270a0(a0));
    return ::0x40f060::operator delete();
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_1 *field_10;
    struct struct_4 *field_18;
    unsigned long long field_20;
    struct struct_1 *field_28;
} struct_5;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    struct struct_4 *field_18;
    unsigned int field_20;
    char padding_24[4];
    struct struct_1 *field_28;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_4 {
    char field_0;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41d400(struct_5 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x20
    char *v3;  // x8, Other Possible Types: unsigned long
    unsigned long long v4;  // x9
    char *v5;  // x10, Other Possible Types: unsigned long
    struct_1 *v8;  // x21
    struct_1 *v11;  // x21
    unsigned long long v13;  // x0
    char *v14;  // x8, Other Possible Types: unsigned long
    unsigned long long v15;  // x9
    char *v16;  // x10, Other Possible Types: unsigned long

    v0 = &v1;
    v2 = a0;
    v3 = a0->field_18;
    v4 = a0->field_20;
    if (v4 - v3 == __strlen_chk(">", 2))
    {
        if (v3 == v4)
        {
            sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
        }
        else
        {
            for (v5 = ">"; *((char *)v3) == *((char *)v5); v5 += 1)
            {
                v3 += 1;
            }
        }
    }
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    v8 = v2->field_10;
    v8->field_0->field_20(v8, a1);
    if (v8->field_9 != 1)
        v8->field_0->field_28(v8, a1);
    sub_416694(a1, ") ", (char *)(4364900 + __strlen_chk(") ", 3)));
    sub_416694(a1, v2->field_18, *((long long *)&v2->field_20));
    sub_416694(a1, " (", (char *)(4364667 + __strlen_chk(" (", 3)));
    v11 = v2->field_28;
    v11->field_0->field_20(v11, a1);
    if (v11->field_9 != 1)
        v11->field_0->field_28(v11, a1);
    sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    (unsigned int)v13 = __strlen_chk(">", 2);
    v14 = v2->field_18;
    v15 = *((long long *)&v2->field_20);
    if (v15 - v14 != v13)
        return v13;
    if (v14 == v15)
        return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    v16 = ">";
    do
    {
        if (*((char *)v14) != *((char *)v16))
            return v13;
    } while ((v14 += 1, v16 += 1, v15 != v14));
}

long long sub_41d618()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned int field_18;
    char padding_1c[4];
    struct struct_1 *field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41d61c(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v3;  // x20

    v0 = &v1;
    sub_416694(a1, *((long long *)&a0->field_10), *((long long *)&a0->field_18));
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    v3 = a0->field_20;
    v3->field_0->field_20(v3, a1);
    if (v3->field_9 != 1)
        v3->field_0->field_28(v3, a1);
    return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
}

long long sub_41d6d0()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned int field_18;
    char padding_1c[4];
    struct struct_3 *field_20;
    struct struct_3 *field_28;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41d6d4(struct_2 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    sub_416694(a1, *((long long *)&a0->field_10), *((long long *)&a0->field_18));
    sub_416694(a1, "<", (char *)(4365181 + __strlen_chk("<", 2)));
    a0->field_20->field_0->field_20(a0->field_20, a1);
    sub_416694(a1, ">(", (char *)(4364903 + __strlen_chk(">(", 3)));
    a0->field_28->field_0->field_20(a0->field_28, a1);
    return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
}

long long sub_41d79c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    struct struct_4 *field_18;
    unsigned long long field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
} struct_5;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41d7a0(struct_3 *a0, struct_5 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21
    struct_1 *v5;  // x22
    unsigned long v6;  // x24, Other Possible Types: unsigned long long
    unsigned long v7;  // x25, Other Possible Types: unsigned long long
    void* v8;  // x23, Other Possible Types: unsigned long
    unsigned long v9;  // x26

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    if (!a0->field_20)
        return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    v7 = a1->field_8;
    v8 = 0;
    v6 = 1;
    if (true)
    {
        v5 = a0->field_18->field_0;
        v5->field_0->field_20(v5, a1);
    }
    sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
    v9 = a1->field_8;
    while (true)
    {
        v5 = a0->field_18[v8].field_0;
        v5->field_0->field_20(v5, a1);
        if (v5->field_9 != 1)
            v5->field_0->field_28(v5, a1);
        if (v9 != v7)
        {
            v6 = 0;
            v7 = a1->field_8;
        }
        else
        {
            a1->field_8 = v7;
        }
        v8 += 1;
        if (v8 == a0->field_20)
            break;
        v9 = v7;
    }
}

long long sub_41d908()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char padding_0[4832];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_7 {
    char padding_0[8];
    unsigned long long field_8;
} struct_7;

typedef struct struct_8 {
    char field_0;
} struct_8;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
    struct struct_6 *field_18;
    unsigned long long field_20;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_4;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

extern char g_41d9dc;

int sub_41d90c(struct_0 *a0, struct_7 *a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x90]
    unsigned long v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    unsigned long long v4[2];  // [bp-0x70]
    struct_0 *v5;  // [bp-0x68]
    unsigned long v6;  // [bp-0x60]
    struct_8 *v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]
    unsigned long v10;  // [bp-0x30]
    struct_0 *v11;  // [bp-0x28]
    unsigned long v12;  // [bp-0x20]
    unsigned long v13;  // [bp-0x18]
    unsigned long v14;  // [bp-0x10]
    unsigned long v15;  // [bp-0x8]
    char v16;  // [bp+0x0]
    unsigned long v17;  // x23
    unsigned long v18;  // x22
    unsigned long v19;  // x20
    unsigned long v20;  // x19
    unsigned long v21;  // x30
    unsigned long v22;  // x20
    unsigned long long v23;  // x23
    unsigned long long v25[2];  // x0
    struct_0 *v26;  // x21, Other Possible Types: unsigned long
    unsigned long long v27[2];  // x0
    void* v29;  // x21, Other Possible Types: unsigned long
    void* v30;  // x8, Other Possible Types: unsigned long
    unsigned long long v31[2];  // x22, Other Possible Types: unsigned long
    unsigned long v34;  // x26
    unsigned long v35;  // x25
    unsigned long v36;  // x24
    struct_5 *v37;  // x20
    struct_3 *v45;  // x21
    unsigned long v48;  // x25, Other Possible Types: unsigned long long
    void* v49;  // x23, Other Possible Types: unsigned long
    unsigned long v50;  // x24, Other Possible Types: unsigned long long
    unsigned long v51;  // x26
    struct_3 *v53;  // x22

    v9 = v17;
    v10 = v18;
    v11 = v26;
    v12 = v19;
    v13 = v20;
    v14 = &v16;
    v15 = v21;
    v31 = a0->field_12e0;
    v22 = a2 - (char *)a1;
    v23 = (unsigned int)v22 + 15 & -0x10;
    v30 = v31[1];
    if (v30 + v23 < 4080)
    {
LABEL_41d994:
        v29 = v31 + v30 + 16;
        *((unsigned long long *)(v31 + 8)) = v30 + v23;
        if (v22)
        {
            memmove(v29, a1, v22);
            return v31 + v30 + 16;
        }
        return v31 + v30 + 16;
    }
    else
    {
        if (v23 >= 4081)
        {
            v25 = malloc(v23 + 16);
            if (v25)
            {
                v29 = v25 + 1;
                v25[0] = v31[0];
                v25[1] = 0;
                v31[0] = v25;
                if (v22)
                {
                    memmove(v29, a1, v22);
                    return (unsigned int)(unsigned long long [2])((char *)&v25[0] + 1);
                }
                return (unsigned int)(unsigned long long [2])((char *)&v25[0] + 1);
            }
        }
        else
        {
            v26 = a0;
            v27 = malloc(0x1000);
            if (v27)
            {
                v30 = 0;
                v27[0] = v31;
                v27[1] = 0;
                v31 = v27;
                *((unsigned long long *[2])(v26 + 4832)) = v27;
                goto LABEL_41d994;
            }
        }
        v0 = v34;
        v1 = v35;
        v2 = v36;
        v3 = v23;
        v4[0] = v31;
        v5 = v26;
        v6 = v22;
        v7 = &v14;
        v8 = &g_41d9dc;
        v37 = ::0x40f080::std::terminate();
        sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
        v45 = v37->field_10;
        v45->field_0->field_20(v45, a1);
        if (v45->field_9 != 1)
            v45->field_0->field_28(v45, a1);
        sub_416694(a1, ")(", (char *)(4364909 + __strlen_chk(")(", 3)));
        if (!v37->field_20)
            return (unsigned int)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
        v48 = a1->field_8;
        v49 = 0;
        v50 = 1;
        if (true)
        {
            v53 = v37->field_18->field_0;
            v53->field_0->field_20(v53, a1);
        }
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v51 = a1->field_8;
        while (true)
        {
            v53 = v37->field_18[v49].field_0;
            v53->field_0->field_20(v53, a1);
            if (v53->field_9 != 1)
                v53->field_0->field_28(v53, a1);
            if (v51 == v48)
            {
                a1->field_8 = v48;
            }
            else
            {
                v50 = 0;
                v48 = a1->field_8;
            }
            v49 += 1;
            if (v49 == v37->field_20)
                break;
            v51 = v48;
        }
    }
}

long long sub_41db6c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_2 *field_10;
    char field_18;
    char field_19;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41db70(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x20
    struct_2 *v6;  // x20

    v0 = &v1;
    v2 = a0;
    if (a0->field_18)
        sub_416694(a1, "::", (char *)(4365965 + __strlen_chk("::", 3)));
    sub_416694(a1, "delete", (char *)(4365069 + __strlen_chk("delete", 7)));
    if (v2->field_19)
        sub_416694(a1, "[] ", (char *)(4364912 + __strlen_chk("[] ", 4)));
    v6 = v2->field_10;
    if (v6->field_9 == 1)
        return v6->field_0->field_20(v6, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_41dc58()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

int sub_41dc5c(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    char *v3;  // x8
    unsigned int v5;  // w8
    unsigned long long v6;  // x1
    unsigned long long v7;  // x2
    unsigned long long v8;  // x3
    unsigned long long v9;  // x4
    unsigned long long v10;  // x5
    unsigned long long v11;  // x6
    unsigned long long v12;  // x7
    unsigned long v13;  // x0, Other Possible Types: unsigned long long

    v1 = &v2;
    v3 = a0->field_0;
    if (a0->field_8 == v3)
        return sub_416810(a0);
    v5 = *(v3);
    if (v5 == 68)
    {
        (unsigned int)v13 = sub_4172f4(a0, v6, v7, v8, v9, v10, v11, v12);
    }
    else if (v5 == 84)
    {
        (unsigned int)v13 = sub_417064(a0);
    }
    else
    {
        return sub_416810(a0);
    }
    v0 = v13;
    if (!v13)
        return v13;
    sub_4162b0(&a0[18].field_8, &v0);
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_2 *field_12e0;
} struct_0;

typedef struct struct_5 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_5;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_4;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_4329d0;
extern char g_4335a0;

int sub_41dce4(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_3;  // tmp #3
    char v1;  // [bp+0x0]
    char *v2;  // x8
    struct_0 *v3;  // x19
    unsigned int v4;  // w8
    struct_5 *v5;  // x0, Other Possible Types: unsigned long
    unsigned long long v6;  // x0
    char *v7;  // x9
    unsigned long long v8;  // x8
    unsigned long v9;  // x11, Other Possible Types: unsigned long long
    char *v10;  // x12, Other Possible Types: unsigned long
    char *v11;  // x10, Other Possible Types: unsigned long
    char *v12;  // x9
    unsigned long long v13;  // x0
    char *v14;  // x8
    struct_4 *v15;  // x0
    struct_4 *v16;  // x21, Other Possible Types: unsigned long
    char *v17;  // x9, Other Possible Types: unsigned long
    unsigned long v18;  // x10, Other Possible Types: unsigned long long
    char *v19;  // x11, Other Possible Types: unsigned long
    char *v20;  // x8
    struct_5 *v22;  // x0
    unsigned long long v23[2];  // x22, Other Possible Types: unsigned long
    void* v24;  // x8, Other Possible Types: unsigned long
    char *v25;  // x8
    unsigned long long v26[2];  // x0
    unsigned long long v28;  // x0
    unsigned long long v29;  // x9
    struct_3 *v30;  // x8
    struct_4 *v31;  // x8
    unsigned long long v32[2];  // x22, Other Possible Types: unsigned long
    void* v34;  // x8, Other Possible Types: unsigned long
    unsigned long long v35[2];  // x0
    unsigned long long v36[2];  // x0
    struct_3 *v38;  // x8
    struct_4 *v39;  // x8
    struct_5 *v40;  // w20, Other Possible Types: unsigned long
    void* v41;  // x8, Other Possible Types: unsigned long
    unsigned long long v42[2];  // x22, Other Possible Types: unsigned long
    struct_3 *v43;  // x20

    v0 = &v1;
    v2 = a0->field_0;
    v3 = a0;
    if (a0->field_8 != v2 && (v4 = (unsigned int)*(v2), 9 >= v4 - 48))
    {
        (unsigned int)v5 = sub_41dfbc(a0);
        v40 = v5;
        if (!v5)
            return (unsigned int)v5;
    }
    else
    {
        (unsigned int)v6 = __strlen_chk("dn", 3);
        v7 = v3->field_0;
        v8 = v3->field_8;
        if (v8 - v7 >= v6)
        {
            if (v6)
            {
                v11 = "dn";
                v9 = v6;
                v10 = v7;
                while (*((char *)v11) == *((char *)v10))
                {
                    v11 += 1;
                    tmp_3 = v9;
                    v9 -= 1;
                    v10 += 1;
                    if (tmp_3 == 1)
                        goto LABEL_41dd7c;
                }
            }
            else
            {
LABEL_41dd7c:
                v12 = &v7[v6];
                v3->field_0 = v12;
                if (v8 == v12 || 9 < *(v12) - 48)
                {
                    v16 = sub_41dc5c(v3);
                    if (!v16)
                    {
LABEL_41dfa0:
                        return 0;
                    }
LABEL_41df44:
                    v42 = v3->field_12e0;
                    v41 = v42[1];
                    if (v41 + 32 < 4080)
                    {
                        v43 = v42 + v41;
                        *((unsigned long *)(v42 + 8)) = v41 + 32;
                        v43->field_10 = &g_4329d0;
                        v40 = &v43->field_10;
                        *((int *)(v40 + 8)) = 16843046;
                        *((unsigned long *)(v40 + 16)) = v16;
                        return v40;
                    }
                    v36 = malloc(0x1000);
                    if (v36)
                    {
                        v36[0] = v42;
                        v36[1] = 0;
                        v3->field_12e0 = &v36[0];
                        v43 = v36;
                        v36[1] = 0 + 32;
                        v43->field_10 = &g_4329d0;
                        v40 = &v43->field_10;
                        *((int *)(v40 + 8)) = 16843046;
                        *((unsigned long *)(v40 + 16)) = v16;
                        return v40;
                    }
LABEL_41dfb8:
                    ::0x40f080::std::terminate();
                }
                else
                {
                    (unsigned int)v15 = sub_41dfbc(v3);
                    if (v15)
                    {
                        v20 = v3->field_0;
                        v16 = v15;
                        if (v3->field_8 != v20 && *(v20) == 73)
                        {
                            (unsigned int)v22 = sub_416b98(v15, 3);
                            v40 = v22;
                            if (!v22)
                                return (unsigned int)v22;
                            v23 = v3->field_12e0;
                            v24 = v23[1];
                            if (v24 + 32 >= 4080)
                            {
                                v26 = malloc(0x1000);
                                if (!v26)
                                {
LABEL_41dfb8:
                                    ::0x40f080::std::terminate();
                                }
                                v24 = 0;
                                v26[0] = v23;
                                v26[1] = 0;
                                v23 = v26;
                                v3->field_12e0 = &v26[0];
                            }
                            v29 = v24 + 32;
                            v30 = v23 + v24;
                            *((unsigned long long *)(v23 + 8)) = v29;
                            v30->field_10 = &g_4335a0;
                            v31 = &v30->field_10;
                            v31->field_10 = v16;
                            v31->field_18 = v40;
                            v16 = v31;
                            v31->field_8 = 16843040;
                            goto LABEL_41df44;
                        }
                        goto LABEL_41df44;
                    }
                }
                goto LABEL_41dfa0;
            }
        }
        (unsigned int)v13 = __strlen_chk("on", 3);
        v14 = v3->field_0;
        if (v3->field_8 - v14 >= v13)
        {
            if (!v13)
            {
                v3->field_0 = &v14[v13];
            }
            else
            {
                v17 = "on";
                v18 = v13;
                v19 = v14;
                while (*((char *)v17) == *((char *)v19))
                {
                    v17 += 1;
                    tmp_3 = v18;
                    v18 -= 1;
                    v19 += 1;
                    if (tmp_3 == 1)
                    {
                        v3->field_0 = &v14[v13];
                        break;
                    }
                }
            }
        }
        (unsigned int)v5 = sub_41e274(v3, 0);
        v40 = v5;
        if (!v5)
            return v5;
    }
    v25 = v3->field_0;
    if (v3->field_8 == v25)
        return v40;
    if (*(v25) != 73)
        return v40;
    (unsigned int)v28 = sub_416b98(v5, 0);
    if (v28)
    {
        v32 = v3->field_12e0;
        v34 = v32[1];
        if (v34 + 32 < 4080)
        {
            v38 = v32 + v34;
            *((unsigned long *)(v32 + 8)) = v34 + 32;
            v38->field_10 = &g_4335a0;
            v39 = &v38->field_10;
            v39->field_10 = v40;
            v39->field_18 = v28;
            v39->field_8 = 16843040;
            return (unsigned int)v39;
        }
        v35 = malloc(0x1000);
        if (v35)
        {
            v35[0] = v32;
            v35[1] = 0;
            v3->field_12e0 = &v35[0];
            v38 = v35;
            v35[1] = 0 + 32;
            v38->field_10 = &g_4335a0;
            v39 = &v38->field_10;
            v39->field_10 = v40;
            v39->field_18 = v28;
            v39->field_8 = 16843040;
            return (unsigned int)v39;
        }
        goto LABEL_41dfb8;
    }
LABEL_41dfa0:
    return 0;
}

typedef struct struct_10 {
    struct struct_0 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_0 *field_12e0;
} struct_10;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

typedef struct struct_8 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_8;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_4 *field_10;
    struct struct_3 *field_18;
} struct_6;

typedef struct struct_9 {
    char padding_0[16];
    unsigned long long field_10;
} struct_9;

typedef struct struct_7 {
    char field_0;
} struct_7;

typedef struct struct_4 {
    struct struct_5 *field_0;
    char padding_8[1];
    char field_9;
} struct_4;

typedef struct struct_3 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_5 {
    char padding_0[32];
    struct struct_1 *field_20;
    struct struct_1 *field_28;
} struct_5;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_1 *field_20;
} struct_2;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

extern char g_41e19c;
extern char g_432180;

int sub_41dfbc(struct_10 *a0)
{
    int tmp_3;  // tmp #3
    unsigned long v0;  // [bp-0x60]
    struct_0 *v1;  // [bp-0x50]
    struct_10 *v2;  // [bp-0x48]
    struct_7 *v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x28]
    unsigned long v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]
    unsigned long v11;  // x21
    unsigned long v12;  // x20
    unsigned long v13;  // x19
    unsigned long v14;  // x30
    unsigned long long v15;  // x8
    struct_10 *v16;  // x19
    struct_0 *v17;  // x9
    struct_0 *v18;  // x20, Other Possible Types: unsigned long
    unsigned long long v19;  // x22, Other Possible Types: unsigned long
    void* v20;  // x10, Other Possible Types: unsigned long
    struct_0 *v21;  // x11, Other Possible Types: unsigned long
    unsigned long long v22;  // x21
    unsigned long v23;  // x0, Other Possible Types: unsigned long long
    unsigned long v24;  // w19
    char *v25;  // x8, Other Possible Types: unsigned long
    struct_0 *v26;  // x9, Other Possible Types: unsigned long
    void* v27;  // x8, Other Possible Types: unsigned long
    struct_0 *v28;  // x22, Other Possible Types: unsigned long
    void* v29;  // x8, Other Possible Types: unsigned long
    struct_0 *v30;  // x0
    struct_0 *v31;  // x0
    struct_6 *v32;  // x0
    struct_9 *v33;  // x19
    struct_9 *v34;  // x19
    struct_4 *v35;  // x21
    struct_3 *v38;  // x20

    v5 = v11;
    v6 = v12;
    v7 = v13;
    v8 = &v10;
    v9 = v14;
    v18 = a0->field_0;
    v15 = a0->field_8;
    if (!(v15 != v18 && 9 >= v18->field_0 - 48))
        return 0;
    v16 = a0;
    if (v18 == v15)
    {
        v19 = -48;
    }
    else
    {
        v20 = 0;
        while (true)
        {
            v17 = v18;
            v18 += 1;
            a0->field_0 = v18;
            v19 = v20 + v17->field_0 - 48;
            if (v15 == v18 || 10 <= *((char *)v18) - 48)
                break;
            v20 = __ROL__(v19 + (v19 << 2), 1) & -2;
            if (v15 == v18)
            {
                v21 = v18;
                v18 = &v17->padding_1;
                v19 = v20 - 48;
                goto LABEL_41e050;
            }
        }
    }
    v21 = v18;
LABEL_41e050:
    if (v15 - v21 > v19 - 1)
    {
        v22 = v18 + v19;
        a0->field_0 = v22;
        (unsigned int)v23 = __strlen_chk("_GLOBAL__N", 11);
        if (v19 >= v23)
        {
            if (v23)
            {
                v25 = "_GLOBAL__N";
                v26 = v18;
            }
            else
            {
LABEL_41e0b0:
                v18 = v16->field_12e0;
                v27 = *((long long *)(v18 + 8));
                if (v27 + 32 < 4080)
                {
                    *((unsigned long *)(v18 + 8)) = v27 + 32;
                    v33 = v18 + v27;
                    v33->field_10 = &g_432180;
                    v24 = &v33->field_10;
                    *((int *)(v24 + 8)) = 16843015;
                    *((char **)(v24 + 16)) = "(anonymous namespace)";
                    *((char **)(v24 + 24)) = (char *)(4364934 + __strlen_chk("(anonymous namespace)", 22));
                    return v24;
                }
                v30 = malloc(0x1000);
                if (v30)
                {
                    *((unsigned long *)&v30->field_0) = v18;
                    v30->field_8 = 0;
                    v16->field_12e0 = v30;
                    v30->field_8 = 0 + 32;
                    v33 = v30;
                    v33->field_10 = &g_432180;
                    v24 = &v33->field_10;
                    *((int *)(v24 + 8)) = 16843015;
                    *((char **)(v24 + 16)) = "(anonymous namespace)";
                    *((char **)(v24 + 24)) = (char *)(4364934 + __strlen_chk("(anonymous namespace)", 22));
                    return v24;
                }
                goto LABEL_41e198;
            }
            while (*((char *)v25) == *((char *)v26))
            {
                v25 += 1;
                tmp_3 = v23;
                v23 -= 1;
                v26 += 1;
                if (!(tmp_3 != 1))
                    goto LABEL_41e0b0;
            }
        }
        v28 = v16->field_12e0;
        v29 = v28->field_8;
        if (v29 + 32 < 4080)
        {
            v34 = v28 + v29;
            *((unsigned long *)(v28 + 8)) = v29 + 32;
            v34->field_10 = &g_432180;
            v24 = &v34->field_10;
            *((int *)(v24 + 8)) = 16843015;
            *((unsigned long *)(v24 + 16)) = v18;
            *((unsigned long long *)(v24 + 24)) = v22;
            return v24;
        }
        v31 = malloc(0x1000);
        if (v31)
        {
            *((struct_0 **)&v31->field_0) = v28;
            v31->field_8 = 0;
            v16->field_12e0 = v31;
            v34 = v31;
            v31->field_8 = 0 + 32;
            v34->field_10 = &g_432180;
            v24 = &v34->field_10;
            *((int *)(v24 + 8)) = 16843015;
            *((unsigned long *)(v24 + 16)) = v18;
            *((unsigned long long *)(v24 + 24)) = v22;
            return v24;
        }
LABEL_41e198:
        v32 = ::0x40f080::std::terminate();
        v0 = v22;
        v1 = v18;
        v2 = v16;
        v3 = &v8;
        v4 = &g_41e19c;
        v35 = v32->field_10;
        v35->field_0->field_20(v35);
        if (v35->field_9 != 1)
            v35->field_0->field_28(v35, 11);
        sub_416694(0xb, "::", (char *)(4365965 + __strlen_chk("::", 3)));
        v38 = v32->field_18;
        if (v38->field_9 == 1)
            return v38->field_0->field_20(v38, 11);
        goto *((long long *)(*((long long *)x20<8>) + 40));
    }
}

long long sub_41e260(unsigned long a0)
{
    goto *((long long *)(*((long long *)*((long long *)(x0<8> + 24))) + 48));
}

long long sub_41e270()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_5 {
    struct struct_6 *field_0;
    unsigned long long field_8;
} struct_5;

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4824];
    struct struct_2 *field_12e0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
    char padding_8[712];
    char field_2d0;
    char field_2d1;
    char padding_2d2[4110];
    struct struct_2 *field_12e0;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_7 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_7;

typedef struct struct_3 {
    char padding_0[1];
    char field_1;
} struct_3;

typedef struct struct_6 {
    char field_0;
} struct_6;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_432180;
extern char g_432a40;
extern char g_432ab0;

int sub_41e274(struct_5 *a0, char *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v2;  // x8
    unsigned long long v167;  // x10

    v0 = &v1;
    v2 = a0->field_0;
    if (a0->field_8 == v2)
        goto LABEL_0x41f090;
    v167 = *(v2) - 97;
    if (21 < (unsigned int)v167)
        return 0;
    goto (char *)(4317892 + 4 * *((short *)(4363668 + (x10<8> << 1))));
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[712];
    char field_2d0;
    char field_2d1;
    char padding_2d2[4110];
    struct struct_1 *field_12e0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_1;

extern char g_41f51c;

long long sub_41e2f8(unsigned long a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x30]
    unsigned long long v1[2];  // [bp-0x20]
    struct_0 *v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]
    struct_0 *v6;  // x19
    unsigned long long v7[2];  // x20, Other Possible Types: unsigned long
    unsigned long v8;  // x8
    void* v10;  // x8, Other Possible Types: unsigned long
    unsigned long long v11[2];  // x0
    char v12;  // x24
    char v13;  // x23
    unsigned long v14;  // x21
    unsigned long long v15;  // x20

    v7 = v6->field_12e0;
    v6->field_0 = v8 + 2;
    v10 = v7[1];
    if (v10 + 32 >= 4080)
    {
        v11 = malloc(0x1000);
        if (v11)
        {
            v10 = 0;
            v11[0] = v7;
            v11[1] = 0;
            v7 = v11;
            v6->field_12e0 = &v11[0];
        }
        else
        {
            v6->field_2d1 = v12;
            v6->field_2d0 = v13;
            v0 = v14;
            v1[0] = v7;
            v2 = v6;
            v3 = &v5;
            v4 = &g_41f51c;
            v15 = (unsigned long long)sub_4270a0(::0x40f080::std::terminate());
            sub_416694(a1, "~", (char *)(4365030 + __strlen_chk("~", 2)));
            goto *((long long *)(*((long long *)*((long long *)(x20<8> + 16))) + 32));
        }
    }
    *((unsigned long *)(v7 + 8)) = v10 + 32;
    __strlen_chk("operator&", 10);
}

long long sub_41f578()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41f57c(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v4;  // x20

    v0 = &v1;
    sub_416694(a1, "operator ", (char *)(4365486 + __strlen_chk("operator ", 10)));
    v4 = a0->field_10;
    if (v4->field_9 == 1)
        return v4->field_0->field_20(v4, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_41f60c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41f610(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v4;  // x20

    v0 = &v1;
    sub_416694(a1, "operator\"\" ", (char *)(4365450 + __strlen_chk("operator\"\" ", 12)));
    v4 = a0->field_10;
    if (v4->field_9 == 1)
        return v4->field_0->field_20(v4, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_41f6a0()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41f6a4(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v4;  // x20

    v0 = &v1;
    sub_416694(a1, "::", (char *)(4365965 + __strlen_chk("::", 3)));
    v4 = a0->field_10;
    if (v4->field_9 == 1)
        return v4->field_0->field_20(v4, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_41f734(unsigned long a0)
{
    goto *((long long *)(*((long long *)*((long long *)(x0<8> + 16))) + 48));
}

long long sub_41f744()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_6 {
    char padding_0[16];
    struct struct_3 *field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_2 *field_28;
} struct_6;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
    char padding_24[4];
    struct struct_2 *field_28;
} struct_5;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_4;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41f748(struct_6 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x21
    struct_2 *v4;  // x20

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, a0->field_18, a0->field_20);
    v4 = a0->field_28;
    if (v4->field_9 == 1)
        return v4->field_0->field_20(v4, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_41f7f4()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41f7f8(struct struct_1 *a0[4], unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v3;  // x21
    struct_1 *v5;  // x20

    v0 = &v1;
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    v3 = a0[2];
    v3->field_0->field_20(v3, a1);
    if (v3->field_9 != 1)
        v3->field_0->field_28(v3, a1);
    sub_416694(a1, ")[", (char *)(4365462 + __strlen_chk(")[", 3)));
    v5 = a0[3];
    v5->field_0->field_20(v5, a1);
    if (v5->field_9 != 1)
        v5->field_0->field_28(v5, a1);
    return (unsigned long long)sub_416694(a1, "]", (char *)(4365048 + __strlen_chk("]", 2)));
}

long long sub_41f8f8()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_5 *field_10;
    struct struct_4 *field_18;
    char field_20;
} struct_7;

typedef struct struct_5 {
    struct struct_6 *field_0;
    char padding_8[1];
    char field_9;
} struct_5;

typedef struct struct_4 {
    struct struct_3 *field_0;
    char field_8;
    char field_9;
} struct_4;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_6 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_6;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_2 *field_20;
} struct_3;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

long long sub_41f8fc(struct_7 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v2;  // x8, Other Possible Types: unsigned long
    struct_0 *v3;  // x10
    struct_0 *v4;  // x19
    struct_7 *v5;  // x20
    char *v6;  // x0
    char *v7;  // x0
    struct_0 *v8;  // x1, Other Possible Types: unsigned long
    unsigned long v9;  // x0
    unsigned long v10;  // x0
    struct_0 *v11;  // x9, Other Possible Types: unsigned long
    struct_5 *v12;  // x21
    struct_5 *v13;  // x21
    char *v14;  // x8, Other Possible Types: unsigned long
    struct_0 *v15;  // x10
    struct_0 *v16;  // x9, Other Possible Types: unsigned long
    unsigned long v17;  // x0
    char *v18;  // x0
    struct_0 *v19;  // x1, Other Possible Types: unsigned long
    struct_4 *v20;  // x21, Other Possible Types: unsigned long
    unsigned long long v22;  // x0

    v0 = &v1;
    v2 = a1->field_8;
    v3 = a1->field_10;
    v4 = a1;
    v5 = a0;
    v11 = v2 + 1;
    if (!a0->field_20)
    {
        if (!((char)[D] arm64g_calculate_condition(0x24<64>, x9<8>, x10<8>, 0x0<64>)))
        {
            v10 = a1->field_0;
            a1->field_8 = v11;
            *((char *)(v10 + v2)) = 46;
            v13 = v5->field_10;
            v13->field_0->field_20(v13, a1);
        }
        v7 = a1->field_0;
        if (a1 < v11)
            v8 = v11;
        else
            a1 = __ROL__(v3, 1) & -2;
        v4->field_10 = v8;
        v10 = realloc(v7, v8);
        v4->field_0 = v10;
        if (v10)
        {
            v2 = v4->field_8;
            v4->field_8 = v2 + 1;
            *((char *)(v10 + v2)) = 46;
            v13 = v5->field_10;
            v13->field_0->field_20(v13, v4);
            if (v13->field_9 != 1)
                v13->field_0->field_28(v13, v4);
LABEL_41fa68:
            v20 = v5->field_18;
            if ((v20->field_8 & 254) != 66)
            {
                sub_416694(v4, " = ", (char *)(4365465 + __strlen_chk(" = ", 4)));
                v20 = v5->field_18;
            }
            v22 = *((long long *)(*((long long *)v20) + 32))(v20, v4);
            if (*((char *)(v20 + 9)) == 1)
                return v22;
            goto *((long long *)(*((long long *)x21<8>) + 40));
        }
    }
    else
    {
        if (!((char)[D] arm64g_calculate_condition(0x24<64>, x9<8>, x10<8>, 0x0<64>)))
        {
            v9 = a1->field_0;
        }
        else
        {
            v6 = a1->field_0;
            if (a1 < v11)
                a1 = v11;
            else
                a1 = __ROL__(v3, 1) & -2;
            v4->field_10 = a1;
            v9 = realloc(v6, a1);
            v4->field_0 = v9;
            if (!v9)
            {
                ::0x40f080::std::terminate();
                return ::0x40f060::operator delete();
            }
            v2 = v4->field_8;
            v11 = v2 + 1;
        }
        v4->field_8 = v11;
        *((char *)(v9 + v2)) = 91;
        v12 = v5->field_10;
        v12->field_0->field_20(v12, v4);
        if (v12->field_9 != 1)
            v12->field_0->field_28(v12, v4);
        v14 = v4->field_8;
        v15 = v4->field_10;
        v16 = v14 + 1;
        if (v15 > v16)
        {
            v17 = v4->field_0;
            v4->field_8 = v16;
            *((char *)(v17 + v14)) = 93;
            goto LABEL_41fa68;
        }
        v18 = v4->field_0;
        if (a1 < v16)
            v19 = v16;
        else
            a1 = __ROL__(v15, 1) & -2;
        v4->field_10 = v19;
        v17 = realloc(v18, v19);
        v4->field_0 = v17;
        if (v17)
        {
            v14 = v4->field_8;
            v4->field_8 = v14 + 1;
            *((char *)(v17 + v14)) = 93;
            goto LABEL_41fa68;
        }
    }
    ::0x40f080::std::terminate();
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_5 *field_10;
    struct struct_5 *field_18;
    struct struct_4 *field_20;
} struct_7;

typedef struct struct_5 {
    struct struct_6 *field_0;
    char padding_8[1];
    char field_9;
} struct_5;

typedef struct struct_4 {
    struct struct_3 *field_0;
    char field_8;
    char field_9;
} struct_4;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_6 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_6;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_2 *field_20;
} struct_3;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

long long sub_41fafc(struct_7 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v2;  // x8, Other Possible Types: unsigned long
    struct_0 *v3;  // x10
    struct_0 *v4;  // x19
    struct_7 *v5;  // x20
    char *v6;  // x0
    unsigned long v7;  // x0
    struct_0 *v8;  // x9, Other Possible Types: unsigned long
    struct_5 *v9;  // x21
    struct_5 *v11;  // x21
    char *v12;  // x8, Other Possible Types: unsigned long
    struct_0 *v13;  // x10
    struct_0 *v14;  // x9, Other Possible Types: unsigned long
    unsigned long v15;  // x0
    char *v16;  // x0
    struct_0 *v17;  // x1, Other Possible Types: unsigned long
    struct_4 *v18;  // x21, Other Possible Types: unsigned long
    unsigned long long v20;  // x0

    v0 = &v1;
    v2 = a1->field_8;
    v3 = a1->field_10;
    v4 = a1;
    v5 = a0;
    v8 = v2 + 1;
    if (v3 > v8)
    {
        v7 = a1->field_0;
    }
    else
    {
        v6 = a1->field_0;
        if (a1 < v8)
            a1 = v8;
        else
            a1 = __ROL__(v3, 1) & -2;
        v4->field_10 = a1;
        v7 = realloc(v6, a1);
        v4->field_0 = v7;
        if (!v7)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v2 = v4->field_8;
        v8 = v2 + 1;
    }
    v4->field_8 = v8;
    *((char *)(v7 + v2)) = 91;
    v9 = v5->field_10;
    v9->field_0->field_20(v9, v4);
    if (v9->field_9 != 1)
        v9->field_0->field_28(v9, v4);
    sub_416694(v4, " ... ", (char *)(4365469 + __strlen_chk(" ... ", 6)));
    v11 = v5->field_18;
    v11->field_0->field_20(v11, v4);
    if (v11->field_9 != 1)
        v11->field_0->field_28(v11, v4);
    v12 = v4->field_8;
    v13 = v4->field_10;
    v14 = v12 + 1;
    if (v13 > v14)
    {
        v15 = v4->field_0;
    }
    else
    {
        v16 = v4->field_0;
        if (a1 < v14)
            v17 = v14;
        else
            a1 = __ROL__(v13, 1) & -2;
        v4->field_10 = v17;
        v15 = realloc(v16, v17);
        v4->field_0 = v15;
        if (!v15)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v12 = v4->field_8;
        v14 = v12 + 1;
    }
    v4->field_8 = v14;
    *((char *)(v15 + v12)) = 93;
    v18 = v5->field_20;
    if ((v18->field_8 & 254) != 66)
    {
        sub_416694(v4, " = ", (char *)(4365465 + __strlen_chk(" = ", 4)));
        v18 = v5->field_20;
    }
    v20 = *((long long *)(*((long long *)v18) + 32))(v18, v4);
    if (*((char *)(v18 + 9)) == 1)
        return v20;
    goto *((long long *)(*((long long *)x21<8>) + 40));
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
    struct struct_6 *field_18;
    unsigned long long field_20;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_4;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

long long sub_41fcd4(struct_5 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x21
    struct_5 *v3;  // x20
    struct_0 *v4;  // x19
    struct_0 *v5;  // x10
    char *v6;  // x0
    unsigned long v7;  // x0
    char *v8;  // x8, Other Possible Types: unsigned long
    struct_0 *v9;  // x9, Other Possible Types: unsigned long
    char *v10;  // x23, Other Possible Types: unsigned long
    void* v11;  // x24, Other Possible Types: unsigned long
    unsigned long long v12;  // x25, Other Possible Types: unsigned long
    unsigned long v13;  // x26
    struct_3 *v15;  // x22
    struct_0 *v16;  // x9
    struct_0 *v17;  // x8, Other Possible Types: unsigned long
    unsigned long v18;  // x0
    char *v19;  // x0
    struct_0 *v21;  // x1, Other Possible Types: unsigned long

    v0 = &v1;
    v2 = a0->field_10;
    v3 = a0;
    v4 = a1;
    if (v2)
    {
        v2->field_0->field_20(v2, a1);
        if (v2->field_9 != 1)
            v2->field_0->field_28(v2, a1);
    }
    v8 = a1->field_8;
    v5 = a1->field_10;
    v9 = v8 + 1;
    if (v5 > v9)
    {
        v7 = a1->field_0;
    }
    else
    {
        v6 = a1->field_0;
        if (a1 < v9)
            a1 = v9;
        else
            a1 = __ROL__(v5, 1) & -2;
        v4->field_10 = a1;
        v7 = realloc(v6, a1);
        v4->field_0 = v7;
        if (!v7)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v8 = v4->field_8;
        v9 = v8 + 1;
    }
    v4->field_8 = v9;
    *((char *)(v7 + v8)) = 123;
    if (!v3->field_20)
    {
        v10 = v4->field_8;
    }
    else
    {
        v10 = v4->field_8;
        v11 = 0;
        v12 = 1;
        if (true)
        {
            v15 = v3->field_18->field_0;
            v15->field_0->field_20(v15, v4);
        }
        sub_416694(v4, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v13 = v4->field_8;
        while (true)
        {
            v15 = v3->field_18[v11].field_0;
            v15->field_0->field_20(v15, v4);
            if (v15->field_9 != 1)
                v15->field_0->field_28(v15, v4);
            if (v13 != v10)
            {
                v12 = 0;
                v10 = v4->field_8;
            }
            else
            {
                v4->field_8 = v10;
            }
            v11 += 1;
            if (v11 == v3->field_20)
                break;
            v13 = v10;
        }
    }
    v16 = v4->field_10;
    v17 = v10 + 1;
    if (v16 > v17)
    {
        v18 = v4->field_0;
        v4->field_8 = v17;
        *((char *)(v18 + v10)) = 125;
        return v18;
    }
    v19 = v4->field_0;
    if (a1 < v17)
        v21 = v17;
    else
        a1 = __ROL__(v16, 1) & -2;
    v4->field_10 = v21;
    v18 = realloc(v19, v21);
    v4->field_0 = v18;
    if (v18)
    {
        v10 = v4->field_8;
        v4->field_8 = v10 + 1;
        *((char *)(v18 + v10)) = 125;
        return v18;
    }
    ::0x40f080::std::terminate();
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41fea4(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v3;  // x21

    v0 = &v1;
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    v3 = a0->field_10;
    v3->field_0->field_20(v3, a1);
    if (v3->field_9 != 1)
        v3->field_0->field_28(v3, a1);
    sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    return (unsigned long long)sub_416694(a1, *((long long *)&a0->field_18), *((long long *)&a0->field_20));
}

long long sub_41ff54()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    unsigned long long field_18;
    struct struct_1 *field_20;
    struct struct_4 *field_28;
    unsigned long long field_30;
    char field_38;
    char field_39;
} struct_3;

typedef struct struct_5 {
    struct struct_6 *field_0;
    struct struct_6 *field_8;
    unsigned long long field_10;
} struct_5;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_6 {
    char field_0;
} struct_6;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_41ff58(struct_3 *a0, struct_5 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x20
    struct_5 *v3;  // x19
    unsigned long long v7;  // x10
    char *v8;  // x0
    unsigned long v9;  // x1
    unsigned long v10;  // x0
    char *v11;  // x8, Other Possible Types: unsigned long
    unsigned long v12;  // x9, Other Possible Types: unsigned long long
    char *v14;  // x27, Other Possible Types: unsigned long
    void* v15;  // x25, Other Possible Types: unsigned long
    unsigned long v16;  // x26, Other Possible Types: unsigned long long
    unsigned long v17;  // x28
    struct_1 *v19;  // x24
    struct_1 *v21;  // x24
    unsigned long v22;  // x0, Other Possible Types: unsigned long long
    char *v24;  // x26, Other Possible Types: unsigned long
    void* v25;  // x24, Other Possible Types: unsigned long
    unsigned long v26;  // x25, Other Possible Types: unsigned long long
    unsigned long v27;  // x27
    struct_1 *v29;  // x23

    v0 = &v1;
    v2 = a0;
    v3 = a1;
    if (a0->field_38)
        sub_416694(a1, "::operator ", (char *)(4365484 + __strlen_chk("::operator ", 12)));
    sub_416694(a1, "new", (char *)(4365293 + __strlen_chk("new", 4)));
    if (v2->field_39)
        sub_416694(a1, "[]", (char *)(4365047 + __strlen_chk("[]", 3)));
    v11 = a1->field_8;
    v7 = a1->field_10;
    v12 = v11 + 1;
    if (v7 > v12)
    {
        v10 = a1->field_0;
    }
    else
    {
        v8 = a1->field_0;
        if (a1 < v12)
            v9 = v12;
        else
            a1 = __ROL__(v7, 1) & -2;
        v3->field_10 = v9;
        v10 = realloc(v8, v9);
        v3->field_0 = v10;
        if (!v10)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v11 = v3->field_8;
        v12 = v11 + 1;
    }
    v3->field_8 = v12;
    *((char *)(v10 + v11)) = 32;
    if (v2->field_18)
    {
        sub_416694(v3, "(", (char *)(4364668 + __strlen_chk("(", 2)));
        if (v2->field_18)
        {
            v14 = v3->field_8;
            v15 = 0;
            v16 = 1;
            if (true)
            {
                v19 = v2->field_10->field_0;
                v19->field_0->field_20(v19, v3);
            }
            sub_416694(v3, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
            v17 = v3->field_8;
            while (true)
            {
                v19 = v2->field_10[v15].field_0;
                v19->field_0->field_20(v19, v3);
                if (v19->field_9 != 1)
                    v19->field_0->field_28(v19, v3);
                if (v17 != v14)
                {
                    v16 = 0;
                    v14 = v3->field_8;
                }
                else
                {
                    v3->field_8 = v14;
                }
                v15 += 1;
                if (v15 == v2->field_18)
                    break;
                v17 = v14;
            }
        }
        sub_416694(v3, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    }
    v21 = v2->field_20;
    v22 = v21->field_0->field_20(v21, v3);
    if (v21->field_9 != 1)
        v22 = v21->field_0->field_28(v21, v3);
    if (!v2->field_30)
        return v22;
    sub_416694(v3, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    if (!v2->field_30)
        return (unsigned long long)sub_416694(v3, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    v24 = v3->field_8;
    v25 = 0;
    v26 = 1;
    if (true)
    {
        v29 = v2->field_28->field_0;
        v29->field_0->field_20(v29, v3);
    }
    sub_416694(v3, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
    v27 = v3->field_8;
    while (true)
    {
        v29 = v2->field_28[v25].field_0;
        v29->field_0->field_20(v29, v3);
        if (v29->field_9 != 1)
            v29->field_0->field_28(v29, v3);
        if (v27 != v24)
        {
            v26 = 0;
            v24 = v3->field_8;
        }
        else
        {
            v3->field_8 = v24;
        }
        v25 += 1;
        if (v25 == v2->field_30)
            break;
        v27 = v24;
    }
}

typedef struct struct_3 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned int field_18;
    char padding_1c[4];
    struct struct_1 *field_20;
    unsigned int field_28;
    char padding_2c[4];
    unsigned int field_30;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4202b0(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21

    v0 = &v1;
    sub_416694(a1, *((long long *)&a0->field_10), *((long long *)&a0->field_18));
    v2 = a0->field_20;
    v2->field_0->field_20(v2, a1);
    if (v2->field_9 != 1)
    {
        v2->field_0->field_28(v2, a1);
        return (unsigned long long)sub_416694(a1, *((long long *)&a0->field_28), *((long long *)&a0->field_30));
    }
    return (unsigned long long)sub_416694(a1, *((long long *)&a0->field_28), *((long long *)&a0->field_30));
}

long long sub_420328()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_42032c(struct struct_1 *a0[5], unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v3;  // x21
    struct_1 *v5;  // x21
    struct_1 *v7;  // x20

    v0 = &v1;
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    v3 = a0[2];
    v3->field_0->field_20(v3, a1);
    if (v3->field_9 != 1)
        v3->field_0->field_28(v3, a1);
    sub_416694(a1, ") ? (", (char *)(4365496 + __strlen_chk(") ? (", 6)));
    v5 = a0[3];
    v5->field_0->field_20(v5, a1);
    if (v5->field_9 != 1)
        v5->field_0->field_28(v5, a1);
    sub_416694(a1, ") : (", (char *)(4365502 + __strlen_chk(") : (", 6)));
    v7 = a0[4];
    v7->field_0->field_20(v7, a1);
    if (v7->field_9 != 1)
        v7->field_0->field_28(v7, a1);
    return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
}

long long sub_420488()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

extern char g_432650;

long long sub_42048c(struct_0 *a0, void* a1)
{
    unsigned long v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x10]
    char v4;  // [bp+0x0]

    v3 = &v4;
    sub_416694(a1, "sizeof...(", (char *)(4365508 + __strlen_chk("sizeof...(", 11)));
    v1 = 16843037;
    v0 = &g_432650;
    v2 = a0->field_10;
    sub_41d2ac(&v0, a1);
    return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
}

extern char g_420530;

long long sub_42052c(unsigned long long a0)
{
    x30<8> = &g_420530;
    sub_4270a0(a0);
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    unsigned long long field_18;
} struct_3;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
} struct_5;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_420534(struct_3 *a0, struct_5 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x25, Other Possible Types: unsigned long long
    struct_3 *v3;  // x19
    struct_1 *v5;  // x22
    unsigned long v6;  // x24, Other Possible Types: unsigned long long
    void* v7;  // x23, Other Possible Types: unsigned long
    unsigned long v8;  // x26

    v0 = &v1;
    if (!a0->field_18)
        return a0;
    v2 = a1->field_8;
    v3 = a0;
    v7 = 0;
    v6 = 1;
    if (true)
    {
        v5 = a0->field_10->field_0;
        v5->field_0->field_20(v5, a1);
    }
    while (true)
    {
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v8 = a1->field_8;
        do
        {
            v5 = v3->field_10[v7].field_0;
            a0 = v5->field_0->field_20(v5, a1);
            if (v5->field_9 != 1)
                a0 = v5->field_0->field_28(v5, a1);
            if (v8 == v2)
            {
                a1->field_8 = v2;
            }
            else
            {
                v6 = 0;
                v2 = a1->field_8;
            }
            v7 += 1;
            if (v7 == v3->field_18)
                return a0;
            v8 = v2;
        } while (((char)v6 & 1));
    }
}

long long sub_420624()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_420628(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v4;  // x20

    v0 = &v1;
    sub_416694(a1, "throw ", (char *)(4365519 + __strlen_chk("throw ", 7)));
    v4 = a0->field_10;
    if (v4->field_9 == 1)
        return v4->field_0->field_20(v4, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_4206b8()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4206bc(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v3;  // x20

    v0 = &v1;
    sub_416694(a1, "__uuidof(", (char *)(4365526 + __strlen_chk("__uuidof(", 10)));
    v3 = a0->field_10;
    v3->field_0->field_20(v3, a1);
    if (v3->field_9 != 1)
        v3->field_0->field_28(v3, a1);
    return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
}

long long sub_420760()
{
    return ::0x40f060::operator delete();
}

// Exception thrown decompiling function sub_420764: Node type <class 'angr.analyses.decompiler.structuring.structurer_nodes.IncompleteSwitchCaseNode'> is not supported yet.
long long sub_420820(unsigned long a0)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x19
    unsigned long v5;  // x30

    v0 = v4;
    v1 = &v3;
    v2 = v5;
    goto sub_420848 + (*((char *)(4364220 + *((int *)(x0<8> + 12)))) << 2);
}

int sub_420848()
{
    char v0;  // [bp+0x0]
    char v1;  // [bp+0x10]
    char v2;  // [bp+0x18]
    unsigned long long v3;  // x29
    unsigned long long v4;  // x19

    __strlen_chk("basic_string", 13);
    v3 = *((long long *)&v1);
    x30<8> = *((long long *)&v2);
    v4 = *((long long *)&v0);
    return;
}

long long sub_420858()
{
}

long long sub_420868()
{
}

long long sub_420878()
{
}

long long sub_420888()
{
}

long long sub_4208b0()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
    char field_18;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[48];
    struct struct_0 *field_30;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4208b4(struct_2 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v2;  // x20
    unsigned long v4;  // x2

    v0 = &v1;
    v2 = a0;
    if (a0->field_18)
    {
        (unsigned int)a0 = __strlen_chk("~", 2);
        sub_416694(a1, "~", 4365030 + a0);
    }
    v4 = v2->field_10->field_0->field_30(a0->field_10);
    return (unsigned long long)sub_416694(a1, v4, "~");
}

long long sub_42092c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_4 {
    char padding_0[16];
    struct struct_3 *field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_4;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_420930(struct_4 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct struct_1 **v3;  // x0

    v0 = &v1;
    *(v3)->field_20(a0->field_10);
    sub_416694(a1, "[abi:", (char *)(4365834 + __strlen_chk("[abi:", 6)));
    sub_416694(a1, a0->field_18, a0->field_20);
    return (unsigned long long)sub_416694(a1, "]", (char *)(4365048 + __strlen_chk("]", 2)));
}

long long sub_4209b8()
{
    return ::0x40f060::operator delete();
}

long long sub_4209bc(unsigned int a0[7], unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    sub_416694(a1, "'unnamed", (char *)(4365871 + __strlen_chk("'unnamed", 9)));
    sub_416694(a1, *((long long *)&a0[4]), *((long long *)&a0[6]));
    return (unsigned long long)sub_416694(a1, "'", (char *)(4365869 + __strlen_chk("'", 2)));
}

long long sub_420a34()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
    unsigned long long field_18;
    unsigned int field_20;
    char padding_24[4];
    unsigned int field_28;
} struct_4;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_5 {
    struct struct_1 *field_0;
} struct_5;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_420a38(struct_4 *a0, struct_3 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v5;  // x22
    unsigned long long v6;  // x24, Other Possible Types: unsigned long
    unsigned long v7;  // x25, Other Possible Types: unsigned long long
    void* v8;  // x23, Other Possible Types: unsigned long
    unsigned long v9;  // x26

    v0 = &v1;
    sub_416694(a1, "'lambda", (char *)(4365880 + __strlen_chk("'lambda", 8)));
    sub_416694(a1, *((long long *)&a0->field_20), *((long long *)&a0->field_28));
    sub_416694(a1, "'(", (char *)(4365888 + __strlen_chk("'(", 3)));
    if (!a0->field_18)
        return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    v7 = a1->field_8;
    v8 = 0;
    v6 = 1;
    if (true)
    {
        v5 = a0->field_10->field_0;
        v5->field_0->field_20(v5, a1);
    }
    sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
    v9 = a1->field_8;
    while (true)
    {
        v5 = a0->field_10[v8].field_0;
        v5->field_0->field_20(v5, a1);
        if (v5->field_9 != 1)
            v5->field_0->field_28(v5, a1);
        if (v9 == v7)
        {
            a1->field_8 = v7;
        }
        else
        {
            v6 = 0;
            v7 = a1->field_8;
        }
        v8 += 1;
        if (v8 == a0->field_18)
            break;
        v9 = v7;
    }
}

long long sub_420b9c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
    unsigned long long field_18;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_4;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

long long sub_420ba0(struct_5 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char *v2;  // x8, Other Possible Types: unsigned long
    struct_0 *v3;  // x10
    struct_0 *v4;  // x19
    struct_5 *v5;  // x20
    char *v6;  // x0
    unsigned long v7;  // x0
    struct_0 *v8;  // x9, Other Possible Types: unsigned long
    char *v9;  // x23, Other Possible Types: unsigned long
    void* v10;  // x24, Other Possible Types: unsigned long
    unsigned long long v11;  // x25, Other Possible Types: unsigned long
    unsigned long v12;  // x26
    struct_3 *v14;  // x22
    struct_0 *v15;  // x9
    struct_0 *v16;  // x8, Other Possible Types: unsigned long
    unsigned long v17;  // x0
    char *v18;  // x0
    struct_0 *v20;  // x1, Other Possible Types: unsigned long

    v0 = &v1;
    v2 = a1->field_8;
    v3 = a1->field_10;
    v4 = a1;
    v5 = a0;
    v8 = v2 + 1;
    if (v3 > v8)
    {
        v7 = a1->field_0;
    }
    else
    {
        v6 = a1->field_0;
        if (a1 < v8)
            a1 = v8;
        else
            a1 = __ROL__(v3, 1) & -2;
        v4->field_10 = a1;
        v7 = realloc(v6, a1);
        v4->field_0 = v7;
        if (!v7)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v2 = v4->field_8;
        v8 = v2 + 1;
    }
    v4->field_8 = v8;
    *((char *)(v7 + v2)) = 91;
    if (!v5->field_18)
    {
        v9 = v4->field_8;
    }
    else
    {
        v9 = v4->field_8;
        v10 = 0;
        v11 = 1;
        if (true)
        {
            v14 = v5->field_10->field_0;
            v14->field_0->field_20(v14, v4);
        }
        sub_416694(v4, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v12 = v4->field_8;
        while (true)
        {
            v14 = v5->field_10[v10].field_0;
            v14->field_0->field_20(v14, v4);
            if (v14->field_9 != 1)
                v14->field_0->field_28(v14, v4);
            if (v12 != v9)
            {
                v11 = 0;
                v9 = v4->field_8;
            }
            else
            {
                v4->field_8 = v9;
            }
            v10 += 1;
            if (v10 == v5->field_18)
                break;
            v12 = v9;
        }
    }
    v15 = v4->field_10;
    v16 = v9 + 1;
    if (v15 > v16)
    {
        v17 = v4->field_0;
        v4->field_8 = v16;
        *((char *)(v17 + v9)) = 93;
        return v17;
    }
    v18 = v4->field_0;
    if (a1 < v16)
        v20 = v16;
    else
        a1 = __ROL__(v15, 1) & -2;
    v4->field_10 = v20;
    v17 = realloc(v18, v20);
    v4->field_0 = v17;
    if (v17)
    {
        v9 = v4->field_8;
        v4->field_8 = v9 + 1;
        *((char *)(v17 + v9)) = 93;
        return v17;
    }
    ::0x40f080::std::terminate();
    return ::0x40f060::operator delete();
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_1 *field_10;
    struct struct_4 *field_18;
} struct_5;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_4 {
    struct struct_3 *field_0;
    char padding_8[1];
    char field_9;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_3;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_420d34(struct_5 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21
    struct_4 *v5;  // x20

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, "::", (char *)(4365965 + __strlen_chk("::", 3)));
    v5 = a0->field_18;
    if (v5->field_9 == 1)
        return v5->field_0->field_20(v5, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_420df8()
{
    return ::0x40f060::operator delete();
}

// Exception thrown decompiling function sub_420dfc: Node type <class 'angr.analyses.decompiler.structuring.structurer_nodes.IncompleteSwitchCaseNode'> is not supported yet.
long long sub_420eb8(unsigned long a0)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    unsigned long v4;  // x19
    unsigned long v5;  // x30

    v0 = v4;
    v1 = &v3;
    v2 = v5;
    goto sub_420ee0 + (*((char *)(4364232 + *((int *)(x0<8> + 12)))) << 2);
}

int sub_420ee0()
{
    char v0;  // [bp+0x0]
    char v1;  // [bp+0x10]
    char v2;  // [bp+0x18]
    unsigned long long v3;  // x29
    unsigned long long v4;  // x19

    __strlen_chk("allocator", 10);
    v3 = *((long long *)&v1);
    x30<8> = *((long long *)&v2);
    v4 = *((long long *)&v0);
    return;
}

long long sub_420ef0()
{
}

long long sub_420f00()
{
}

long long sub_420f10()
{
}

long long sub_420f20()
{
}

long long sub_420f30()
{
}

long long sub_420f58()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_0 {
    char padding_0[9];
    char field_9;
} struct_0;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

long long sub_420f5c(struct_1 *a0, unsigned int a1[8])
{
    void* v0;  // x8, Other Possible Types: unsigned long
    unsigned long long v2;  // x9
    struct_0 *v4;  // x0
    unsigned long long v5;  // x8

    if ((char)[D] arm64g_calculate_condition(0x1<64>, Conv(32->64, Load(addr=(x1<8> + 0x1c<64>), size=4, endness=Iend_LE)), 0x1<64>, 0x0<64>))
    {
        v2 = a0->field_18;
        v0 = 0;
        a1[6] = 0;
        a1[7] = v2;
        if (0 >= v2)
            return 0;
    }
    else
    {
        v0 = a1[6];
        if (a0->field_18 <= v0)
            return 0;
    }
    v4 = a0->field_10[v0].field_0;
    v5 = v4->field_9;
    if ((unsigned int)v5 == 2)
    {
        goto *((long long *)*((long long *)x0<8>));
    }
    else if (!(unsigned int)v5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_0 {
    char padding_0[10];
    char field_a;
} struct_0;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

long long sub_420fc0(struct_1 *a0, unsigned int a1[8])
{
    void* v0;  // x8, Other Possible Types: unsigned long
    unsigned long long v2;  // x9
    struct_0 *v4;  // x0
    unsigned long long v5;  // x8

    if ((char)[D] arm64g_calculate_condition(0x1<64>, Conv(32->64, Load(addr=(x1<8> + 0x1c<64>), size=4, endness=Iend_LE)), 0x1<64>, 0x0<64>))
    {
        v2 = a0->field_18;
        v0 = 0;
        a1[6] = 0;
        a1[7] = v2;
        if (0 >= v2)
            return 0;
    }
    else
    {
        v0 = a1[6];
        if (a0->field_18 <= v0)
            return 0;
    }
    v4 = a0->field_10[v0].field_0;
    v5 = v4->field_a;
    if ((unsigned int)v5 == 2)
    {
        goto *((long long *)(*((long long *)x0<8>) + 8));
    }
    else if (!(unsigned int)v5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_0 {
    char padding_0[11];
    char field_b;
} struct_0;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

long long sub_421024(struct_1 *a0, unsigned int a1[8])
{
    void* v0;  // x8, Other Possible Types: unsigned long
    unsigned long long v2;  // x9
    struct_0 *v4;  // x0
    unsigned long long v5;  // x8

    if ((char)[D] arm64g_calculate_condition(0x1<64>, Conv(32->64, Load(addr=(x1<8> + 0x1c<64>), size=4, endness=Iend_LE)), 0x1<64>, 0x0<64>))
    {
        v2 = a0->field_18;
        v0 = 0;
        a1[6] = 0;
        a1[7] = v2;
        if (0 >= v2)
            return 0;
    }
    else
    {
        v0 = a1[6];
        if (a0->field_18 <= v0)
            return 0;
    }
    v4 = a0->field_10[v0].field_0;
    v5 = v4->field_b;
    if ((unsigned int)v5 == 2)
    {
        goto *((long long *)(*((long long *)x0<8>) + 16));
    }
    else if (!(unsigned int)v5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

long long sub_421088(struct_0 *a0, unsigned int a1[8])
{
    unsigned long long v2;  // x9
    void* v3;  // x8

    if ((char)[D] arm64g_calculate_condition(0x1<64>, Conv(32->64, Load(addr=(x1<8> + 0x1c<64>), size=4, endness=Iend_LE)), 0x1<64>, 0x0<64>))
    {
        v2 = a0->field_18;
        v3 = 0;
        a1[6] = 0;
        a1[7] = v2;
        if (0 >= v2)
            return a0;
    }
    else if (a0->field_18 <= a1[6])
    {
        return a0;
    }
    goto *((long long *)(*((long long *)*((long long *)(*((long long *)(x0<8> + 16)) + (x8<8> << 3)))) + 24));
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

long long sub_4210d0(struct_0 *a0, unsigned int a1[8])
{
    unsigned long long v2;  // x9
    void* v3;  // x8

    if ((char)[D] arm64g_calculate_condition(0x1<64>, Conv(32->64, Load(addr=(x1<8> + 0x1c<64>), size=4, endness=Iend_LE)), 0x1<64>, 0x0<64>))
    {
        v2 = a0->field_18;
        v3 = 0;
        a1[6] = 0;
        a1[7] = v2;
        if (0 >= v2)
            return a0;
    }
    else if (a0->field_18 <= a1[6])
    {
        return a0;
    }
    goto *((long long *)(*((long long *)*((long long *)(*((long long *)(x0<8> + 16)) + (x8<8> << 3)))) + 32));
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

long long sub_421118(struct_0 *a0, unsigned int a1[8])
{
    unsigned long long v2;  // x9
    void* v3;  // x8

    if ((char)[D] arm64g_calculate_condition(0x1<64>, Conv(32->64, Load(addr=(x1<8> + 0x1c<64>), size=4, endness=Iend_LE)), 0x1<64>, 0x0<64>))
    {
        v2 = a0->field_18;
        v3 = 0;
        a1[6] = 0;
        a1[7] = v2;
        if (0 >= v2)
            return a0;
    }
    else if (a0->field_18 <= a1[6])
    {
        return a0;
    }
    goto *((long long *)(*((long long *)*((long long *)(*((long long *)(x0<8> + 16)) + (x8<8> << 3)))) + 40));
}

long long sub_421160()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    unsigned long long field_18;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_421164(struct_3 *a0, unsigned long long a1[2])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v3;  // x23, Other Possible Types: unsigned long long
    struct_1 *v5;  // x22
    unsigned long long v6;  // x25, Other Possible Types: unsigned long
    void* v7;  // x24, Other Possible Types: unsigned long
    unsigned long v8;  // x26

    v0 = &v1;
    sub_416694(a1, "<", (char *)(4365181 + __strlen_chk("<", 2)));
    if (!a0->field_18)
    {
        v3 = a1[1];
    }
    else
    {
        v3 = a1[1];
        v7 = 0;
        v6 = 1;
        if (true)
        {
            v5 = a0->field_10->field_0;
            v5->field_0->field_20(v5, a1);
        }
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v8 = a1[1];
        while (true)
        {
            v5 = a0->field_10[v7].field_0;
            v5->field_0->field_20(v5, a1);
            if (v5->field_9 != 1)
                v5->field_0->field_28(v5, a1);
            if (v8 != v3)
            {
                v6 = 0;
                v3 = a1[1];
            }
            else
            {
                a1[1] = v3;
            }
            v7 += 1;
            if (v7 == a0->field_18)
                break;
            v8 = v3;
        }
    }
    if (v3 && *((char *)(v3 + a1[0] - 1)) == 62)
        sub_416694(a1, " ", (char *)(4361214 + __strlen_chk(" ", 2)));
    return (unsigned long long)sub_416694(a1, ">", (char *)(4365638 + __strlen_chk(">", 2)));
}

long long sub_4212d8()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_1 *field_10;
    struct struct_4 *field_18;
} struct_5;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_4 {
    struct struct_3 *field_0;
    char padding_8[1];
    char field_9;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_3;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4212dc(struct_5 *a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21
    struct_4 *v3;  // x20

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    v3 = a0->field_18;
    if (v3->field_9 == 1)
        return v3->field_0->field_20(v3, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_42137c(unsigned long a0)
{
    goto *((long long *)(*((long long *)*((long long *)(x0<8> + 16))) + 48));
}

long long sub_42138c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_421390(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v4;  // x20

    v0 = &v1;
    sub_416694(a1, "std::", (char *)(4365962 + __strlen_chk("std::", 6)));
    v4 = a0->field_10;
    if (v4->field_9 == 1)
        return v4->field_0->field_20(v4, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_421420(unsigned long a0)
{
    goto *((long long *)(*((long long *)*((long long *)(x0<8> + 16))) + 48));
}

long long sub_421430()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    unsigned long long field_18;
} struct_3;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
} struct_5;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_421434(struct_3 *a0, struct_5 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x25, Other Possible Types: unsigned long long
    struct_3 *v3;  // x19
    struct_1 *v5;  // x22
    unsigned long v6;  // x24, Other Possible Types: unsigned long long
    void* v7;  // x23, Other Possible Types: unsigned long
    unsigned long v8;  // x26

    v0 = &v1;
    if (!a0->field_18)
        return a0;
    v2 = a1->field_8;
    v3 = a0;
    v7 = 0;
    v6 = 1;
    if (true)
    {
        v5 = a0->field_10->field_0;
        v5->field_0->field_20(v5, a1);
    }
    while (true)
    {
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v8 = a1->field_8;
        do
        {
            v5 = v3->field_10[v7].field_0;
            a0 = v5->field_0->field_20(v5, a1);
            if (v5->field_9 != 1)
                a0 = v5->field_0->field_28(v5, a1);
            if (v8 != v2)
            {
                v6 = 0;
                v2 = a1->field_8;
            }
            else
            {
                a1->field_8 = v2;
            }
            v7 += 1;
            if (v7 == v3->field_18)
                return a0;
            v8 = v2;
        } while (((char)v6 & 1));
    }
}

long long sub_421524()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    unsigned long long field_10;
} struct_0;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
    unsigned long long field_18;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_4;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

long long sub_421528(struct_5 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x19
    struct_5 *v3;  // x20
    unsigned long v6;  // x26
    struct_3 *v7;  // x22
    unsigned long v8;  // x25, Other Possible Types: unsigned long long
    char *v9;  // x23, Other Possible Types: unsigned long
    void* v10;  // x24, Other Possible Types: unsigned long
    unsigned long long v11;  // x9
    unsigned long v12;  // x8, Other Possible Types: unsigned long long
    unsigned long v13;  // x0
    char *v14;  // x0
    unsigned long v16;  // x1

    v0 = &v1;
    v2 = a1;
    v3 = a0;
    sub_416694(a1, " [enable_if:", (char *)(4365968 + __strlen_chk(" [enable_if:", 13)));
    if (!v3->field_18)
    {
        v9 = a1->field_8;
    }
    else
    {
        v9 = a1->field_8;
        v10 = 0;
        v8 = 1;
        if (true)
        {
            v7 = v3->field_10->field_0;
            v7->field_0->field_20(v7, a1);
        }
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v6 = a1->field_8;
        while (true)
        {
            v7 = v3->field_10[v10].field_0;
            v7->field_0->field_20(v7, a1);
            if (v7->field_9 != 1)
                v7->field_0->field_28(v7, a1);
            if (v6 != v9)
            {
                v8 = 0;
                v9 = a1->field_8;
            }
            else
            {
                a1->field_8 = v9;
            }
            v10 += 1;
            if (v10 == v3->field_18)
                break;
            v6 = v9;
        }
    }
    v11 = a1->field_10;
    v12 = v9 + 1;
    if (v11 > v12)
    {
        v13 = a1->field_0;
    }
    else
    {
        v14 = a1->field_0;
        if (a1 < v12)
            v16 = v12;
        else
            a1 = __ROL__(v11, 1) & -2;
        v2->field_10 = v16;
        v13 = realloc(v14, v16);
        v2->field_0 = v13;
        if (!v13)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v9 = v2->field_8;
        v12 = v9 + 1;
    }
    v2->field_8 = v12;
    *((char *)(v13 + v9)) = 93;
    return v13;
}

long long sub_421694()
{
    return 1;
}

long long sub_42169c()
{
    return 1;
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
    struct struct_2 *field_18;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_4 {
    struct struct_0 *field_0;
    char padding_8[24];
    struct struct_0 *field_20;
} struct_4;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4216a4(struct_5 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_5 *v2;  // x20
    struct_3 *v3;  // x0
    struct_3 *v4;  // x0
    unsigned int v5;  // w8
    struct_2 *v7;  // x20

    v0 = &v1;
    v2 = a0;
    v3 = a0->field_10;
    if (v3)
    {
        v3->field_0->field_20(v3, a1);
        v5 = v2->field_10->field_9;
        if (v5 && (v5 != 2 || !((char)v4->field_0->field_0() & 1)))
            sub_416694(a1, " ", (char *)(4361214 + __strlen_chk(" ", 2)));
    }
    v7 = v2->field_18;
    if (v7->field_9 == 1)
        return v7->field_0->field_20(v7, a1);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
    char padding_18[8];
    struct struct_9 *field_20;
    unsigned long long field_28;
    struct struct_6 *field_30;
    unsigned int field_38;
    char field_3c;
} struct_7;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_6 {
    struct struct_5 *field_0;
    char padding_8[1];
    char field_9;
} struct_6;

typedef struct struct_8 {
    struct struct_2 *field_0;
} struct_8;

typedef struct struct_9 {
    struct struct_3 *field_0;
} struct_9;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_1 *field_20;
    struct struct_1 *field_28;
} struct_4;

typedef struct struct_5 {
    char padding_0[32];
    struct struct_1 *field_20;
} struct_5;

typedef struct struct_2 {
    char padding_0[40];
    struct struct_1 *field_28;
} struct_2;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

long long sub_421774(struct_7 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x19
    struct_7 *v3;  // x20
    unsigned long v6;  // x26
    struct_3 *v7;  // x22
    unsigned long v8;  // x24, Other Possible Types: unsigned long long
    unsigned long v9;  // x25, Other Possible Types: unsigned long long
    void* v10;  // x23, Other Possible Types: unsigned long
    struct struct_2 **v12;  // x0, Other Possible Types: unsigned long long, unsigned long
    unsigned long v13;  // x8, Other Possible Types: unsigned long long
    unsigned int v17;  // w8
    unsigned long v18;  // x21
    unsigned long v19;  // x1, Other Possible Types: unsigned long long
    unsigned long v20;  // x2
    struct_6 *v21;  // x20

    v0 = &v1;
    v2 = a1;
    v3 = a0;
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    if (v3->field_28)
    {
        v9 = a1->field_8;
        v10 = 0;
        v8 = 1;
        if (true)
        {
            v7 = v3->field_20->field_0;
            v7->field_0->field_20(v7, a1);
        }
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v6 = a1->field_8;
        while (true)
        {
            v7 = v3->field_20[v10].field_0;
            v7->field_0->field_20(v7, a1);
            if (v7->field_9 != 1)
                v7->field_0->field_28(v7, a1);
            if (v6 == v9)
            {
                a1->field_8 = v9;
            }
            else
            {
                v8 = 0;
                v9 = a1->field_8;
            }
            v10 += 1;
            if (v10 == v3->field_28)
                break;
            v6 = v9;
        }
    }
    sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    v12 = v3->field_10;
    if (v12)
        v12 = *(v12)->field_28(v12, a1);
    v13 = v3->field_38;
    if (!((char)v13 & 1))
    {
        if ((v13 >> 1 & 1))
            goto LABEL_421930;
        goto LABEL_4218b8;
    }
    else
    {
        v12 = sub_416694(a1, " const", (char *)(4365981 + __strlen_chk(" const", 7)));
        v13 = v3->field_38;
        if (!((char)(v13 >> 1) & 1))
        {
LABEL_4218b8:
            if (!(v13 >> 2 & 1))
                goto LABEL_4218e0;
            goto LABEL_4218bc;
        }
        else
        {
LABEL_421930:
            v12 = sub_416694(a1, " volatile", (char *)(4365988 + __strlen_chk(" volatile", 10)));
            if (!((v3->field_38 >> 2 & 1)))
                goto LABEL_4218e0;
LABEL_4218bc:
            v12 = sub_416694(a1, " restrict", (char *)(4365998 + __strlen_chk(" restrict", 10)));
        }
    }
LABEL_4218e0:
    v17 = v3->field_3c;
    if (v17 == 2)
    {
        v18 = " &&";
        v19 = 4;
    }
    else
    {
        if (v17 != 1)
            goto LABEL_421984;
        v18 = " &";
        v19 = 3;
    }
    v20 = v18 + __strlen_chk(v18, v19);
    v12 = sub_416694(v2, v18, v20);
LABEL_421984:
    v21 = v3->field_30;
    if (!v21)
        return v12;
    v12 = v21->field_0->field_20(v21, v2);
    if (v21->field_9 == 1)
        return v12;
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

long long sub_4219ec()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4219f0(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, " (", (char *)(4364667 + __strlen_chk(" (", 3)));
    sub_416694(a1, *((long long *)&a0->field_18), *((long long *)&a0->field_20));
    return (unsigned long long)sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
}

long long sub_421a9c()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_5 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[4800];
    struct struct_4 *field_12e0;
} struct_5;

typedef struct struct_2 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[4804];
    struct struct_4 *field_12e0;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_7 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_7;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned int field_28;
    char field_2c;
    char padding_2d[3];
    unsigned long long field_30;
} struct_1;

typedef struct struct_6 {
    char padding_0[8];
    unsigned long long field_8;
} struct_6;

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_4;

extern char g_432180;
extern char g_433840;
extern char g_4338b0;
extern char g_433920;

int sub_421aa0(struct_5 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x60]
    int tmp_3;  // tmp #3
    struct_1 *v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]
    char *v4;  // x8, Other Possible Types: unsigned long
    unsigned long long v5;  // x9
    struct_2 *v6;  // x19
    unsigned long v7;  // x24, Other Possible Types: unsigned int
    char *v8;  // x8
    unsigned long long v9;  // x0
    char *v10;  // x8
    char *v11;  // x9, Other Possible Types: unsigned long
    unsigned long v12;  // x10, Other Possible Types: unsigned long long
    char *v13;  // x11, Other Possible Types: unsigned long
    unsigned long long v14[2];  // x20, Other Possible Types: unsigned long
    void* v15;  // x8, Other Possible Types: unsigned long
    unsigned long long v16;  // x0
    unsigned long long v17[2];  // x0
    char *v18;  // x8
    char *v19;  // x9, Other Possible Types: unsigned long
    unsigned long v20;  // x10, Other Possible Types: unsigned long long
    char *v21;  // x11, Other Possible Types: unsigned long
    struct_0 *v22;  // x25
    unsigned long long v23;  // x0
    char *v24;  // x9
    unsigned long long v25;  // x8
    char *v26;  // x8
    char *v27;  // x10, Other Possible Types: unsigned long
    unsigned long v28;  // x11, Other Possible Types: unsigned long long
    char *v29;  // x12, Other Possible Types: unsigned long
    unsigned long long v30[2];  // x21, Other Possible Types: unsigned long
    struct_1 *v31;  // x20
    void* v32;  // x8, Other Possible Types: unsigned long
    unsigned long long v33[2];  // x0
    char *v34;  // x9, Other Possible Types: unsigned long
    unsigned long long v35;  // x21
    struct_0 *v36;  // x25
    unsigned long long v37;  // x20
    void* v38;  // x8, Other Possible Types: unsigned long
    unsigned long long v39[2];  // x0
    unsigned long long v40[2];  // x22, Other Possible Types: unsigned long
    struct_0 *v41;  // x25
    struct_7 *v42;  // x25, Other Possible Types: unsigned long
    unsigned long long v43;  // x0
    unsigned long v44;  // x8
    unsigned long long v45;  // x9
    unsigned long v46;  // x10
    char *v47;  // x10
    struct_1 *v48;  // w0, Other Possible Types: unsigned long
    struct_6 *v49;  // x21
    struct_1 *v50;  // x20
    unsigned long long v52;  // x26
    char *v53;  // x8
    unsigned long long v54;  // x0
    char *v55;  // x8
    unsigned long v56;  // x9, Other Possible Types: unsigned long long
    char *v57;  // x10, Other Possible Types: unsigned long
    char *v58;  // x11, Other Possible Types: unsigned long
    unsigned long long v59;  // x0
    char *v60;  // x8
    unsigned long v61;  // x9, Other Possible Types: unsigned long long
    char *v62;  // x10, Other Possible Types: unsigned long
    char *v63;  // x11, Other Possible Types: unsigned long
    char *v64;  // x8, Other Possible Types: unsigned long
    unsigned long long v66;  // x22
    unsigned long long v67[2];  // x26, Other Possible Types: unsigned long
    unsigned long long v68;  // x21
    void* v69;  // x8, Other Possible Types: unsigned long
    unsigned long long v70[2];  // x0
    struct_0 *v71;  // x0

    v2 = &v3;
    v4 = a0->field_0;
    v5 = a0->field_8;
    v6 = a0;
    if (v4 == v5 || *(v4) != 114)
    {
        v7 = 0;
        if (v4 == v5)
            __strlen_chk("Do", 3);
    }
    else
    {
        v4 += 1;
        v7 = 4;
        a0->field_0 = v4;
        if (v4 == v5)
            __strlen_chk("Do", 3);
    }
    if (*((char *)v4) == 86)
    {
        v4 += 1;
        v7 = (unsigned int)v7 | 2;
        a0->field_0 = v4;
    }
    if (v4 != v5 && *((char *)v4) == 75)
    {
        v8 = v4 + 1;
        v7 = (unsigned int)v7 | 1;
        a0->field_0 = v8;
    }
    (unsigned int)v9 = __strlen_chk("Do", 3);
    v10 = v6->field_0;
    if (v6->field_8 - v10 < v9)
    {
        (unsigned int)v16 = __strlen_chk("DO", 3);
        v18 = v6->field_0;
        if (v6->field_8 - v18 >= v16)
        {
            if (!v16)
            {
                v6->field_0 = &v18[v16];
                (unsigned int)v48 = sub_4181a0(v6, 3, a2, a3, a4, a5, a6, a7, *((long long *)&v0));
                if (!v48)
                    return v48;
                v26 = v6->field_0;
                if (v26 == v6->field_8)
                    return 0;
                if (*(v26) != 69)
                    return 0;
                v30 = v6->field_12e0;
                v6->field_0 = &v26[1];
                v31 = v48;
                v32 = v30[1];
                if (v32 + 32 >= 4080)
                {
                    v33 = malloc(0x1000);
                    if (!v33)
                    {
LABEL_4220b0:
                        ::0x40f080::std::terminate();
                    }
                    v32 = 0;
                    v33[0] = v30;
                    v33[1] = 0;
                    v30 = v33;
                    v6->field_12e0 = &v33[0];
                }
                v36 = v30 + v32;
                *((unsigned long *)(v30 + 8)) = v32 + 32;
                v36->field_10 = &g_433840;
                v42 = &v36->field_10;
                *((int *)(v42 + 8)) = 16843024;
                *((struct_1 **)(v42 + 16)) = v31;
LABEL_421da0:
                __strlen_chk("Dx", 3);
            }
            else
            {
                v19 = "DO";
                v20 = v16;
                v21 = v18;
                while (*((char *)v19) == *((char *)v21))
                {
                    v19 += 1;
                    tmp_3 = v20;
                    v20 -= 1;
                    v21 += 1;
                    if (tmp_3 == 1)
                    {
                        v6->field_0 = &v18[v16];
                        sub_4181a0(v6, 3, a2, a3, a4, a5, a6, a7, *((long long *)&v0));
                    }
                }
            }
        }
        (unsigned int)v23 = __strlen_chk("Dw", 3);
        v24 = v6->field_0;
        v25 = v6->field_8;
        if (v25 - v24 >= v23)
        {
            if (v23)
            {
                v27 = "Dw";
                v28 = v23;
                v29 = v24;
                while (*((char *)v27) == *((char *)v29))
                {
                    v27 += 1;
                    tmp_3 = v28;
                    v28 -= 1;
                    v29 += 1;
                    if (tmp_3 == 1)
                        goto LABEL_421d40;
                }
            }
            else
            {
LABEL_421d40:
                v34 = &v24[v23];
                v6->field_0 = v34;
                if (v34 == v25)
                    sub_413e1c(v6, a1, a2, a3, a4, a5, a6, a7);
                while (*((char *)v34) != 69)
                {
                    do
                    {
                        (unsigned int)v48 = sub_413e1c(v6, a1, a2, a3, a4, a5, a6, a7);
                        v1 = v48;
                        if (!v48)
                            return v48;
                    } while ((sub_4162b0(v6 + 16, &v1), v34 = v6->field_0, v34 == v6->field_8));
                }
                v35 = __ROL__(*((long long *)&v6->field_18) - v6->field_10 >> 63 & 0xe000000000000000 | __ROL__(*((long long *)&v6->field_18) - v6->field_10, 61) & 2305843009213693951, 3) & -8;
                v6->field_0 = v34 + 1;
                v40 = v6->field_12e0;
                v37 = sub_41d90c(v6, v6->field_10 + v35, *((long long *)&v6->field_18));
                *((unsigned long long *)&v6->field_18) = v6->field_10 + v35;
                v38 = v40[1];
                if (v38 + 32 < 4080)
                {
                    v41 = v40 + v38;
                    *((unsigned long *)(v40 + 8)) = v38 + 32;
                    v41->field_10 = &g_4338b0;
                    v42 = &v41->field_10;
                    *((int *)(v42 + 8)) = 16843025;
                    *((unsigned long long *)(v42 + 16)) = v37;
                    *((unsigned long long *)(v42 + 24)) = a1;
LABEL_421da0:
                    __strlen_chk("Dx", 3);
                }
                v39 = malloc(0x1000);
                if (v39)
                {
                    v39[0] = v40;
                    v39[1] = 0;
                    v6->field_12e0 = &v39[0];
                    v41 = v39;
                    v39[1] = 0 + 32;
                    v41->field_10 = &g_4338b0;
                    v42 = &v41->field_10;
                    *((int *)(v42 + 8)) = 16843025;
                    *((unsigned long long *)(v42 + 16)) = v37;
                    *((unsigned long long *)(v42 + 24)) = a1;
                    goto LABEL_421da0;
                }
                goto LABEL_4220b0;
            }
        }
LABEL_421da0:
        (unsigned int)v43 = __strlen_chk("Dx", 3);
        v44 = v6->field_0;
        v45 = v6->field_8;
        if (v45 - v44 >= v43)
        {
            if (!v43)
            {
                v44 += v43;
                v6->field_0 = v44;
            }
            else
            {
                v46 = 0;
                while (*((char *)(4366235 + v46)) == *((char *)(v44 + v46)))
                {
                    v46 += 1;
                    if (v43 == v46)
                    {
                        v6->field_0 = v44 + v43;
                        break;
                    }
                }
            }
        }
        if (!(v44 != v45) || !(*((char *)v44) == 70))
            return 0;
        v47 = v44 + 1;
        v6->field_0 = v47;
        if (v47 != v45 && *(v47) == 89)
            v6->field_0 = v44 + 2;
        (unsigned int)v48 = sub_413e1c(v6, 3, a2, a3, a4, a5, a6, a7);
        if (!v48)
            return v48;
        v49 = &v6->field_10;
        v50 = v48;
        v52 = v49->field_8 - v6->field_10 >> 63 & 0xe000000000000000 | __ROL__(v49->field_8 - v6->field_10, 61) & 2305843009213693951;
        while (true)
        {
            v53 = v6->field_0;
            if (v53 != v6->field_8)
            {
                if (*(v53) == 69)
                {
                    v64 = v53 + 1;
                    break;
                }
                else if (*(v53) == 118)
                {
                    v6->field_0 = &v53[1];
                    continue;
                }
            }
            (unsigned int)v54 = __strlen_chk("RE", 3);
            v55 = v6->field_0;
            if (v6->field_8 - v55 >= v54)
            {
                if (v54)
                {
                    v56 = v54;
                    v57 = v55;
                    v58 = "RE";
                    while (*((char *)v58) == *((char *)v57))
                    {
                        v58 += 1;
                        tmp_3 = v56;
                        v56 -= 1;
                        v57 += 1;
                        if (tmp_3 == 1)
                            goto LABEL_42200c;
                    }
                }
                else
                {
                    v64 = &v55[v54];
LABEL_42200c:
                    v6->field_0 = v64;
                }
            }
            (unsigned int)v59 = __strlen_chk("OE", 3);
            v60 = v6->field_0;
            if (v6->field_8 - v60 >= v59)
            {
                if (!v59)
                {
                    v64 = &v60[v59];
LABEL_42200c:
                    v6->field_0 = v64;
                }
                v61 = v59;
                v62 = v60;
                v63 = "OE";
                while (*((char *)v63) == *((char *)v62))
                {
                    v63 += 1;
                    tmp_3 = v61;
                    v61 -= 1;
                    v62 += 1;
                    if (tmp_3 == 1)
                        goto LABEL_42200c;
                }
            }
            (unsigned int)v48 = sub_413e1c(v6, 3, a2, a3, a4, a5, a6, a7);
            v1 = v48;
            if (!v48)
                return v48;
            sub_4162b0(v49, &v1);
        }
LABEL_42200c:
        v66 = __ROL__(v52, 3) & -8;
        v6->field_0 = v64;
        v67 = v6->field_12e0;
        v68 = sub_41d90c(v6, v6->field_10 + v66, *((long long *)&v6->field_18));
        *((unsigned long long *)&v6->field_18) = v6->field_10 + v66;
        v69 = v67[1];
        if (v69 + 64 < 4080)
        {
            v71 = v67 + v69;
            *((unsigned long *)(v67 + 8)) = v69 + 64;
            v71->field_10 = &g_433920;
            v48 = &v71->field_10;
            *((int *)(v48 + 8)) = 65551;
            *((struct_1 **)(v48 + 16)) = v50;
            *((unsigned long long *)(v48 + 24)) = v68;
            *((unsigned long long *)(v48 + 32)) = a1;
            *((unsigned int *)(v48 + 40)) = v7;
            *((char *)(v48 + 44)) = 0;
            *((long long *)(v48 + 48)) = 0;
            return v48;
        }
        v70 = malloc(0x1000);
        if (v70)
        {
            v70[0] = v67;
            v70[1] = 0;
            v67 = v70;
            v6->field_12e0 = &v70[0];
            v71 = v70;
            *((long long *)(v67 + 8)) = 0 + 64;
            v71->field_10 = &g_433920;
            v48 = &v71->field_10;
            *((int *)(v48 + 8)) = 65551;
            *((struct_1 **)(v48 + 16)) = v50;
            *((unsigned long long *)(v48 + 24)) = v68;
            *((unsigned long long *)(v48 + 32)) = a1;
            *((unsigned int *)(v48 + 40)) = v7;
            *((char *)(v48 + 44)) = 0;
            *((long long *)(v48 + 48)) = 0;
            return v48;
        }
LABEL_4220b0:
        ::0x40f080::std::terminate();
    }
    else
    {
        if (v9)
        {
            v11 = "Do";
            v12 = v9;
            v13 = v10;
            while (*((char *)v11) == *((char *)v13))
            {
                v11 += 1;
                tmp_3 = v12;
                v12 -= 1;
                v13 += 1;
                if (tmp_3 == 1)
                    goto LABEL_421b88;
            }
        }
LABEL_421b88:
        v14 = v6->field_12e0;
        v6->field_0 = &v10[v9];
        v15 = v14[1];
        if (v15 + 32 >= 4080)
        {
            v17 = malloc(0x1000);
            if (!v17)
            {
LABEL_4220b0:
                ::0x40f080::std::terminate();
            }
            v15 = 0;
            v17[0] = v14;
            v17[1] = 0;
            v14 = v17;
            v6->field_12e0 = &v17[0];
        }
        *((unsigned long *)(v14 + 8)) = v15 + 32;
        v22 = v14 + v15;
        v22->field_10 = &g_432180;
        v42 = &v22->field_10;
        v42->field_8 = 16843015;
        v42->field_10 = "noexcept";
        v42->field_18 = (char *)(4366220 + __strlen_chk("noexcept", 9));
LABEL_421da0:
        __strlen_chk("Dx", 3);
    }
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[4824];
    struct struct_2 *field_12e0;
} struct_0;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_4;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
} struct_5;

typedef struct struct_3 {
    char padding_0[8];
    char field_8;
    unsigned short field_9;
    char field_b;
    unsigned int field_c;
    unsigned long long field_10;
} struct_3;

typedef struct struct_1 {
    char field_0;
    char field_1;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_2;

extern char g_433990;
extern char g_433a00;
extern char g_433a70;

int sub_4220b4(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // [bp-0x10]
    int tmp_3;  // tmp #3
    char v1;  // [bp+0x0]
    char v2[2];  // x9, Other Possible Types: unsigned long
    unsigned long long v3;  // x8
    struct_0 *v4;  // x19
    char v5[2];  // x10
    unsigned long long v7;  // x9
    unsigned long v8;  // x9, Other Possible Types: unsigned long long
    unsigned long v9;  // x21, Other Possible Types: unsigned int
    unsigned long long v10;  // x10
    char *v11;  // x10, Other Possible Types: unsigned long
    struct_4 *v12;  // x0
    unsigned long v13;  // x0, Other Possible Types: unsigned long long
    unsigned long long v14;  // x20
    unsigned long long v15[2];  // x22, Other Possible Types: unsigned long
    void* v16;  // x8, Other Possible Types: unsigned long
    char *v17;  // x8, Other Possible Types: unsigned long
    char *v18;  // x9, Other Possible Types: unsigned long
    unsigned long long v19[2];  // x0
    unsigned long long v20;  // x0
    unsigned long long v21;  // x0
    unsigned short v22;  // x9
    char v23;  // x12
    struct_5 *v24;  // x8
    struct_3 *v25;  // x8
    unsigned long v26;  // x8, Other Possible Types: unsigned long long
    void* v27;  // x8, Other Possible Types: unsigned long
    unsigned long long v28[2];  // x0
    void* v29;  // x9, Other Possible Types: unsigned long
    char *v30;  // x10
    unsigned long long v32;  // x9, Other Possible Types: unsigned long
    char *v33;  // x23, Other Possible Types: unsigned long
    char *v34;  // x8, Other Possible Types: unsigned long
    unsigned long v35;  // x22
    unsigned long long v36;  // x0
    unsigned long long v37[2];  // x24, Other Possible Types: unsigned long
    unsigned long v38;  // x21, Other Possible Types: unsigned long long
    void* v39;  // x8, Other Possible Types: unsigned long
    struct_4 *v40;  // w20, Other Possible Types: unsigned long
    unsigned long long v41[2];  // x0
    struct_5 *v43;  // x20, Other Possible Types: unsigned long

    v0 = &v1;
    v2 = a0->field_0;
    v3 = *((long long *)&a0->padding_8[0]);
    v4 = a0;
    if (v2 != v3)
    {
        if (v2[0] == 85)
        {
            v5 = &v2[1];
            a0->field_0 = &v5[0];
            if (v3 != v5 && 9 >= v5[0] - 48)
            {
                v11 = v2 + 1;
                a0->field_0 = &v11;
                v7 = v2[1];
                v8 = v7 - 48;
                if (v3 != v11)
                {
                    while (10 > *((char *)v11) - 48)
                    {
                        v33 = v11 + 1;
                        a0->field_0 = &v33;
                        v10 = *((char *)v11);
                        v8 = v10 + 10 * v8 - 48;
                        v11 = v33;
                        if (v3 == v33)
                            goto LABEL_422244;
                    }
                }
                v33 = v11;
LABEL_422244:
                if (v8 <= v3 - v33)
                {
                    v35 = v33 + v8;
                    a0->field_0 = v35;
                    if (v33 == v35)
                    {
LABEL_422448:
                        return 0;
                    }
                    (unsigned int)v13 = __strlen_chk("objcproto", 10);
                    v14 = v35 - v33;
                    if (v14 >= v13)
                    {
                        if (v13)
                        {
                            v17 = "objcproto";
                            v18 = v33;
                            while (*((char *)v17) == *((char *)v18))
                            {
                                v17 += 1;
                                tmp_3 = v13;
                                v13 -= 1;
                                v18 += 1;
                                if (tmp_3 == 1)
                                    __strlen_chk("objcproto", 10);
                            }
                        }
                        else
                        {
                            (unsigned int)v20 = __strlen_chk("objcproto", 10);
                            if (v20 < v14)
                                v26 = v20;
                            else
                                v26 = v14;
                            v34 = v33 + v26;
                            v4->field_0 = &v34;
                            *((unsigned long *)&v4->padding_8[0]) = v35;
                            if (v35 == v34 || 9 < *(v34) - 48)
                            {
                                v35 = 0;
                                v33 = 0;
                            }
                            else
                            {
                                if (v34 == v35)
                                {
                                    v32 = -48;
                                }
                                else
                                {
                                    v29 = 0;
                                    do
                                    {
                                        v30 = v34;
                                        v34 += 1;
                                        v4->field_0 = v34;
                                        v32 = v29 + *(v30) - 48;
                                        if (v35 == v34 || 10 <= *((char *)v34) - 48)
                                        {
                                            v33 = v34;
                                            goto LABEL_4223b8;
                                        }
                                    } while ((v29 = __ROL__(v32 + (v32 << 2), 1) & -2, v35 != v34));
                                    v32 = v29 - 48;
                                }
                                v33 = v35;
LABEL_4223b8:
                                if (v32 <= v35 - v34)
                                {
                                    v35 = v33 + v32;
                                    v4->field_0 = v35;
                                }
                            }
                            *((int128_t *)&v4->field_0) = *((int128_t *)&v4->field_0);
                            if (v33 != v35 && ((unsigned int)v36 = sub_4220b4(v4, 10, a2, a3, a4, a5, a6, a7), v36))
                            {
                                v37 = v4->field_12e0;
                                v38 = v36;
                                v39 = *((long long *)(v37 + 8));
                                if (v39 + 48 < 4080)
                                {
                                    v43 = v37 + v39;
                                    *((unsigned long *)(v37 + 8)) = v39 + 48;
                                    *((char **)(v43 + 16)) = &g_433990;
                                    v40 = v43 + 16;
                                    *((unsigned int *)(v40 + 8)) = 266 | 0x1010000;
                                    *((unsigned long long *)(v40 + 16)) = v36;
                                    *((unsigned long *)(v40 + 24)) = v33;
                                    *((unsigned long *)(v40 + 32)) = v35;
                                    return v40;
                                }
                                v41 = malloc(0x1000);
                                if (v41)
                                {
                                    v41[0] = v37;
                                    v41[1] = 0;
                                    v4->field_12e0 = &v41[0];
                                    v43 = v41;
                                    v41[1] = 0 + 48;
                                    *((char **)(v43 + 16)) = &g_433990;
                                    v40 = v43 + 16;
                                    *((unsigned int *)(v40 + 8)) = 266 | 0x1010000;
                                    *((unsigned long *)(v40 + 16)) = v38;
                                    *((unsigned long *)(v40 + 24)) = v33;
                                    *((unsigned long *)(v40 + 32)) = v35;
                                    return v40;
                                }
LABEL_422470:
                                ::0x40f080::std::terminate();
                            }
                            goto LABEL_422448;
                        }
                    }
                    (unsigned int)v21 = sub_4220b4(v4, 10, a2, a3, a4, a5, a6, a7);
                    if (v21)
                    {
                        v37 = v4->field_12e0;
                        v38 = v21;
                        v27 = v37[1];
                        if (v27 + 48 < 4080)
                        {
                            v43 = v37 + v27;
                            *((unsigned long *)(v37 + 8)) = v27 + 48;
                            *((char **)(v43 + 16)) = &g_433a00;
                            v40 = v43 + 16;
                            *((unsigned int *)(v40 + 8)) = 258 | 0x1010000;
                            *((unsigned long long *)(v40 + 16)) = v21;
                            *((unsigned long *)(v40 + 24)) = v33;
                            *((unsigned long *)(v40 + 32)) = v35;
                            return v40;
                        }
                        v28 = malloc(0x1000);
                        if (v28)
                        {
                            v28[0] = v37;
                            v28[1] = 0;
                            v4->field_12e0 = &v28[0];
                            v43 = v28;
                            v28[1] = 0 + 48;
                            *((char **)(v43 + 16)) = &g_433a00;
                            v40 = v43 + 16;
                            *((unsigned int *)(v40 + 8)) = 258 | 0x1010000;
                            *((unsigned long *)(v40 + 16)) = v38;
                            *((unsigned long *)(v40 + 24)) = v33;
                            *((unsigned long *)(v40 + 32)) = v35;
                            return v40;
                        }
                        goto LABEL_422470;
                    }
LABEL_422448:
                    return 0;
                }
            }
            if (false)
                __strlen_chk("objcproto", 10);
LABEL_422448:
            return 0;
        }
        if (v2[0] == 114)
        {
            v2 = &v2[1];
            v9 = 4;
            a0->field_0 = v2;
            if (!(v2 != v3))
                goto LABEL_4221bc;
            goto LABEL_422184;
        }
    }
    v9 = 0;
    if (v2 == v3)
    {
LABEL_4221bc:
        sub_413e1c(a0, a1, a2, a3, a4, a5, a6, a7);
    }
LABEL_422184:
    if (*((char *)v2) == 86)
    {
        v2 += 1;
        v9 = (unsigned int)v9 | 2;
        a0->field_0 = v2;
    }
    if (v2 != v3 && *((char *)v2) == 75)
    {
        v9 = (unsigned int)v9 | 1;
        a0->field_0 = v2 + 1;
    }
LABEL_4221bc:
    (unsigned int)v12 = sub_413e1c(a0, a1, a2, a3, a4, a5, a6, a7);
    v40 = v12;
    if (!v12)
    {
        return (unsigned int)v12;
    }
    else if (!(unsigned int)v9)
    {
        return (unsigned int)v12;
    }
    else
    {
        v15 = v4->field_12e0;
        v16 = v15[1];
        if (v16 + 32 >= 4080)
        {
            v19 = malloc(0x1000);
            if (!v19)
            {
LABEL_422470:
                ::0x40f080::std::terminate();
            }
            v16 = 0;
            v19[0] = v15;
            v19[1] = 0;
            v15 = v19;
            v4->field_12e0 = &v19[0];
        }
        *((unsigned long *)(v15 + 8)) = v16 + 32;
        v22 = *((short *)((char *)&v40->field_8 + 1));
        v23 = *((char *)&v40->field_8 + 3);
        v24 = v15 + v16;
        v24->field_10 = &g_433a70;
        v25 = &v24->field_10;
        *((struct_4 **)&v25->field_c) = v40;
        v25->field_8 = 3;
        *((unsigned int *)&v25->field_b) = v9;
        *((unsigned short *)&(&v25->field_8)[1]) = v22;
        *((char *)&v25->field_9 + 1) = v23;
        return (unsigned int)v25;
    }
}

typedef struct struct_4 {
    struct struct_5 *field_0;
    unsigned long long field_8;
    char padding_10[4816];
    struct struct_6 *field_12e0;
} struct_4;

typedef struct struct_8 {
    char padding_0[16];
    unsigned long long field_10;
} struct_8;

typedef struct struct_7 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_7;

typedef struct struct_0 {
    char field_0;
} struct_0;

typedef struct struct_9 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_9;

typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_6;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_1 *field_20;
    struct struct_1 *field_28;
} struct_3;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

extern char g_42267c;
extern char g_429fd7;
extern char g_429fe1;
extern char g_433ca0;

int sub_422474(struct_4 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    int tmp_3;  // tmp #3
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x60]
    struct_4 *v2;  // [bp-0x58]
    struct_0 *v3;  // [bp-0x50]
    unsigned long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x28]
    unsigned long v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]
    unsigned long v11;  // x21
    unsigned long v12;  // x20
    unsigned long v13;  // x19
    unsigned long v14;  // x30
    struct_4 *v15;  // x19
    unsigned long long v16;  // x0
    char *v17;  // x8
    char *v18;  // x9, Other Possible Types: unsigned long
    unsigned long v19;  // x10, Other Possible Types: unsigned long long
    char *v20;  // x11, Other Possible Types: unsigned long
    unsigned long v21;  // x20
    unsigned long long v23;  // x0
    char *v24;  // x8
    char *v25;  // x9, Other Possible Types: unsigned long
    unsigned long v26;  // x10, Other Possible Types: unsigned long long
    char *v27;  // x11, Other Possible Types: unsigned long
    unsigned long long v28;  // x0
    char *v29;  // x8
    char *v30;  // x9, Other Possible Types: unsigned long
    unsigned long v31;  // x10, Other Possible Types: unsigned long long
    char *v32;  // x11, Other Possible Types: unsigned long
    unsigned long long v33;  // x8
    unsigned long v34;  // x22
    unsigned long long v35;  // x0
    unsigned long v36;  // x21
    unsigned long long v37[2];  // x23, Other Possible Types: unsigned long
    void* v38;  // x8, Other Possible Types: unsigned long
    unsigned long long v39[2];  // x0
    unsigned long long v40;  // x9
    struct_8 *v41;  // x8
    struct_7 *v42;  // x8
    struct_2 *v45;  // x20

    v5 = v11;
    v6 = v12;
    v7 = v13;
    v8 = &v10;
    v9 = v14;
    v15 = a0;
    (unsigned int)v16 = __strlen_chk("Ts", 3);
    v17 = v15->field_0;
    if (v15->field_8 - v17 >= v16)
    {
        if (!v16)
        {
            v15->field_0 = &v17[v16];
LABEL_4225cc:
        }
        v18 = "Ts";
        v19 = v16;
        v20 = v17;
        while (*((char *)v18) == *((char *)v20))
        {
            v18 += 1;
            tmp_3 = v19;
            v19 -= 1;
            v20 += 1;
            if (tmp_3 == 1)
            {
                v15->field_0 = &v17[v16];
                goto LABEL_4225cc;
            }
        }
    }
    (unsigned int)v23 = __strlen_chk("Tu", 3);
    v24 = v15->field_0;
    if (v15->field_8 - v24 >= v23)
    {
        if (!v23)
        {
            v15->field_0 = &v24[v23];
LABEL_4225cc:
        }
        v25 = "Tu";
        v26 = v23;
        v27 = v24;
        while (*((char *)v25) == *((char *)v27))
        {
            v25 += 1;
            tmp_3 = v26;
            v26 -= 1;
            v27 += 1;
            if (tmp_3 == 1)
            {
                v15->field_0 = &v24[v23];
                goto LABEL_4225cc;
            }
        }
    }
    (unsigned int)v28 = __strlen_chk("Te", 3);
    v29 = v15->field_0;
    if (v15->field_8 - v29 >= v28)
    {
        if (!v28)
        {
            v33 = &v29[v28];
            v21 = "enum";
            v15->field_0 = v33;
LABEL_4225cc:
            v34 = v21 + __strlen_chk(v21, 5);
            sub_41549c(v15, NULL, a2, a3, a4, a5, a6, a7);
        }
        v30 = "Te";
        v31 = v28;
        v32 = v29;
        while (*((char *)v30) == *((char *)v32))
        {
            v30 += 1;
            tmp_3 = v31;
            v31 -= 1;
            v32 += 1;
            if (tmp_3 == 1)
            {
                v33 = &v29[v28];
                v15->field_0 = v33;
                goto LABEL_4225cc;
            }
        }
    }
    (unsigned int)v35 = sub_41549c(v15, NULL, a2, a3, a4, a5, a6, a7);
    v36 = v35;
    if (!v35)
    {
        return v35;
    }
    else if (true)
    {
        return v35;
    }
    else
    {
        v37 = v15->field_12e0;
        v38 = v37[1];
        if (v38 + 48 >= 4080)
        {
            v39 = malloc(0x1000);
            if (v39)
            {
                v38 = 0;
                v39[0] = v37;
                v39[1] = 0;
                v37 = v39;
                v15->field_12e0 = &v39[0];
            }
            else
            {
                v0 = v36;
                v1 = 0;
                v2 = v15;
                v3 = &v8;
                v4 = &g_42267c;
                sub_416694(NULL, "noexcept(", (char *)(4366244 + __strlen_chk("noexcept(", 10)));
                v45 = *((long long *)&(::0x40f080::std::terminate())[16]);
                v45->field_0->field_20(v45, 0);
                if (v45->field_9 == 1)
                    return (unsigned int)sub_416694(NULL, ")", (char *)(4365010 + __strlen_chk(")", 2)));
                v45->field_0->field_28(v45, 0);
            }
        }
        v40 = v38 + 48;
        v41 = v37 + v38;
        *((unsigned long long *)(v37 + 8)) = v40;
        v41->field_10 = &g_433ca0;
        v42 = &v41->field_10;
        v42->field_20 = v36;
        v42->field_8 = 16843014;
        v42->field_10 = 0;
        v42->field_18 = 0;
        return (unsigned int)v42;
    }
}

long long sub_422720()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    unsigned long long field_10;
} struct_0;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
    unsigned long long field_18;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_4;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

long long sub_422724(struct_5 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x19
    struct_5 *v3;  // x20
    unsigned long v6;  // x26
    struct_3 *v7;  // x22
    unsigned long v8;  // x25, Other Possible Types: unsigned long long
    char *v9;  // x23, Other Possible Types: unsigned long
    void* v10;  // x24, Other Possible Types: unsigned long
    unsigned long long v11;  // x9
    unsigned long v12;  // x8, Other Possible Types: unsigned long long
    unsigned long v13;  // x0
    char *v14;  // x0
    unsigned long v16;  // x1

    v0 = &v1;
    v2 = a1;
    v3 = a0;
    sub_416694(a1, "throw(", (char *)(4366254 + __strlen_chk("throw(", 7)));
    if (!v3->field_18)
    {
        v9 = a1->field_8;
    }
    else
    {
        v9 = a1->field_8;
        v10 = 0;
        v8 = 1;
        if (true)
        {
            v7 = v3->field_10->field_0;
            v7->field_0->field_20(v7, a1);
        }
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v6 = a1->field_8;
        while (true)
        {
            v7 = v3->field_10[v10].field_0;
            v7->field_0->field_20(v7, a1);
            if (v7->field_9 != 1)
                v7->field_0->field_28(v7, a1);
            if (v6 != v9)
            {
                v8 = 0;
                v9 = a1->field_8;
            }
            else
            {
                a1->field_8 = v9;
            }
            v10 += 1;
            if (v10 == v3->field_18)
                break;
            v6 = v9;
        }
    }
    v11 = a1->field_10;
    v12 = v9 + 1;
    if (v11 > v12)
    {
        v13 = a1->field_0;
    }
    else
    {
        v14 = a1->field_0;
        if (a1 < v12)
            v16 = v12;
        else
            a1 = __ROL__(v11, 1) & -2;
        v2->field_10 = v16;
        v13 = realloc(v14, v16);
        v2->field_0 = v13;
        if (!v13)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v9 = v2->field_8;
        v12 = v9 + 1;
    }
    v2->field_8 = v12;
    *((char *)(v13 + v9)) = 41;
    return v13;
}

long long sub_422890()
{
    return 1;
}

long long sub_422898()
{
    return 1;
}

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4228a0(struct_2 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct struct_1 **v2;  // x0

    v0 = &v1;
    *(v2)->field_20(a0->field_10);
    return (unsigned long long)sub_416694(a1, " ", (char *)(4361214 + __strlen_chk(" ", 2)));
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    unsigned long long field_10;
} struct_0;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
    struct struct_10 *field_18;
    unsigned long long field_20;
    unsigned int field_28;
    char field_2c;
    char padding_2d[3];
    struct struct_4 *field_30;
} struct_8;

typedef struct struct_6 {
    struct struct_7 *field_0;
    char padding_8[1];
    char field_9;
} struct_6;

typedef struct struct_4 {
    struct struct_3 *field_0;
    char padding_8[1];
    char field_9;
} struct_4;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_9 {
    struct struct_5 *field_0;
} struct_9;

typedef struct struct_10 {
    struct struct_6 *field_0;
} struct_10;

typedef struct struct_7 {
    char padding_0[32];
    struct struct_2 *field_20;
    struct struct_2 *field_28;
} struct_7;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_2 *field_20;
} struct_3;

typedef struct struct_5 {
    char padding_0[40];
    struct struct_2 *field_28;
} struct_5;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

long long sub_4228ec(struct_8 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x19
    struct_8 *v3;  // x20
    unsigned long v6;  // x26
    struct_6 *v7;  // x22
    unsigned long long v8;  // x24, Other Possible Types: unsigned long
    char *v9;  // x25, Other Possible Types: unsigned long
    void* v10;  // x23, Other Possible Types: unsigned long
    unsigned long long v12;  // x0, Other Possible Types: unsigned long
    unsigned long v13;  // x8, Other Possible Types: unsigned long long
    unsigned int v17;  // w8
    unsigned long v18;  // x21
    unsigned long v19;  // x2
    char *v20;  // x8, Other Possible Types: unsigned long
    unsigned long long v21;  // x10
    unsigned long v22;  // x9, Other Possible Types: unsigned long long
    unsigned long v23;  // x0
    char *v24;  // x0
    unsigned long v25;  // x1
    struct_4 *v26;  // x20

    v0 = &v1;
    v2 = a1;
    v3 = a0;
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
    if (v3->field_20)
    {
        v9 = a1->field_8;
        v10 = 0;
        v8 = 1;
        if (true)
        {
            v7 = v3->field_18->field_0;
            v7->field_0->field_20(v7, a1);
        }
        sub_416694(a1, ", ", (char *)(4364897 + __strlen_chk(", ", 3)));
        v6 = a1->field_8;
        while (true)
        {
            v7 = v3->field_18[v10].field_0;
            v7->field_0->field_20(v7, a1);
            if (v7->field_9 != 1)
                v7->field_0->field_28(v7, a1);
            if (v6 != v9)
            {
                v8 = 0;
                v9 = a1->field_8;
            }
            else
            {
                a1->field_8 = v9;
            }
            v10 += 1;
            if (v10 == v3->field_20)
                break;
            v6 = v9;
        }
    }
    sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    v12 = v3->field_10->field_0->field_28(v3->field_10, a1);
    v13 = v3->field_28;
    if (!((char)v13 & 1))
    {
        if ((v13 >> 1 & 1))
            goto LABEL_422aa4;
        goto LABEL_422a2c;
    }
    else
    {
        v12 = sub_416694(a1, " const", (char *)(4365981 + __strlen_chk(" const", 7)));
        v13 = v3->field_28;
        if (!((char)(v13 >> 1) & 1))
        {
LABEL_422a2c:
            if (!(v13 >> 2 & 1))
                goto LABEL_422a54;
            goto LABEL_422a30;
        }
        else
        {
LABEL_422aa4:
            v12 = sub_416694(a1, " volatile", (char *)(4365988 + __strlen_chk(" volatile", 10)));
            if (!((v3->field_28 >> 2 & 1)))
                goto LABEL_422a54;
LABEL_422a30:
            v12 = sub_416694(a1, " restrict", (char *)(4365998 + __strlen_chk(" restrict", 10)));
        }
    }
LABEL_422a54:
    v17 = v3->field_2c;
    if (v17 == 2)
    {
        v18 = " &&";
        a1 = 4;
    }
    else
    {
        if (v17 != 1)
            goto LABEL_422af8;
        v18 = " &";
        a1 = 3;
    }
    v19 = v18 + __strlen_chk(v18, a1);
    v12 = sub_416694(v2, v18, v19);
LABEL_422af8:
    if (!v3->field_30)
        return v12;
    v20 = v2->field_8;
    v21 = v2->field_10;
    v22 = v20 + 1;
    if (v21 > v22)
    {
        v23 = v2->field_0;
    }
    else
    {
        v24 = v2->field_0;
        if (a1 < v22)
            v25 = v22;
        else
            a1 = __ROL__(v21, 1) & -2;
        v2->field_10 = v25;
        v23 = realloc(v24, v25);
        v2->field_0 = v23;
        if (!v23)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v20 = v2->field_8;
        v22 = v20 + 1;
    }
    v2->field_8 = v22;
    *((char *)(v23 + v20)) = 32;
    v26 = v3->field_30;
    v12 = v26->field_0->field_20(v26, v2);
    if (v26->field_9 == 1)
        return v12;
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_422bb8(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, "<", (char *)(4365181 + __strlen_chk("<", 2)));
    sub_416694(a1, *((long long *)&a0->field_18), *((long long *)&a0->field_20));
    return (unsigned long long)sub_416694(a1, ">", (char *)(4365638 + __strlen_chk(">", 2)));
}

long long sub_422c64()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_422c68(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, " ", (char *)(4361214 + __strlen_chk(" ", 2)));
    return (unsigned long long)sub_416694(a1, *((long long *)&a0->field_18), *((long long *)&a0->field_20));
}

long long sub_422cf0()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[9];
    char field_9;
} struct_0;

long long sub_422cf4(struct_1 *a0)
{
    unsigned long long v1;  // x8

    v1 = a0->field_10->field_9;
    if ((unsigned int)v1 == 2)
    {
        goto *((long long *)*((long long *)x0<8>));
    }
    else if (!(unsigned int)v1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[10];
    char field_a;
} struct_0;

long long sub_422d1c(struct_1 *a0)
{
    unsigned long long v1;  // x8

    v1 = a0->field_10->field_a;
    if ((unsigned int)v1 == 2)
    {
        goto *((long long *)(*((long long *)x0<8>) + 8));
    }
    else if (!(unsigned int)v1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[11];
    char field_b;
} struct_0;

long long sub_422d44(struct_1 *a0)
{
    unsigned long long v1;  // x8

    v1 = a0->field_10->field_b;
    if ((unsigned int)v1 == 2)
    {
        goto *((long long *)(*((long long *)x0<8>) + 16));
    }
    else if (!(unsigned int)v1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_2 {
    char padding_0[12];
    unsigned int field_c;
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_422d6c(struct_2 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v2;  // x20
    struct struct_1 **v3;  // x0
    unsigned long v4;  // x8, Other Possible Types: unsigned long long
    unsigned long v7;  // x0, Other Possible Types: unsigned long long
    unsigned long v8;  // x2

    v0 = &v1;
    v2 = a0;
    v7 = *(v3)->field_20(a0->field_10);
    v4 = v2->field_c;
    if (((char)v4 & 1))
    {
        v7 = sub_416694(a1, " const", (char *)(4365981 + __strlen_chk(" const", 7)));
        v4 = v2->field_c;
        if (((char)(v4 >> 1) & 1))
        {
            v7 = sub_416694(a1, " volatile", (char *)(4365988 + __strlen_chk(" volatile", 10)));
            if (((char)(v2->field_c >> 2) & 1))
            {
                v8 = (char *)(4365998 + __strlen_chk(" restrict", 10));
                return (unsigned long long)sub_416694(a1, " restrict", v8);
            }
            return v7;
        }
    }
    if (((char)(v4 >> 2) & 1))
    {
        v8 = (char *)(4365998 + __strlen_chk(" restrict", 10));
        return (unsigned long long)sub_416694(a1, " restrict", v8);
    }
    return v7;
}

long long sub_422e3c(unsigned long a0)
{
    goto *((long long *)(*((long long *)*((long long *)(x0<8> + 16))) + 40));
}

long long sub_422e4c()
{
    return ::0x40f060::operator delete();
}

long long sub_422e50(unsigned int a0[7], unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    sub_416694(a1, "pixel vector[", (char *)(4366274 + __strlen_chk("pixel vector[", 14)));
    sub_416694(a1, *((long long *)&a0[4]), *((long long *)&a0[6]));
    return (unsigned long long)sub_416694(a1, "]", (char *)(4365048 + __strlen_chk("]", 2)));
}

long long sub_422ec8()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    struct struct_1 *field_18;
    unsigned long long field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_422ecc(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21
    struct_1 *v4;  // x21
    unsigned long v5;  // x2

    v0 = &v1;
    v2 = a0->field_10;
    v2->field_0->field_20(v2);
    if (v2->field_9 != 1)
        v2->field_0->field_28(v2, a1);
    sub_416694(a1, " vector[", (char *)(4366279 + __strlen_chk(" vector[", 9)));
    v4 = a0->field_18;
    if (v4)
    {
        v5 = a0->field_20;
        if (v5)
        {
            sub_416694(a1, v4, v5);
        }
        else
        {
            v4->field_0->field_20(v4, a1);
            if (v4->field_9 != 1)
                v4->field_0->field_28(v4, a1);
        }
    }
    return (unsigned long long)sub_416694(a1, "]", (char *)(4365048 + __strlen_chk("]", 2)));
}

long long sub_422fc0()
{
    return ::0x40f060::operator delete();
}

long long sub_422fc4()
{
    return 1;
}

long long sub_422fcc()
{
    return 1;
}

long long sub_422fd4(unsigned long a0)
{
    goto *((long long *)(*((long long *)*((long long *)(x0<8> + 16))) + 32));
}

typedef struct struct_3 {
    char padding_0[24];
    struct struct_1 *field_18;
    unsigned long long field_20;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[1];
    char field_9;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_422fe4(struct_3 *a0, unsigned long long a1[2])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x8
    unsigned int v3;  // w8
    struct_1 *v6;  // x21
    unsigned long v7;  // x2

    v0 = &v1;
    v2 = a1[1];
    if (!v2 || (v3 = (unsigned int)(char)*((char *)(v2 + a1[0] - 1)), v3 != 93))
        sub_416694(a1, " ", (char *)(4361214 + __strlen_chk(" ", 2)));
    sub_416694(a1, "[", (char *)(4365463 + __strlen_chk("[", 2)));
    v6 = a0->field_18;
    v7 = a0->field_20;
    if (v7)
    {
        if (v6)
            sub_416694(a1, v6, v7);
    }
    else
    {
        if (v6 && !v7)
        {
            v6->field_0->field_20(v6, a1);
            if (v6->field_9 != 1)
                v6->field_0->field_28(v6, a1);
        }
    }
    sub_416694(a1, "]", (char *)(4365048 + __strlen_chk("]", 2)));
    goto *((long long *)(*((long long *)*((long long *)&a0->padding_0[16])) + 40));
}

long long sub_4230fc()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    char padding_0[24];
    struct struct_0 *field_18;
} struct_1;

typedef struct struct_0 {
    char padding_0[9];
    char field_9;
} struct_0;

long long sub_423100(struct_1 *a0)
{
    unsigned long long v1;  // x8

    v1 = a0->field_18->field_9;
    if ((unsigned int)v1 == 2)
    {
        goto *((long long *)*((long long *)x0<8>));
    }
    else if (!(unsigned int)v1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
    struct struct_1 *field_18;
} struct_5;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[2];
    char field_a;
    char field_b;
} struct_1;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[1];
    char field_9;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_0 *field_8;
    struct struct_0 *field_10;
    char padding_18[8];
    struct struct_0 *field_20;
} struct_2;

typedef struct struct_4 {
    char padding_0[32];
    struct struct_0 *field_20;
    struct struct_0 *field_28;
} struct_4;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_423128(struct_5 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_5 *v2;  // x20
    struct_1 *v3;  // x0
    struct_1 *v4;  // x0, Other Possible Types: unsigned long
    unsigned int v5;  // w8
    unsigned int v6;  // w8
    unsigned long v7;  // x21
    unsigned long v8;  // x2
    struct_3 *v9;  // x20

    v0 = &v1;
    v2 = a0;
    v3->field_0->field_20(a0->field_18);
    v4 = v2->field_18;
    v5 = v4->field_a;
    if (!v5)
    {
LABEL_4231a0:
        v7 = "(";
    }
    else
    {
        if (v5 == 2)
        {
            if ((v4->field_0->field_8() & 1))
                goto LABEL_4231a0;
            v4 = v2->field_18;
        }
        v6 = *((char *)(v4 + 11));
        if (!(v6) || !(v6 != 2) && !(!((char)*((long long *)(*((long long *)v4) + 16))() & 1)))
            goto LABEL_4231a0;
        v7 = " ";
    }
    v8 = v7 + __strlen_chk(v7, 2);
    sub_416694(a1, v7, v8);
    v9 = v2->field_10;
    v9->field_0->field_20(v9, a1);
    if (v9->field_9 != 1)
        v9->field_0->field_28(v9, a1);
    return (unsigned long long)sub_416694(a1, "::*", (char *)(4366288 + __strlen_chk("::*", 4)));
}

typedef struct struct_3 {
    char padding_0[24];
    struct struct_1 *field_18;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[2];
    char field_a;
    char field_b;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_0 *field_8;
    struct struct_0 *field_10;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_423238(struct_3 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v3;  // x0, Other Possible Types: unsigned long
    unsigned int v4;  // w8
    unsigned int v5;  // w8

    v0 = &v1;
    v3 = a0->field_18;
    v4 = v3->field_a;
    if (v4)
    {
        if (v4 == 2 && !((char)v3->field_0->field_8() & 1))
            v3 = a0->field_18;
        v5 = *((char *)(v3 + 11));
        if (!(!v5) && (!(v5 == 2) || !(((char)*((long long *)(*((long long *)v3) + 16))() & 1))))
            goto LABEL_4232c4;
    }
    sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
LABEL_4232c4:
    goto *((long long *)(*((long long *)*((long long *)(x20<8> + 24))) + 40));
}

long long sub_4232e4()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_6 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned int field_18;
    char padding_1c[4];
    struct struct_2 *field_20;
} struct_6;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    struct struct_2 *field_20;
} struct_3;

typedef struct struct_4 {
    struct struct_5 *field_0;
    struct struct_5 *field_8;
    unsigned long long field_10;
} struct_4;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[1];
    char field_9;
} struct_2;

typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4232e8(struct_6 *a0, struct_4 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_4 *v3;  // x19
    unsigned long long v4;  // x10
    char *v5;  // x0
    unsigned long v6;  // x1
    unsigned long v7;  // x0
    char *v8;  // x8, Other Possible Types: unsigned long
    unsigned long v9;  // x9, Other Possible Types: unsigned long long
    struct_2 *v10;  // x20

    v0 = &v1;
    v3 = a1;
    sub_416694(a1, *((long long *)&a0->field_10), *((long long *)&a0->field_18));
    v8 = a1->field_8;
    v4 = a1->field_10;
    v9 = v8 + 1;
    if (v4 > v9)
    {
        v7 = a1->field_0;
    }
    else
    {
        v5 = a1->field_0;
        if (a1 < v9)
            v6 = v9;
        else
            a1 = __ROL__(v4, 1) & -2;
        v3->field_10 = v6;
        v7 = realloc(v5, v6);
        v3->field_0 = v7;
        if (!v7)
        {
            ::0x40f080::std::terminate();
            return ::0x40f060::operator delete();
        }
        v8 = v3->field_8;
        v9 = v8 + 1;
    }
    v3->field_8 = v9;
    *((char *)(v7 + v8)) = 32;
    v10 = a0->field_20;
    if (v10->field_9 == 1)
        return v10->field_0->field_20(v10, v3);
    goto *((long long *)(*((long long *)x20<8>) + 40));
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[9];
    char field_9;
} struct_0;

long long sub_4233ac(struct_1 *a0)
{
    unsigned long long v1;  // x8

    v1 = a0->field_10->field_9;
    if ((unsigned int)v1 == 2)
    {
        goto *((long long *)*((long long *)x0<8>));
    }
    else if (!(unsigned int)v1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char field_8;
    char padding_9[1];
    char field_a;
    char field_b;
    char padding_c[4];
    struct struct_1 *field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_3;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
    char padding_9[7];
    struct struct_2 *field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_6 {
    struct struct_4 *field_0;
    char field_8;
    char padding_9[1];
    char field_a;
    char field_b;
    char padding_c[4];
    struct struct_1 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_6;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_0 *field_8;
    struct struct_0 *field_10;
    char padding_18[8];
    struct struct_0 *field_20;
} struct_4;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4233d4(struct_5 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x8
    struct_5 *v3;  // x20
    struct_1 *v4;  // x8
    char *v5;  // x21, Other Possible Types: unsigned long
    unsigned long long v6;  // x22
    char *v7;  // x8, Other Possible Types: unsigned long
    struct_3 *v10;  // x0
    unsigned int v11;  // w8
    unsigned long v12;  // x20
    struct_3 *v14;  // x0, Other Possible Types: unsigned long
    unsigned int v15;  // w8
    unsigned int v16;  // w8
    unsigned long v18;  // x2

    v0 = &v1;
    v2 = a0->field_10;
    v3 = a0;
    if (v2->field_8 == 10)
    {
        v4 = v2->field_10;
        if (v4->field_8 == 7)
        {
            v5 = v4->field_10;
            v6 = v4->field_18;
            if (v6 - v5 == __strlen_chk("objc_object", 12))
            {
                if (v5 == v6)
                {
                    sub_416694(a1, "id<", (char *)(4366319 + __strlen_chk("id<", 4)));
                    sub_416694(a1, a0->field_10->field_18, a0->field_10->field_20);
                    v12 = ">";
                    v18 = v12 + __strlen_chk(v12, 2);
                    return (unsigned long long)sub_416694(a1, ">", v18);
                }
                for (v7 = "objc_object"; *((char *)v5) == *((char *)v7); v7 += 1)
                {
                    v5 += 1;
                }
            }
        }
    }
    a0->field_10->field_0->field_20(a0->field_10, a1);
    v11 = a0->field_10->field_a;
    if (!v11 || v11 == 2 && ((char)v10->field_0->field_8() & 1))
        sub_416694(a1, " ", (char *)(4361214 + __strlen_chk(" ", 2)));
    v14 = v3->field_10;
    v15 = v14->field_a;
    if (v15)
    {
        if (v15 == 2 && !((char)v14->field_0->field_8() & 1))
            v14 = v3->field_10;
        v16 = *((char *)(v14 + 11));
        if (!(!v16) && (!(v16 == 2) || !(((char)*((long long *)(*((long long *)v14) + 16))() & 1))))
            goto LABEL_423570;
    }
    sub_416694(a1, "(", (char *)(4364668 + __strlen_chk("(", 2)));
LABEL_423570:
    v12 = "*";
    v18 = v12 + __strlen_chk(v12, 2);
    return (unsigned long long)sub_416694(a1, "*", v18);
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_5;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char field_8;
    char padding_9[1];
    char field_a;
    char field_b;
    char padding_c[4];
    struct struct_1 *field_10;
} struct_3;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
    char padding_9[7];
    struct struct_2 *field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_0 *field_8;
    struct struct_0 *field_10;
} struct_4;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4235a0(struct_5 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_3 *v2;  // x8
    struct_5 *v3;  // x20
    struct_1 *v4;  // x8
    unsigned long long v5;  // x22
    unsigned long long v6;  // x0
    char *v7;  // x8, Other Possible Types: unsigned long
    char *v8;  // x21, Other Possible Types: unsigned long
    struct_3 *v9;  // x0, Other Possible Types: unsigned long
    unsigned int v10;  // w8
    unsigned int v11;  // w8

    v0 = &v1;
    v2 = a0->field_10;
    v3 = a0;
    if (v2->field_8 == 10)
    {
        v4 = v2->field_10;
        if (v4->field_8 == 7)
        {
            v8 = v4->field_10;
            v5 = v4->field_18;
            (unsigned int)v6 = __strlen_chk("objc_object", 12);
            if (v5 - v8 == v6)
            {
                if (v8 == v5)
                    return v6;
                v7 = "objc_object";
                while (*((char *)v8) == *((char *)v7))
                {
                    v8 += 1;
                    v7 += 1;
                    if (v5 == v8)
                        return v6;
                }
            }
        }
    }
    v9 = v3->field_10;
    v10 = v9->field_a;
    if (v10)
    {
        if (v10 == 2 && !((char)v9->field_0->field_8() & 1))
            v9 = v3->field_10;
        v11 = *((char *)(v9 + 11));
        if (!(!v11) && (!(v11 == 2) || !(((char)*((long long *)(*((long long *)v9) + 16))() & 1))))
            goto LABEL_4236ac;
    }
    sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
LABEL_4236ac:
    goto *((long long *)(*((long long *)*((long long *)(x20<8> + 16))) + 40));
}

long long sub_4236cc()
{
    return ::0x40f060::operator delete();
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[9];
    char field_9;
} struct_0;

long long sub_4236d0(struct_1 *a0)
{
    unsigned long long v1;  // x8

    v1 = a0->field_10->field_9;
    if ((unsigned int)v1 == 2)
    {
        goto *((long long *)*((long long *)x0<8>));
    }
    else if (!(unsigned int)v1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
    unsigned int field_18;
    char field_1c;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[2];
    char field_a;
    char field_b;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    char field_8;
    char padding_9[7];
    struct struct_1 *field_10;
    unsigned int field_18;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_0 *field_8;
    struct struct_0 *field_10;
    struct struct_0 *field_18;
    struct struct_0 *field_20;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4236f8(struct_3 *a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x21, Other Possible Types: unsigned long
    unsigned int v3;  // w23
    unsigned long long v5[3];  // x20
    struct_1 *v6;  // x0
    unsigned long long v7;  // x1
    struct_4 *v8;  // x0, Other Possible Types: unsigned long
    unsigned int v9;  // w8
    unsigned int v11;  // w8
    unsigned int v12;  // w8
    unsigned long v14;  // x21
    unsigned long v15;  // x2

    v0 = &v1;
    if (a0->field_1c)
        return a0;
    v2 = a0->field_10;
    a0->field_1c = 1;
    v3 = a0->field_18;
    v5 = a1;
    (unsigned int)v8 = v2->field_0->field_18(v2);
    while (*((char *)(v8 + 8)) == 12)
    {
        v2 = *((long long *)(v8 + 16));
        if (v3 < v3)
            v3 = *((int *)(v8 + 24));
        v6 = v2;
        v7 = v5;
        v8 = *((long long *)(*((long long *)v2) + 24))();
    }
    *((long long *)(*((long long *)v2) + 32))(v2, v5);
    v9 = *((char *)(v2 + 10));
    if (v9)
    {
        if (v9 != 2)
            goto LABEL_4237f8;
        if (!(*((long long *)(*((long long *)v2) + 8))(v2, v5) & 1))
            goto LABEL_4237d0;
    }
    sub_416694(v5, " ", (char *)(4361214 + __strlen_chk(" ", 2)));
LABEL_4237d0:
    v11 = *((char *)(v2 + 10));
    if (!(v11) || !(!(v11 == 2)) && !(!(((char)*((long long *)(*((long long *)v2) + 8))(v2, v5) & 1))))
        goto LABEL_423820;
LABEL_4237f8:
    v12 = *((char *)(v2 + 11));
    if (!(!v12) && (!(v12 == 2) || !(((char)*((long long *)(*((long long *)v2) + 16))(v2, v5) & 1))))
        goto LABEL_423844;
LABEL_423820:
    sub_416694(v5, "(", (char *)(4364668 + __strlen_chk("(", 2)));
LABEL_423844:
    if (!v3)
        v14 = "&";
    else
        v14 = "&&";
    v15 = v14 + __strlen_chk(v14, 3);
    a0 = sub_416694(v5, v14, v15);
    a0->field_1c = 0;
    return a0;
}

typedef struct struct_0 {
    char padding_0[28];
    char field_1c;
} struct_0;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_2 *field_10;
    char padding_18[4];
    char field_1c;
} struct_5;

typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[2];
    char field_a;
    char field_b;
} struct_2;

typedef struct struct_4 {
    char padding_0[8];
    char field_8;
    char padding_9[7];
    struct struct_2 *field_10;
} struct_4;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_1 *field_8;
    struct struct_1 *field_10;
    struct struct_1 *field_18;
    char padding_20[8];
    struct struct_1 *field_28;
} struct_3;

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

extern char g_4238a0;

long long sub_423890(unsigned long long a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    struct_0 *v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]
    struct_0 *v7;  // x19
    struct_5 *v8;  // x0, Other Possible Types: unsigned long
    unsigned long v9;  // x22
    unsigned long v10;  // x21
    unsigned long v11;  // x20
    struct_5 *v13;  // x19
    struct_4 *v14;  // x0, Other Possible Types: unsigned long
    struct_2 *v15;  // x21, Other Possible Types: unsigned long
    unsigned int v16;  // w8
    unsigned int v17;  // w8

    v7->field_1c = 0;
    v7->field_1c = 0;
    v8 = sub_4270a0((unsigned long long)sub_4270a0(a0));
    v0 = v9;
    v1 = v10;
    v2 = v11;
    v3 = v7;
    v4 = &v6;
    v5 = &g_4238a0;
    if ((unsigned int)v8->field_1c)
        return v8;
    v15 = v8->field_10;
    v8->field_1c = 1;
    v13 = v8;
    (unsigned int)v14 = v15->field_0->field_18(v15);
    while (*((char *)(v14 + 8)) == 12)
    {
        v15 = *((long long *)(v14 + 16));
        (unsigned int)v14 = *((long long *)(*((long long *)v15) + 24))(v15, a1);
    }
    v16 = *((char *)(v15 + 10));
    if (!v16 || v16 == 2 && ((char)*((long long *)(*((long long *)v15) + 8))(v15, a1) & 1) || !v17 || v17 == 2 && ((char)*((long long *)(*((long long *)v15) + 16))(v15, a1) & 1))
        sub_416694(a1, ")", (char *)(4365010 + __strlen_chk(")", 2)));
    v8 = *((long long *)(*((long long *)v15) + 40))(v15, a1);
    v13->field_1c = 0;
}

typedef struct struct_0 {
    char padding_0[28];
    char field_1c;
} struct_0;

extern char g_4239b0;

long long sub_4239a0(unsigned long long a0)
{
    struct_0 *v0;  // x19

    v0->field_1c = 0;
    v0->field_1c = 0;
    x30<8> = &g_4239b0;
    sub_4270a0((unsigned long long)sub_4270a0(a0));
    return ::0x40f060::operator delete();
}

typedef struct struct_4 {
    char padding_0[16];
    struct struct_3 *field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_4;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long sub_4239b4(struct_4 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct struct_1 **v3;  // x0

    v0 = &v1;
    *(v3)->field_20(a0->field_10);
    return (unsigned long long)sub_416694(a1, a0->field_18, a0->field_20);
}

long long sub_4239ec()
{
    return ::0x40f060::operator delete();
}

long long sub_4239f0()
{
    return ::0x40eee0::std::type_info::__base_dtor__();
}

long long sub_4239f4()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4340212
}

long long sub_4239f8()
{
    unsigned long v0;  // x0

    return v0;
}

long long sub_4239fc()
{
    unsigned long v0;  // x0

    return v0;
}

long long sub_423a00(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423a24(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423a48(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423a6c(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423a90(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423ab4(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423ad8(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423afc(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423b20(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long sub_423b44(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ::0x40eee0::std::type_info::__base_dtor__();
    return ::0x40f060::operator delete();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long sub_423b68(struct_0 *a0, struct_0 *a1)
{
    if (a0->field_8 != a1->field_8)
        return 0;
    return 1;
}

long long sub_423b7c()
{
    return 0;
}

long long sub_423b84()
{
    return 0;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long sub_423b8c(struct_0 *a0, struct_0 *a1)
{
    if (a0->field_8 != a1->field_8)
        return 0;
    return 1;
}

typedef struct struct_3 {
    char padding_0[40];
    unsigned long long field_28;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long sub_423ba0(struct_0 *a0, struct_0 *a1, unsigned long long *a2)
{
    struct struct_2 **v0;  // [bp-0x88]
    void* v1;  // [bp-0x80]
    struct_0 *v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    int v4;  // [bp-0x68]
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x49]
    unsigned int v7;  // [bp-0x40]
    unsigned long v8;  // [bp-0x38]
    unsigned long v9;  // [bp-0x10]
    char v10;  // [bp+0x0]
    struct_3 *v11;  // tpidr_el0
    struct struct_2 **v13;  // x0, Other Possible Types: unsigned long

    v9 = &v10;
    v8 = v11->field_28;
    if (a0->field_8 != a1->field_8)
    {
        v13 = ::0x40f0e0::__dynamic_cast();
        if (!v13)
        {
            if (v11->field_28 == v8)
                return v13;
            __stack_chk_fail(); /* do not return */
        }
        v0 = v13;
        v1 = 0;
        v2 = a0;
        v3 = -1;
        *((int128_t *)&v6) = 0;
        *((int128_t *)&v4) = 0;
        *((int128_t *)&v5) = 0;
        v7 = 1;
        *(v13)->field_38();
        if ((int)v5 == 1)
        {
            *(a2) = (long long)v4;
        }
        else if (v11->field_28 != v8)
        {
            __stack_chk_fail(); /* do not return */
        }
        else
        {
            return 0;
        }
    }
    if (v11->field_28 == v8)
        return 1;
    __stack_chk_fail(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[14];
    char field_4e;
} struct_0;

int sub_423c80()
{
    struct_0 *v0;  // x1
    unsigned long long v1;  // x8
    unsigned long v2;  // x2
    unsigned long long v3;  // x8
    unsigned long v4;  // x2
    unsigned int v5;  // w3
    unsigned int v6;  // w8
    unsigned long long v7;  // x9
    unsigned long long v8;  // x10
    unsigned int v11;  // w3

    v1 = v0->field_20;
    if (!v1)
    {
        v3 = 1;
        v0->field_20 = v4;
        v0->field_30 = v5;
        v0->field_3c = 1;
        return;
    }
    else if (v1 != v2)
    {
        v6 = v0->field_3c;
        v7 = 2;
        v8 = 1;
        v0->field_30 = 2;
        v0->field_3c = v6 + 1;
        v0->field_4e = 1;
        return;
    }
    else
    {
        if (v0->field_30 != 2)
            return;
        v0->field_30 = v11;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[14];
    char field_4e;
} struct_1;

int sub_423cd8()
{
    struct_0 *v0;  // x0
    struct_1 *v2;  // x1
    unsigned long long v4;  // x8
    unsigned long v5;  // x2
    unsigned long v7;  // x2
    unsigned int v8;  // w3
    unsigned int v9;  // w8
    unsigned int v14;  // w3

    if (v0->field_8 != v2->field_10->field_8)
        return;
    v4 = v2->field_20;
    if (!v4)
    {
        v2->field_20 = v7;
        v2->field_30 = v8;
        v2->field_3c = 1;
        return;
    }
    else if (v4 != v5)
    {
        v9 = v2->field_3c;
        v2->field_30 = 2;
        v2->field_3c = v9 + 1;
        v2->field_4e = 1;
        return;
    }
    else if (v2->field_30 == 2)
    {
        v2->field_30 = v14;
        return;
    }
    else
    {
        return;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[14];
    char field_4e;
} struct_1;

int sub_423d48()
{
    struct_0 *v0;  // x0
    struct_1 *v2;  // x1
    unsigned long long v3;  // x8
    unsigned long v4;  // x2
    unsigned long long v5;  // x8
    unsigned long v6;  // x2
    unsigned int v7;  // w3
    unsigned int v8;  // w8
    unsigned long long v9;  // x9
    unsigned long long v10;  // x10
    unsigned int v13;  // w3

    if (v0->field_8 != v2->field_10->field_8)
    {
        goto *((long long *)(*((long long *)*((long long *)(x0<8> + 16))) + 56));
    }
    else
    {
        v3 = v2->field_20;
        if (!v3)
        {
            v5 = 1;
            v2->field_20 = v6;
            v2->field_30 = v7;
            v2->field_3c = 1;
            return;
        }
        else if (v3 != v4)
        {
            v8 = v2->field_3c;
            v9 = 2;
            v10 = 1;
            v2->field_30 = 2;
            v2->field_3c = v8 + 1;
            v2->field_4e = 1;
            return;
        }
        else
        {
            if (v2->field_30 != 2)
                return;
            v2->field_30 = v13;
        }
    }
}

int sub_423dc4()
{
    unsigned long long v0[2];  // x0
    unsigned long long v1;  // x8
    unsigned long long v3;  // x0

    v1 = v0[1];
    v3 = v0[0];
    goto *((long long *)(*((long long *)x0<8>) + 56));
}

typedef struct struct_5 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[14];
    char field_4e;
} struct_5;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[4];
    unsigned int field_14;
    struct struct_3 *field_18;
    unsigned long long field_20;
} struct_2;

typedef struct struct_6 {
    struct struct_3 *field_0;
    unsigned long long field_8;
} struct_6;

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
} struct_4;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[56];
    struct struct_0 *field_38;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

int sub_423e04()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x3
    struct_5 *v4;  // x1
    struct_5 *v5;  // x19
    unsigned long long *v6;  // x2
    unsigned long long *v7;  // x21
    struct_2 *v8;  // x0
    unsigned long long v9;  // x24
    unsigned long long v10;  // x8
    struct_2 *v11;  // x22
    unsigned long long v12;  // x8
    struct struct_0 **v13;  // x9, Other Possible Types: unsigned long
    unsigned int v14;  // w8
    struct struct_1 **v15;  // x0
    unsigned long long v16;  // x2
    unsigned long long v17;  // x3
    struct_6 *v19;  // x22, Other Possible Types: unsigned long
    unsigned long long v20;  // x8
    struct struct_0 **v21;  // x9, Other Possible Types: unsigned long
    struct struct_1 **v22;  // x0
    unsigned long long v23;  // x2
    unsigned long long v24;  // x3
    unsigned long long v25;  // x3
    struct_5 *v26;  // x1
    unsigned long long v27;  // x29

    v0 = &v1;
    v5 = v4;
    v7 = v6;
    if (v8->field_8 != v4->field_10->field_8)
    {
        v9 = v8->field_14;
        v10 = v8->field_20;
        v11 = v8;
        if (!v6)
        {
            v13 = 0;
        }
        else
        {
            v13 = v10 >> 63 & -0x100000000000000 | __ROL__(v10, 56) & 72057594037927935;
            if (((char)v10 & 1))
                v13 = *((long long *)(*(v6) + (char *)v13));
        }
        v15 = v8->field_18;
        v16 = (char *)v6 + v13;
        if ((char)[D] arm64g_calculate_condition(0xa<64>, And(x8<8>, 0x2<64>), 0x0<64>, 0x0<64>))
            v17 = 2;
        *(v15)->field_38();
        if ((unsigned int)v9 < 2)
        {
            v27 = v0;
            return;
        }
        v19 = v11 + 1;
        while (true)
        {
            v20 = *((long long *)(v19 + 8));
            if (!v7)
            {
                v21 = 0;
            }
            else
            {
                v21 = v20 >> 63 & -0x100000000000000 | __ROL__(v20, 56) & 72057594037927935;
                if (((char)v20 & 1))
                    v21 = *((long long *)(*(v7) + (char *)v21));
            }
            v22 = *((long long *)v19);
            v23 = (char *)v7 + v21;
            if ((char)[D] arm64g_calculate_condition(0xa<64>, And(x8<8>, 0x2<64>), 0x0<64>, 0x0<64>))
                v24 = 2;
            else
                v25 = v2;
            v26 = v5;
            *((long long *)(*((long long *)*((long long *)v19)) + 56))();
            if (v5->field_4e)
            {
                v27 = v0;
                return;
            }
            v19 += 16;
            if (v19 >= &(&v11->padding_0)[2 * v9 + 24])
            {
                v27 = v0;
                return;
            }
        }
    }
    else
    {
        v12 = v4->field_20;
        if (!v12)
        {
            v4->field_20 = v6;
            v4->field_30 = v2;
            v4->field_3c = 1;
            v27 = v0;
            return;
        }
        else if (v12 == v6)
        {
            if (v4->field_30 != 2)
            {
                v27 = v0;
                return;
            }
            v4->field_30 = v2;
        }
        else
        {
            v14 = v4->field_3c;
            v4->field_30 = 2;
            v4->field_3c = v14 + 1;
            v4->field_4e = 1;
            v27 = v0;
            return;
        }
    }
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    char *field_8;
} struct_0;

long long sub_423f58(struct_1 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_0 *v2;  // x19
    void* v3;  // x0, Other Possible Types: unsigned long long, unsigned long
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long long v6;  // cc_dep1
    void* v7;  // cc_dep2

    v0 = &v1;
    v2 = a0;
    if ((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>))
    {
        if (!a1)
            return 0;
        v3 = ::0x40f0e0::__dynamic_cast();
        if (!v3)
            return v3;
        if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>)))
        {
            v4 = v2->field_8;
            v5 = a1->field_8;
LABEL_423f90:
            if ((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>))
                v3 = 0;
            else
                v3 = 1;
            return v3;
        }
    }
    if (v2 == a1)
        return 1;
    v6 = strcmp(v2->field_8, a1->field_8);
    v7 = 0;
    goto LABEL_423f90;
}

typedef struct struct_7 {
    char padding_0[40];
    unsigned long long field_28;
} struct_7;

typedef struct struct_4 {
    char padding_0[8];
    char *field_8;
} struct_4;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    struct struct_0 *field_18;
} struct_5;

typedef struct struct_8 {
    char padding_0[8];
    char *field_8;
    char field_10;
    char padding_11[7];
    struct struct_0 *field_18;
} struct_8;

typedef struct struct_1 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    struct struct_0 *field_18;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern char _ZTSDn;
extern char _ZTSv;

long long sub_423ff0(struct_5 *a0, struct_4 *a1, struct struct_6 **a2)
{
    struct struct_3 **v0;  // [bp-0x98]
    void* v1;  // [bp-0x90]
    unsigned long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    int v4;  // [bp-0x78]
    int v5;  // [bp-0x68]
    int v6;  // [bp-0x59]
    unsigned int v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x10]
    char v10;  // [bp+0x0]
    struct_7 *v11;  // tpidr_el0
    struct_8 *v12;  // x20
    unsigned long long *v14;  // x8
    unsigned long long *v15;  // x8
    struct_1 *v16;  // x21
    unsigned int v17;  // w8
    unsigned int v18;  // w9
    struct_0 *v19;  // x0, Other Possible Types: void*, unsigned long long, unsigned long, struct struct_0 *[5], struct_1 *, struct struct_3 **
    struct_0 *v20;  // x8
    unsigned long long v21;  // x9
    unsigned long long v22;  // x0
    struct struct_0 *v24[5];  // x0
    struct struct_0 *v25[5];  // x22
    unsigned long long v26;  // x20

    v9 = &v10;
    v8 = v11->field_28;
    if (a1->field_8 != "Dn")
    {
        v12 = a0;
        if ((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>))
        {
            if (!::0x40f0e0::__dynamic_cast())
            {
LABEL_4240d8:
                v19 = ::0x40f0e0::__dynamic_cast();
                if (v19)
                {
                    v15 = *(a2);
                    v16 = v19;
                    if (v15)
                        *(a2) = *(v15);
                    v17 = v19->field_10;
                    v18 = *((int *)&v12->field_10);
                    if (!(!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>))) || !((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>)))
                    {
LABEL_42412c:
                        v19 = 0;
                        goto LABEL_4241cc;
                    }
                    else
                    {
                        v19 = v12->field_18;
                        v20 = v16->field_18;
                        v21 = v19->field_8;
                        if (v21 == v20->field_8)
                        {
                            if (v11->field_28 != v8)
                                __stack_chk_fail(); /* do not return */
                            return 1;
                        }
                        if (v21 == "v")
                        {
                            if (v20)
                            {
                                if (::0x40f0e0::__dynamic_cast())
                                    v19 = 0;
                                else
                                    v19 = 1;
LABEL_4241cc:
                                if (v11->field_28 != v8)
                                    __stack_chk_fail(); /* do not return */
                                return v19;
                            }
                            else if (v11->field_28 != v8)
                            {
                                __stack_chk_fail(); /* do not return */
                            }
                            else
                            {
                                return 1;
                            }
                        }
                        if (!v19)
                        {
                            if (v11->field_28 != v8)
                                __stack_chk_fail(); /* do not return */
                            return v12->field_18;
                        }
                        v22 = ::0x40f0e0::__dynamic_cast();
                        if (v22)
                        {
                            if ((v12->field_10 & 1))
                            {
                                if (v11->field_28 != v8)
                                    __stack_chk_fail(); /* do not return */
                                v19 = (unsigned int)sub_424310(v22, v16->field_18) & 1;
                                return v19;
                            }
                            goto LABEL_42412c;
                        }
                        v19 = v12->field_18;
                        if (!v19)
                        {
                            if (v11->field_28 != v8)
                                __stack_chk_fail(); /* do not return */
                            return v12->field_18;
                        }
                        v24 = ::0x40f0e0::__dynamic_cast();
                        if (v24)
                        {
                            if (!(v12->field_10 & 1))
                                goto LABEL_42412c;
                            v25 = v24;
                            v19 = v16->field_18;
                            if (!v19)
                            {
                                if (v11->field_28 != v8)
                                    __stack_chk_fail(); /* do not return */
                                return v16->field_18;
                            }
                            v19 = ::0x40f0e0::__dynamic_cast();
                            if (!(!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Load(addr=(x0<8> + 0x10<64>), size=4, endness=Iend_LE) & (BitwiseNeg Load(addr=(x22<8> + 0x10<64>), size=4, endness=Iend_LE)))), 0x0<64>, 0x0<64>))) || !(v25[3]->field_8 == v19[3]->field_8))
                                goto LABEL_42412c;
                            if (v25[4]->field_8 != v19[4]->field_8)
                                v19 = 0;
                            else
                                v19 = 1;
                            goto LABEL_4241cc;
                        }
                        else
                        {
                            v19 = v12->field_18;
                            if (v19)
                            {
                                v19 = ::0x40f0e0::__dynamic_cast();
                                if (v19 && v19 && (v19 = ::0x40f0e0::__dynamic_cast(), v19))
                                {
                                    v0 = v19;
                                    v1 = 0;
                                    v2 = v26;
                                    v3 = -1;
                                    *((int128_t *)&v6) = 0;
                                    *((int128_t *)&v4) = 0;
                                    *((int128_t *)&v5) = 0;
                                    v7 = 1;
                                    *(v19)->field_38();
                                    if ((int)v5 == 1)
                                    {
                                        if (*(a2))
                                        {
                                            *(a2) = (long long)v4;
                                            if (v11->field_28 == v8)
                                                return 1;
                                            __stack_chk_fail(); /* do not return */
                                        }
                                        else if (v11->field_28 != v8)
                                        {
                                            __stack_chk_fail(); /* do not return */
                                        }
                                        else
                                        {
                                            return 1;
                                        }
                                    }
                                    goto LABEL_42412c;
                                }
                            }
                        }
                    }
                }
                if (v11->field_28 != v8)
                    __stack_chk_fail(); /* do not return */
                return v19;
            }
            if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>)))
            {
                if (!(v12->field_8 == a1->field_8))
                    goto LABEL_4240d8;
LABEL_424058:
                v14 = *(a2);
                if (v14)
                {
                    *(a2) = *(v14);
                    if (v11->field_28 == v8)
                        return 1;
                    __stack_chk_fail(); /* do not return */
                }
                else if (v11->field_28 != v8)
                {
                    __stack_chk_fail(); /* do not return */
                }
                else
                {
                    return 1;
                }
            }
        }
        if (v12 != a1 && strcmp(v12->field_8, a1->field_8))
            goto LABEL_4240d8;
        goto LABEL_424058;
    }
    else
    {
        *(a2) = 0;
        if (v11->field_28 == v8)
            return 1;
        __stack_chk_fail(); /* do not return */
    }
}

typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    struct struct_0 *field_18;
} struct_2;

typedef struct struct_1 {
    char padding_0[24];
    struct struct_0 *field_18;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

void sub_424310(struct_2 *a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v2;  // x22, Other Possible Types: unsigned long
    struct_1 *v3;  // x0
    unsigned long long v4;  // x9
    struct_1 *v5;  // x21
    struct_0 *v6;  // x8
    struct_2 *v7;  // x0
    struct struct_0 *v8[5];  // x0
    struct struct_0 *v10[5];  // x0
    unsigned long long v11;  // x29

    v0 = &v1;
    if (!a1)
    {
        v11 = v0;
        return;
    }
    v2 = a0;
    while (true)
    {
        v3 = ::0x40f0e0::__dynamic_cast();
        if (!v3)
        {
            v11 = v0;
            return;
        }
        v4 = *((int *)(v2 + 16));
        v5 = v3;
        if ((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Load(addr=(x0<8> + 0x10<64>), size=4, endness=Iend_LE) & (BitwiseNeg Conv(64->32, x9<8>)))), 0x0<64>, 0x0<64>))
            break;
        v6 = *((long long *)(v2 + 24));
        if (v6->field_8 == v3->field_18->field_8)
        {
            v11 = v0;
            return;
        }
        if (!((char)v4 & 1))
        {
            v11 = v0;
            return;
        }
        if (!v6)
        {
            v11 = v0;
            return;
        }
        v7 = ::0x40f0e0::__dynamic_cast();
        if (v7)
        {
            v2 = v7;
            if (!v5->field_18)
                break;
        }
        else if (!*((long long *)(v2 + 24)))
        {
            v11 = v0;
            return;
        }
        else
        {
            v8 = ::0x40f0e0::__dynamic_cast();
            if (!v8)
            {
                v11 = v0;
                return;
            }
            else if (!v5->field_18)
            {
                v11 = v0;
                return;
            }
            else
            {
                v10 = ::0x40f0e0::__dynamic_cast();
                if (!v10)
                {
                    v11 = v0;
                    return;
                }
                else if (!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Load(addr=(x0<8> + 0x10<64>), size=4, endness=Iend_LE) & (BitwiseNeg Conv(64->32, x9<8>)))), 0x0<64>, 0x0<64>)))
                {
                    if (v8[3]->field_8 == v10[3]->field_8)
                    {
                        v11 = v0;
                        return;
                    }
                    break;
                }
            }
        }
    }
}

long long sub_424458(struct struct_0 *a0[5], unsigned long a1)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct struct_0 *v2[5];  // x19
    void* v3;  // x0, Other Possible Types: unsigned long, unsigned long long, struct struct_0 *[5]

    v0 = &v1;
    if (a1)
    {
        v2 = a0;
        v3 = ::0x40f0e0::__dynamic_cast();
        if (!v3)
        {
            return v3;
        }
        else if (!((char)[D] arm64g_calculate_condition(0x19<64>, Conv(32->64, (Load(addr=(x0<8> + 0x10<64>), size=4, endness=Iend_LE) & (BitwiseNeg Load(addr=(x19<8> + 0x10<64>), size=4, endness=Iend_LE)))), 0x0<64>, 0x0<64>)) && v2[3]->field_8 == v3[3]->field_8)
        {
            if (v2[4]->field_8 != v3[4]->field_8)
                v3 = 0;
            else
                v3 = 1;
            return v3;
        }
    }
    return 0;
}

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[4];
    struct struct_1 *field_18;
    struct struct_1 *field_20;
} struct_3;

typedef struct struct_4 {
    char padding_0[8];
    char *field_8;
    unsigned int field_10;
    char padding_14[4];
    struct struct_1 *field_18;
    struct struct_1 *field_20;
} struct_4;

typedef struct struct_0 {
    char padding_0[8];
    char *field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    struct struct_1 *field_18;
    struct struct_1 *field_20;
} struct_2;

extern char _ZTSDn;
extern char g_42ae88;
extern char g_42ae98;

long long sub_4244e4(struct_3 *a0, struct_0 *a1, unsigned long long *a2)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_4 *v2;  // x19
    unsigned long v4;  // x19, Other Possible Types: unsigned long long
    void* v6;  // x0, Other Possible Types: unsigned long, unsigned long long
    unsigned int v7;  // w8
    unsigned int v8;  // w9

    v0 = &v1;
    v2 = a0;
    if (a1->field_8 == "Dn")
    {
        v4 = &g_42ae98;
        if (a0->field_18 && ::0x40f0e0::__dynamic_cast())
            v4 = &g_42ae88;
        *(a2) = v4;
        return 1;
    }
    if ((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>))
    {
        if (!::0x40f0e0::__dynamic_cast())
        {
LABEL_4245bc:
            v6 = ::0x40f0e0::__dynamic_cast();
            if (!v6)
                return v6;
            v7 = *((int *)(v6 + 16));
            v8 = v2->field_10;
            if (!(!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>)) && !((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>)) && v2->field_18->field_8 == *((long long *)(*((long long *)(v6 + 24)) + 8))))
                return 0;
            if (v2->field_20->field_8 != *((long long *)(*((long long *)(v6 + 32)) + 8)))
                v6 = 0;
            else
                v6 = 1;
            return v6;
        }
        else if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(8->64, (Load(addr=(x0<8> + 0x10<64>), size=1, endness=Iend_LE) & 0x18<8>)), 0x0<64>, 0x0<64>)))
        {
            if (v2->field_8 != a1->field_8)
            {
LABEL_4245bc:
                ::0x40f0e0::__dynamic_cast();
            }
            return 1;
        }
    }
    if (v2 == a1)
    {
        return 1;
    }
    else if (!strcmp(v2->field_8, a1->field_8))
    {
        return 1;
    }
    goto LABEL_4245bc;
}

typedef struct struct_5 {
    char padding_0[40];
    unsigned long long field_28;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_-10;
    char padding_-8[18446744073709551616];
    struct struct_1 *field_fffffffffffffff8;
} struct_3;

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
} struct_4;

typedef struct struct_2 {
    char padding_0[40];
    struct struct_0 *field_28;
    struct struct_0 *field_30;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

long long __dynamic_cast(struct struct_3 **a0, unsigned long a1, struct_4 *a2, unsigned long a3)
{
    struct_4 *v0;  // [bp-0x78]
    int tmp_10;  // tmp #10
    struct struct_3 **v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    int v4;  // [bp-0x58]
    int v5;  // [bp-0x48]
    int v6;  // [bp-0x39]
    unsigned int v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x10]
    char v10;  // [bp+0x0]
    struct_5 *v12;  // tpidr_el0
    struct_3 *v13;  // x9
    struct_1 *v14;  // x0
    unsigned long long v15;  // x19
    unsigned long long v16;  // x8
    unsigned long long v17;  // x9
    unsigned long long v18;  // x10
    void* v19;  // x0, Other Possible Types: unsigned long, unsigned long long
    unsigned long long v20;  // cc_op
    unsigned long v21;  // cc_dep1
    unsigned long v22;  // cc_dep2
    void* v23;  // cc_op
    unsigned long v24;  // cc_dep1
    unsigned long v25;  // cc_dep2
    unsigned long long v26;  // cc_op
    unsigned long v27;  // cc_dep1
    unsigned long v28;  // cc_dep2
    void* v29;  // cc_op
    unsigned long v30;  // cc_dep1
    unsigned long v31;  // cc_dep2

    v9 = &v10;
    v8 = v12->field_28;
    v13 = *(a0);
    v14 = *((long long *)&v13->padding_-8[0]);
    v0 = a2;
    v1 = a0;
    v2 = a1;
    v3 = a3;
    *((int128_t *)&v5) = 0;
    *((int128_t *)&v4) = 0;
    *((int128_t *)&v6) = 0;
    v15 = (char *)v1 + *((long long *)&v13->padding_-8[8]);
    if (v14->field_8 != a2->field_8)
    {
        v14->field_0->field_30(v14, &v0, v15, 1, 0);
        v16 = (int)(&v5)[12];
        if ((unsigned int)v16 == 1)
        {
            if ((int)v5 == 1 || (v19 = 0, !(int)(&v6)[1] && (int)(&v5)[4] == 1 && (int)(&v5)[8] == 1))
                v19 = (long long)v4;
        }
        else
        {
            if ((unsigned int)v16)
            {
                v19 = 0;
            }
            else
            {
                v17 = (int)(&v5)[4];
                v18 = (int)(&v6)[1];
                if ((int)(&v5)[8] == 1)
                {
                    v20 = 3;
                    v21 = ((char)[D] arm64g_calculate_condition(0x3<64>, x8<8>, 0x1<64>, 0x0<64>) ? v17 : 0);
                    v22 = ((char)[D] arm64g_calculate_condition(0x3<64>, x8<8>, 0x1<64>, 0x0<64>) ? 1 : 0);
                }
                else
                {
                    v23 = 0;
                    v24 = ((char)[D] arm64g_calculate_condition(0x3<64>, x8<8>, 0x1<64>, 0x0<64>) ? v17 : 0);
                    v25 = ((char)[D] arm64g_calculate_condition(0x3<64>, x8<8>, 0x1<64>, 0x0<64>) ? 1 : 0);
                }
                if ((char)[D] arm64g_calculate_condition(cc_op<8>, cc_dep1<8>, cc_dep2<8>, 0x0<64>))
                {
                    tmp_10 = (char)[D] arm64g_calculate_condition(cc_op<8>, cc_dep1<8>, cc_dep2<8>, 0x0<64>);
                    v26 = 3;
                    v27 = (tmp_10 ? v18 : 0);
                    v28 = (tmp_10 ? 1 : 0);
                }
                else
                {
                    tmp_10 = (char)[D] arm64g_calculate_condition(cc_op<8>, cc_dep1<8>, cc_dep2<8>, 0x0<64>);
                    v29 = 0;
                    v30 = (tmp_10 ? v18 : 0);
                    v31 = (tmp_10 ? 1 : 0);
                }
                if (!((char)[D] arm64g_calculate_condition(cc_op<8>, cc_dep1<8>, cc_dep2<8>, 0x0<64>)))
                    v19 = 0;
                else
                    v19 = (long long)(&v4)[8];
            }
        }
    }
    else
    {
        v7 = 1;
        v14->field_0->field_28(v14, &v0, v15, v15, 1, 0);
        if ((int)v5 == 1)
            v19 = v15;
        else
            v19 = 0;
    }
    if (v12->field_28 != v8)
        __stack_chk_fail(); /* do not return */
    return v19;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[8];
    unsigned int field_48;
    char field_4c;
    char field_4d;
    char field_4e;
} struct_0;

int sub_42477c()
{
    struct_0 *v0;  // x1
    unsigned long long v1;  // x9
    unsigned long v3;  // x3
    unsigned long long v4;  // x9
    unsigned long v5;  // x2
    unsigned long v7;  // x2
    unsigned long v8;  // x4
    unsigned int v9;  // w8
    unsigned long v12;  // x8, Other Possible Types: unsigned long long
    unsigned long long v13;  // x8
    unsigned long v14;  // x4

    v1 = v0->field_8;
    v0->field_4d = 1;
    if (v1 != v3)
        return;
    v4 = v0->field_20;
    v0->field_4c = 1;
    if (!v4)
    {
        v0->field_20 = v7;
        v0->field_30 = v8;
        v0->field_3c = 1;
        if ((unsigned int)v8 != 1)
            return;
        v13 = v0->field_48;
        if ((unsigned int)v13 != 1)
            return;
        v0->field_4e = v13;
        return;
    }
    else if (v4 != v5)
    {
        v9 = v0->field_3c;
        v0->field_4e = 1;
        v0->field_3c = v9 + 1;
        return;
    }
    else
    {
        v12 = v0->field_30;
        if ((unsigned int)v12 == 2)
        {
            v12 = v14;
            v0->field_30 = v14;
        }
        if (v0->field_48 != 1)
        {
            return;
        }
        else if ((unsigned int)v12 == 1)
        {
            v0->field_4e = v12;
            return;
        }
        else
        {
            return;
        }
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[36];
    unsigned int field_34;
} struct_0;

int sub_42481c()
{
    struct_0 *v0;  // x1
    unsigned long v2;  // x2
    unsigned int v4;  // w3

    if (v0->field_8 == v2 && v0->field_34 != 1)
        v0->field_34 = v4;
    return;
}

typedef struct struct_6 {
    struct struct_5 *field_0;
    unsigned long long field_8;
    struct struct_5 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    char padding_48[4];
    char field_4c;
    char padding_4d[1];
    char field_4e;
} struct_6;

typedef struct struct_8 {
    char padding_0[8];
    char *field_8;
} struct_8;

typedef struct struct_7 {
    char padding_0[8];
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
    struct struct_3 *field_18;
    unsigned long long field_20;
} struct_7;

typedef struct struct_9 {
    struct struct_10 *field_0;
    unsigned long long field_8;
} struct_9;

typedef struct struct_2 {
    struct struct_3 *field_0;
    unsigned long long field_8;
} struct_2;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
} struct_5;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_10 {
    struct struct_4 *field_0;
} struct_10;

typedef struct struct_1 {
    char padding_0[48];
    struct struct_0 *field_30;
} struct_1;

typedef struct struct_4 {
    char padding_0[40];
    struct struct_0 *field_28;
} struct_4;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

int sub_42483c()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_6 *v2;  // x1
    struct_8 *v3;  // x8
    unsigned long v4;  // x4
    unsigned int v5;  // w21
    unsigned long v6;  // x3
    unsigned long long v7;  // x22
    unsigned long long *v8;  // x2
    unsigned long long *v9;  // x20
    struct_6 *v10;  // x19
    struct_7 *v11;  // x0
    struct_7 *v12;  // x23
    unsigned long long v13;  // x9
    char *v14;  // x24
    struct_8 *v15;  // x8
    unsigned long long v16;  // x8
    unsigned long long v17;  // x24
    struct struct_0 **v18;  // x9, Other Possible Types: unsigned long
    unsigned int v19;  // w8
    struct struct_1 **v20;  // x0
    unsigned long long v21;  // x2
    unsigned long long v22;  // x8
    unsigned long long v23;  // x3
    void* v25;  // x22, Other Possible Types: unsigned long, unsigned long long
    void* v26;  // x24, Other Possible Types: unsigned long, unsigned long long
    struct_9 *v27;  // x25, Other Possible Types: unsigned long
    unsigned long long v28;  // x26
    unsigned long long v29;  // x4
    unsigned long long v30;  // x8
    struct struct_0 **v31;  // x9, Other Possible Types: unsigned long
    struct struct_4 **v32;  // x0
    unsigned long long v33;  // x3
    unsigned long long v34;  // x4
    unsigned long long v35;  // x4
    unsigned long long v36;  // x5
    struct_6 *v37;  // x1
    unsigned long long *v38;  // x2
    unsigned long long v39;  // x8
    unsigned long long v40;  // x24
    unsigned int v41;  // w9
    unsigned int v42;  // w8
    unsigned long long v43;  // x8
    struct struct_0 **v44;  // x9, Other Possible Types: unsigned long
    struct struct_1 **v45;  // x0
    struct_2 *v46;  // x23, Other Possible Types: unsigned long
    unsigned long long v47;  // x2
    unsigned long long v48;  // x3
    unsigned long long v49;  // x3
    unsigned long long v50;  // x4
    struct_6 *v51;  // x1
    unsigned long long v52;  // x8
    struct struct_0 **v53;  // x9, Other Possible Types: unsigned long
    struct struct_1 **v54;  // x0
    unsigned long long v55;  // x2
    unsigned long long v56;  // x3
    unsigned long long v57;  // x3
    unsigned long long v58;  // x4
    struct_6 *v59;  // x1
    unsigned long long v60;  // x8
    struct struct_0 **v61;  // x9, Other Possible Types: unsigned long
    struct struct_1 **v62;  // x0
    unsigned long long v63;  // x2
    unsigned long long v64;  // x3
    unsigned long long v65;  // x3
    unsigned long long v66;  // x4
    struct_6 *v67;  // x1
    unsigned long long v68;  // x29

    v0 = &v1;
    v3 = v2->field_10;
    v5 = v4;
    v7 = v6;
    v9 = v8;
    v10 = v2;
    v12 = v11;
    if (!((char)v4 & 1))
    {
        v13 = v11->field_8;
        if (v13 != v3->field_8)
        {
            if (v13 != v2->field_0->field_8)
            {
LABEL_424918:
                v16 = v11->field_20;
                v17 = v11->field_14;
                v18 = v16 >> 63 & -0x100000000000000 | __ROL__(v16, 56) & 72057594037927935;
                if (((char)v16 & 1))
                    v18 = *((long long *)(*(v8) + (char *)v18));
                v20 = v11->field_18;
                v21 = (char *)v8 + v18;
                if ((char)[D] arm64g_calculate_condition(0x1a<64>, And(x8<8>, 0x2<64>), 0x0<64>, 0x0<64>))
                    v23 = 2;
                v29 = (unsigned int)v4 & 1;
                v12->field_18->field_0->field_30();
                if ((unsigned int)v17 < 2)
                {
                    v68 = v0;
                    return;
                }
                v39 = *((int *)&v12->field_10);
                v40 = &(&v12->padding_0)[2 * v17 + 24];
                v46 = v12 + 1;
                if (!((char)(v39 >> 1) & 1) && v2->field_3c != 1)
                {
                    if (((char)v39 & 1))
                    {
                        while (!v10->field_4e)
                        {
                            if (v10->field_3c == 1 && v10->field_30 == 1)
                            {
                                v68 = v0;
                                return;
                            }
                            v52 = *((long long *)(v46 + 8));
                            v53 = v52 >> 63 & -0x100000000000000 | __ROL__(v52, 56) & 72057594037927935;
                            if (((char)v52 & 1))
                                v53 = *((long long *)(*(v9) + (char *)v53));
                            v54 = *((long long *)v46);
                            v46 += 16;
                            v55 = (char *)v9 + v53;
                            if ((char)[D] arm64g_calculate_condition(0x1a<64>, And(x8<8>, 0x2<64>), 0x0<64>, 0x0<64>))
                                v56 = 2;
                            else
                                v57 = v7;
                            v58 = v5 & 1;
                            v59 = v10;
                            *(v54)->field_30();
                            if (v40 <= v46)
                            {
                                v68 = v0;
                                return;
                            }
                        }
                        v68 = v0;
                        return;
                    }
                    else
                    {
                        while (!v10->field_4e)
                        {
                            if (v10->field_3c == 1)
                            {
                                v68 = v0;
                                return;
                            }
                            v60 = *((long long *)(v46 + 8));
                            v61 = v60 >> 63 & -0x100000000000000 | __ROL__(v60, 56) & 72057594037927935;
                            if (((char)v60 & 1))
                                v61 = *((long long *)(*(v9) + (char *)v61));
                            v62 = *((long long *)v46);
                            v46 += 16;
                            v63 = (char *)v9 + v61;
                            if ((char)[D] arm64g_calculate_condition(0x1a<64>, And(x8<8>, 0x2<64>), 0x0<64>, 0x0<64>))
                                v64 = 2;
                            else
                                v65 = v7;
                            v66 = v5 & 1;
                            v67 = v10;
                            *(v62)->field_30();
                            if (v40 <= v46)
                            {
                                v68 = v0;
                                return;
                            }
                        }
                        v68 = v0;
                        return;
                    }
                }
                if (v2->field_4e)
                {
                    v68 = v0;
                    return;
                }
                while (true)
                {
                    v43 = *((long long *)(v46 + 8));
                    v44 = v43 >> 63 & -0x100000000000000 | __ROL__(v43, 56) & 72057594037927935;
                    if (((char)v43 & 1))
                        v44 = *((long long *)(*(v9) + (char *)v44));
                    v45 = *((long long *)v46);
                    v46 += 16;
                    v47 = (char *)v9 + v44;
                    if ((char)[D] arm64g_calculate_condition(0x1a<64>, And(x8<8>, 0x2<64>), 0x0<64>, 0x0<64>))
                        v48 = 2;
                    else
                        v49 = v7;
                    v50 = v5 & 1;
                    v51 = v10;
                    *(v45)->field_30();
                    if (v40 <= v46)
                    {
                        v68 = v0;
                        return;
                    }
                    if (v10->field_4e)
                    {
                        v68 = v0;
                        return;
                    }
                }
            }
LABEL_4248ac:
            if (v2->field_20 != v8 && v2->field_28 != v8)
            {
                v19 = v2->field_44;
                v2->field_38 = v6;
                if (v19 != 4)
                {
                    v22 = v11->field_14;
                    if (!(unsigned int)v22)
                    {
                        v2->field_44 = 4;
                    }
                    else
                    {
                        v25 = 0;
                        v26 = 0;
                        v27 = &v11->field_18;
                        v28 = &(&v11->padding_0)[2 * v22 + 24];
                        while (true)
                        {
                            *((short *)&v10->field_4c) = 0;
                            v30 = *((long long *)(v27 + 8));
                            v31 = v30 >> 63 & -0x100000000000000 | __ROL__(v30, 56) & 72057594037927935;
                            if (((char)v30 & 1))
                                v31 = *((long long *)(*(v9) + (char *)v31));
                            v32 = *((long long *)v27);
                            v33 = (char *)v9 + v31;
                            if ((char)[D] arm64g_calculate_condition(0x1a<64>, And(x8<8>, 0x2<64>), 0x0<64>, 0x0<64>))
                                v34 = 1;
                            else
                                v35 = 2;
                            v36 = v5 & 1;
                            v37 = v10;
                            v38 = v9;
                            *((long long *)(*((long long *)*((long long *)v27)) + 40))();
                            if (v10->field_4e)
                            {
LABEL_424b6c:
                                if (!((char)v26 & 1))
                                {
                                    v10->field_44 = 4;
                                    if (((char)v25 & 1))
                                    {
                                        v68 = v0;
                                        return;
                                    }
                                    break;
                                }
LABEL_424b70:
                                v26 = v25;
                                goto LABEL_424b98;
                            }
                            else
                            {
                                if (v10->padding_4d)
                                {
                                    if (v10->field_4c)
                                    {
                                        if (v10->field_30 != 1)
                                        {
                                            v26 = 1;
                                            v25 = 1;
                                            if (!((v12->field_10 >> 1 & 1)))
                                                goto LABEL_424b98;
                                        }
                                        else
                                        {
                                            v26 = 1;
LABEL_424b98:
                                            v10->field_44 = 3;
                                            if (((char)v26 & 1))
                                            {
                                                v68 = v0;
                                                return;
                                            }
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        if (!(v12->field_10 & 1))
                                            goto LABEL_424b70;
                                        v26 = 1;
                                    }
                                }
                                v27 += 16;
                                if (v28 <= v27)
                                    goto LABEL_424b6c;
                            }
                        }
                    }
                }
                v41 = v10->field_3c;
                v42 = v10->field_40;
                v10->field_28 = v9;
                v10->field_40 = v42 + 1;
                if (v41 != 1)
                {
                    v68 = v0;
                    return;
                }
                if (v10->field_30 != 2)
                {
                    v68 = v0;
                    return;
                }
                v10->field_4e = 1;
                v68 = v0;
                return;
            }
            if ((unsigned int)v6 != 1)
            {
                v68 = v0;
                return;
            }
            v2->field_38 = 1;
        }
    }
    else if (v11 != v3 && (v14 = v11->field_8, strcmp(v14, v3->field_8)))
    {
        v15 = v2->field_0;
        if (v11 != v15 && strcmp(v14, v15->field_8))
            goto LABEL_424918;
        goto LABEL_4248ac;
    }
    if (v2->field_8 == v8 && v2->field_34 != 1)
        v2->field_34 = v6;
    v68 = v0;
    return;
}

int sub_424bf0()
{
    unsigned long long v0[2];  // x0
    unsigned long long v1;  // x8
    unsigned long long v2;  // x0

    v1 = v0[1];
    v2 = v0[0];
    goto *((long long *)(*((long long *)x0<8>) + 40));
}

int sub_424c28()
{
    unsigned long long v0[2];  // x0
    unsigned long long v1;  // x8
    unsigned long long v2;  // x0

    v1 = v0[1];
    v2 = v0[0];
    goto *((long long *)(*((long long *)x0<8>) + 48));
}

typedef struct struct_6 {
    struct struct_5 *field_0;
    unsigned long long field_8;
    struct struct_5 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    char padding_48[4];
    char field_4c;
    char padding_4d[1];
    char field_4e;
} struct_6;

typedef struct struct_4 {
    char padding_0[8];
    char *field_8;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
} struct_5;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_1 {
    char padding_0[40];
    struct struct_0 *field_28;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

int sub_424c60()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_6 *v2;  // x1
    struct_4 *v3;  // x8
    unsigned long v4;  // x4
    unsigned long long v5;  // x9
    char *v6;  // x24
    struct_4 *v7;  // x8
    unsigned int v9;  // w3
    struct_2 *v10;  // x0
    unsigned long long v11;  // x2
    unsigned int v12;  // w8
    unsigned int v13;  // w3
    unsigned int v14;  // w3
    unsigned int v15;  // w8
    unsigned int v16;  // w9
    unsigned int v17;  // w8
    unsigned long long v18;  // x29

    v0 = &v1;
    v3 = v2->field_10;
    if (!((char)v4 & 1))
    {
        v5 = v10->field_8;
        if (v5 != v3->field_8)
        {
            if (v5 != v2->field_0->field_8)
            {
LABEL_424d54:
                goto *((long long *)&v10->field_10->field_0[1].padding_0[0]);
            }
LABEL_424cc8:
            if (v2->field_20 != v11 && v2->field_28 != v11)
            {
                v12 = v2->field_44;
                v2->field_38 = v13;
                if (v12 != 4)
                {
                    *((short *)&v2->field_4c) = 0;
                    v10->field_10->field_0->field_28(v10->field_10, v2, v11, v11, 1, (unsigned int)v4 & 1);
                    if (!v2->padding_4d)
                    {
                        v2->field_44 = 4;
                    }
                    else
                    {
                        v15 = v2->field_4c;
                        v2->field_44 = 3;
                        if (v15)
                        {
                            v18 = v0;
                            return;
                        }
                    }
                }
                v16 = v2->field_3c;
                v17 = v2->field_40;
                v2->field_28 = v11;
                v2->field_40 = v17 + 1;
                if (v16 != 1)
                {
                    v18 = v0;
                    return;
                }
                if (v2->field_30 != 2)
                {
                    v18 = v0;
                    return;
                }
                v2->field_4e = 1;
                v18 = v0;
                return;
            }
            if (v14 != 1)
            {
                v18 = v0;
                return;
            }
            v2->field_38 = 1;
        }
    }
    else if (v10 != v3 && (v6 = v10->field_8, strcmp(v6, v3->field_8)))
    {
        v7 = v2->field_0;
        if (v10 != v7 && strcmp(v6, v7->field_8))
            goto LABEL_424d54;
        goto LABEL_424cc8;
    }
    if (v2->field_8 == v11 && v2->field_34 != 1)
        v2->field_34 = v9;
    v18 = v0;
    return;
}

typedef struct struct_1 {
    struct struct_0 *field_0;
    unsigned long long field_8;
    struct struct_0 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    char padding_48[6];
    char field_4e;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    char *field_8;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_424e00()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x1
    struct_2 *v3;  // x8
    unsigned long v4;  // x4
    struct_0 *v5;  // x0
    unsigned long long v7;  // x9
    char *v8;  // x23
    struct_2 *v9;  // x8
    unsigned int v11;  // w3
    unsigned long v12;  // x2
    unsigned int v13;  // w9
    unsigned int v14;  // w8
    unsigned int v15;  // w3
    unsigned int v16;  // w3
    unsigned long long v17;  // x29

    v0 = &v1;
    v3 = v2->field_10;
    if (!((char)v4 & 1))
    {
        v7 = v5->field_8;
        if (v7 != v3->field_8)
        {
            if (v7 != v2->field_0->field_8)
            {
                v17 = v0;
                return;
            }
LABEL_424e88:
            if (v2->field_20 != v12 && v2->field_28 != v12)
            {
                v13 = v2->field_3c;
                v14 = v2->field_40;
                v2->field_38 = v15;
                v2->field_28 = v12;
                v2->field_40 = v14 + 1;
                if (v13 == 1 && v2->field_30 == 2)
                    v2->field_4e = 1;
                v2->field_44 = 4;
                v17 = v0;
                return;
            }
            if (v16 != 1)
            {
                v17 = v0;
                return;
            }
            v2->field_38 = 1;
        }
    }
    else if (v5 != v3 && (v8 = v5->field_8, strcmp(v8, v3->field_8)))
    {
        v9 = v2->field_0;
        if (v5 != v9 && strcmp(v8, v9->field_8))
        {
            v17 = v0;
            return;
        }
        goto LABEL_424e88;
    }
    if (v2->field_8 == v12 && v2->field_34 != 1)
        v2->field_34 = v11;
    v17 = v0;
    return;
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[8];
    unsigned int field_48;
    char field_4c;
    char padding_4d[1];
    char field_4e;
} struct_1;

typedef struct struct_7 {
    char padding_0[8];
    char *field_8;
} struct_7;

typedef struct struct_6 {
    char padding_0[8];
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
    struct struct_5 *field_18;
    unsigned long long field_20;
} struct_6;

typedef struct struct_4 {
    struct struct_5 *field_0;
    unsigned long long field_8;
} struct_4;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_3 {
    char padding_0[40];
    struct struct_2 *field_28;
} struct_3;

typedef struct struct_2 {
    struct struct_2 *field_0;
} struct_2;

int sub_424f20()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x1
    struct_7 *v3;  // x8
    unsigned long v4;  // x5
    unsigned long v6;  // x4
    unsigned long long *v8;  // x3
    unsigned long long *v9;  // x22
    unsigned long v10;  // x2
    struct_1 *v12;  // x19
    struct_6 *v13;  // x0
    struct_6 *v14;  // x24
    char *v15;  // x0
    unsigned long long v16;  // x9
    unsigned long long v17;  // x27
    unsigned long long v18;  // x8
    struct struct_2 **v19;  // x9, Other Possible Types: unsigned long
    unsigned long long v20;  // x9
    struct struct_3 **v21;  // x0
    unsigned long long v22;  // x3
    unsigned int v23;  // w8
    unsigned int v24;  // w8
    unsigned long long v25;  // x4
    unsigned long long v26;  // x5
    unsigned int v29;  // w26
    unsigned int v30;  // w25
    unsigned long long v31;  // x8
    struct_4 *v33;  // x27, Other Possible Types: unsigned long, unsigned long long
    unsigned long long v34;  // x8
    struct struct_2 **v35;  // x9, Other Possible Types: unsigned long
    struct struct_3 **v36;  // x0
    unsigned long long v37;  // x3
    unsigned long long v38;  // x4
    unsigned long long v39;  // x4
    unsigned long long v40;  // x5
    struct_1 *v41;  // x1
    unsigned long long v42;  // x2
    char v45;  // x8
    char v46;  // x9
    unsigned long long v47;  // x29

    v0 = &v1;
    v3 = v2->field_10;
    v9 = v8;
    v12 = v2;
    v14 = v13;
    if (((char)v4 & 1))
    {
        if (v13 != v3 && (v15 = v13->field_8, strcmp(v15, v3->field_8)))
            goto LABEL_424fc4;
    }
    else
    {
        if (v13->field_8 != v3->field_8)
        {
LABEL_424fc4:
            v17 = v14->field_14;
            *((short *)&v2->field_4c) = 0;
            v18 = v14->field_20;
            v19 = v18 >> 63 & -0x100000000000000 | __ROL__(v18, 56) & 72057594037927935;
            if (((char)v18 & 1))
                v19 = *((long long *)(*(v8) + (char *)v19));
            v21 = v14->field_18;
            v22 = (char *)v8 + v19;
            if ((char)[D] arm64g_calculate_condition(0x9<64>, Conv(32->64, (w25<4> & 0xff<32>)), 0x0<64>, 0x0<64>))
                v25 = 2;
            v26 = (unsigned int)v4 & 1;
            v14->field_18->field_0->field_28();
            v29 = v2->field_4c | v2->field_4c;
            v30 = (unsigned int)v2->padding_4d | (unsigned int)v2->padding_4d;
            if ((unsigned int)v17 >= 2)
            {
                v33 = v14 + 1;
                if (!v2->field_4e)
                {
                    do
                    {
                        if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(32->64, (w25<4> & 0xff<32>)), 0x0<64>, 0x0<64>)))
                        {
                            if (!(v12->field_30 != 1) || !((v14->field_10 >> 1 & 1)))
                                break;
                        }
                        else
                        {
                            if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(32->64, (w25<4> & 0xff<32>)), 0x0<64>, 0x0<64>)) && !((v14->field_10 & 1)))
                                break;
                        }
                        *((short *)&v12->field_4c) = 0;
                        v34 = *((long long *)(v33 + 8));
                        v35 = v34 >> 63 & -0x100000000000000 | __ROL__(v34, 56) & 72057594037927935;
                        if (((char)v34 & 1))
                            v35 = *((long long *)(*(v9) + (char *)v35));
                        v36 = *((long long *)v33);
                        v33 += 16;
                        v37 = (char *)v9 + v35;
                        if ((char)[D] arm64g_calculate_condition(0x9<64>, Conv(32->64, (w25<4> & 0xff<32>)), 0x0<64>, 0x0<64>))
                            v38 = 2;
                        else
                            v39 = v6;
                        v40 = (unsigned int)v4 & 1;
                        v41 = v12;
                        v42 = v10;
                        *(v36)->field_28();
                        v29 = v12->field_4c | v29;
                        v30 = (unsigned int)v12->padding_4d | v30;
                        if (!(&(&v14->padding_0)[2 * v17 + 24] > v33) || !(!v12->field_4e))
                            break;
                    } while (!v12->field_4e);
                }
            }
            if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(32->64, (w25<4> & 0xff<32>)), 0x0<64>, 0x0<64>)))
                v45 = 1;
            else
                v45 = 0;
            if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(32->64, (w25<4> & 0xff<32>)), 0x0<64>, 0x0<64>)))
                v46 = 1;
            else
                v46 = 0;
            v12->field_4c = v45;
            v12->padding_4d[0] = v46;
            v47 = v0;
            return;
        }
    }
    v16 = v2->field_8;
    v2->padding_4d[0] = 1;
    if (v16 != v8)
    {
        v47 = v0;
        return;
    }
    v20 = v2->field_20;
    v2->field_4c = 1;
    if (!v20)
    {
        v2->field_20 = v10;
        v2->field_30 = v6;
        v2->field_3c = 1;
        if ((unsigned int)v6 != 1)
        {
            v47 = v0;
            return;
        }
    }
    else if (v20 != v10)
    {
        v23 = v2->field_3c;
        v2->field_4e = 1;
        v2->field_3c = v23 + 1;
        v47 = v0;
        return;
    }
    else
    {
        v24 = v2->field_30;
        if (v24 == 2)
        {
            v24 = v6;
            v2->field_30 = v6;
        }
        if (v24 != 1)
        {
            v47 = v0;
            return;
        }
    }
    v31 = v2->field_48;
    if ((unsigned int)v31 == 1)
    {
        v2->field_4e = v31;
        v47 = v0;
        return;
    }
    v47 = v0;
    return;
}

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[8];
    unsigned int field_48;
    char field_4c;
    char field_4d;
    char field_4e;
} struct_2;

typedef struct struct_1 {
    char padding_0[8];
    char *field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_42515c()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_2 *v2;  // x1
    struct_1 *v3;  // x8
    struct_0 *v4;  // x0
    struct_0 *v5;  // x24
    unsigned long v6;  // x5
    char *v7;  // x0
    unsigned long long v8;  // x9
    unsigned long v9;  // x3
    unsigned long long v10;  // x9
    unsigned long v12;  // x2
    unsigned int v13;  // w4
    unsigned int v14;  // w8
    unsigned int v15;  // w8
    unsigned int v16;  // w4
    unsigned long long v17;  // x8
    unsigned long long v18;  // x29

    v0 = &v1;
    v3 = v2->field_10;
    v5 = v4;
    if (((char)v6 & 1))
    {
        if (v4 != v3 && (v7 = v4->field_8, strcmp(v7, v3->field_8)))
            goto LABEL_4251e0;
    }
    else
    {
        if (v4->field_8 != v3->field_8)
        {
LABEL_4251e0:
            goto *((long long *)(*((long long *)*((long long *)(x24<8> + 16))) + 40));
        }
    }
    v8 = v2->field_8;
    v2->field_4d = 1;
    if (v8 != v9)
    {
        v18 = v0;
        return;
    }
    v10 = v2->field_20;
    v2->field_4c = 1;
    if (!v10)
    {
        v2->field_20 = v12;
        v2->field_30 = v13;
        v2->field_3c = 1;
        if (v13 != 1)
        {
            v18 = v0;
            return;
        }
    }
    else if (v10 != v12)
    {
        v14 = v2->field_3c;
        v2->field_4e = 1;
        v2->field_3c = v14 + 1;
        v18 = v0;
        return;
    }
    else
    {
        v15 = v2->field_30;
        if (v15 == 2)
        {
            v15 = v16;
            v2->field_30 = v16;
        }
        if (v15 != 1)
        {
            v18 = v0;
            return;
        }
    }
    v17 = v2->field_48;
    if ((unsigned int)v17 == 1)
    {
        v2->field_4e = v17;
        v18 = v0;
        return;
    }
    v18 = v0;
    return;
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[8];
    unsigned int field_3c;
    char padding_40[8];
    unsigned int field_48;
    char field_4c;
    char field_4d;
    char field_4e;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    char *field_8;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_42528c()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct_1 *v2;  // x1
    struct_2 *v3;  // x8
    unsigned long v4;  // x5
    struct_0 *v5;  // x0
    struct_0 *v6;  // x0
    unsigned long long v8;  // x9
    unsigned long v9;  // x3
    unsigned long long v10;  // x9
    unsigned long v12;  // x2
    unsigned int v13;  // w4
    unsigned int v14;  // w8
    unsigned int v15;  // w8
    unsigned int v16;  // w4
    unsigned long long v17;  // x8
    unsigned long long v18;  // x29

    v0 = &v1;
    v3 = v2->field_10;
    if (!((char)v4 & 1))
    {
        if (v6->field_8 != v3->field_8)
        {
            v18 = v0;
            return;
        }
    }
    else
    {
        if (v5 != v3 && strcmp(v5->field_8, v3->field_8))
        {
            v18 = v0;
            return;
        }
    }
    v8 = v2->field_8;
    v2->field_4d = 1;
    if (v8 != v9)
    {
        v18 = v0;
        return;
    }
    v10 = v2->field_20;
    v2->field_4c = 1;
    if (!v10)
    {
        v2->field_20 = v12;
        v2->field_30 = v13;
        v2->field_3c = 1;
        if (v13 != 1)
        {
            v18 = v0;
            return;
        }
    }
    else if (v10 != v12)
    {
        v14 = v2->field_3c;
        v2->field_4e = 1;
        v2->field_3c = v14 + 1;
        v18 = v0;
        return;
    }
    else
    {
        v15 = v2->field_30;
        if (v15 == 2)
        {
            v15 = v16;
            v2->field_30 = v16;
        }
        if (v15 != 1)
        {
            v18 = v0;
            return;
        }
    }
    v17 = v2->field_48;
    if ((unsigned int)v17 == 1)
    {
        v2->field_4e = v17;
        v18 = v0;
        return;
    }
    v18 = v0;
    return;
}

long long std::type_info::__base_dtor__()
{
    unsigned long v0;  // x0

    return v0;
}

long long std::type_info::__deleting_dtor__()
{
    return ::0x40f060::operator delete();
}

extern char g_4349e8;

long long std::bad_cast::__base_ctor__(unsigned long long *a0)
{
    unsigned long long v0;  // x8

    v0 = &g_4349e8;
    *(a0) = &g_4349e8;
    return a0;
}

long long std::bad_cast::__base_dtor__()
{
    return std::exception::__base_dtor__();
}

long long std::bad_cast::__deleting_dtor__(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long std::bad_cast::what const()
{
    return "std::bad_cast";
}

extern char g_434a10;

long long std::bad_typeid::__base_ctor__(unsigned long long *a0)
{
    unsigned long long v0;  // x8

    v0 = &g_434a10;
    *(a0) = &g_434a10;
    return a0;
}

long long std::bad_typeid::__dtor__()
{
    return std::exception::__base_dtor__();
}

long long std::bad_typeid::__deleting_dtor__(unsigned long a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::exception::__base_dtor__();
    return ::0x40f060::operator delete();
}

long long std::bad_typeid::what const()
{
    return "std::bad_typeid";
}

long long __cxa_pure_virtual()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x30

    v0 = &v2;
    v1 = v3;
    sub_41291c("Pure virtual function called!"); /* do not return */
}

long long __cxa_deleted_virtual()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x30

    v0 = &v2;
    v1 = v3;
    sub_41291c("Deleted virtual function called!"); /* do not return */
}

int sub_42543c(char *a0, unsigned long long *a1)
{
    void* v0;  // x2, Other Possible Types: unsigned long
    void* v1;  // x3, Other Possible Types: unsigned long
    unsigned long long v2;  // x5
    unsigned long long v3;  // x4

    v0 = 0;
    v1 = 0;
    do
    {
        v2 = *((char *)a0);
        a0 += 1;
        v3 = (v2 & 127) << (char)(v1 & 63);
        v1 = (unsigned int)v1 + 7;
        v0 |= v3;
    } while (((char)(v2 >> 7) & 1));
    *(a1) = v0;
    return a0;
}

int sub_425464(char *a0, unsigned long long *a1)
{
    unsigned long v0;  // x2, Other Possible Types: unsigned long long
    void* v1;  // x3, Other Possible Types: unsigned long
    unsigned long long v2;  // x4
    unsigned long long v3;  // x5

    v0 = 0;
    v1 = 0;
    do
    {
        v2 = *((char *)a0);
        a0 += 1;
        v3 = (v2 & 127) << (char)(v1 & 63);
        v1 = (unsigned int)v1 + 7;
        v0 |= v3;
    } while (((char)(v2 >> 7) & 1));
    if (63 >= (unsigned int)v1 && ((char)(v2 >> 6) & 1))
        v0 = -1 << (char)(v1 & 63) | v0;
    *(a1) = v0;
    return a0;
}

int sub_4254a4()
{
    unsigned long v0;  // [bp-0x40]
    char v2;  // [bp+0x0]
    unsigned int v3;  // w0
    unsigned long long v4;  // x20
    struct struct_0 **v5;  // x2
    struct struct_0 **v6;  // x1
    struct struct_0 **v7;  // x22
    struct struct_0 **v8;  // x1
    struct struct_0 **v9;  // x19

    v0 = &v2;
    v4 = v3 & 255 & 255;
    v9 = v5;
    v7 = v6;
    if ((unsigned int)v4 == 80)
        v8 = *((long long *)((char *)v5 + 7 & -8));
    if (12 < ((unsigned int)v4 & 15))
        goto LABEL_0x425560;
    else
        goto LABEL_0x4254e8;
}

extern char g_435270;
extern char g_435271;
extern char g_435272;
extern char g_435273;
extern char g_435274;
extern char g_435275;
extern char g_435276;
extern char g_435277;
extern char g_435278;
extern char g_435279;
extern char g_43527a;
extern char g_43527b;
extern char g_43527c;
extern char g_43527d;
extern char g_43527e;
extern char g_43527f;
extern char g_435280;
extern char g_435281;
extern char g_435282;
extern char g_435283;
extern char g_435284;
extern char g_435285;
extern char g_435286;
extern char g_435287;
extern char g_435288;
extern char g_435289;
extern char g_43528a;
extern char g_43528b;
extern char g_43528c;
extern char g_43528d;
extern char g_43528e;
extern char g_43528f;
extern char g_4352b0;
extern char g_4352b1;
extern char g_4352b2;
extern char g_4352b3;
extern char g_4352b4;
extern char g_4352b5;
extern char g_4352b6;
extern char g_4352b7;
extern char g_4352b8;
extern char g_4352b9;
extern char g_4352ba;
extern char g_4352bb;
extern char g_4352bc;
extern char g_4352bd;
extern char g_4352be;
extern char g_4352bf;
extern char g_4352c0;
extern char g_4352c1;
extern char g_4352c2;
extern char g_4352c3;
extern char g_4352c4;
extern char g_4352c5;
extern char g_4352c6;
extern char g_4352c7;
extern char g_4352c8;
extern char g_4352c9;
extern char g_4352ca;
extern char g_4352cb;
extern char g_4352cc;
extern char g_4352cd;
extern char g_4352ce;
extern char g_4352cf;
extern char g_4352d0;

void sub_425594()
{
    g_435270 = 8;
    g_435271 = 8;
    g_435272 = 8;
    g_435273 = 8;
    g_435274 = 8;
    g_435275 = 8;
    g_435276 = 8;
    g_435277 = 8;
    g_435278 = 8;
    g_435279 = 8;
    g_43527a = 8;
    g_43527b = 8;
    g_43527c = 8;
    g_43527d = 8;
    g_43527e = 8;
    g_43527f = 8;
    g_435280 = 8;
    g_435281 = 8;
    g_435282 = 8;
    g_435283 = 8;
    g_435284 = 8;
    g_435285 = 8;
    g_435286 = 8;
    g_435287 = 8;
    g_435288 = 8;
    g_435289 = 8;
    g_43528a = 8;
    g_43528b = 8;
    g_43528c = 8;
    g_43528d = 8;
    g_43528e = 8;
    g_43528f = 8;
    g_4352b0 = 8;
    g_4352b1 = 8;
    g_4352b2 = 8;
    g_4352b3 = 8;
    g_4352b4 = 8;
    g_4352b5 = 8;
    g_4352b6 = 8;
    g_4352b7 = 8;
    g_4352b8 = 8;
    g_4352b9 = 8;
    g_4352ba = 8;
    g_4352bb = 8;
    g_4352bc = 8;
    g_4352bd = 8;
    g_4352be = 8;
    g_4352bf = 8;
    g_4352c0 = 8;
    g_4352c1 = 8;
    g_4352c2 = 8;
    g_4352c3 = 8;
    g_4352c4 = 8;
    g_4352c5 = 8;
    g_4352c6 = 8;
    g_4352c7 = 8;
    g_4352c8 = 8;
    g_4352c9 = 8;
    g_4352ca = 8;
    g_4352cb = 8;
    g_4352cc = 8;
    g_4352cd = 8;
    g_4352ce = 8;
    g_4352cf = 8;
    g_4352d0 = 8;
    return;
}

typedef struct struct_0 {
    char padding_0[248];
    unsigned long long field_f8;
    char padding_100[576];
    unsigned long long field_340;
    char padding_348[47];
    char field_377;
} struct_0;

extern char g_43528f;

void sub_4256a8(struct_0 *a0, unsigned long a1, unsigned long long *a2)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    if (g_43528f != 8)
        abort(); /* do not return */
    *(a2) = a1;
    if (!((char)(a0->field_340 >> 62) & 1))
    {
        a0->field_f8 = a2;
        v2 = v0;
        return;
    }
    a0->field_377 = 0;
}

typedef struct struct_0 {
    char padding_0[832];
    unsigned long long field_340;
} struct_0;

extern char g_435270;

int sub_4256e4()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x1
    char *v3;  // x2
    struct_0 *v4;  // x0
    unsigned long long v6;  // x29

    v0 = &v1;
    if ((unsigned int)v2 <= 97)
    {
        v3 = v2 << 32 >> 63 & -0x100000000 | v2 & 4294967295 & 4294967295;
        if (((char)(v4->field_340 >> 62) & 1) && *((char *)(v4 + v3 + 856)))
        {
            v6 = v0;
            return;
        }
        if (*((char *)(&g_435270 + v3)) == 8)
        {
            v6 = v0;
            return;
        }
    }
    abort(); /* do not return */
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[240];
    unsigned long long field_f8;
    char padding_100[528];
    unsigned long long field_310;
    char padding_318[40];
    unsigned long long field_340;
    char padding_348[47];
    char field_377;
} struct_0;

typedef struct struct_4 {
    unsigned long long field_0;
    char padding_8[240];
    unsigned long long field_f8;
    char padding_100[528];
    unsigned int field_310;
    char padding_314[44];
    unsigned long long field_340;
    char padding_348[8];
    unsigned long long field_350;
    char padding_358[31];
    char field_377;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
    char padding_8[240];
    unsigned long long field_f8;
    char padding_100[528];
    unsigned long long field_310;
    char padding_318[40];
    unsigned long long field_340;
    char padding_348[8];
    unsigned long long field_350;
    char padding_358[31];
    char field_377;
} struct_3;

typedef struct struct_2 {
    char padding_0[856];
    char field_358;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char g_435270;

int sub_42573c(struct_0 *a0, struct_4 *a1)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    struct_0 *v3;  // x21
    struct_3 *v4;  // x19
    unsigned long long *v5;  // x0
    void* v6;  // x1
    struct_2 *v7;  // x3
    unsigned int v8;  // w2
    unsigned int v10;  // w3
    unsigned int v11;  // w3
    char v12[4412017];  // x20, Other Possible Types: unsigned long
    unsigned int v13;  // w0
    unsigned long long v14;  // x0

    v0 = &v2;
    v3 = a0;
    v4 = a1;
    if ((!((char)(a1->field_340 >> 62) & 1) || !a1->field_377) && !a1->field_f8)
        sub_4256a8(a1, *((long long *)&a1->field_310), &v1);
    v12 = 0;
    do
    {
        v5 = (&v3->field_0)[v12];
        v6 = (&v4->field_0)[v12];
        if (v3->padding_348[16 + v12])
            abort(); /* do not return */
        v7 = (char *)v4 + v12;
        if (!v5)
            v8 = 0;
        else
            v8 = 1;
        if (!(!v7->field_358) && !(!v8) && (&g_435270)[v12] == 8)
        {
            *(v5) = v6;
            goto LABEL_4257f0;
        }
        if (!v6)
            v10 = 0;
        else
            v11 = 1;
        if (!((char)[D] arm64g_calculate_condition(0x9<64>, Conv(32->64, (w2<4> & w3<4>)), 0x0<64>, 0x0<64>)) && v6 != v5)
            memcpy(v5, v6, (&g_435270)[v12]);
LABEL_4257f0:
        v12 += 1;
    } while (v12 != 97);
    if (((char)(v3->field_340 >> 62) & 1) && v3->field_377)
        return 0;
    v13 = 0;
    if (v3->field_f8)
        return 0;
    (unsigned int)v14 = sub_4256e4(*((unsigned long long *)&v13), v6);
    v13 = (unsigned int)v14 - (unsigned int)v3->field_310 + (unsigned int)v4->field_350;
    return v13;
}

typedef struct struct_0 {
    char padding_0[784];
    unsigned long long field_310;
} struct_0;

int sub_425848(struct_0 *a0)
{
    return a0->field_310;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[824];
    unsigned long long field_340;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char g_435270;

int sub_425850()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned long v2;  // x1
    char *v3;  // x3
    unsigned int v4;  // w4
    struct_0 *v5;  // x0
    unsigned long v7;  // x2
    unsigned long v9;  // x2
    unsigned long long v10;  // x29

    v0 = &v1;
    if ((unsigned int)v2 <= 97)
    {
        v3 = v2 << 32 >> 63 & -0x100000000 | v2 & 4294967295 & 4294967295;
        v4 = *((char *)(&g_435270 + v3));
        if (((char)(v5->field_340 >> 62) & 1) && *((char *)(v5 + v3 + 856)))
        {
            (&v5->field_0)[v2] = v7;
            v10 = v0;
            return;
        }
        if (v4 == 8)
        {
            (&v5->field_0)[v2]->field_0 = v9;
            v10 = v0;
            return;
        }
    }
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[792];
    unsigned long long field_318;
} struct_0;

int sub_4258a8(struct_0 *a0)
{
    return a0->field_318;
}

long long sub_4258b0(unsigned long long a0[105], unsigned int *a1)
{
    unsigned long long v1;  // x0

    v1 = a0[99];
    *(a1) = __ROL__(a0[104], 1) & 1;
    return v1;
}

typedef struct struct_0 {
    char padding_0[792];
    unsigned long long field_318;
} struct_0;

void sub_4258c4(struct_0 *a0, unsigned long a1)
{
    a0->field_318 = a1;
    return;
}

typedef struct struct_0 {
    char padding_0[800];
    unsigned long long field_320;
} struct_0;

int sub_4258cc(struct_0 *a0)
{
    return a0->field_320;
}

typedef struct struct_0 {
    char padding_0[824];
    unsigned long long field_338;
} struct_0;

int sub_4258d4(struct_0 *a0)
{
    return a0->field_338;
}

long long sub_4258dc(unsigned long a0)
{
    unsigned long v0;  // [bp-0x30]
    int tmp_0;  // tmp #0
    char v1;  // [bp-0x18]
    char v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    tmp_0 = sub_428a24(a0 - 1, &v1);
    if (tmp_0)
        return *((long long *)&v2);
    return 0;
}

int sub_425914()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    char v2;  // x0
    unsigned int v3;  // w2
    unsigned long long v4;  // x2
    unsigned long long v5;  // x29
    unsigned long long v6;  // x29
    void* v7;  // x1
    unsigned long long v8;  // x29
    unsigned long long v9;  // x29

    v0 = &v1;
    v3 = v2;
    if (v3 == 255)
    {
        v8 = v0;
        return;
    }
    v4 = v3 & 112;
    if ((unsigned int)v4 == 32)
    {
        v5 = v0;
        return;
    }
    if ((char)[D] arm64g_calculate_condition(0x83<64>, x2<8>, 0x20<64>, 0x0<64>))
    {
        if ((unsigned int)v4 == 64)
        {
            v6 = v0;
            sub_4258d4(v7);
            return;
        }
        else if ((unsigned int)v4 == 80)
        {
            v8 = v0;
            return;
        }
        else if ((unsigned int)v4 == 48)
        {
            v9 = v0;
            return;
        }
    }
    else
    {
        if (!(unsigned int)v4)
        {
            v8 = v0;
            return;
        }
        else if ((unsigned int)v4 == 16)
        {
            v8 = v0;
            return;
        }
    }
    abort(); /* do not return */
}

typedef struct struct_2 {
    char padding_0[1608];
    unsigned long long field_648;
    char padding_650[32];
    char field_670;
} struct_2;

typedef struct struct_8 {
    char padding_0[1568];
    struct struct_1 *field_620;
} struct_8;

typedef struct struct_1 {
    char padding_0[1568];
    unsigned long long field_620;
} struct_1;

typedef struct struct_4 {
    char padding_0[1];
    char field_1;
} struct_4;

typedef struct struct_3 {
    char padding_0[1];
    unsigned short field_1;
} struct_3;

typedef struct struct_0 {
    char padding_0[1];
    unsigned int field_1;
} struct_0;

typedef struct struct_6 {
    char padding_0[1576];
    unsigned long long field_628;
    unsigned long long field_630;
    char padding_638[8];
    unsigned int field_640;
    char padding_644[20];
    unsigned long long field_658;
} struct_6;

typedef struct struct_5 {
    char padding_0[1592];
    unsigned long long field_638;
    unsigned int field_640;
} struct_5;

typedef struct struct_9 {
    unsigned long long field_0;
    unsigned int field_8;
} struct_9;

typedef struct struct_7 {
    char padding_0[1576];
    unsigned long long field_628;
    unsigned long long field_630;
    char padding_638[8];
    unsigned int field_640;
} struct_7;

extern unsigned short g_42b0dc[4];

int sub_42598c()
{
    unsigned long long v6[205];  // [bp+0x100078]
    unsigned long v7;  // [bp+0x100080]
    char *v72;  // x20
    unsigned long long *v73;  // x22
    unsigned long v83;  // x20
    unsigned long v84;  // x19
    unsigned long long *v100;  // x21
    char *v101;  // x0
    unsigned long long v113[205];  // x0
    unsigned long v115;  // x1
    unsigned int v119;  // w23

    (unsigned int)v101 = sub_42543c(sub_42543c(v72, v73), v100);
    v83 = v101;
    v113 = v6;
    if (97 >= v113)
    {
        v115 = -(v7 * *((long long *)(v84 + 1624)));
        *((unsigned int *)(v84 + (__ROL__(v113, 4) & -0x10) + 8)) = v119;
    }
}

typedef struct struct_0 {
    char padding_0[784];
    unsigned long long field_310;
    struct struct_1 *field_318;
    unsigned long long field_320;
    char padding_328[16];
    unsigned long long field_338;
    unsigned long long field_340;
    char padding_348[8];
    unsigned long long field_350;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[484];
    unsigned long long field_1f0;
    unsigned int field_1f8;
    char padding_1fc[1028];
    unsigned long long field_600;
    unsigned int field_608;
    char padding_60c[28];
    unsigned long long field_628;
    unsigned long long field_630;
    char padding_638[8];
    unsigned int field_640;
    char padding_644[4];
    unsigned long long field_648;
    unsigned long long field_650;
    unsigned long long field_658;
    unsigned long long field_660;
    unsigned long long field_668;
    char field_670;
    char field_671;
    char field_672;
    char field_673;
    char padding_674[4];
    unsigned long long field_678;
} struct_3;

typedef struct struct_2 {
    char padding_0[4];
    unsigned int field_4;
} struct_2;

typedef struct struct_5 {
    char padding_0[264];
    unsigned long long field_108;
} struct_5;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned int field_8;
} struct_4;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
} struct_1;

extern char g_42b13c;

int sub_425e84(struct_0 *a0, struct_3 *a1)
{
    unsigned long v0;  // [bp-0x90]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]
    struct_0 *v7;  // x20
    struct_3 *v8;  // x19
    unsigned int v9[2];  // x1
    struct_2 *v10;  // x0
    struct_2 *v11;  // x21
    unsigned int v12[2];  // x1
    char v13[11];  // x22
    unsigned long long v14;  // x20
    struct_5 *v15;  // x3
    unsigned long v16;  // x0, Other Possible Types: unsigned long long
    struct_3 *v17;  // x2, Other Possible Types: unsigned long
    unsigned long long v18;  // x1
    char *v19;  // x0, Other Possible Types: unsigned long
    char v20[1];  // x23, Other Possible Types: unsigned long
    unsigned int v21[2];  // x0, Other Possible Types: unsigned long
    unsigned int v22;  // w2
    struct_4 *v23;  // x2, Other Possible Types: unsigned long
    char *v25;  // x0
    char *v27;  // x0, Other Possible Types: unsigned long, unsigned long long
    unsigned long v28;  // x1, Other Possible Types: unsigned long long
    void* v29;  // x24, Other Possible Types: unsigned long
    char v30[1];  // x23, Other Possible Types: unsigned long
    unsigned long long v31;  // x1
    unsigned long long v32;  // x2
    unsigned long long v33;  // x3
    unsigned long long v34;  // x0
    unsigned int v36;  // w2

    v0 = &v6;
    v7 = a0;
    v8 = a1;
    memset(a1, 0, 1664);
    v9 = a0->field_318;
    a0->field_350 = 0;
    a0->field_320 = 0;
    if (!v9)
        return 5;
    (unsigned int)v10 = sub_428a24(-1 + (char *)v9 + (__ROL__(v7->field_340, 1) & 1), &v7->padding_328);
    v11 = v10;
    if (!v10)
    {
        v12 = v7->field_318;
        if (v12[0] == 3531608424 && v12[1] == 3556769793)
        {
            v14 = v7->field_310;
            v8->field_630 = 31;
            v8->field_640 = 1;
            v15 = v14 + 304;
            v8->field_628 = 304;
            v16 = 8;
            v17 = v8;
            do
            {
                *((int *)(v17 + 8)) = 1;
                *((unsigned long *)v17) = v16;
                v17 += 16;
                v16 += 8;
            } while (v16 != 0x100);
            v21 = v14 + 592;
            while (true)
            {
                v22 = *((int *)v21);
                if (!v22)
                    break;
                if (v22 == 1179680769)
                {
                    v23 = &v8->padding_1fc[516];
                    do
                    {
                        *((int *)(v23 + 8)) = 1;
                        *((unsigned int *[2])v23) = 18446744073709550608 + v21 - v15 - (char *)v8 + v23;
                        v23 += 16;
                    } while (v23 != &v8->field_600);
                }
                v21 += *((int *)(v21 + 4));
            }
            v8->field_673 = 1;
            v8->field_1f0 = 560 + v14 - (char *)v15;
            v8->field_1f8 = 1;
            v8->field_608 = 4;
            v8->field_600 = v15->field_108 - (char *)v15;
            v8->field_668 = 96;
        }
    }
    v13 = (char *)&v10->field_4 - v10->field_4;
    v8->field_648 = v7->field_338;
    v20 = &v13[9];
    v19 = &v20[1 + strlen(v20)];
    if (v13[9] == 101 && v13[10] == 104)
    {
        v18 = *((long long *)&v19);
        v19 += 8;
        v20 = v13 + 1;
        v8->field_678 = v18;
    }
    if (v13[8] > 3)
    {
        if (!(*((char *)v19) == 8) || !(!*((char *)(v19 + 1))))
            goto LABEL_426288;
        v19 += 2;
    }
    v8->field_660 = v3;
    (unsigned int)v25 = sub_425464(sub_42543c(v19, &v3), &v4);
    v8->field_658 = v4;
    if (v13[8] == 1)
    {
        v27 = v25 + 1;
        v28 = *(v25);
    }
    else
    {
        (unsigned int)v27 = sub_42543c(v25, &v3);
        v28 = v3;
    }
    v8->field_668 = v28;
    v8->field_671 = 255;
    v29 = 0;
    if (*((char *)v20) == 122)
    {
        v20 += 1;
        (unsigned int)v27 = sub_42543c(v27, &v3);
        v8->field_672 = 1;
        v29 = v27 + v3;
    }
    v30 = v20 + 1;
    while (true)
    {
        v31 = *((char *)(v30 - 1));
        if (!(unsigned int)v31)
        {
            if (v29)
                v27 = v29;
            break;
        }
        if ((unsigned int)v31 == 76)
        {
            v8->field_671 = *((char *)v27);
            goto LABEL_426118;
        }
        else if ((unsigned int)v31 != 82)
        {
            if ((unsigned int)v31 == 80)
            {
                v2 = v27 + 1;
                v1 = v2;
                sub_425914(v27, v31, v2);
                v27 = sub_4254a4(v27, v31, v32, v33);
                v8->field_650 = v5;
            }
            else if ((unsigned int)v31 == 83)
            {
                v8->field_673 = 1;
            }
            else
            {
                v27 = v29;
                break;
            }
LABEL_426170:
            v30 += 1;
        }
        else
        {
            v8->field_670 = *((char *)v27);
LABEL_426118:
            v27 += 1;
            goto LABEL_426170;
        }
    }
    if (!v27)
    {
LABEL_426288:
        return 3;
    }
    sub_42598c();
    v34 = v8->field_670;
    if ((unsigned int)v34 == 255)
        v36 = 0;
    if (4 < ((unsigned int)v34 & 7))
        goto LABEL_0x4261e4;
    else
        goto LABEL_0x4261bc;
}

typedef struct struct_1 {
    char field_0;
    struct struct_0 *field_1;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern char g_42b144;

int sub_4262a8(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v6;  // [bp-0x200]
    unsigned long v8;  // x4
    struct struct_0 **v19;  // x0
    unsigned long v22;  // x27
    unsigned long v24;  // x25, Other Possible Types: unsigned long long

    if (a1 == v19)
        a0 = 0;
    else
        a0 = 1;
    v24 = a2;
    if (63 < (unsigned int)v24)
        abort(); /* do not return */
    (&v6)[v24] = a0;
    v24 = (unsigned int)v24 + 1;
    v8 = v22;
}

typedef struct struct_3 {
    unsigned long long field_0;
    char padding_8[240];
    unsigned long long field_f8;
    char padding_100[528];
    unsigned int field_310;
    char padding_314[44];
    unsigned long long field_340;
    char padding_348[47];
    char field_377;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
    char padding_8[240];
    unsigned long long field_f8;
    char padding_100[528];
    unsigned long long field_310;
    char padding_318[40];
    unsigned long long field_340;
    char padding_348[47];
    char field_377;
} struct_5;

typedef struct struct_4 {
    struct struct_2 *field_0;
    unsigned int field_8;
    char padding_c[1564];
    unsigned long long field_628;
    char padding_630[8];
    char *field_638;
    unsigned int field_640;
    char padding_644[47];
    char field_673;
} struct_4;

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned int field_8;
    char padding_c[1564];
    unsigned long long field_628;
    char padding_630[8];
    unsigned long long field_638;
    unsigned int field_640;
    char padding_644[47];
    char field_673;
} struct_1;

typedef struct struct_0 {
    char padding_0[4412016];
    char field_435270;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

extern char g_42b164;
extern char g_435270;

void sub_42685c(struct_3 *a0, struct_4 *a1)
{
    unsigned long v0;  // [bp-0x440]
    unsigned long v1;  // [bp-0x438]
    unsigned long v2;  // [bp-0x430]
    unsigned long v3;  // [bp-0x428]
    unsigned long v4;  // [bp-0x420]
    unsigned long v5;  // [bp-0x418]
    unsigned long v6;  // [bp-0x410]
    unsigned long v7;  // [bp-0x408]
    unsigned long v8;  // [bp-0x400]
    unsigned long v9;  // [bp-0x3f8]
    unsigned long v10;  // [bp-0x3f0]
    unsigned long v11;  // [bp-0x3e8]
    char *v12;  // [bp-0x3d8]
    unsigned long long v13;  // [bp-0x3d0]
    unsigned long long v14;  // [bp-0x3c8]
    char v15;  // [bp-0x3c0]
    char v16;  // [bp-0x2c8]
    char v17;  // [bp-0x80]
    char v19;  // [bp-0x49]
    char v20;  // [bp+0x0]
    unsigned long v21;  // x30
    unsigned long v22;  // x19
    unsigned long v23;  // x20
    unsigned long v24;  // x21
    unsigned long v25;  // x22
    struct_5 *v26;  // x19
    unsigned long v27;  // x23
    unsigned long v28;  // x24
    unsigned long v30;  // x25
    unsigned long v31;  // x26
    unsigned long v32;  // x27
    unsigned long v33;  // x28
    unsigned long long v34;  // x0
    void* v35;  // x0
    unsigned long v36;  // x23, Other Possible Types: unsigned long long
    struct_1 *v37;  // x26, Other Possible Types: unsigned long
    char *v38;  // x22, Other Possible Types: unsigned long, unsigned long long
    struct_0 *v39;  // x20, Other Possible Types: unsigned long long, unsigned long
    unsigned long v40;  // x0
    unsigned long long v46;  // x0
    unsigned long v48;  // x0, Other Possible Types: unsigned long long
    unsigned long long v59;  // x29

    v0 = &v20;
    v1 = v21;
    v2 = v22;
    v3 = v23;
    v4 = v24;
    v5 = v25;
    v26 = a0;
    v6 = v27;
    v7 = v28;
    v8 = v30;
    v9 = v31;
    v10 = v32;
    v11 = v33;
    memcpy(&v15, a0, 960);
    if ((!((char)(*((long long *)&v17) >> 62) & 1) || !v19) && !*((long long *)&v16))
        sub_4256a8(&v15, *((long long *)&a0->field_310), &v13);
    if (((char)(a0->field_340 >> 62) & 1))
        a0->field_377 = 0;
    v34 = a1->field_640;
    v26->field_f8 = 0;
    if ((unsigned int)v34 == 1)
    {
        v36 = sub_4256e4(v34, a1) + a1->field_628;
LABEL_426924:
        v26->field_310 = v36;
        v37 = a1;
        v38 = &v26->padding_348[16];
        v39 = 0;
        v12 = &g_42b164;
        while (true)
        {
            v40 = *((int *)(v37 + 8)) - 1;
            if (4 >= (unsigned int)v40)
                break;
            v39 += 1;
            v37 += 16;
            v38 += 1;
            if (v39 == 98)
            {
                v46 = v26->field_340;
                v48 = v46 & 9223372036854775807;
                if (!a1->field_673)
                {
                    v26->field_340 = v48;
                    v59 = v0;
                    return;
                }
                v48 = v46 | 0x8000000000000000;
            }
        }
    }
    else
    {
        if ((unsigned int)v34 != 2)
            abort(); /* do not return */
        (unsigned int)v35 = sub_42543c(a1->field_638, &v14);
        v36 = sub_4262a8(v35, v35 + v14, &v15, 0);
        goto LABEL_426924;
    }
}

extern unsigned long long g_434f40;
extern char g_435270;
extern char g_4352d4;

void sub_426a68(unsigned long long a0[105], unsigned int a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x6d0]
    unsigned long long v1;  // [bp-0x688]
    char v2;  // [bp-0x680]
    void* v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned int v5;  // [bp-0x40]
    char v6;  // [bp+0x0]
    unsigned long v7;  // x30
    unsigned long long v8;  // x29

    v0 = &v6;
    memset(a0, 0, 960);
    a0[99] = v7;
    a0[104] = 0x4000000000000000;
    if (sub_425e84(a0, &v2))
        abort(); /* do not return */
    if (!((!g_434f40 || (unsigned int)pthread_once(&g_4352d4, sub_425594)) && !g_435270))
    {
        sub_4256a8(a0, a1, &v1);
        v3 = 0;
        v5 = 1;
        v4 = 31;
        sub_42685c(a0, &v2);
        a0[99] = a2;
        v8 = v0;
        return;
    }
    sub_425594();
}

typedef struct struct_0 {
    char padding_0[792];
    unsigned long long field_318;
} struct_0;

typedef struct struct_1 {
    char padding_0[1640];
    unsigned long long field_668;
} struct_1;

void sub_426b44(struct_0 *a0, struct_1 *a1)
{
    unsigned long v0;  // [bp-0x20]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x29

    v0 = &v1;
    sub_42685c(a0, a1);
    if (*((int *)&a1->padding_0[8 + 16 * a1->field_668]) == 6)
    {
        a0->field_318 = 0;
        v2 = v0;
        return;
    }
    a0->field_318 = sub_4256e4(a0);
    v2 = v0;
    return;
}

typedef struct struct_0 {
    char padding_0[832];
    unsigned long long field_340;
} struct_0;

int sub_426b90(unsigned long long a0[4], struct_0 *a1)
{
    unsigned long v0;  // [bp-0x6c0]
    char v1;  // [bp-0x680]
    char v2;  // [bp-0x30]
    char v3;  // [bp+0x0]
    unsigned long long v4[4];  // x21
    unsigned int v6;  // w22
    struct struct_1 **v7;  // x5
    unsigned long v8;  // w0, Other Possible Types: unsigned int

    v0 = &v3;
    v4 = a0;
    while (true)
    {
        if (sub_425848(a1) - (a1->field_340 >> 63) != v4[3])
            v6 = 0;
        else
            v6 = 4;
        if (sub_425e84(a1, &v1))
            break;
        if (*((long long *)&v2))
        {
            v8 = v7(1, v6 | 2, v4[0], v4, a1);
            if (v8 == 7)
                return v8;
            if (v8 != 8)
                break;
        }
        if (v6)
            abort(); /* do not return */
        sub_426b44(a1, &v1);
    }
    return 2;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[8];
    struct struct_0 *field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

int sub_426c50(struct_1 *a0, void* a1)
{
    unsigned long v0;  // [bp-0x6d0]
    int tmp_10;  // tmp #10
    char v1;  // [bp-0x680]
    char v2;  // [bp-0x30]
    char v3;  // [bp+0x0]
    struct struct_0 **v4;  // x23
    void* v6;  // x21
    struct_1 *v7;  // x20
    unsigned long long v8;  // x0
    unsigned long long v9;  // x2
    unsigned long long v10;  // x0
    struct_1 *v11;  // x3
    unsigned long long v12;  // x4
    unsigned long long v13;  // x5
    struct struct_0 **v14;  // x5
    unsigned int v15;  // w19

    v0 = &v3;
    v4 = a0->field_10;
    v6 = a1;
    v7 = a0;
    while ((unsigned int)v8 == 5 || !(unsigned int)v8)
    {
        (unsigned int)v8 = sub_425e84(a1, &v1);
        v15 = v8;
        tmp_10 = v8;
        v9 = v7->field_0;
        v10 = 1;
        if ((int)tmp_10 == 5)
            a1 = 26;
        else
            a1 = 10;
        v11 = v7;
        v12 = v6;
        v13 = a0->field_18;
        if (v4())
            break;
        if (v15 == 5)
        {
            return v15;
        }
        else if (!*((long long *)&v2))
        {
LABEL_426cd8:
            sub_426b44(v6, &v1);
        }
        else
        {
            v15 = v14(1, 10, v7->field_0, v7, v6);
            if (v15 != 7)
            {
                if (!(v15 == 8))
                    break;
                goto LABEL_426cd8;
            }
        }
    }
    return 2;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[784];
    unsigned short field_330;
    unsigned short field_332;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_-8;
    char field_0;
} struct_1;

long long sub_426d3c(unsigned long a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0xa70]
    char v1;  // [bp-0xa40]
    unsigned long v2;  // [bp-0x728]
    unsigned long long v3;  // [bp-0x700]
    char v4;  // [bp-0x6f0]
    char v5;  // [bp-0x680]
    char v6;  // [bp-0x678]
    char v7;  // [bp-0x668]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x18]
    char v12;  // [bp-0x8]
    char v13;  // [bp+0x0]
    struct_0 *v14;  // x19
    unsigned long long v16;  // x3
    unsigned long long *v17;  // x1, Other Possible Types: unsigned long
    char *v18;  // x2, Other Possible Types: unsigned long
    struct_1 *v19;  // x0, Other Possible Types: unsigned long

    v0 = &v13;
    v14 = a1;
    memset(&v1, 0, 960);
    v2 = a0 + 1;
    v3 = 0x4000000000000000;
    if (sub_425e84(&v1, &v5))
    {
        return 0;
    }
    else if (*((int *)&v10) == 2)
    {
        return 0;
    }
    else
    {
        v19 = &v6;
        v18 = v14 + 1;
        v17 = &v14->padding_20;
        do
        {
            v16 = *((char *)v19);
            *((char *)v18) = v16;
            if ((unsigned int)v16 == 1 || (unsigned int)v16 == 2)
                *((long long *)v17) = *((long long *)(v19 - 8));
            else
                *((long long *)v17) = 0;
        } while ((v19 = &v7, v18 += 1, v17 += 8, v19 != &v8));
        v14->field_10 = *((long long *)&v8);
        v14->field_330 = *((long long *)&v9);
        v14->field_332 = *((long long *)&v11);
        v14->field_18 = *((long long *)&v4);
        v14->field_8 = *((long long *)&v12);
        return v14;
    }
}

void sub_426e30(unsigned long a0, unsigned long a1)
{
    return;
}

typedef struct struct_1 {
    char field_0;
} struct_1;

int sub_426e34(unsigned long long a0[4])
{
    struct_1 *v0;  // [bp-0xed0]
    char v1;  // [bp-0xec8], Other Possible Types: unsigned long
    unsigned long long v2[4];  // [bp-0xec0]
    unsigned long v3;  // [bp-0xe08]
    char v4;  // [bp-0xe00]
    char v5;  // [bp-0xa40]
    char v6;  // [bp-0x730]
    char v7;  // [bp-0x728]
    char v8;  // [bp-0x700]
    char v9;  // [bp-0x680]
    char v10;  // [bp-0x30]
    char v11;  // [bp+0x0]
    unsigned long long v12[4];  // x20
    unsigned int v13;  // x30
    unsigned long long v14;  // x0
    struct struct_0 **v15;  // x5
    unsigned long long v16;  // x0
    unsigned long long v18;  // x20

    v0 = &v11;
    v2[0] = a0;
    v12 = a0;
    sub_426a68(&v4, (unsigned int)&v11, v13);
    memcpy(&v5, &v4, 960);
    while (true)
    {
        (unsigned int)v14 = sub_425e84(&v5, &v9);
        if ((unsigned int)v14 == 5)
            return (unsigned int)v2;
        if ((unsigned int)v14)
            break;
        if (*((long long *)&v10))
        {
            (unsigned int)v16 = v15(1, 1, v12[0], v12, &v5);
            if ((unsigned int)v16 == 6)
            {
                v12[2] = 0;
                v12[3] = sub_425848(&v5) - (*((long long *)&v8) >> 63);
                memcpy(&v5, &v4, 960);
                if (sub_426b90(v12, &v5) == 7)
                {
                    v18 = *((long long *)&v7);
                    v3 = sub_42573c(&v4, &v5);
                    sub_426e30(*((long long *)&v6), *((long long *)&v1));
                    v1 = v18;
                    return (unsigned int)v2;
                }
            }
            else if ((unsigned int)v16 != 8)
            {
                break;
            }
        }
        sub_426b44(&v5, &v9);
    }
    return (unsigned int)v2;
}

typedef struct struct_0 {
    char field_0;
} struct_0;

long long sub_426fac(unsigned long long a0[4], unsigned long a1, unsigned long a2)
{
    struct_0 *v0;  // [bp-0x850]
    char v1;  // [bp-0x848], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x788]
    char v3;  // [bp-0x780]
    char v4;  // [bp-0x3c0]
    char v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    char v7;  // [bp+0x0]
    unsigned int v8;  // x30
    unsigned long long v9;  // x19

    v0 = &v7;
    sub_426a68(&v3, (unsigned int)&v7, v8);
    memcpy(&v4, &v3, 960);
    a0[2] = a1;
    a0[3] = a2;
    if (sub_426c50(a0, &v4) == 7)
    {
        v9 = *((long long *)&v6);
        v2 = sub_42573c(&v3, &v4);
        sub_426e30(*((long long *)&v5), *((long long *)&v1));
        v1 = v9;
        return a0;
    }
    return a0;
}

typedef struct struct_0 {
    char field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

void sub_4270a0(struct_1 *a0)
{
    struct_0 *v0;  // [bp-0x850]
    unsigned long v1;  // [bp-0x848], Other Possible Types: char
    struct_1 *v2;  // [bp-0x840]
    unsigned long v3;  // [bp-0x788]
    char v4;  // [bp-0x780]
    char v5;  // [bp-0x3c0]
    char v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8]
    char v8;  // [bp+0x0]
    unsigned int v9;  // x30
    unsigned long v10;  // x0, Other Possible Types: unsigned long long
    unsigned long long v11;  // x19
    struct_0 *v12;  // x29

    v0 = &v8;
    v2 = a0;
    sub_426a68(&v4, (unsigned int)&v8, v9);
    memcpy(&v5, &v4, 960);
    if (a0->field_10)
        (unsigned int)v10 = sub_426c50(a0, &v5);
    else
        (unsigned int)v10 = sub_426b90(a0, &v5);
    if ((unsigned int)v10 == 7)
    {
        v11 = *((long long *)&v7);
        v3 = sub_42573c(&v4, &v5);
        sub_426e30(*((long long *)&v6), *((long long *)&v1));
        v1 = v11;
        v12 = v0;
        return;
    }
    abort(); /* do not return */
}

typedef struct struct_0 {
    char field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

long long sub_42719c(struct_1 *a0)
{
    struct_0 *v0;  // [bp-0x850]
    char v1;  // [bp-0x848], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x788]
    char v3;  // [bp-0x780]
    char v4;  // [bp-0x3c0]
    char v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    char v7;  // [bp+0x0]
    unsigned int v8;  // x30
    unsigned long long v9;  // x19

    v0 = &v7;
    if (!a0->field_10)
    {
        sub_426e34(a0);
        return a0;
    }
    sub_426a68(&v3, (unsigned int)&v7, v8);
    memcpy(&v4, &v3, 960);
    if (sub_426c50(a0, &v4) == 7)
    {
        v9 = *((long long *)&v6);
        v2 = sub_42573c(&v3, &v4);
        sub_426e30(*((long long *)&v5), *((long long *)&v1));
        v1 = v9;
        return a0;
    }
    abort(); /* do not return */
}

typedef struct struct_1 {
    char padding_0[8];
    struct struct_0 *field_8;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

void sub_427294(struct_1 *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    struct struct_0 **v2;  // x2
    unsigned long long v3;  // x29

    v0 = &v1;
    if (a0->field_8)
        v2(1, a0);
    v3 = v0;
    return;
}

typedef struct struct_1 {
    char field_0;
} struct_1;

long long sub_4272b8(struct struct_0 **a0, unsigned long long a1)
{
    struct_1 *v0;  // [bp-0xae0]
    char v1;  // [bp-0xa40]
    char v2;  // [bp-0x680]
    char v3;  // [bp+0x0]
    struct struct_0 **v4;  // x22
    unsigned int v5;  // x30
    unsigned long long v6;  // x19

    v0 = &v3;
    v4 = a0;
    sub_426a68(&v1, (unsigned int)&v3, v5);
    while (true)
    {
        v6 = sub_425e84(&v1, &v2);
        if (!((unsigned int)v6 == 5) && !(!(unsigned int)v6) || !(!v4(&v1, a1)))
            break;
        if ((unsigned int)v6 == 5)
            return v6;
        sub_426b44(&v1, &v2);
    }
    return 3;
}

int sub_427388(char *a0, unsigned long long *a1)
{
    void* v0;  // x2, Other Possible Types: unsigned long
    void* v1;  // x3, Other Possible Types: unsigned long
    unsigned long long v2;  // x5
    unsigned long long v3;  // x4

    v0 = 0;
    v1 = 0;
    do
    {
        v2 = *((char *)a0);
        a0 += 1;
        v3 = (v2 & 127) << (char)(v1 & 63);
        v1 = (unsigned int)v1 + 7;
        v0 |= v3;
    } while (((char)(v2 >> 7) & 1));
    *(a1) = v0;
    return a0;
}

void sub_4273b0(char *a0, unsigned long long *a1)
{
    unsigned long v0;  // x2, Other Possible Types: unsigned long long
    void* v1;  // x3, Other Possible Types: unsigned long
    unsigned long long v2;  // x4
    unsigned long long v3;  // x5

    v0 = 0;
    v1 = 0;
    do
    {
        v2 = *((char *)a0);
        a0 += 1;
        v3 = (v2 & 127) << (char)(v1 & 63);
        v1 = (unsigned int)v1 + 7;
        v0 |= v3;
    } while (((char)(v2 >> 7) & 1));
    if (63 >= (unsigned int)v1 && ((char)(v2 >> 6) & 1))
        v0 = -1 << (char)(v1 & 63) | v0;
    *(a1) = v0;
    return;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long sub_4273f0(unsigned long a0, struct_0 *a1, struct_0 *a2)
{
    unsigned long long v0;  // x3
    unsigned long long v1;  // x1
    void* v2;  // x0, Other Possible Types: unsigned long, unsigned long long

    v0 = a1->field_8;
    v1 = a2->field_8;
    if (v1 <= v0)
        v2 = 0;
    else
        v2 = 4294967295;
    if (v0 <= v1)
        return v2;
    return 1;
}

typedef struct struct_0 {
    struct struct_0 *field_0;
    unsigned long long field_8;
} struct_0;

int sub_42740c()
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned long v3;  // x0
    unsigned long long v4;  // x24
    struct struct_1 **v5;  // x1
    struct struct_1 **v6;  // x25
    unsigned long v7;  // x20
    unsigned int v8;  // w4
    unsigned int v9;  // w21
    unsigned long v10;  // x1
    unsigned long v11;  // x2
    unsigned long v13;  // x3, Other Possible Types: unsigned long long
    unsigned long v14;  // x19, Other Possible Types: unsigned long long
    unsigned long v15;  // x21
    unsigned long v16;  // x22
    struct_0 *v17;  // x1
    struct_0 *v18;  // x0
    unsigned long long v19;  // x29

    v0 = &v2;
    v4 = v3;
    v6 = v5;
    v7 = v11;
    for (v14 = (__ROL__((unsigned int)v13, 1) & -2) + 1; v8 > (unsigned int)v14; v14 = (__ROL__((unsigned int)v14, 1) & -2) + 1)
    {
        v9 = (unsigned int)v14 + 1;
        if (v8 > v9)
        {
            v10 = v14 << 32 >> 63 & -0x800000000 | __ROL__(v14, 3) & 34359738360 & 34359738367;
            v11 += v10;
            v1 = v13;
            v13 = v1;
            v14 = (0 <= v6(v4, *((long long *)(v7 + v10)), *((long long *)(v11 + 8))) ? (unsigned int)v14 : v9);
        }
        v15 = v13 << 32 >> 63 & -0x800000000 | __ROL__(v13, 3) & 34359738360 & 34359738367;
        v16 = v14 << 32 >> 63 & -0x800000000 | __ROL__(v14, 3) & 34359738360 & 34359738367;
        v17 = *((long long *)(v11 + v15));
        v11 = *((long long *)(v11 + v16));
        if (!((char)(v6(v4, v17, v11) >> 31) & 1))
        {
            v19 = v0;
            return;
        }
        v13 = v14;
        v18 = *((long long *)(v7 + v15));
        *((long long *)(v7 + v15)) = *((long long *)(v7 + v16));
        *((struct_0 **)(v7 + v16)) = v18;
    }
    v19 = v0;
    return;
}

void sub_4274cc(unsigned long long a0, unsigned long long a1, unsigned long long a2[3])
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // x19
    unsigned long v3;  // w20, Other Possible Types: unsigned int
    unsigned long long v4;  // x3
    unsigned long long v5;  // x4
    unsigned long v6;  // x23
    unsigned long long v7;  // x0
    unsigned long v8;  // w19, Other Possible Types: unsigned int
    unsigned long long *v9;  // x20, Other Possible Types: unsigned long
    unsigned long long v10;  // x29

    v0 = &v1;
    v2 = a2[1];
    v3 = __ROL__(v2, 63) & 9223372036854775807;
    while (true)
    {
        v3 = (unsigned int)v3 - 1;
        if (((char)(v3 >> 31) & 1))
            break;
        sub_42740c(a0, a1, a2, v4, v5);
    }
    v9 = 0;
    v8 = (unsigned int)v2 - 1;
    v6 = &a2[2 + v8];
    while ((unsigned int)v8 > 0)
    {
        v7 = a2[2];
        a2[2] = *((long long *)(v6 + v9));
        *((unsigned long long *)(v6 + v9)) = v7;
        v8 = (unsigned int)v8 - 1;
        v9 -= 8;
        sub_42740c(v7, a1, a2, v4, v5);
    }
    v10 = v0;
    return;
}

extern char g_42b16c;

int sub_427580()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned int v2;  // w0
    unsigned long long v5;  // x29

    v0 = &v1;
    if (v2 == 255)
    {
        v5 = v0;
        return;
    }
    if (4 < (v2 & 7))
        goto LABEL_0x4275c8;
    else
        goto LABEL_0x4275a0;
}

int sub_4275e0()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned int v2;  // w0
    unsigned long long v3;  // x0
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long long v6;  // cc_dep1
    unsigned long long v7;  // cc_dep2
    unsigned long long v8;  // x29

    v0 = &v1;
    if (v2 == 255)
    {
        v8 = v0;
        return;
    }
    v3 = v2 & 112;
    if ((unsigned int)v3 == 32)
    {
        v8 = v0;
        return;
    }
    if (!((char)[D] arm64g_calculate_condition(0x83<64>, x0<8>, 0x20<64>, 0x0<64>)))
    {
        v4 = v3;
        v5 = 16;
        if (!(unsigned int)v3)
        {
            v8 = v0;
            return;
        }
    }
    else if ((unsigned int)v3 != 48)
    {
        v6 = v3;
        v7 = 80;
    }
    else
    {
        v8 = v0;
        return;
    }
    if (!((char)[D] arm64g_calculate_condition(0x83<64>, x0<8>, 0x20<64>, 0x0<64>)))
        abort(); /* do not return */
}

int sub_427640()
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]
    unsigned int v2;  // w0
    unsigned long long v3;  // x0
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long long v6;  // cc_dep1
    unsigned long long v7;  // cc_dep2
    unsigned long long v8;  // x29

    v0 = &v1;
    if (v2 == 255)
    {
        v8 = v0;
        return;
    }
    v3 = v2 & 112;
    if ((unsigned int)v3 == 32)
    {
        v8 = v0;
        return;
    }
    if (!((char)[D] arm64g_calculate_condition(0x83<64>, x0<8>, 0x20<64>, 0x0<64>)))
    {
        v4 = v3;
        v5 = 16;
        if (!(unsigned int)v3)
        {
            v8 = v0;
            return;
        }
    }
    else if ((unsigned int)v3 != 48)
    {
        v6 = v3;
        v7 = 80;
    }
    else
    {
        v8 = v0;
        return;
    }
    if (!((char)[D] arm64g_calculate_condition(0x83<64>, x0<8>, 0x20<64>, 0x0<64>)))
        abort(); /* do not return */
}

int sub_4276a0()
{
    unsigned long v0;  // [bp-0x40]
    char v2;  // [bp+0x0]
    unsigned int v3;  // w0
    unsigned long long v4;  // x20
    struct struct_0 **v5;  // x2
    struct struct_0 **v6;  // x1
    struct struct_0 **v7;  // x22
    struct struct_0 **v8;  // x1
    struct struct_0 **v9;  // x19

    v0 = &v2;
    v4 = v3 & 255 & 255;
    v9 = v5;
    v7 = v6;
    if ((unsigned int)v4 == 80)
        v8 = *((long long *)((char *)v5 + 7 & -8));
    if (12 < ((unsigned int)v4 & 15))
        goto LABEL_0x42775c;
    else
        goto LABEL_0x4276e4;
}

long long sub_427790(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    char v4;  // [bp-0x10]
    char v5;  // [bp-0x8]
    char v6;  // [bp+0x0]
    unsigned long v7;  // x30
    unsigned long v8;  // x21
    unsigned long v9;  // x22
    unsigned long long v10;  // x3
    unsigned long long v11;  // x2
    unsigned long long v12;  // x1
    void* v13;  // x0, Other Possible Types: unsigned long long, unsigned long

    v0 = &v6;
    v1 = v7;
    v2 = v8;
    v3 = v9;
    sub_4275e0(a0, a1);
    sub_4276a0(a0, a1, a2, v10);
    sub_4276a0(a0, a1, a2, v10);
    v11 = *((long long *)&v4);
    v12 = *((long long *)&v5);
    if (v12 <= v11)
        v13 = 0;
    else
        v13 = 4294967295;
    if (v11 <= v12)
        return v13;
    return 1;
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

int sub_427820(char a0[10])
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    char *v4;  // x20
    char v5[10];  // x19
    unsigned long v6;  // x0
    struct_0 *v7;  // x1, Other Possible Types: unsigned long
    unsigned long long v8;  // x2
    char *v9;  // x0
    char *v10;  // x0, Other Possible Types: unsigned long
    char *v11;  // x19, Other Possible Types: unsigned long
    char *v12;  // x0, Other Possible Types: unsigned long long, unsigned long
    unsigned long long v13;  // x1
    unsigned long long v14;  // x3
    unsigned int v15;  // w0

    v0 = &v3;
    v4 = &a0[9];
    v5 = a0;
    v6 = strlen(v4) + 1;
    v7 = &v4[v6];
    if (v5[8] > 3)
    {
        v8 = v4[v6];
        if ((unsigned int)v8 != 8)
            return 255;
        if (v7->field_1)
            return 255;
        v7 += 1;
    }
    if (v5[9] != 122)
        return 0;
    v9 = sub_4273b0(sub_427388(v7, &v1), &v2);
    if (v5[8] == 1)
        v10 = v9 + 1;
    else
        (unsigned int)v10 = sub_427388(v9, &v1);
    v11 = v5 + 1;
    (unsigned int)v12 = sub_427388(v10, &v1);
    while (true)
    {
        v13 = *((char *)v11);
        if ((unsigned int)v13 == 82)
        {
            v15 = *((char *)v12);
            return v15;
        }
        if ((unsigned int)v13 == 80)
        {
            v12 = sub_4276a0(v12, v13, v8, v14);
        }
        else
        {
            if ((unsigned int)v13 != 76)
                break;
            v12 += 1;
        }
        v11 += 1;
    }
}

typedef struct struct_0 {
    char padding_0[32];
    char field_20;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
    unsigned long long field_10;
} struct_1;

int sub_42791c(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]
    unsigned int v6;  // w0
    unsigned long long v7;  // x1
    void* v8;  // x0, Other Possible Types: unsigned long
    unsigned int v9;  // w21
    char v10[10];  // x20, Other Possible Types: unsigned long long, unsigned long
    unsigned long long v11;  // x3
    unsigned long long v12;  // x0
    unsigned long long v13;  // x1
    unsigned long long v14;  // x1
    struct_1 *v15;  // x19, Other Possible Types: unsigned long

    v0 = &v3;
    v6 = __ROL__(*((short *)&a0->field_20), 61) & 16140901064495857919 & 255;
    v15 = a1;
    v9 = v6 & 255 & 255;
    sub_4275e0(*((unsigned long long *)&v6), a1);
    for (v8 = 0; *((int *)v15); v8 = v10)
    {
        v7 = *((int *)(v15 + 4));
        if (!(unsigned int)v7)
        {
            v10 = v8;
        }
        else
        {
            v10 = v8;
            if ((a0->field_20 >> 2 & 1))
            {
                v10 = v15 + 4 - v7;
                if (v10 != v8)
                {
                    (unsigned int)v8 = sub_427820(v10);
                    v9 = v8;
                    sub_4275e0(v8, v7);
                }
            }
            if (v9)
            {
                sub_4276a0(v8, v7, a2, v11);
                sub_4276a0(v8, v7, a2, v11);
                (unsigned int)v12 = sub_427580(v8);
                v13 = -1;
                if (7 >= v12)
                    v14 = (1 << ((char)(__ROL__(v12, 3) & -8) & 63)) - 1;
                if ((char)[D] arm64g_calculate_condition(0xa<64>, And(x1<8>, Load(addr=stack_base-16, size=8, endness=Iend_LE)), 0x0<64>, 0x0<64>))
                    continue;
            }
            else
            {
                v1 = *((long long *)(v15 + 8));
                v2 = *((long long *)(v15 + 16));
                if (!v1)
                    continue;
            }
            if (v2 > a2 - v1)
                return v15;
        }
        v15 += *((int *)v15) + 4;
    }
    return 0;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int sub_427a7c(struct_0 *a0)
{
    return sub_427820((char *)&a0->field_4 - a0->field_4);
}

extern char g_435020;
extern char g_4352d8;
extern char g_4352e0;
extern char g_4352e8;
extern char g_435318;
extern char g_435460;
extern char g_435498;

long long sub_427a8c(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x90]
    unsigned long v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x28]
    unsigned long v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10], Other Possible Types: char
    char v9;  // [bp+0x0]
    unsigned int v10;  // w13
    unsigned long v11;  // x6
    unsigned long v12;  // x5
    unsigned long v14;  // x8
    unsigned long v15;  // x4
    unsigned long v16;  // x8
    unsigned long v17;  // x4
    unsigned long v18;  // x5
    unsigned long v19;  // x7
    unsigned long v20;  // x8
    unsigned long v21;  // x14
    unsigned long v22;  // x9
    unsigned long v23;  // x10
    unsigned long v24;  // x12
    unsigned long v25;  // x11
    unsigned int v26;  // w0
    unsigned long v28;  // x0
    unsigned long v29;  // x21
    unsigned long v30;  // x0
    unsigned long v31;  // x19
    unsigned long v32;  // x0
    unsigned long v33;  // x22
    unsigned long v34;  // x0
    unsigned long v35;  // x1
    unsigned long v36;  // x2
    unsigned long v37;  // x0
    unsigned long v38;  // x0
    unsigned long v39;  // x3
    unsigned long v40;  // x4
    unsigned long v41;  // x2
    unsigned long v42;  // x20
    unsigned long v43;  // x23
    unsigned long v44;  // x21

    v0 = &v9;
    if (a1 > 47)
        v10 = 1;
    else
        v10 = 0;
    v11 = *((long long *)(a0 + 16));
    v19 = *((long long *)a0);
    if (!(!v10 || !*((int *)(a2 + 40))))
    {
        v12 = *((long long *)(a0 + 40));
        if (false)
        {
            g_435020 = *((long long *)(a0 + 32));
            a1 = &g_435318;
            g_4352d8 = v12;
            do
            {
                *((long long *)(a1 - 48)) = 0;
                *((long long *)(a1 - 40)) = 0;
                *((unsigned long *)(a1 - 8)) = a1;
                a1 += 48;
            } while (a1 != 4412568);
            g_435460 = 0;
            g_4352e0 = &g_4352e8;
            *((int *)(a2 + 40)) = 0;
        }
        else
        {
            v17 = 0;
            v18 = 0;
            a1 = g_4352e0;
            while (a1)
            {
                v14 = *((long long *)a1);
                v15 = *((long long *)(a1 + 8));
                if (*((long long *)a2) >= v14 && v15 > *((long long *)a2))
                {
                    v19 = *((long long *)(a1 + 16));
                    v20 = *((long long *)(a1 + 24));
                    if (a1 != g_4352e0)
                    {
                        *((long long *)(v18 + 40)) = *((long long *)(a1 + 40));
                        *((long long *)(a1 + 40)) = g_4352e0;
                        g_4352e0 = a1;
                        goto LABEL_427c9c;
                    }
                }
                else
                {
                    if (!v14 && !v15)
                    {
                        v17 = a1;
                        break;
                    }
                    else
                    {
                        v16 = *((long long *)(a1 + 40));
                        v17 = a1;
                        if (v16)
                            v18 = a1;
                        a1 = v16;
                    }
                }
            }
        }
    }
    else if (a1 <= 25)
    {
        return 4294967295;
    }
    v17 = 0;
    v18 = 0;
    v21 = *((short *)(a0 + 24));
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v20 = 0;
    while (true)
    {
        v21 -= 1;
        if ((char)[D] arm64g_calculate_condition(0x2<64>, x14<8>, 0x1<64>, 0x0<64>))
            break;
        v26 = *((int *)v11);
        if (v26 == 1)
        {
            v39 = *((long long *)a2);
            a1 = v19 + *((long long *)(v11 + 16));
            if (v39 >= a1)
            {
                if (v22 > v39)
                    v22 = a1 + *((long long *)(v11 + 40));
                if (v22 > v39)
                    v23 = a1;
                if (v22 > v39)
                    v24 = 1;
            }
        }
        else if (v26 == 1685382480)
        {
            v20 = v11;
        }
        else if (v26 == 2)
        {
            v25 = v11;
        }
        v11 += 56;
    }
    if (!v24)
        return 0;
    if (v10)
    {
        if (v18 && v17)
        {
            *((long long *)(v18 + 40)) = *((long long *)(v17 + 40));
            *((long long *)(v17 + 40)) = g_4352e0;
            g_4352e0 = v17;
        }
        *((unsigned long *)(g_4352e0 + 16)) = v19;
        *((unsigned long *)(g_4352e0 + 24)) = v20;
        *((unsigned long *)(g_4352e0 + 32)) = v25;
        *((unsigned long *)g_4352e0) = v23;
        *((unsigned long *)(g_4352e0 + 8)) = v22;
    }
LABEL_427c9c:
    if (v20)
    {
        v28 = *((long long *)(v20 + 16));
        v29 = v19 + v28;
        v30 = *((char *)(v19 + v28));
        if ((unsigned int)v30 != 1)
            return 1;
        v31 = a2;
        sub_427640(v30, a1);
        (unsigned int)v32 = sub_4276a0(v30, a1, a2, v39);
        if (*((char *)(v29 + 2)) != 255 && *((char *)(v29 + 3)) == 59)
        {
            v1 = v32;
            sub_427640(v32, a1);
            v33 = sub_4276a0(v32, a1, a2, v39);
            v34 = *((long long *)&v3);
            if (!v34)
            {
                return 1;
            }
            else if (!((char)v33 & 3))
            {
                v35 = *((long long *)a2);
                if (v35 < v29 + *((int *)v33))
                    return 1;
                v38 = v34 - 1;
                if (v29 + *((int *)(v33 + (__ROL__(v38, 3) & -8))) > v35)
                {
                    v39 = v38;
                    v40 = 0;
                    while (true)
                    {
                        if (v39 <= v40)
                            abort(); /* do not return */
                        v38 = __ROL__(v39 + v40, 63) & 9223372036854775807;
                        v41 = __ROL__(v38, 3) & -8;
                        if (v35 < v29 + *((int *)(v33 + v41)))
                        {
                            v39 = v38;
                        }
                        else
                        {
                            a2 = v33 + v41;
                            v40 = v38 + 1;
                            if (v29 + *((int *)(a2 + 8)) > v35)
                                break;
                        }
                    }
                }
                v42 = __ROL__(v38, 3) & -8;
                v43 = v29 + *((int *)(v33 + v42 + 4));
                sub_427a7c(v43);
                sub_427580(v43);
                sub_4276a0(v43, v35, a2, v39);
                v44 = v29 + *((int *)(v33 + v42));
                if (v44 + v4 > *((long long *)v31))
                    *((unsigned long *)(v31 + 32)) = v43;
                *((unsigned long *)(v31 + 24)) = v44;
                return 1;
            }
        }
        v5 = *((long long *)(a2 + 8));
        v6 = *((long long *)(a2 + 16));
        v8 = 0;
        v36 = *((long long *)a2);
        v8 = 4;
        v4 = 0;
        v7 = *((long long *)&v2);
        (unsigned int)v37 = sub_42791c(&v4, v7, v36);
        *((unsigned long *)(v31 + 32)) = v37;
        if (v37)
        {
            sub_427a7c(v37);
            sub_427640(v37, a1);
            sub_4276a0(v37, a1, v36, v39);
            *((long long *)(v31 + 24)) = *((long long *)&v3);
        }
    }
}

long long sub_427ea8(unsigned long a0, void* a1, void* a2)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    char v4;  // [bp-0x10]
    char v5;  // [bp-0x8]
    char v6;  // [bp+0x0]
    unsigned long v7;  // x30
    unsigned long v8;  // x21
    unsigned long v9;  // x22
    unsigned long long v10;  // x3
    unsigned long long v11;  // x2
    unsigned long long v12;  // x1
    void* v13;  // x0, Other Possible Types: unsigned long, unsigned long long

    v0 = &v6;
    v1 = v7;
    v2 = v8;
    v3 = v9;
    sub_427a7c(a1);
    sub_4275e0(a1, a1);
    sub_4276a0(a1, a1, a2, v10);
    sub_427a7c(a2);
    sub_4275e0(a2, a1);
    sub_4276a0(a2, a1, a2, v10);
    v11 = *((long long *)&v4);
    v12 = *((long long *)&v5);
    if (v12 <= v11)
        v13 = 0;
    else
        v13 = 4294967295;
    if (v11 <= v12)
        return v13;
    return 1;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    char field_20;
} struct_0;

int sub_427f44(struct_0 *a0, unsigned int a1[2])
{
    unsigned long v0;  // [bp-0x70]
    char v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned int v3[2];  // x19, Other Possible Types: unsigned long
    struct_0 *v4;  // x20
    void* v5;  // x22, Other Possible Types: unsigned long, unsigned long long
    void* v6;  // x1, Other Possible Types: unsigned long, unsigned short
    unsigned long v7;  // x0, Other Possible Types: unsigned long long
    char v8[10];  // x21, Other Possible Types: unsigned long long, unsigned long
    unsigned long long v9;  // x2
    unsigned long long v10;  // x3
    unsigned long long v11;  // x0
    unsigned long long v12;  // x1
    unsigned long long v13;  // x1
    unsigned long long v14;  // x0

    v0 = &v2;
    v3 = a1;
    v4 = a0;
    v5 = 0;
    v6 = 0;
    while (true)
    {
        if (*((int *)v3))
        {
            v7 = *((int *)(v3 + 4));
            if (!(unsigned int)v7)
            {
                v8 = v6;
            }
            else
            {
                v8 = v3 + 4 - v7;
                if (v8 == v6)
                {
                    v8 = v6;
                }
                else
                {
                    (unsigned int)v7 = sub_427820(v8);
                    if ((unsigned int)v7 == 255)
                        return -1;
                    sub_4275e0(v7, v6);
                    v6 = *((short *)&v4->field_20);
                    if (((unsigned short)v6 & 2040) == 2040)
                    {
                        v6 = (unsigned int)v6 & -0x800 | ((unsigned int)v6 & -2041 | __ROL__((unsigned int)v7 & 255 & 255, 3) & 2040) & 2047;
                        *((unsigned short *)&v4->field_20) = v6;
                    }
                    else if ((unsigned int)(__ROL__(v6, 61) & 16140901064495857919 & 255) != (unsigned int)v7)
                    {
                        v4->field_20 = v4->field_20 | 4;
                    }
                }
                sub_4276a0(v7, v6, v9, v10);
                (unsigned int)v11 = sub_427580(v7);
                v12 = -1;
                if (7 >= v11)
                    v13 = (1 << ((char)(__ROL__(v11, 3) & -8) & 63)) - 1;
                v14 = *((long long *)&v1);
                if (!((char)[D] arm64g_calculate_condition(0xa<64>, And(x1<8>, x0<8>), 0x0<64>, 0x0<64>)))
                {
                    v5 += 1;
                    if (v4->field_0 > v14)
                        v4->field_0 = v14;
                }
            }
            v6 = v8;
            v3 += *((int *)v3) + 4;
        }
        else
        {
            return v5;
        }
    }
}

typedef struct struct_2 {
    char padding_0[32];
    char field_20;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

void sub_4280a4(struct_2 *a0, struct struct_1 **a1, struct_0 *a2)
{
    unsigned long v0;  // [bp-0x70]
    char v1;  // [bp+0x0]
    unsigned int v4;  // w0
    unsigned long long v6;  // x1
    void* v7;  // x0, Other Possible Types: unsigned long
    unsigned int v8;  // w21
    char v9[10];  // x20, Other Possible Types: unsigned long long, unsigned long
    unsigned long long v10;  // x3
    unsigned long long v11;  // x0
    unsigned long long v12;  // x1
    unsigned long long v13;  // x1
    unsigned long long v14[2];  // x0
    unsigned long long v15;  // x1
    struct_0 *v17;  // x19, Other Possible Types: unsigned long
    unsigned long long v18;  // x29

    v0 = &v1;
    v4 = __ROL__(*((short *)&a0->field_20), 61) & 16140901064495857919 & 255;
    v8 = v4 & 255 & 255;
    v17 = a2;
    sub_4275e0(*((unsigned long long *)&v4), a1);
    for (v7 = 0; *((int *)v17); v7 = v9)
    {
        v6 = *((int *)(v17 + 4));
        v9 = v7;
        if ((unsigned int)v6)
        {
            if ((a0->field_20 >> 2 & 1))
            {
                v9 = v17 + 4 - v6;
                if (v9 != v7)
                {
                    (unsigned int)v7 = sub_427820(v9);
                    v8 = v7;
                    sub_4275e0(v7, v6);
                }
            }
            if (v8)
            {
                sub_4276a0(v7, v6, a2, v10);
                (unsigned int)v11 = sub_427580(v7);
                v12 = -1;
                if (7 >= v11)
                    v13 = (1 << ((char)(__ROL__(v11, 3) & -8) & 63)) - 1;
                if ((char)[D] arm64g_calculate_condition(0xa<64>, And(x1<8>, Load(addr=stack_base-8, size=8, endness=Iend_LE)), 0x0<64>, 0x0<64>))
                    continue;
            }
            else if (!*((long long *)(v17 + 8)))
            {
                continue;
            }
            v14 = *(a1);
            if (v14)
            {
                v15 = v14[1];
                a2 = v15 + 1;
                v14[1] = a2;
                v14[1 + v15] = v17;
            }
        }
        v17 += *((int *)v17) + 4;
    }
    v18 = v0;
    return;
}

typedef struct struct_5 {
    unsigned long long field_0;
    char padding_8[16];
    struct struct_0 *field_18;
    char field_20;
} struct_5;

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_8 {
    unsigned long long field_0;
    struct struct_2 *field_8;
    unsigned long long field_10;
} struct_8;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_6 {
    char padding_0[16];
    unsigned long long field_10;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

extern unsigned long long g_435468;
extern char g_435470;

int sub_4281d8(struct_5 *a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x90]
    int tmp_1;  // tmp #1
    unsigned long long *v1;  // [bp-0x30]
    struct_2 *v2;  // [bp-0x28]
    char v3;  // [bp-0x18]
    unsigned long long v4[2];  // [bp-0x10]
    unsigned long long v5[3];  // [bp-0x8]
    char v6;  // [bp+0x0]
    unsigned long long v7;  // x22
    void* v8;  // x1, Other Possible Types: unsigned long, unsigned long long, unsigned int, unsigned long long [3]
    struct_5 *v9;  // x19
    unsigned long long v10;  // x0
    unsigned long v11;  // x20, Other Possible Types: unsigned long long
    struct_0 *v12;  // x21, Other Possible Types: unsigned long
    unsigned long long v13;  // x0
    unsigned int v14;  // w0
    unsigned int v15;  // w0
    unsigned long v16;  // x21
    struct_0 *v17;  // x21, Other Possible Types: unsigned long
    struct_8 *v18;  // x24
    struct struct_7 **v19;  // x23, Other Possible Types: unsigned long
    unsigned long long v20[3];  // x25
    unsigned long long *v21;  // x26, Other Possible Types: unsigned long
    unsigned long long *v22;  // x21, Other Possible Types: unsigned long
    unsigned long long *v23;  // x28
    void* v24;  // x27, Other Possible Types: unsigned long
    unsigned long long *v25;  // x4, Other Possible Types: unsigned long
    struct_3 *v26;  // x0
    struct_6 *v27;  // x0
    unsigned long long *v28;  // x21
    unsigned long long *v29;  // x28
    void* v30;  // x0, Other Possible Types: unsigned long, unsigned long long
    void* v31;  // x2, Other Possible Types: unsigned long
    unsigned long long v32;  // x5
    unsigned long long v33;  // x4
    unsigned long long v34;  // x4
    unsigned long long v35[3];  // x27
    struct_8 *v36;  // x21
    unsigned long v37;  // x26, Other Possible Types: unsigned long long
    unsigned long v38;  // x20, Other Possible Types: unsigned long long
    unsigned long long v39[3];  // x25, Other Possible Types: unsigned long
    unsigned long long v40;  // x28
    struct_2 *v41;  // x3, Other Possible Types: unsigned long
    struct_2 *v42;  // x24, Other Possible Types: unsigned long
    unsigned long long v43[3];  // x2, Other Possible Types: unsigned long
    struct_8 *v44;  // x0
    unsigned long long v45;  // x0
    struct_0 *v46;  // x27
    void* v47;  // x24, Other Possible Types: unsigned long long, unsigned long
    unsigned long v48;  // x23, Other Possible Types: unsigned long long
    struct_0 *v49;  // x20, Other Possible Types: unsigned long
    unsigned long long v50[3];  // x0, Other Possible Types: unsigned long
    unsigned long v51;  // x21, Other Possible Types: unsigned long long
    unsigned long long v52[3];  // x20
    unsigned long long v53;  // x0
    struct_0 *v54;  // x5
    void* v55;  // x3, Other Possible Types: unsigned long
    unsigned long v56;  // x2, Other Possible Types: unsigned long long
    struct_0 *v57;  // x24
    void* v58;  // x23, Other Possible Types: unsigned long long, unsigned long
    unsigned long long v59[3];  // x1
    unsigned long long v60;  // x1
    unsigned long long v61;  // x6
    unsigned long v62;  // x21, Other Possible Types: unsigned long long
    struct_2 *v63;  // x4, Other Possible Types: unsigned long
    unsigned long v64;  // x19, Other Possible Types: unsigned long long

    v0 = &v6;
    v7 = a1;
    v8 = a0->field_20;
    v9 = a0;
    if (((char)v8 & 1))
    {
LABEL_428204:
        v45 = v9->field_20;
        if (!((char)v45 & 1))
        {
            if (!((char)(v45 >> 1) & 1))
            {
                (unsigned int)v50[0] = sub_42791c(v9, v9->field_18, v7);
                return v50;
            }
            v49 = v9->field_18;
            while (true)
            {
                v59 = *((long long *)v49);
                if (!v59)
                    break;
                (unsigned int)v50 = sub_42791c(v9, v59, v7);
                if (v50)
                    return v50;
                v49 += 8;
            }
        }
        else if (((char)(v45 >> 2) & 1))
        {
            v46 = v9->field_18;
            v47 = 0;
            for (v48 = v46->field_8; v48 > v47; v48 = v51)
            {
                v51 = __ROL__(v48 + v47, 63) & 9223372036854775807;
                v52 = (&v46[1].field_0)[v51];
                (unsigned int)v53 = sub_427a7c(v52);
                v2 = (unsigned int)v53 & 255 & 255;
                sub_4275e0(v53, v8, v43);
                sub_4276a0(v53, v8, v43, v41);
                sub_4276a0(v53, v8, v43, v41);
                v8 = *((long long *)&v3);
                if (v7 >= v8)
                {
                    if (v7 >= v8 + (char *)v4)
                    {
                        v47 = v51 + 1;
                        v51 = v48;
                    }
                    else
                    {
                        return (unsigned int)(&v46[1].field_0)[v51];
                    }
                }
            }
        }
        else if ((char)[D] arm64g_calculate_condition(0x2<64>, x20<8>, 0x1<64>, 0x0<64>))
        {
            v57 = v9->field_18;
            v58 = 0;
            sub_4275e0(v45, v8);
            v62 = v57->field_8;
            for (v63 = &v3; v58 < v62; v62 = v64)
            {
                v64 = __ROL__(v62 + v58, 63) & 9223372036854775807;
                v2 = v63;
                sub_4276a0(v45, v8, v43, v41);
                sub_4276a0(v45, v8, v43, v41);
                v8 = *((long long *)&v3);
                v63 = v2;
                if (v8 <= v7)
                {
                    if (v7 >= v8 + (char *)v4)
                    {
                        v58 = v64 + 1;
                        v64 = v62;
                    }
                    else
                    {
                        return (unsigned int)(&v57[1].field_0)[v64];
                    }
                }
            }
        }
        else
        {
            v54 = v9->field_18;
            v55 = 0;
            v56 = v54->field_8;
            while (v56 > v55)
            {
                v60 = __ROL__(v56 + v55, 63) & 9223372036854775807;
                v50 = (&v54[1].field_0)[v60];
                v61 = *((long long *)(v50 + 8));
                if (v7 < v61)
                {
                    v56 = v60;
                }
                else
                {
                    if (v7 < v61 + *((long long *)(v50 + 16)))
                        return (unsigned int)(&v54[1].field_0)[v60];
                    v55 = v60 + 1;
                }
            }
            return 0;
        }
        return 0;
    }
    v11 = __ROL__(*((int *)&a0->field_20), 53) & -9007199252643841 & 2097151;
    if (!v11)
    {
        if (((char)(v8 >> 1) & 1))
        {
            v12 = a0->field_18;
            while (true)
            {
                v8 = *((long long *)v12);
                if (!v8)
                    break;
                (unsigned int)v10 = sub_427f44(v9, v8);
                if (!((char)[D] arm64g_calculate_condition(0x12<64>, x0<8>, 0x1<64>, 0x0<64>)))
                    goto LABEL_42823c;
                v11 += v10;
                v12 += 8;
            }
        }
        else
        {
            v11 = sub_427f44(a0, a0->field_18);
            if ((char)[D] arm64g_calculate_condition(0x2<64>, x20<8>, 0x1<64>, 0x0<64>))
            {
LABEL_42823c:
                *((long long *)&v9->field_20) = 0;
                *((short *)&v9->field_20) = 2040;
                v9->field_18 = &g_435470;
                goto LABEL_4283a8;
            }
        }
        v13 = (unsigned int)v11 & 2097151;
        tmp_1 = v13;
        v8 = v13;
        v14 = *((int *)&v9->field_20);
        if (tmp_1 != v11)
            v15 = v14 & 2047;
        else
            v15 = v14 & 2047 | __ROL__(v8, 11) & -0x800;
        *((unsigned int *)&v9->field_20) = v15;
        if (!v11)
            goto LABEL_4283a8;
    }
    v16 = __ROL__(v11 + 2, 3) & -8;
    v4[0] = malloc(v16);
    if (!v4)
    {
LABEL_4283a8:
        if (v9->field_0 > v7)
            return 0;
        goto LABEL_428204;
    }
    v4[1] = 0;
    v5[0] = malloc(v16);
    if (v5)
        v5[1] = 0;
    if (!(v9->field_20 >> 1 & 1))
    {
        sub_4280a4(v9, v4, v9->field_18);
    }
    else
    {
        v17 = v9->field_18;
        while (true)
        {
            v43 = *((long long *)v17);
            if (!v43)
                break;
            v17 += 8;
            sub_4280a4(v9, v4, v43);
        }
    }
    v18 = v4;
    if (!(!(v18) || !(v18->field_8 != v11)))
        abort(); /* do not return */
    if ((v9->field_20 >> 2 & 1))
    {
        v19 = sub_427ea8;
    }
    else if (!((char)[D] arm64g_calculate_condition(0x2<64>, x20<8>, 0x1<64>, 0x0<64>)))
    {
        v19 = sub_427790;
    }
    else
    {
        v19 = sub_4273f0;
    }
    v20 = v5;
    if (!v20)
    {
        sub_4274cc(v9, v19, v18);
LABEL_42838c:
        v44 = v4;
        v44->field_0 = v9->field_18;
        v9->field_18 = &v44->field_0;
        v9->field_20 = v9->field_20 | 1;
        goto LABEL_4283a8;
    }
    else
    {
        v21 = &v18->field_10;
        v41 = v18->field_8;
        v22 = &g_435468;
        v23 = v21;
        for (v24 = 0; v24 != v41; v29 = v23 + 1)
        {
            for (v25 = &g_435468; v22 != v25 && (v1 = (unsigned long long *)v25, v2 = (struct_2 *)v41, v41 = v2, v25 = v1, ((char)(v19(v9, *(v23), *((long long *)v22)) >> 31) & 1)); v26->field_10 = 0)
            {
                v26 = v20 + v22 - (char *)v21;
                v22 = v26->field_10;
            }
            v27 = (char *)v20 + 0x8 * v24;
            v24 += 1;
            v27->field_10 = v22;
            v28 = v23;
        }
        v30 = 0;
        v8 = 0;
        for (v31 = 0; v31 != v41; v21 += 8)
        {
            v32 = *((long long *)v21);
            if (!v20[2 + v31])
            {
                v34 = v30 + 2;
                v30 += 1;
                v20[v34] = v32;
            }
            else
            {
                v33 = v8 + 2;
                v8 += 1;
                (&v18->field_0)[v33] = v32;
            }
            v31 += 1;
        }
        v18->field_8 = v8;
        v20[1] = v30;
        v43 = v5;
        if (*((long long *)(v43 + 8)) + v4[1] == v11)
        {
            sub_4274cc(v9, v19, v43);
            v35 = v5;
            v36 = v4;
            v38 = v35[1];
            if (v38)
            {
                v42 = v36->field_8;
                v37 = __ROL__(v38, 3) & -8;
                do
                {
                    v38 -= 1;
                    v39 = &(&v36->field_0)[v42];
                    for (v40 = *((long long *)(8 + (char *)&v35[0] + v37)); v42 && (v8 = *((long long *)(v39 + 8)), v41 = v42 - 1, v2 = v41, v39 -= 8, v19(v9, v8, v40, v2) > 0); *((long long *)(v39 + v37 + 16)) = *((long long *)(v39 + 16)))
                    {
                        v42 = v2;
                    }
                    v37 -= 8;
                    (&v36->field_10)[v42 + v38] = v40;
                } while (v38);
                v36->field_8 = &v36->field_8[v35[1]];
            }
            free(v5);
            goto LABEL_42838c;
        }
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned short field_20;
    char padding_22[6];
    unsigned long long field_28;
} struct_0;

extern unsigned long long g_434f40;
extern char g_4352d8;
extern char g_435478;
extern struct_0 *g_4354a0;

long long sub_428748(unsigned int *a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (!a0)
    {
        return &g_4352d8;
    }
    else if (!*(a0))
    {
        return &g_4352d8;
    }
    else
    {
        a1->field_0 = -1;
        *((long long *)&a1->field_20) = 0;
        a1->field_18 = a0;
        a1->field_8 = a2;
        a1->field_10 = a3;
        a1->field_20 = 2040;
        if (g_434f40)
            pthread_mutex_lock(&g_435478);
        a1->field_28 = g_4354a0;
        g_4354a0 = a1;
        if (g_434f40)
            return pthread_mutex_unlock(&g_435478);
        return &g_4352d8;
    }
}

long long sub_4287e4(unsigned int *a0, void* a1)
{
    return sub_428748(a0, a1, 0, 0);
}

long long sub_4287f0(unsigned int *a0)
{
    unsigned long v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (*(a0))
        return sub_4287e4(a0, malloc(48));
    return a0;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
    char padding_21[7];
    unsigned long long field_28;
} struct_0;

extern unsigned long long g_434f40;
extern char g_4352d8;
extern char g_435478;
extern struct_0 *g_4354a0;

long long sub_428830(unsigned long a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [bp-0x30]
    struct_0 *v1;  // [bp-0x8]
    char v2;  // [bp+0x0]
    unsigned short v3;  // x0

    v0 = &v2;
    *((long long *)&a1->field_20) = 0;
    a1->field_18 = a0;
    a1->field_20 = 2;
    a1->field_8 = a2;
    v3 = *((short *)&a1->field_20);
    a1->field_0 = -1;
    a1->field_10 = a3;
    *((unsigned short *)&a1->field_20) = v3 | 2040;
    if (g_434f40)
    {
        v1 = a1;
        pthread_mutex_lock(&g_435478);
        a1 = v1;
    }
    *((struct_0 **)(a1 + 40)) = g_4354a0;
    g_4354a0 = a1;
    if (g_434f40)
        return pthread_mutex_unlock(&g_435478);
    return &g_4352d8;
}

long long sub_4288c4(unsigned int a0, void* a1)
{
    return sub_428830(a0, a1, 0, 0);
}

long long sub_4288d0(unsigned long a0)
{
    unsigned long v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return sub_4288c4(a0, malloc(48));
}

typedef struct struct_0 {
    char padding_0[24];
    struct struct_1 *field_18;
    char field_20;
    char padding_21[7];
    struct struct_0 *field_28;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long g_434f40;
extern char g_435478;
extern struct_0 *g_4354a0;
extern struct_0 *g_4354a8;

long long sub_4288fc(unsigned int *a0)
{
    unsigned long v0;  // [bp-0x30]
    char v1;  // [bp+0x0]
    unsigned int *v2;  // x21
    unsigned long v3;  // x19
    struct struct_0 **v4;  // x0, Other Possible Types: unsigned long

    v0 = &v1;
    if (!(a0 && *(a0)))
        return 0;
    v2 = a0;
    if (g_434f40)
        pthread_mutex_lock(&g_435478);
    v4 = &g_4354a0;
    v3 = g_4354a0;
    while (v3)
    {
        if (*((long long *)(v3 + 24)) != v2)
        {
            v4 = v3 + 40;
            v3 = *((long long *)(v3 + 40));
        }
        else
        {
            *((long long *)v4) = *((long long *)(v3 + 40));
            goto LABEL_4289e0;
        }
    }
    v4 = &g_4354a8;
    while (true)
    {
        v3 = *((long long *)v4);
        if (!v3)
            break;
        if ((*((char *)(v3 + 32)) & 1))
        {
            if (*((long long *)*((long long *)(v3 + 24))) == v2)
            {
                *((long long *)v4) = *((long long *)(v3 + 40));
                free(*((long long *)(v3 + 24)));
LABEL_4289e0:
                if (!g_434f40)
                    return v3;
                pthread_mutex_unlock(&g_435478);
                if (v3)
                    return *((long long *)v4);
                abort(); /* do not return */
            }
        }
        else
        {
            if (*((long long *)(v3 + 24)) == v2)
            {
                *((long long *)v4) = *((long long *)(v3 + 40));
                goto LABEL_4289e0;
            }
        }
        v4 = v3 + 40;
    }
    if (!g_434f40)
        abort(); /* do not return */
    pthread_mutex_unlock(&g_435478);
    if (v3)
        return *((long long *)v4);
    abort(); /* do not return */
}

int sub_4289fc(unsigned int *a0)
{
    return sub_4288fc(a0);
}

long long sub_428a00(unsigned int *a0)
{
    unsigned long v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (*(a0))
        return (unsigned long long)free(sub_4289fc(a0));
    return a0;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[32];
    struct struct_1 *field_28;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    char field_20;
} struct_0;

extern unsigned long long g_434f40;
extern char g_435478;
extern struct_1 *g_4354a0;
extern struct_1 *g_4354a8;

int sub_428a24(unsigned int a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x30]
    void* v2;  // [bp-0x28]
    void* v3;  // [bp-0x20]
    void* v4;  // [bp-0x18]
    void* v5;  // [bp-0x10]
    unsigned int v6;  // [bp-0x8]
    char v7;  // [bp+0x0]
    unsigned long v8;  // x23
    unsigned long long v9[3];  // x22
    struct_1 *v10;  // x19, Other Possible Types: unsigned long
    void* v11;  // x20, Other Possible Types: unsigned long, unsigned long long
    struct_1 *v12;  // x1, Other Possible Types: unsigned long
    struct struct_1 **v13;  // x2, Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // x1
    unsigned long long v15;  // x3
    unsigned long v16;  // x0, Other Possible Types: unsigned long long

    v0 = &v7;
    v8 = a0;
    v9 = a1;
    if (g_434f40)
        pthread_mutex_lock(&g_435478);
    v10 = g_4354a8;
    while (true)
    {
        if (!v10)
        {
LABEL_428a98:
            do
            {
                v10 = g_4354a0;
                if (!g_4354a0)
                {
                    v11 = 0;
                    if (!g_434f40)
                        goto LABEL_428b64;
                    goto LABEL_428b00;
                }
                g_4354a0 = g_4354a0->field_28;
                (unsigned int)a0 = sub_4281d8(g_4354a0, v8);
                v11 = a0;
                v12 = g_4354a8;
                for (v13 = &g_4354a8; v12 && *((long long *)v12) >= g_4354a0->field_0; v12 = *((long long *)(v12 + 40)))
                {
                    v13 = v12 + 40;
                }
                g_4354a0->field_28 = v12;
                *((struct_1 **)v13) = g_4354a0;
            } while (!a0);
LABEL_428bc0:
            if (!(g_434f40))
                goto LABEL_428b10;
LABEL_428b00:
            pthread_mutex_unlock(&g_435478);
            if (!v11)
            {
LABEL_428b64:
                v6 = 1;
                v1 = v8;
                v2 = 0;
                v3 = 0;
                v4 = 0;
                v5 = 0;
                if (((char)(dl_iterate_phdr(sub_427a8c, &v1) >> 31) & 1))
                    return 0;
                v11 = v5;
                if (!v11)
                    return (unsigned int)v5;
                v9[0] = v2;
                v9[1] = v3;
                v16 = v4;
                break;
            }
LABEL_428b10:
            v9[0] = *((long long *)(v10 + 8));
            v14 = *((char *)(v10 + 32));
            v9[1] = *((long long *)(v10 + 16));
            if (((char)(v14 >> 2) & 1))
                sub_427a7c(v11);
            sub_4275e0(a0, v14);
            sub_4276a0(a0, v14, v13, v15);
            v16 = v1;
            break;
        }
        else if (a0 < *((long long *)v10))
        {
            v10 = *((long long *)(v10 + 40));
        }
        else
        {
            (unsigned int)a0 = sub_4281d8(v10, a0);
            v11 = a0;
            if (a0)
                goto LABEL_428bc0;
            goto LABEL_428a98;
        }
    }
    v9[2] = v16;
    return v11;
}

