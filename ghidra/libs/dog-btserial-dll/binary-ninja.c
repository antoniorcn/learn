int64_t sub_180001000() __pure
{
    return &data_1800057a8;
}

int64_t sub_180001010(FILE* arg1, char* arg2, int64_t arg3)
{
    arg_10 = arg2;
    _ArgList = arg3;
    int64_t r9;
    arg_20 = r9;
    return __stdio_common_vfprintf(data_1800057a8, arg1, arg2, nullptr, &_ArgList);
}

int64_t sub_180001060(char* arg1, int64_t arg2)
{
    arg_8 = arg1;
    _ArgList = arg2;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    FILE* _Stream = __acrt_iob_func(1);
    return __stdio_common_vfprintf(data_1800057a8, _Stream, arg1, nullptr, &_ArgList);
}

int64_t sub_1800010c0()
{
    void var_68;
    int64_t rax_1 = (__security_cookie ^ &var_68);
    
    if (data_180005620 == 0)
    {
        __time64_t _Time = _time64(nullptr);
        void _Tm;
        _localtime64_s(&_Tm, &_Time);
        
        if (strftime(&data_180005620, 0x100, "PPPAGSEGURO_%Y-%m-%d.log", &_Tm) == 0)
        {
            memset(&data_180005620, 0, 0x100);
            __security_check_cookie((rax_1 ^ &var_68));
            return "PPPAGSEGURO.log";
        }
    }
    
    __security_check_cookie((rax_1 ^ &var_68));
    return &data_180005620;
}

int64_t sub_180001170()
{
    void var_68;
    int64_t rax_1 = (__security_cookie ^ &var_68);
    __time64_t _Time = _time64(nullptr);
    void _Tm;
    _localtime64_s(&_Tm, &_Time);
    uint64_t rax_3 = strftime(&data_180005720, 0x40, "%H:%M:%S|", &_Tm);
    
    if (rax_3 != 0)
    {
        __security_check_cookie((rax_1 ^ &var_68));
        return &data_180005720;
    }
    
    data_180005720 = rax_3;
    data_180005728 = rax_3;
    data_180005730 = rax_3;
    data_180005738 = rax_3;
    data_180005740 = rax_3;
    data_180005748 = rax_3;
    data_180005750 = rax_3;
    data_180005758 = rax_3;
    __security_check_cookie((rax_1 ^ &var_68));
    return "00:00:00|";
}

int64_t sub_180001230(int32_t arg1, char* arg2, int64_t arg3)
{
    _ArgList = arg3;
    int64_t r9;
    arg_20 = r9;
    void var_68;
    int64_t rax_1 = (__security_cookie ^ &var_68);
    int64_t rax_2 = sub_180001170();
    FILE* _Stream;
    fopen_s(&_Stream, sub_1800010c0(), &data_180003248);
    FILE* _Stream_2 = _Stream;
    
    if (_Stream_2 != 0)
    {
        if (arg1 != 0)
        {
            sub_180001010(_Stream_2, &data_18000324c, rax_2);
            _Stream_2 = _Stream;
        }
        
        __stdio_common_vfprintf(data_1800057a8, _Stream_2, arg2, nullptr, &_ArgList);
        fflush(_Stream);
        fclose(_Stream);
    }
    
    if (arg1 != 0)
        sub_180001060(&data_18000324c, rax_2);
    
    FILE* _Stream_1 = __acrt_iob_func(1);
    int64_t result = __stdio_common_vfprintf(data_1800057a8, _Stream_1, arg2, nullptr, &_ArgList);
    __security_check_cookie((rax_1 ^ &var_68));
    return result;
}

int32_t sub_180001330(char* arg1, uint64_t arg2, char* arg3, int64_t arg4)
{
    arg_18 = arg3;
    _ArgList = arg4;
    int32_t result = __stdio_common_vsprintf_s(data_1800057a8, arg1, arg2, arg3, nullptr, &_ArgList);
    
    if (result < 0)
        return -1;
    
    return result;
}

