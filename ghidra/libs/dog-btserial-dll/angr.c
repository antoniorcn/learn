int sub_180001000()
{
    return 2147506088;
}

typedef struct struct_0 {
    char field_0;
} struct_0;

void sub_180001010(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    struct_0 *v0;  // [bp-0x28]
    unsigned long v2;  // [bp+0x10]
    unsigned long v3;  // [bp+0x18]
    unsigned long v4;  // [bp+0x20]

    v2 = a1;
    v3 = a2;
    v4 = a3;
    v0 = &v3;
    __stdio_common_vfprintf(*((long long *)sub_180001000()), a0, a1, 0);
    return;
}

typedef struct struct_0 {
    char field_0;
} struct_0;

void sub_180001060(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    struct_0 *v0;  // [bp-0x28]
    unsigned long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10]
    unsigned long v3;  // [bp+0x18]
    unsigned long v4;  // [bp+0x20]

    v1 = a0;
    v2 = a1;
    v3 = a2;
    v4 = a3;
    v0 = &v2;
    __stdio_common_vfprintf(*((long long *)sub_180001000()), __acrt_iob_func(1), a0, 0);
    return;
}

typedef struct tm {
    unsigned int tm_sec;
    unsigned int tm_min;
    unsigned int tm_hour;
    unsigned int tm_mday;
    unsigned int tm_mon;
    unsigned int tm_year;
    unsigned int tm_wday;
    unsigned int tm_yday;
    unsigned int tm_isdst;
    char padding_24[4];
    unsigned int tm_gmtoff;
    char padding_2c[4];
    char *tm_zone;
} tm;

extern unsigned long long g_180005000;
extern char g_180005620;

int sub_1800010c0()
{
    char v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x48]
    tm v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x18]

    *((unsigned long *)&v2.tm_gmtoff) = g_180005000 ^ &v0;
    if (g_180005620)
        return (unsigned int)sub_1800019c0(v3 ^ &v0);
    v1 = _time64(0);
    _localtime64_s(&v2, &v1);
    if (strftime(&g_180005620, 0x100, "PPPAGSEGURO_%Y-%m-%d.log", &v2))
        return (unsigned int)sub_1800019c0(v3 ^ &v0);
    memset(&g_180005620, 0, 0x100);
}

typedef struct tm {
    unsigned int tm_sec;
    unsigned int tm_min;
    unsigned int tm_hour;
    unsigned int tm_mday;
    unsigned int tm_mon;
    unsigned int tm_year;
    unsigned int tm_wday;
    unsigned int tm_yday;
    unsigned int tm_isdst;
    char padding_24[4];
    unsigned int tm_gmtoff;
    char padding_2c[4];
    char *tm_zone;
} tm;

extern unsigned long long g_180005000;
extern unsigned long long g_180005720;
extern unsigned long long g_180005728;
extern unsigned long long g_180005730;
extern unsigned long long g_180005738;
extern unsigned long long g_180005740;
extern unsigned long long g_180005748;
extern unsigned long long g_180005750;
extern unsigned long long g_180005758;

int sub_180001170()
{
    char v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x48]
    tm v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v5;  // rax

    *((unsigned long *)&v2.tm_gmtoff) = g_180005000 ^ &v0;
    v1 = _time64(0);
    _localtime64_s(&v2, &v1);
    v5 = strftime(&g_180005720, 64, "%H:%M:%S|", &v2);
    if (!v5)
    {
        g_180005720 = v5;
        g_180005728 = v5;
        g_180005730 = v5;
        g_180005738 = v5;
        g_180005740 = v5;
        g_180005748 = v5;
        g_180005750 = v5;
        g_180005758 = v5;
    }
    return (unsigned int)sub_1800019c0(v3 ^ &v0);
}

typedef struct struct_0 {
    char field_0;
} struct_0;

extern unsigned long long g_180005000;

void sub_180001230(unsigned long a0, unsigned long long a1, unsigned int a2, unsigned int a3)
{
    char v0;  // [bp-0x68]
    struct_0 *v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long v5;  // [bp+0x18]
    unsigned long v6;  // [bp+0x20]
    struct_0 *v7;  // rbp
    unsigned long v8;  // rsi
    unsigned long v9;  // rdi, Other Possible Types: unsigned long long

    *((unsigned int *)&v5) = a2;
    *((unsigned int *)&v6) = a3;
    v3 = g_180005000 ^ &v0;
    v7 = &v5;
    v8 = sub_180001170();
    fopen_s(&v2, sub_1800010c0(), "a+");
    v9 = *((long long *)&v2);
    if (v9)
    {
        if ((unsigned int)a0)
        {
            sub_180001010(v9, "%s", v8, a3);
            v9 = *((long long *)&v2);
        }
        v1 = &v5;
        __stdio_common_vfprintf(*((long long *)sub_180001000()), v9, a1, 0);
        fflush(*((long long *)&v2));
        fclose(*((long long *)&v2));
    }
    if ((unsigned int)a0)
        sub_180001060("%s", v8, a2, 0);
    v1 = &v5;
    __stdio_common_vfprintf(*((long long *)sub_180001000()), __acrt_iob_func(1), a1, 0);
    sub_1800019c0(v3 ^ &v0);
    return;
}

typedef struct struct_0 {
    char field_0;
} struct_0;