HANDLE sub_180001390(uint8_t* arg1, uint32_t arg2)
{
    void var_68;
    int64_t rax_1 = (__security_cookie ^ &var_68);
    int32_t result_1 = 0;
    int64_t var_38;
    __builtin_memset(&var_38, 0, 0x20);
    HANDLE result = CreateEventA(nullptr, 1, 0, nullptr);
    
    if (result != 0)
    {
        void var_18;
        
        if (WriteFile(data_180005760, arg1, arg2, &var_18, &var_38) != 0)
            result_1 = 1;
        else if ((GetLastError() == ERROR_IO_PENDING && WaitForSingleObject(result, 0xffffffff) == WAIT_OBJECT_0))
        {
            if (GetOverlappedResult(data_180005760, &var_38, &var_18, 0) != 0)
                FlushFileBuffers(data_180005760);
            
            result_1 = 1;
        }
        
        CloseHandle(result);
        result = result_1;
    }
    
    __security_check_cookie((rax_1 ^ &var_68));
    return result;
}

uint64_t SerialPortOpen(char* arg1)
{
    void var_68;
    int64_t rax_1 = (__security_cookie ^ &var_68);
    int64_t var_28;
    __builtin_memset(&var_28, 0, 0x14);
    enum FILE_FLAGS_AND_ATTRIBUTES rax_2 = 0x8000329c;
    
    if (arg1 != 0)
        rax_2 = arg1;
    
    enum FILE_FLAGS_AND_ATTRIBUTES var_40 = rax_2;
    enum FILE_CREATION_DISPOSITION var_48 = 0x800032a4;
    sub_180001230(1, "DVARS|%s:%d|[%s]: %s\n", "SerialPortOpen");
    int64_t* _Destination = &var_28;
    
    if (strstr(arg1, &data_1800032d8) != arg1)
        strncpy_s(_Destination, 0x14, arg1, 0x13);
    else
        sub_180001330(_Destination, 0x14, "\\.\%s", arg1);
    
    HANDLE rax_4 = CreateFileA(&var_28, 0xc0000000, FILE_SHARE_NONE, nullptr, OPEN_EXISTING, 0x40000080, nullptr);
    HANDLE var_40_1 = rax_4;
    data_180005760 = rax_4;
    char const* const var_48_1 = "g_hdlSerialPort";
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "SerialPortOpen");
    
    if (data_180005760 == -1)
    {
        var_40_1 = GetLastError();
        char const* const var_48_2 = "GetLastError()";
        sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "SerialPortOpen");
        __security_check_cookie((rax_1 ^ &var_68));
        return 0xfffff82f;
    }
    
    char const* const var_48_3 = "configurando porta com";
    sub_180001230(1, "TRACE|%s:%d|%s\n", "SerialPortOpen");
    HANDLE hFile = data_180005760;
    data_180005768 = 0x1c;
    int32_t rbx_1;
    
    if (GetCommState(hFile, &data_180005768) != 0)
    {
        HANDLE hFile_1 = data_180005760;
        data_18000576c = 0x1c200;
        data_18000577a = 8;
        data_18000577c = 0;
        
        if (SetCommState(hFile_1, &data_180005768) != 0)
        {
            void* const var_48_5 = &data_180003348;
            sub_180001230(1, "TRACE|%s:%d|%s\n", "SerialPortOpen");
            HANDLE hFile_2 = data_180005760;
            __builtin_memcpy(&data_180005788, "2\n2\n2…", 0x14);
            
            if (SetCommTimeouts(hFile_2, &data_180005788) != 0)
            {
                char* var_48_6 = arg1;
                sub_180001230(1, "TRACE|%s:%d|success opening '%s'…", "SerialPortOpen");
                __security_check_cookie((rax_1 ^ &var_68));
                return 0;
            }
        }
        
        rbx_1 = -0x7d3;
    }
    else
    {
        var_40_1 = GetLastError();
        char const* const var_48_4 = "GetLastError()";
        sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "SerialPortOpen");
        rbx_1 = -0x7d2;
    }
    
    CloseHandle(data_180005760);
    data_180005760 = 0;
    __security_check_cookie((rax_1 ^ &var_68));
    return rbx_1;
}

uint64_t SerialPortRead(uint8_t* arg1, uint32_t arg2, int32_t arg3)
{
    void var_98;
    int64_t rax_1 = (__security_cookie ^ &var_98);
    int32_t rdi = 0;
    uint32_t i = (arg3 / 0xfa);
    
    while (i != 0)
    {
        HANDLE hFile = data_180005760;
        i -= 1;
        
        if (hFile != -1)
        {
            enum CLEAR_COMM_ERROR_FLAGS lpErrors = 0;
            int64_t lpStat = 0;
            int32_t var_38_1 = 0;
            ClearCommError(hFile, &lpErrors, &lpStat);
            rdi = *lpStat[4];
        }
        else
            rdi = 0;
        
        if (rdi >= arg2)
            goto label_180001828;
        
        Sleep(0xfa);
    }
    
    uint64_t result;
    
    if (rdi >= arg2)
    {
    label_180001828:
        int64_t var_68;
        __builtin_memset(&var_68, 0, 0x20);
        HANDLE hObject = CreateEventA(nullptr, 1, 0, nullptr);
        void lpNumberOfBytesRead;
        ReadFile(data_180005760, arg1, arg2, &lpNumberOfBytesRead, &var_68);
        CloseHandle(hObject);
        result = arg2;
    }
    else
        result = 0xfffff82c;
    
    __security_check_cookie((rax_1 ^ &var_98));
    return result;
}

uint64_t SerialPortWrite(int64_t arg1, int32_t arg2)
{
    int32_t rbx = 0;
    
    if (arg2 != 0)
    {
        do
        {
            uint32_t rax_2 = (arg2 - rbx);
            uint32_t rdi_1 = 0x800;
            
            if (rax_2 < 0x800)
                rdi_1 = rax_2;
            
            uint32_t var_10_1 = rdi_1;
            int64_t var_18;
            var_18 = rbx;
            sub_180001230(1, "TRACE|%s:%d|escrevendo serial. i…", "SerialPortWrite");
            
            if (sub_180001390((rbx + arg1), rdi_1) != 1)
                return 0xfffff82b;
            
            Sleep(0xfa);
            rbx += rdi_1;
        } while (rbx < arg2);
    }
    
    int32_t var_10_2 = rbx;
    void* const var_18_1 = &data_1800033b8;
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "SerialPortWrite");
    return rbx;
}

void SerialPortClose()
{
    HANDLE hObject = data_180005760;
    
    if (hObject != 0)
    {
        CloseHandle(hObject);
        data_180005760 = 0;
    }
}

void __security_check_cookie(int64_t arg1)
{
    if (arg1 == __security_cookie)
    {
        int64_t rcx = (ROLQ(arg1, 0x10));
        
        if ((rcx & 0xffff) == 0)
            return;
        
        arg1 = (RORQ(rcx, 0x10));
    }
    
    /* tailcall */
    return __report_gsfailure(arg1);
}

int64_t __raise_securityfailure(EXCEPTION_POINTERS* arg1)
{
    SetUnhandledExceptionFilter(nullptr);
    UnhandledExceptionFilter(arg1);
    /* tailcall */
    return TerminateProcess(GetCurrentProcess(), 0xc0000409);
}

void __report_gsfailure(uint64_t stack_cookie) __noreturn
{
    stack_cookie_1 = stack_cookie;
    
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd);
    
    capture_previous_context(&data_1800050e0);
    data_1800051d8 = __return_addr;
    data_180005178 = &stack_cookie_1;
    data_180005050 = data_1800051d8;
    data_180005160 = stack_cookie_1;
    data_180005040 = 0xc0000409;
    data_180005044 = 1;
    data_180005058 = 1;
    data_180005060 = 2;
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t var_10 = data_180005008;
    __raise_securityfailure(&data_180003230);
}

IMAGE_RUNTIME_FUNCTION_ENTRY* capture_previous_context(CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
    
    for (int32_t i = 0; i < 2; i += 1)
    {
        FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
        
        if (FunctionEntry == 0)
            break;
        
        FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, &HandlerData, &EstablisherFrame, nullptr);
    }
    
    return FunctionEntry;
}

uint64_t dllmain_crt_dispatch(int64_t arg1, int32_t arg2, int64_t arg3)
{
    if (arg2 == 0)
    {
        arg1 = arg3 != 0;
        /* tailcall */
        return dllmain_crt_process_detach(arg1);
    }
    
    if (arg2 == 1)
        /* tailcall */
        return sub_180001bb0(arg1, arg3);
    
    char rax_1;
    
    if (arg2 == 2)
        rax_1 = __scrt_dllmain_crt_thread_attach();
    else
    {
        if (arg2 != 3)
            return 1;
        
        rax_1 = __scrt_dllmain_crt_thread_detach();
    }
    
    return rax_1;
}