void sub_180001330(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    struct_0 *v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]
    unsigned long v7;  // [bp+0x18]
    unsigned long v8;  // [bp+0x20]
    unsigned long v9;  // rbx
    unsigned long v10;  // rsi
    unsigned long v11;  // rdi
    unsigned long long v14;  // rbp

    v7 = a2;
    v8 = a3;
    v4 = v9;
    v3 = &v5;
    v2 = v10;
    v1 = v11;
    v0 = &v8;
    v14 = v3;
    return;
}

extern unsigned long long g_180005000;
extern unsigned int *g_180005760;

int sub_180001390(char *a0, unsigned long a1)
{
    char v0;  // [bp-0x68]
    void* v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    void* v3;  // [bp-0x28]
    unsigned int *v4;  // [bp-0x20], Other Possible Types: void*
    unsigned int v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]

    v6 = g_180005000 ^ &v0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v4 = CreateEventA(NULL, 1, 0, NULL);
    if (!v4)
        return (unsigned int)sub_1800019c0(v6 ^ &v0);
    if (!WriteFile(g_180005760, a0, a1, &v5, &v1))
    {
        if (GetLastError() != 997)
        {
            CloseHandle(v4);
            return (unsigned int)sub_1800019c0(v6 ^ &v0);
        }
        else if (WaitForSingleObject(v4, -1))
        {
            CloseHandle(v4);
            return (unsigned int)sub_1800019c0(v6 ^ &v0);
        }
        else if (GetOverlappedResult(g_180005760, &v1, &v5, 0))
        {
            FlushFileBuffers(g_180005760);
        }
    }
    CloseHandle(v4);
    return (unsigned int)sub_1800019c0(v6 ^ &v0);
}

extern unsigned long long g_180005000;
extern void* g_180005760;
extern DCB g_180005768;
extern unsigned int g_18000576c;
extern unsigned short g_18000577a;
extern char g_18000577c;
extern unsigned int g_180005788[5];
extern unsigned int g_18000578c;
extern unsigned int g_180005790;
extern unsigned int g_180005794;
extern unsigned int g_180005798;

long long SerialPortOpen(unsigned long a0)
{
    char v0;  // [bp-0x68]
    void* v1;  // [bp-0x28]
    void* v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]

    v4 = g_180005000 ^ &v0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    sub_180001230(1, "DVARS|%s:%d|[%s]: %s\n", 2147496624, 93);
    if (strstr(a0, "COM") != a0)
        strncpy_s(&v1, 20, a0, 19);
    else
        sub_180001330(&v1, 20, "\\\\.\\%s", a0);
    g_180005760 = CreateFileA(&v1, 0xc0000000, 0, NULL, 3, 1073741952, NULL);
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", 2147496624, 109);
    if (g_180005760 == -1)
    {
        GetLastError();
        sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", 2147496624, 112);
        return (unsigned long long)sub_1800019c0(v4 ^ &v0);
    }
    sub_180001230(1, "TRACE|%s:%d|%s\n", 2147496624, 116);
    g_180005768.DCBlength = 28;
    if (!GetCommState(g_180005760, &g_180005768.DCBlength))
    {
        GetLastError();
        sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", 2147496624, 120);
    }
    else
    {
        g_18000576c = 0x1c200;
        g_18000577a = 8;
        g_18000577c = 0;
        if (SetCommState(g_180005760, &g_180005768.DCBlength))
        {
            sub_180001230(1, "TRACE|%s:%d|%s\n", 2147496624, 134);
            g_180005788[0] = 50;
            g_180005790 = 50;
            g_18000578c = 10;
            g_180005798 = 50;
            g_180005794 = 10;
            if (SetCommTimeouts(g_180005760, &g_180005788[0]))
            {
                sub_180001230(1, "TRACE|%s:%d|success opening '%s'\n", 2147496624, 148);
                return (unsigned long long)sub_1800019c0(v4 ^ &v0);
            }
        }
    }
    CloseHandle(g_180005760);
    g_180005760 = 0;
    return (unsigned long long)sub_1800019c0(v4 ^ &v0);
}

extern unsigned long long g_180005000;
extern unsigned int *g_180005760;

long long SerialPortRead(char *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x98]
    void* v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    void* v3;  // [bp-0x58]
    unsigned int *v4;  // [bp-0x50], Other Possible Types: void*
    unsigned int v5;  // [bp-0x48]
    void* v6;  // [bp-0x40]
    unsigned int v7;  // [bp-0x38]
    unsigned int v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned int v11;  // edi
    unsigned int v12;  // ebx

    v9 = g_180005000 ^ &v0;
    v11 = 0;
    v12 = (unsigned int)a2 / 250;
    if (v12)
    {
        while (true)
        {
            v12 -= 1;
            if (g_180005760 == -1)
            {
                v11 = 0;
            }
            else
            {
                v5 = 0;
                v6 = 0;
                v7 = 0;
                ClearCommError(g_180005760, &v5, &v6);
                v11 = *((int *)((char *)&v6 + 4));
            }
            if (v11 >= (unsigned int)a1)
                break;
            Sleep(250);
            if (!v12)
                goto LABEL_18000181b;
        }
    }
    else
    {
LABEL_18000181b:
        if (v11 < (unsigned int)a1)
            return (unsigned long long)sub_1800019c0(v9 ^ &v0);
    }
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v4 = CreateEventA(NULL, 1, 0, NULL);
    ReadFile(g_180005760, a0, a1, &v8, &v1);
    CloseHandle(v4);
    return (unsigned long long)sub_1800019c0(v9 ^ &v0);
}