int64_t sub_180001bb0(int64_t arg1, int64_t arg2)
{
    if (__scrt_initialize_crt(0) != 0)
    {
        char rax_1 = __scrt_acquire_startup_lock();
        int64_t rbx;
        rbx = rax_1;
        arg_18 = rax_1;
        int64_t rdi;
        rdi = 1;
        
        if (data_1800055b8 != 0)
            __scrt_fastfail(7);
        
        data_1800055b8 = 1;
        
        if (__scrt_dllmain_before_initialize_c() != 0)
        {
            sub_180002528();
            atexit(sub_180002574);
            sub_180002398();
            atexit(sub_1800023a8);
            __scrt_initialize_default_local_stdio_options();
            
            if ((_initterm_e(&data_1800031f8, &data_180003200) == 0 && __scrt_dllmain_after_initialize_c() != 0))
            {
                _initterm(&data_1800031e8, &data_1800031f0);
                data_1800055b8 = 2;
                rdi = 0;
            }
        }
        
        __scrt_release_startup_lock(rbx);
        
        if (rdi == 0)
        {
            if ((data_1800057a0 != 0 && __scrt_is_nonwritable_in_current_image(&data_1800057a0) != 0))
            {
                int64_t rbx_1 = data_1800057a0;
                j__guard_check_icall();
                rbx_1(arg1, 2, arg2);
            }
            
            data_1800055b0 += 1;
            return 1;
        }
    }
    
    return 0;
}

uint64_t dllmain_crt_process_detach(char arg1)
{
    int64_t rsi;
    rsi = arg1;
    int32_t rax = data_1800055b0;
    
    if (rax <= 0)
        return 0;
    
    data_1800055b0 = (rax - 1);
    char rax_3 = __scrt_acquire_startup_lock();
    int64_t rdi;
    rdi = rax_3;
    arg_10 = rax_3;
    
    if (data_1800055b8 != 2)
        __scrt_fastfail(7);
    
    __scrt_dllmain_uninitialize_c();
    data_1800055b8 = 0;
    __scrt_dllmain_uninitialize_critical();
    __scrt_release_startup_lock(rdi);
    int32_t rbx;
    rbx = __scrt_uninitialize_crt(rsi, 0) != 0;
    return rbx;
}

uint64_t dllmain_dispatch(HMODULE arg1, int32_t arg2, int64_t arg3)
{
    arg_18 = arg3;
    arg_10 = arg2;
    arg_8 = arg1;
    
    if ((arg2 == 0 && data_1800055b0 <= arg2))
        return 0;
    
    int32_t rbx_1;
    
    if ((arg2 - 1) > 1)
    {
    label_180001dcf:
        DllMain(arg1, arg2);
        rbx_1 = 1;
        int32_t var_28_3 = 1;
        
        if ((arg2 == 0 || arg2 == 3))
        {
            int32_t rax_4 = dllmain_crt_dispatch(arg1, arg2, arg3);
            rbx_1 = rax_4;
            int32_t var_28_4 = rax_4;
            
            if (rax_4 != 0)
            {
                int32_t rax_5 = dllmain_raw(arg1, arg2, arg3);
                rbx_1 = rax_5;
                int32_t var_28_5 = rax_5;
            }
        }
    }
    else
    {
        int32_t rax_2 = dllmain_raw(arg1, arg2, arg3);
        rbx_1 = rax_2;
        int32_t var_28_1 = rax_2;
        
        if (rax_2 != 0)
        {
            int32_t rax_3 = dllmain_crt_dispatch(arg1, arg2, arg3);
            rbx_1 = rax_3;
            int32_t var_28_2 = rax_3;
            
            if (rax_3 != 0)
                goto label_180001dcf;
        }
    }
    
    return rbx_1;
}

int64_t dllmain_raw(int64_t arg1, int32_t arg2, int64_t arg3)
{
    return 1;
}

int64_t _start(HMODULE arg1, int32_t arg2, int64_t arg3)
{
    if (arg2 == 1)
        __security_init_cookie();
    
    /* tailcall */
    return dllmain_dispatch(arg1, arg2, arg3);
}

int64_t __scrt_acquire_startup_lock()
{
    int64_t result;
    
    if (sub_180002798() == 0)
    {
    label_180001f1a:
        result = 0;
    }
    else
    {
        TEB* gsbase;
        void* StackBase = gsbase->NtTib.Self->NtTib.StackBase;
        
        do
        {
            result = 0;
            bool z_1;
            
            if (0 == data_1800055c0)
            {
                data_1800055c0 = StackBase;
                z_1 = true;
            }
            else
            {
                result = data_1800055c0;
                z_1 = false;
            }
            
            if (z_1)
                goto label_180001f1a;
        } while (StackBase != result);
        
        result = 1;
    }
    
    return result;
}

errno_t __scrt_dllmain_after_initialize_c()
{
    errno_t result;
    
    if (sub_180002798() == 0)
    {
        if (_configure_narrow_argv(_crt_argv_unexpanded_arguments) == 0)
        {
            _initialize_narrow_environment();
            result = 1;
        }
        else
            result = 0;
    }
    else
    {
        int64_t xcr0;
        __isa_available_init(xcr0);
        result = 1;
    }
    
    return result;
}

bool __scrt_dllmain_before_initialize_c()
{
    return __scrt_initialize_onexit_tables(0) != 0;
}

int64_t __scrt_dllmain_crt_thread_attach()
{
    if ((sub_180002804() != 0 && sub_180002804() != 0))
        return 1;
    
    return 0;
}

int64_t __scrt_dllmain_crt_thread_detach()
{
    int64_t result;
    result = 1;
    return result;
}

int64_t __scrt_dllmain_exception_filter(int64_t arg1, int32_t arg2, int64_t arg3, int64_t arg4, uint32_t arg5, struct _EXCEPTION_POINTERS* arg6)
{
    if ((sub_180002798() == 0 && arg2 == 1))
    {
        j__guard_check_icall();
        arg4(arg1, 0, arg3);
    }
    
    /* tailcall */
    return _seh_filter_dll(arg5, arg6);
}

int64_t __scrt_dllmain_uninitialize_c()
{
    if (sub_180002798() != 0)
        /* tailcall */
        return _execute_onexit_table(&data_1800055c8);
    
    sub_180002808();
    return _cexit();
}

int64_t __scrt_dllmain_uninitialize_critical()
{
    /* tailcall */
    return sub_180002804();
}

int64_t __scrt_initialize_crt(int32_t arg1)
{
    char rax = data_1800055f8;
    
    if (arg1 == 0)
        rax = 1;
    
    data_1800055f8 = rax;
    int64_t xcr0;
    __isa_available_init(xcr0);
    
    if ((sub_180002804() != 0 && sub_180002804() != 0))
        return 1;
    
    return 0;
}

int32_t __scrt_initialize_onexit_tables(int32_t arg1)
{
    if (arg1 > 1)
    {
        __scrt_fastfail(5);
        breakpoint();
    }
    
    int32_t result;
    
    if ((sub_180002798() == 0 || arg1 != 0))
    {
        uint64_t __security_cookie_1 = __security_cookie;
        result = 1;
        int64_t r8_2 = ((RORQ(-1, (0x40 - (__security_cookie_1 & 0x3f)))) ^ __security_cookie_1);
        int64_t var_20_1 = r8_2;
        *data_1800055c8 = r8_2;
        int64_t var_20_2 = r8_2;
        data_1800055d8 = r8_2;
        data_1800055e0 = r8_2;
        data_1800055f0 = r8_2;
    }
    else if (_initialize_onexit_table(&data_1800055c8) == 0)
        result = _initialize_onexit_table(&data_1800055e0) == 0;
    else
        result = 0;
    
    return result;
}

uint64_t __scrt_is_nonwritable_in_current_image(int64_t arg1)
{
    struct Section_Header* const rdx_1 = &__section_headers;
    
    while (true)
    {
        struct Section_Header* const var_18_1 = rdx_1;
        
        if (rdx_1 == &data_180000320)
        {
            rdx_1 = nullptr;
            break;
        }
        
        uint64_t virtualAddress = rdx_1->virtualAddress;
        
        if (((arg1 - &__dos_header) >= virtualAddress && (arg1 - &__dos_header) < (rdx_1->virtualSize + virtualAddress)))
            break;
        
        rdx_1 = &rdx_1[1];
    }
    
    uint64_t result;
    
    if (rdx_1 == 0)
        result = 0;
    else if (rdx_1->characteristics >= 0)
        result = 1;
    else
        result = 0;
    
    return result;
}