long long SerialPortWrite(unsigned long a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x18], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x10]
    void* v3;  // rbx, Other Possible Types: unsigned long
    unsigned int v5;  // rdi

    v3 = 0;
    if ((unsigned int)a1)
    {
        do
        {
            v5 = (edi<4> < 0x800 ? 0x800 : a1 - v3);
            v1 = v5;
            v0 = v3;
            sub_180001230(1, "TRACE|%s:%d|escrevendo serial. i=%d , wlen=%d\n", 2147496824, 197);
            if (sub_180001390(v3 + a0, v5) != 1)
                return 4294965291;
            Sleep(250);
            v3 += v5;
        } while ((unsigned int)v3 < (unsigned int)a1);
    }
    v1 = v3;
    v0 = "i";
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", 2147496824, 203);
    return v3;
}

extern void* g_180005760;

long long SerialPortClose()
{
    unsigned long long v1;  // rax

    if (g_180005760)
    {
        (unsigned int)v1 = CloseHandle(g_180005760);
        g_180005760 = 0;
        return v1;
    }
    return v1;
}

extern unsigned long long g_180003230;
extern unsigned long long g_180005000;
extern unsigned long long g_180005008;
extern unsigned int g_180005040;
extern unsigned int g_180005044;
extern unsigned long long g_180005050;
extern unsigned int g_180005058;
extern unsigned long long g_180005060;
extern unsigned long long g_1800050e0;
extern unsigned long long g_180005160;
extern struct_0 *g_180005178;
extern unsigned long long g_1800051d8;

void sub_1800019c0(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]
    unsigned long v3;  // [bp+0x8]
    unsigned long long v4;  // rcx

    if (a0 == g_180005000)
    {
        v4 = __ROL__(a0, 16);
        if (!(unsigned short)v4)
            return;
        a0 = __ROR__(v4, 16);
    }
    v3 = a0;
    if (!IsProcessorFeaturePresent(23))
    {
        sub_180001aec(&g_1800050e0);
        g_1800051d8 = *((long long *)&v2);
        g_180005178 = &v3;
        g_180005050 = g_1800051d8;
        g_180005160 = v3;
        g_180005040 = 3221226505;
        g_180005044 = 1;
        g_180005058 = 1;
        g_180005060 = 2;
        v0 = g_180005000;
        v1 = g_180005008;
        sub_1800019e4(&g_180003230);
        return;
    }
}

typedef struct EXCEPTION_POINTERS {
    struct EXCEPTION_RECORD *ExceptionRecord;
    struct CONTEXT *ContextRecord;
} EXCEPTION_POINTERS;

typedef struct EXCEPTION_RECORD {
    unsigned int ExceptionCode;
    unsigned int ExceptionFlags;
    void* ExceptionRecord;
    void* ExceptionAddress;
    unsigned int NumberParameters;
    char padding_1c[4];
    unsigned int *ExceptionInformation[15];
} EXCEPTION_RECORD;

typedef struct CONTEXT {
    unsigned int ContextFlags;
    unsigned int Dr0;
    unsigned int Dr1;
    unsigned int Dr2;
    unsigned int Dr3;
    unsigned int Dr6;
    unsigned int Dr7;
    FLOATING_SAVE_AREA FloatSave;
    unsigned int SegGs;
    unsigned int SegFs;
    unsigned int SegEs;
    unsigned int SegDs;
    unsigned int Edi;
    unsigned int Esi;
    unsigned int Ebx;
    unsigned int Edx;
    unsigned int Ecx;
    unsigned int Eax;
    unsigned int Ebp;
    unsigned int Eip;
    unsigned int SegCs;
    unsigned int EFlags;
    unsigned int Esp;
    unsigned int SegSs;
    char ExtendedRegisters[512];
} CONTEXT;

typedef struct FLOATING_SAVE_AREA {
    unsigned int ControlWord;
    unsigned int StatusWord;
    unsigned int TagWord;
    unsigned int ErrorOffset;
    unsigned int ErrorSelector;
    unsigned int DataOffset;
    unsigned int DataSelector;
    char RegisterArea[80];
    unsigned int Spare0;
} FLOATING_SAVE_AREA;

void sub_1800019e4(EXCEPTION_POINTERS *a0)
{
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter(a0);
    TerminateProcess(GetCurrentProcess(), 3221226505);
    return;
}

typedef struct CONTEXT {
    unsigned int ContextFlags;
    unsigned int Dr0;
    unsigned int Dr1;
    unsigned int Dr2;
    unsigned int Dr3;
    unsigned int Dr6;
    unsigned int Dr7;
    FLOATING_SAVE_AREA FloatSave;
    unsigned int SegGs;
    unsigned int SegFs;
    unsigned int SegEs;
    unsigned int SegDs;
    unsigned int Edi;
    unsigned int Esi;
    unsigned int Ebx;
    unsigned int Edx;
    unsigned int Ecx;
    unsigned int Eax;
    unsigned int Ebp;
    unsigned int Eip;
    unsigned int SegCs;
    unsigned int EFlags;
    unsigned int Esp;
    unsigned int SegSs;
    char ExtendedRegisters[512];
} CONTEXT;

typedef struct IMAGE_RUNTIME_FUNCTION_ENTRY {
    unsigned int BeginAddress;
    unsigned int EndAddress;
    char Anonymous;
} IMAGE_RUNTIME_FUNCTION_ENTRY;

typedef struct FLOATING_SAVE_AREA {
    unsigned int ControlWord;
    unsigned int StatusWord;
    unsigned int TagWord;
    unsigned int ErrorOffset;
    unsigned int ErrorSelector;
    unsigned int DataOffset;
    unsigned int DataSelector;
    char RegisterArea[80];
    unsigned int Spare0;
} FLOATING_SAVE_AREA;

int sub_180001aec()
{
    unsigned long long v0;  // [bp+0x8]
    unsigned long long v1;  // [bp+0x10]
    void* v2;  // [bp+0x18]
    CONTEXT *v3;  // rcx
    unsigned long long v4;  // rsi
    IMAGE_RUNTIME_FUNCTION_ENTRY *v5;  // rax

    RtlCaptureContext(v3);
    v4 = *((long long *)&v3->ExtendedRegisters[44]);
    while (true)
    {
        v5 = RtlLookupFunctionEntry(v4, &v0, NULL);
        if (!v5)
            break;
        RtlVirtualUnwind(0, v0, v4, v5, v3, &v2, &v1, NULL);
    }
    return;
}

extern unsigned long long g_1800031e8;
extern unsigned long long g_1800031f0;
extern unsigned long long g_1800031f8;
extern unsigned long long g_180003200;
extern unsigned int g_1800055b0;
extern unsigned int g_1800055b8;

int sub_180001b60(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    int tmp_5;  // tmp #5
    unsigned long v0;  // [bp-0x8]
    unsigned long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10], Other Possible Types: char
    char v3;  // [bp+0x18], Other Possible Types: unsigned long
    unsigned long v4;  // [bp+0x20]
    unsigned int v6;  // edx
    unsigned long v7;  // rbx
    unsigned long v8;  // rsi
    unsigned long v9;  // rdi
    unsigned long v10;  // rbx
    unsigned long v11;  // rsi
    unsigned long v12;  // rdi
    unsigned long v13;  // r14
    unsigned int v14;  // eax
    unsigned long long v16;  // rax
    char v17;  // dil
    unsigned int v21;  // eax
    struct struct_0 **v22;  // rbx
    struct struct_0 **v23;  // rbx

    if ((unsigned int)a1)
    {
        tmp_5 = a1;
        if ((int)tmp_5 != 1)
        {
            v6 = (unsigned int)a1 - 1 - 1;
            if (v6 == 1)
                return sub_180001f9c();
            return 1;
        }
        else
        {
            v1 = v10;
            v2 = v11;
            v4 = v12;
            v0 = v13;
            if (!(char)sub_18000205c(0, a2))
            {
                v21 = 0;
            }
            else
            {
                (char)v16 = sub_180001eec();
                v3 = v16;
                v17 = 1;
                if (g_1800055b8)
                    sub_1800023e0(7);
                g_1800055b8 = 1;
                if ((char)sub_180001f5c())
                {
                    sub_180002528();
                    sub_1800022b0(sub_180002574);
                    InitializeSListHead();
                    sub_1800022b0(sub_1800023a8);
                    sub_1800023bc();
                    if (!_initterm_e(&g_1800031f8, &g_180003200) && (char)sub_180001f28(&g_1800031f8, &g_180003200))
                    {
                        _initterm(&g_1800031e8, &g_1800031f0);
                        g_1800055b8 = 2;
                        v17 = 0;
                    }
                }
                *((char *)&a0) = v16;
                sub_180002210(a0);
                if (!v17)
                {
                    v22 = sub_1800023d8();
                    if (*(v22) && (char)sub_180002174(v22))
                    {
                        sub_1800025c0(*(v22));
                        v23(a0, 2, a2);
                    }
                    g_1800055b0 = g_1800055b0 + 1;
                    v21 = 1;
                }
            }
            return v21;
        }
    }
    else
    {
        v1 = v7;
        v3 = v8;
        v0 = v9;
        if (g_1800055b0 <= 0)
        {
            v14 = 0;
        }
        else
        {
            g_1800055b0 = g_1800055b0 - 1;
            v2 = sub_180001eec();
            if (g_1800055b8 != 2)
                sub_1800023e0(7);
            sub_180002018();
            g_1800055b8 = 0;
            sub_180002048();
            sub_180002210(v2);
            v14 = (char)sub_180002234(a2, 0);
        }
        return v14;
    }
}

int sub_180001e3f()
{
    unsigned int v1;  // [bp+0x30]
    char v2;  // [bp+0x40]
    char v3;  // [bp+0x48]
    char v4;  // [bp+0x50]
    char v5;  // [bp+0x78]
    unsigned long long v6;  // rbx
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rsi

    v1 = 0;
    v6 = *((long long *)&v5);
    v7 = *((long long *)&v2);
    v8 = *((long long *)&v3);
    v9 = *((long long *)&v4);
    return;
}

int sub_180001e58(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    return 1;
}

extern unsigned int g_1800055b0;

int _start()
{
    unsigned int v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v4;  // [bp+0x8]
    unsigned int v5;  // [bp+0x10], Other Possible Types: unsigned long
    unsigned long v6;  // [bp+0x18]
    unsigned long v7;  // [bp+0x20]
    unsigned long v8;  // rbx
    unsigned long v9;  // rsi
    unsigned long v10;  // rdi
    unsigned long v11;  // rdx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r8
    unsigned long long v15;  // rcx
    unsigned long v16;  // r14

    v4 = v8;
    v5 = v9;
    v3 = v10;
    if ((unsigned int)v11 == 1)
        _security_init_cookie();
    v12 = v5;
    v13 = v3;
    v7 = v4;
    v6 = v14;
    v5 = v11;
    v4 = v15;
    v3 = v12;
    v2 = v13;
    v1 = v16;
    if ((unsigned int)(v11 - 1) > 1 || (v0 = (unsigned int)sub_180001e58(v15, v11, v14), v0 && v0))
    {
        v0 = sub_180002374(v15, v11);
        if ((unsigned int)v11 == 1 && !v0)
        {
            sub_180002374(v15, 0);
            sub_180001b60(v15, 0, v14);
            sub_180001e58(v15, 0, v14);
        }
        if (!(unsigned int)v11 || (unsigned int)v11 == 3)
        {
            v0 = sub_180001b60(v15, v11, v14);
            if (v0)
                v0 = sub_180001e58(v15, v11, v14);
        }
    }
}