int64_t __scrt_release_startup_lock(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    int32_t result = sub_180002798();
    
    if ((result != 0 && rbx == 0))
    {
        data_1800055c0;
        data_1800055c0 = 0;
    }
    
    return result;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    data_1800055f8;
    int64_t result;
    result = 1;
    return result;
}

_onexit_t_1 _onexit(_onexit_t_1 arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    int32_t rax;
    
    if ((RORQ((__security_cookie_1 ^ data_1800055c8), (__security_cookie_1 & 0x3f))) != -1)
        rax = _register_onexit_function(&data_1800055c8, arg1);
    else
        rax = _crt_atexit(arg1);
    
    if (rax == 0)
        return arg1;
    
    return nullptr;
}

uint64_t atexit(_onexit_t_1 arg1)
{
    _onexit_t_1 rax = _onexit(arg1);
    int32_t rax_1 = -(rax);
    return (-((rax_1 - rax_1)) - 1);
}

uint64_t __security_init_cookie()
{
    lpSystemTimeAsFileTime = 0;
    uint64_t __security_cookie_1 = __security_cookie;
    
    if (__security_cookie_1 == 0x2b992ddfa232)
    {
        GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime);
        lpSystemTimeAsFileTime_1 = lpSystemTimeAsFileTime;
        uint64_t rax_2 = GetCurrentThreadId();
        lpSystemTimeAsFileTime_1 ^= rax_2;
        uint64_t rax_4 = GetCurrentProcessId();
        lpSystemTimeAsFileTime_1 ^= rax_4;
        QueryPerformanceCounter(&lpPerformanceCount);
        __security_cookie_1 = (((((lpPerformanceCount << 0x20) ^ lpPerformanceCount) ^ lpSystemTimeAsFileTime_1) ^ &lpSystemTimeAsFileTime_1) & 0xffffffffffff);
        
        if (__security_cookie_1 == 0x2b992ddfa232)
            __security_cookie_1 = 0x2b992ddfa233;
        
        __security_cookie = __security_cookie_1;
    }
    
    uint64_t result = !(__security_cookie_1);
    data_180005008 = result;
    return result;
}

int64_t DllMain(HMODULE arg1, int32_t arg2)
{
    if (arg2 == 1)
        DisableThreadLibraryCalls(arg1);
    
    return 1;
}

int64_t sub_180002398()
{
    /* tailcall */
    return InitializeSListHead(&data_180005600);
}

int64_t sub_1800023a8()
{
    /* tailcall */
    return __std_type_info_destroy_list(&data_180005600);
}

int64_t sub_1800023b4() __pure
{
    return &data_180005610;
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_1800057a8 |= 4;
    data_180005610 |= 2;
    return &data_180005610;
}

int64_t sub_1800023d8() __pure
{
    return &data_1800057a0;
}

int32_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd);
    
    data_180005618 = 0;
    void ContextRecord;
    memset(&ContextRecord, 0, 0x4d0);
    RtlCaptureContext(&ContextRecord);
    uint64_t ControlPc;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(ControlPc, &ImageBase, nullptr);
    
    if (FunctionEntry != 0)
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, ControlPc, FunctionEntry, &ContextRecord, &HandlerData, &EstablisherFrame, nullptr);
    
    void* const __return_addr_2 = __return_addr;
    int64_t* var_440 = &__saved_rbx;
    int32_t var_578;
    memset(&var_578, 0, 0x98);
    void* const __return_addr_1 = __return_addr;
    var_578 = 0x40000015;
    int32_t var_574 = 1;
    bool cond:0 = IsDebuggerPresent() == 1;
    int32_t* ExceptionInfo = &var_578;
    uint64_t rbx_1;
    rbx_1 = cond:0;
    void* var_580 = &ContextRecord;
    SetUnhandledExceptionFilter(nullptr);
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo);
    
    if (result == 0)
    {
        char temp0_1 = rbx_1;
        rbx_1 = -(rbx_1);
        result = (result - result);
        data_180005618 &= result;
    }
    
    return result;
}