extern unsigned long long g_1800055c0;

int sub_180001eec()
{
    int tmp_3;  // tmp #3
    int tmp_0;  // tmp #0
    unsigned long v1;  // rax, Other Possible Types: unsigned long long
    struct struct_0 **v2;  // gs
    unsigned long long v3;  // rcx
    unsigned long v4;  // cc_dep2, Other Possible Types: unsigned long long

    (unsigned int)v1 = sub_180002798();
    if ((unsigned int)v1)
    {
        v3 = v2[6]->field_8;
        while (true)
        {
            tmp_3 = 0;
            g_1800055c0 = v3;
            if (!g_1800055c0)
            {
                tmp_0 = 0;
                g_1800055c0 = v3;
                v4 = g_1800055c0;
                v1 = 0;
            }
            else
            {
                tmp_0 = 0;
                g_1800055c0 = v3;
                v4 = g_1800055c0;
                v1 = g_1800055c0;
            }
            if (!v4)
                break;
            if (v3 == v1)
            {
                *((char *)&v1) = 1;
                return v1;
            }
        }
    }
    *((char *)&v1) = 0;
    return v1;
}

int sub_180001f28(unsigned long long a0, unsigned long long a1)
{
    unsigned long v1;  // rax, Other Possible Types: unsigned long long, char

    if (sub_180002798())
    {
        (unsigned int)v1 = sub_1800025c8(a0, a1);
    }
    else
    {
        *((unsigned int *)&v1) = _configure_narrow_argv(sub_180002790());
        if (*((unsigned int *)&v1))
        {
            v1 = 0;
            return v1;
        }
        (unsigned int)v1 = _initialize_narrow_environment();
    }
    *((char *)&v1) = 1;
    return v1;
}

int sub_180001f5c()
{
    unsigned long long v1;  // rax

    (unsigned int)v1 = sub_1800020a8(0);
    *((char *)&v1) = (char)v1;
    return v1;
}

int sub_180001f74()
{
    unsigned long long v1;  // rax, Other Possible Types: unsigned long, char

    (unsigned int)v1 = sub_180002804();
    if ((char)v1)
    {
        *((unsigned int *)&v1) = sub_180002804();
        if (v1)
        {
            v1 = 1;
            return v1;
        }
        (unsigned int)v1 = sub_180002804();
    }
    *((char *)&v1) = 0;
    return v1;
}

int sub_180001f9c()
{
    char v1;  // rax

    sub_180002804();
    *((unsigned int *)&v1) = sub_180002804();
    v1 = 1;
    return *((unsigned int *)&v1);
}

int sub_180001fb4()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10]
    unsigned long v3;  // [bp+0x18]
    char v4;  // [bp+0x28]
    char v5;  // [bp+0x30]
    unsigned long v6;  // rbx
    unsigned long v7;  // rsi
    unsigned long v8;  // rdi
    unsigned int v9;  // edx
    struct struct_0 **v10;  // r9
    unsigned long long v11;  // rcx
    unsigned long long v12;  // r8
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rcx
    unsigned long long v16;  // rbp

    v1 = v6;
    *((int *)&v2) = rbp<8>;
    v3 = v7;
    v0 = v8;
    if (!sub_180002798() && v9 == 1)
    {
        sub_1800025c0(v10);
        v10(v11, 0, v12);
    }
    v13 = *((long long *)&v5);
    v14 = *((int *)&v4);
    v16 = v2;
    _seh_filter_dll();
    return;
}

extern char g_1800055c8;

void sub_180002018()
{
    unsigned long long v1;  // rcx

    if (sub_180002798())
    {
        v1 = &g_1800055c8;
        _execute_onexit_table();
        return;
    }
    else if (sub_180002808())
    {
        return;
    }
    else
    {
        _cexit();
        return;
    }
}

void sub_180002048()
{
    sub_180002804();
    sub_180002804();
    return;
}

extern char g_1800055f8;

int sub_18000205c(unsigned long long a0, unsigned long long a1)
{
    char v1;  // al
    unsigned long v2;  // rax, Other Possible Types: unsigned long long, char

    v1 = g_1800055f8;
    if (!(unsigned int)a0)
        v1 = 1;
    g_1800055f8 = v1;
    sub_1800025c8(a0, a1);
    (unsigned int)v2 = sub_180002804();
    if ((char)v2)
    {
        *((unsigned int *)&v2) = sub_180002804();
        if (v2)
        {
            v2 = 1;
            return v2;
        }
        (unsigned int)v2 = sub_180002804();
    }
    *((char *)&v2) = 0;
    return v2;
}

extern unsigned long long g_180005000;
extern uint128_t g_1800055c8;
extern unsigned long long g_1800055d8;
extern uint128_t g_1800055e0;
extern unsigned long long g_1800055f0;