void sub_180002528()
{
    for (void* const i = &data_1800037a0; i < &data_1800037a0; i += 8)
    {
        int64_t rdi_1 = *i;
        
        if (rdi_1 != 0)
        {
            j__guard_check_icall();
            rdi_1(rdi_1);
        }
    }
}

void sub_180002574()
{
    for (void* const i = &data_1800037b0; i < &data_1800037b0; i += 8)
    {
        int64_t rdi_1 = *i;
        
        if (rdi_1 != 0)
        {
            j__guard_check_icall();
            rdi_1(rdi_1);
        }
    }
}

int64_t j__guard_check_icall()
{
    /* tailcall */
    return _guard_check_icall();
}

int64_t __isa_available_init(int64_t arg1 @ xcr0)
{
    char var_20 = 0;
    data_18000501c = 2;
    int32_t temp0;
    temp0 = __cpuid(0, 0);
    data_180005018 = 1;
    int32_t r8_2 = data_18000561c;
    int32_t temp0_1;
    temp0_1 = __cpuid(1, 0);
    int32_t var_18 = temp0_1;
    int32_t temp2;
    int32_t var_10 = temp2;
    int32_t temp1;
    int32_t var_14 = temp1;
    int32_t temp3;
    int32_t var_c = temp3;
    
    if ((((temp3 ^ 0x49656e69) | (temp2 ^ 0x6c65746e)) | (temp1 ^ 0x756e6547)) == 0)
    {
        data_180005020 = -1;
        r8_2 |= 4;
        int32_t rax_2 = (temp0_1 & 0xfff3ff0);
        data_18000561c = r8_2;
        
        if (((rax_2 == 0x106c0 || rax_2 == 0x20660) || rax_2 == 0x20670))
        {
            r8_2 |= 1;
            data_18000561c = r8_2;
        }
        else
        {
            uint64_t rax_3 = (rax_2 - 0x30650);
            
            if ((rax_3 <= 0x20 && (TEST_BITQ(0x100010001, rax_3))))
            {
                r8_2 |= 1;
                data_18000561c = r8_2;
            }
        }
    }
    
    if (((((temp1 ^ 0x68747541) | (temp3 ^ 0x69746e65)) | (temp2 ^ 0x444d4163)) == 0 && (temp0_1 & 0xff00f00) >= 0x600f00))
    {
        r8_2 |= 4;
        data_18000561c = r8_2;
    }
    
    int32_t var_28 = temp3;
    int32_t var_24 = temp2;
    
    if (temp0 >= 7)
    {
        int32_t temp0_2;
        temp0_2 = __cpuid(7, 0);
        int32_t var_18_1 = temp0_2;
        int32_t var_14_1 = temp1;
        int32_t var_10_1 = temp2;
        int32_t var_c_1 = temp3;
        var_20 = temp1;
        
        if ((TEST_BITD(temp1, 9)))
            data_18000561c = (r8_2 | 2);
    }
    
    if ((TEST_BITD(temp2, 0x14)))
    {
        data_180005018 = 2;
        data_18000501c = 6;
        
        if (((TEST_BITD(temp2, 0x1b)) && (TEST_BITD(temp2, 0x1c))))
        {
            int32_t temp0_3;
            temp0_3 = _xgetbv(0, arg1);
            
            if ((((temp0_3 << 0x20) | temp1) & 6) == 6)
            {
                int32_t rax_8 = (data_18000501c | 8);
                data_180005018 = 3;
                data_18000501c = rax_8;
                
                if ((var_20 & 0x20) != 0)
                {
                    data_180005018 = 5;
                    data_18000501c = (rax_8 | 0x20);
                }
            }
        }
    }
    
    return 0;
}

int64_t sub_180002790() __pure
{
    return 1;
}

int64_t sub_180002798()
{
    int64_t result;
    result = data_180005030 != 0;
    return result;
}

int64_t _guard_check_icall() __pure
{
    return;
}

enum _EXCEPTION_DISPOSITION __C_specific_handler(struct _EXCEPTION_RECORD* ExceptionRecord, void* EstablisherFrame, struct _CONTEXT* ContextRecord, struct _DISPATCHER_CONTEXT* DispatcherContext)
{
    /* tailcall */
    return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}