int sub_1800020a8(unsigned long a0)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v4;  // rax, Other Possible Types: unsigned int, char
    char v5;  // cl
    unsigned long long v7;  // xmm1lq

    if ((unsigned int)a0 > 1)
    {
        sub_1800023e0(5);
        [D] Unsupported jumpkind Ijk_SigTRAP at address 6442459504
    }
    if (sub_180002798() && !(unsigned int)a0)
    {
        *((unsigned int *)&v4) = _initialize_onexit_table(&g_1800055c8);
        if (*((unsigned int *)&v4))
        {
            v4 = 0;
            return v4;
        }
        (unsigned int)v4 = _initialize_onexit_table(&g_1800055e0);
        *((char *)&v4) = !(unsigned int)v4;
        return v4;
    }
    v4 = (unsigned int)g_180005000 & 63;
    v5 = 64 - v4;
    *((char *)&v4) = 1;
    v0 = ((v5 & 63) ? -1 >> (v5 & 63) | -1 << 64 - (v5 & 63) : -1 >> (v5 & 63) | -1 << 64 - (v5 & 63)) ^ g_180005000;
    v1 = v0;
    v2 = v0;
    v7 = v2;
    g_1800055c8 = *((int128_t *)&v0);
    v0 = v0;
    v1 = v0;
    v2 = v0;
    g_1800055d8 = v7;
    g_1800055e0 = *((int128_t *)&v0);
    g_1800055f0 = v2;
    return v4;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[2];
    unsigned short field_6;
    char padding_8[12];
    unsigned short field_14;
    char padding_16[2];
    unsigned short field_18;
} struct_0;

extern char g_180000000;
extern char g_18000003c;

int sub_180002174(unsigned long a0)
{
    unsigned int v0[10];  // [bp-0x18]
    unsigned int v3;  // eax, Other Possible Types: unsigned long, unsigned long long, char
    struct_0 *v4;  // rcx
    unsigned long long v5;  // r8
    unsigned long long v6;  // r9
    unsigned long long v7;  // rcx
    unsigned int v8[10];  // rdx, Other Possible Types: unsigned long

    v3 = 23117;
    if (*((short *)&g_180000000) == 23117)
    {
        v3 = *((int *)&g_18000003c);
        v4 = &(&g_180000000)[*((int *)&g_18000003c)];
        if (v4->field_0 == 17744)
        {
            v3 = 523;
            if (v4->field_18 == 523)
            {
                v5 = a0 - &g_180000000;
                v8 = (char *)&v4->field_18 + v4->field_14;
                v3 = v4->field_6;
                v6 = &v8[v3];
                while (true)
                {
                    *((unsigned long *)&v0[0]) = v8;
                    if (v8 == v6)
                    {
                        v8 = 0;
                        break;
                    }
                    else
                    {
                        v7 = *((int *)(v8 + 12));
                        if (!(v5 < v7) && !((v3 = (unsigned long long)(unsigned int)*((int *)(v8 + 8)) + v7, v5 >= v3)))
                            break;
                        v8 += 40;
                    }
                }
                *((char *)&v3) = (!v8 ? (*((int *)(v8 + 36)) < 0 ? 1 : 0) : 0);
                return v3;
            }
        }
    }
    v3 = 0;
    return v3;
}

long long sub_180002206()
{
}

extern void* g_1800055c0;

void sub_180002210(unsigned long a0)
{
    int tmp_0;  // tmp #0
    int tmp_5;  // tmp #5
    int tmp_3;  // tmp #3

    if (!sub_180002798())
    {
        return;
    }
    else if ((char)a0)
    {
        return;
    }
    else
    {
LABEL_180002227:
        tmp_0 = g_1800055c0;
        g_1800055c0 = 0;
        tmp_5 = CasCmpNE(tmp_3, tmp_0);
        if (tmp_5)
            goto LABEL_180002227;
        return;
    }
}

extern char g_1800055f8;

int sub_180002234(unsigned long a0, unsigned long a1)
{
    char v1;  // rax

    if (!g_1800055f8 || !(char)a1)
    {
        sub_180002804();
        *((unsigned int *)&v1) = sub_180002804();
    }
    v1 = 1;
    return *((unsigned int *)&v1);
}

extern unsigned long long g_180005000;
extern unsigned long long g_1800055c8;

int sub_180002260(unsigned int a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long v4;  // rax, Other Possible Types: unsigned long long

    v0 = v2;
    if ((((char)((unsigned int)g_180005000 & 63) & 63) ? (g_180005000 ^ g_1800055c8) >> ((char)((unsigned int)g_180005000 & 63) & 63) | (g_180005000 ^ g_1800055c8) << 64 - ((char)((unsigned int)g_180005000 & 63) & 63) : (g_180005000 ^ g_1800055c8) >> ((char)((unsigned int)g_180005000 & 63) & 63) | (g_180005000 ^ g_1800055c8) << 64 - ((char)((unsigned int)g_180005000 & 63) & 63)) != -1)
        (unsigned int)v4 = _register_onexit_function(&g_1800055c8, a0);
    else
        (unsigned int)v4 = _crt_atexit(a0);
    if (!(unsigned int)v4)
        return a0;
    return 0;
}

void sub_1800022b0(unsigned long a0)
{
    sub_180002260(a0);
    return;
}

extern unsigned long long g_180005000;
extern unsigned long long g_180005008;