void __std_type_info_destroy_list(struct __type_info_node* root_node)
{
    /* tailcall */
    return __std_type_info_destroy_list(root_node);
}

int64_t memset(void* dest, int32_t c, uint64_t count)
{
    /* tailcall */
    return memset(dest, c, count);
}

void _initterm(_PVFV* _First, _PVFV* _Last)
{
    /* tailcall */
    return _initterm(_First, _Last);
}

int32_t _initterm_e(_PIFV* _First, _PIFV* _Last)
{
    /* tailcall */
    return _initterm_e(_First, _Last);
}

int32_t _seh_filter_dll(uint32_t _ExceptionNum, struct _EXCEPTION_POINTERS* _ExceptionPtr)
{
    /* tailcall */
    return _seh_filter_dll(_ExceptionNum, _ExceptionPtr);
}

errno_t _configure_narrow_argv(enum _crt_argv_mode mode)
{
    /* tailcall */
    return _configure_narrow_argv(mode);
}

int32_t _initialize_narrow_environment()
{
    /* tailcall */
    return _initialize_narrow_environment();
}

int32_t _initialize_onexit_table(struct _onexit_table_t* _Table)
{
    /* tailcall */
    return _initialize_onexit_table(_Table);
}

int32_t _register_onexit_function(struct _onexit_table_t* _Table, _onexit_t_1 _Function)
{
    /* tailcall */
    return _register_onexit_function(_Table, _Function);
}

int32_t _execute_onexit_table(struct _onexit_table_t* _Table)
{
    /* tailcall */
    return _execute_onexit_table(_Table);
}

int32_t _crt_atexit(_PVFV _Function)
{
    /* tailcall */
    return _crt_atexit(_Function);
}

void _cexit()
{
    /* tailcall */
    return _cexit();
}

BOOL IsProcessorFeaturePresent(enum PROCESSOR_FEATURE_ID ProcessorFeature)
{
    /* tailcall */
    return IsProcessorFeaturePresent(ProcessorFeature);
}

int64_t sub_180002804() __pure
{
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_180002808() __pure
{
    return 0;
}

int64_t __GSHandlerCheck(int64_t arg1, int64_t arg2, int64_t arg3, void* arg4)
{
    __GSHandlerCheckCommon(arg2, arg4, *(arg4 + 0x38));
    return 1;
}

int64_t __GSHandlerCheckCommon(int64_t arg1, void* arg2, int32_t* arg3)
{
    int64_t r9 = arg1;
    int64_t r10 = arg1;
    
    if ((*arg3 & 4) != 0)
        r10 = ((arg3[1] + arg1) & -(arg3[2]));
    
    void* rcx_2 = (*(*(arg2 + 0x10) + 8) + *(arg2 + 8));
    
    if ((*(rcx_2 + 3) & 0xf) != 0)
        r9 += (*(rcx_2 + 3) & 0xfffffff0);
    
    /* tailcall */
    return __security_check_cookie((r9 ^ *((*arg3 & 0xfffffff8) + r10)));
}

int64_t _guard_dispatch_icall_nop(int64_t arg1 @ rax)
{
    /* jump -> arg1 */
}

int64_t dllmain_crt_process_attach::fin$0::fin$0(char arg1, void* arg2)
{
    /* tailcall */
    return __scrt_release_startup_lock(*(arg2 + 0x40));
}

int64_t dllmain_crt_process_detach::fin$0::fin$0(int64_t arg1, void* arg2)
{
    __scrt_dllmain_uninitialize_critical();
    /* tailcall */
    return __scrt_release_startup_lock(*(arg2 + 0x38));
}

int64_t dllmain_dispatch::filt$0::filt$0(int64_t* arg1, void* arg2)
{
    return __scrt_dllmain_exception_filter(*(arg2 + 0x60), *(arg2 + 0x68), *(arg2 + 0x70), dllmain_crt_dispatch, **arg1, arg1);
}

uint64_t __scrt_is_nonwritable_in_current_image$filt$0(int64_t* arg1)
{
    int32_t rcx;
    rcx = **arg1 == 0xc0000005;
    return rcx;
}