int _security_init_cookie()
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]
    void* v3;  // [bp+0x10]
    unsigned long long v4;  // [bp+0x18]
    unsigned long v5;  // rax, Other Possible Types: unsigned long long
    unsigned long long v6;  // rbp

    v0 = &v1;
    v3 = 0;
    v5 = g_180005000;
    if (g_180005000 == 47936899621426)
    {
        GetSystemTimeAsFileTime(&v3);
        v2 = v3;
        v2 ^= GetCurrentThreadId();
        v2 ^= GetCurrentProcessId();
        QueryPerformanceCounter(&v4);
        v5 = ((unsigned int)v4 * 0x100000000 ^ v4 ^ v2 ^ &v2) & 281474976710655;
        if (v5 == 47936899621426)
            v5 = 47936899621427;
        g_180005000 = v5;
    }
    g_180005008 = ~(v5);
    v6 = v0;
    return;
}

int sub_180002374(unsigned int *a0, unsigned long a1)
{
    if ((unsigned int)a1 == 1)
        DisableThreadLibraryCalls(a0);
    return 1;
}

extern void g_180005600;

void InitializeSListHead()
{
    ::kernel32.dll::InitializeSListHead(&g_180005600);
    return;
}

extern char g_180005600;

long long sub_1800023a8()
{
    unsigned long long v1;  // rcx

    v1 = &g_180005600;
    return __std_type_info_destroy_list();
}

int sub_1800023b4()
{
    return 2147505680;
}

void sub_1800023bc()
{
    *((long long *)sub_180001000()) = *((long long *)sub_180001000()) | 4;
    *((long long *)sub_1800023b4()) = *((long long *)sub_1800023b4()) | 2;
    return;
}

int sub_1800023d8()
{
    return 2147506080;
}

typedef struct CONTEXT {
    unsigned int ContextFlags;
    unsigned int Dr0;
    unsigned int Dr1;
    unsigned int Dr2;
    unsigned int Dr3;
    unsigned int Dr6;
    unsigned int Dr7;
    FLOATING_SAVE_AREA FloatSave;
    unsigned int SegGs;
    unsigned int SegFs;
    unsigned int SegEs;
    unsigned int SegDs;
    unsigned int Edi;
    unsigned int Esi;
    unsigned int Ebx;
    unsigned int Edx;
    unsigned int Ecx;
    unsigned int Eax;
    unsigned int Ebp;
    unsigned int Eip;
    unsigned int SegCs;
    unsigned int EFlags;
    unsigned int Esp;
    unsigned int SegSs;
    char ExtendedRegisters[512];
} CONTEXT;

typedef struct IMAGE_RUNTIME_FUNCTION_ENTRY {
    unsigned int BeginAddress;
    unsigned int EndAddress;
    char Anonymous;
} IMAGE_RUNTIME_FUNCTION_ENTRY;

typedef struct struct_0 {
    char field_0;
} struct_0;

typedef struct FLOATING_SAVE_AREA {
    unsigned int ControlWord;
    unsigned int StatusWord;
    unsigned int TagWord;
    unsigned int ErrorOffset;
    unsigned int ErrorSelector;
    unsigned int DataOffset;
    unsigned int DataSelector;
    char RegisterArea[80];
    unsigned int Spare0;
} FLOATING_SAVE_AREA;

extern unsigned int g_180005618;

int sub_1800023e0()
{
    struct_0 *v0;  // [bp-0x588]
    struct_0 *v1;  // [bp-0x580]
    unsigned int v2;  // [bp-0x578], Other Possible Types: char
    unsigned int v3;  // [bp-0x574]
    unsigned long long v4;  // [bp-0x568]
    CONTEXT v5;  // [bp-0x4d8]
    unsigned long long v7;  // [bp-0x3e0], Other Possible Types: char
    unsigned long v8;  // [bp-0x8]
    char v9;  // [bp+0x0]
    unsigned long v10;  // [bp+0x8]
    unsigned long long v11;  // [bp+0x10]
    unsigned long long v12;  // [bp+0x18]
    void* v13;  // [bp+0x20]
    unsigned long long v14;  // rbx
    IMAGE_RUNTIME_FUNCTION_ENTRY *v15;  // rax
    unsigned long long v16;  // rbp

    v8 = &v9;
    if (!IsProcessorFeaturePresent(23))
    {
        g_180005618 = 0;
        memset(&v5, 0, 1232);
        RtlCaptureContext(&v5);
        v14 = *((long long *)&v7);
        v15 = RtlLookupFunctionEntry(v14, &v11, NULL);
        if (v15)
            RtlVirtualUnwind(0, v11, v14, v15, &v5, &v13, &v12, NULL);
        v7 = *((long long *)&v9);
        *((unsigned long **)&v5.SegDs) = &v10;
        memset(&v2, 0, 152);
        v4 = *((long long *)&v9);
        v2 = 1073741845;
        v3 = 1;
        v0 = &v2;
        *((char *)&v14) = IsDebuggerPresent() == 1;
        v1 = &v5.ContextFlags;
        SetUnhandledExceptionFilter(NULL);
        if (!UnhandledExceptionFilter(&v0))
        {
            g_180005618 = g_180005618 & -(0 < (char)v14);
            v16 = v8;
            return;
        }
        v16 = v8;
        return;
    }
}

extern struct_0 *g_1800037a0;

void sub_180002528()
{
    struct struct_0 **v1;  // rbx, Other Possible Types: unsigned long
    struct struct_0 **v2;  // rdi

    for (v1 = &g_1800037a0; v1 < 6442465184; v1 += 8)
    {
        v2 = *((long long *)v1);
        if (v2)
        {
            sub_1800025c0(v2);
            v2(v2);
        }
    }
    return;
}

extern struct_0 *g_1800037b0;

long long sub_180002574()
{
    struct struct_0 **v1;  // rbx, Other Possible Types: unsigned long
    struct struct_0 **v2;  // rdi

    for (v1 = &g_1800037b0; v1 < 6442465200; v1 += 8)
    {
        v2 = *((long long *)v1);
        if (v2)
            sub_1800025c0(v2);
    }
    return v2(v2);
}

void sub_1800025c0(unsigned long a0)
{
    return;
}

extern unsigned int g_180005018;
extern unsigned int g_18000501c;
extern unsigned long long g_180005020;
extern unsigned int g_18000561c;

void sub_1800025c8(unsigned long a0, unsigned long a1)
{
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0x20]
    unsigned int v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x14]
    unsigned int v6;  // [bp-0x10]
    unsigned int v7;  // [bp-0xc]
    unsigned long v8;  // [bp-0x8]
    char v9;  // [bp+0x0]
    unsigned int v12;  // r8d
    unsigned int v13;  // ebx
    unsigned int v14;  // r11d
    unsigned int v15;  // edx
    unsigned int v16;  // r10d
    unsigned long long v17;  // rbp

    v8 = &v9;
    v3 = 0;
    g_18000501c = 2;
    [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
    [D] MBusEvent-Imbe_Fence
    g_180005018 = 1;
    v12 = g_18000561c;
    v14 = v13 ^ 1752462657 | (unsigned int)a1 ^ 1769238117 | 0 ^ 1145913699;
    v15 = v13 ^ 1970169159;
    v16 = (unsigned int)a1 ^ 1231384169 | 0 ^ 1818588270 | v15;
    [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
    [D] MBusEvent-Imbe_Fence
    v4 = 1;
    v6 = 0;
    v5 = v13;
    v7 = v15;
    if (!v16)
    {
        g_180005020 = -1;
        v12 = g_18000561c | 4;
        g_18000561c = v12;
    }
    v1 = v7;
    v2 = 0;
    v17 = v8;
    return;
}

int sub_180002790()
{
    return 1;
}

extern unsigned int g_180005030;

int sub_180002798()
{
    return g_180005030;
}

long long __C_specific_handler()
{
    return ::kernel32.dll::__C_specific_handler();
}

void memset(void* a0, unsigned long a1, unsigned int a2)
{
    ::kernel32.dll::memset(a0, a1, a2);
    return;
}

void _initterm(unsigned long a0, unsigned long a1)
{
    ::kernel32.dll::_initterm();
    return;
}

int _initterm_e(unsigned long a0, unsigned long a1)
{
    return ::kernel32.dll::_initterm_e();
}

int _configure_narrow_argv(unsigned long a0)
{
    return ::kernel32.dll::_configure_narrow_argv();
}

void _initialize_narrow_environment()
{
    ::kernel32.dll::_initialize_narrow_environment();
    return;
}

int _initialize_onexit_table(unsigned long a0)
{
    return ::kernel32.dll::_initialize_onexit_table();
}

int _register_onexit_function(unsigned long a0, unsigned long a1)
{
    return ::kernel32.dll::_register_onexit_function();
}

int _crt_atexit(unsigned long a0)
{
    return ::kernel32.dll::_crt_atexit();
}

void _cexit()
{
    ::kernel32.dll::_cexit();
    return;
}

int IsProcessorFeaturePresent(unsigned long a0)
{
    return ::kernel32.dll::IsProcessorFeaturePresent(a0);
}

int sub_180002804()
{
    char v1;  // al
    unsigned int v2;  // eax

    v1 = 1;
    return v2;
}

int sub_180002808()
{
    return 0;
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

long long sub_18000280c(unsigned long a0, unsigned long long a1, unsigned long a2, struct_0 *a3)
{
    sub_18000282c(a1, a3, a3->field_38);
    return 1;
}

typedef struct struct_2 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    unsigned int field_8;
} struct_2;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_3 {
    char padding_0[3];
    char field_3;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

void sub_18000282c(unsigned long long *a0, struct_1 *a1, struct_2 *a2)
{
    unsigned long long *v1;  // r9, Other Possible Types: unsigned long
    unsigned long long *v2;  // r10, Other Possible Types: unsigned long
    struct_3 *v3;  // rcx

    v1 = a0;
    v2 = a0;
    if ((a2->field_0 & 4))
        v2 = a2->field_4 + (char *)a0 & -(a2->field_8);
    v3 = a1->field_10->field_8 + a1->field_8;
    if ((v3->field_3 & 15))
        v1 = (char *)v1 + (v3->field_3 & 0xfffffff0);
    sub_1800019c0(v1 ^ *((long long *)((*((int *)&a2->field_0) & -8) + v2)));
    return;
}

long long sub_1800028a0()
{
    goto rax<8>;
}

typedef struct struct_0 {
    char padding_0[64];
    char field_40;
} struct_0;

long long sub_1800028a2(unsigned long a0, struct_0 *a1)
{
    return (unsigned long long)sub_180002210(a1->field_40);
}

typedef struct struct_0 {
    char padding_0[56];
    char field_38;
} struct_0;

long long sub_1800028b9(unsigned long a0, struct_0 *a1)
{
    sub_180002048();
    return (unsigned long long)sub_180002210(a1->field_38);
}

long long sub_1800028d5(struct struct_0 **a0, unsigned long long a1)
{
    unsigned long long v1;  // r8
    unsigned long long v2;  // r9

    return sub_180001fb4(a0, a1, v1, v2, *(a0)->field_0, a0);
}

long long sub_18000290b(struct struct_0 **a0, unsigned long a1)
{
    return *(a0)->field_0 == 3221225477;
}

