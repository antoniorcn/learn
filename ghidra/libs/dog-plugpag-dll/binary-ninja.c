int64_t sub_180001000(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t rax_1 = *(*arg1 + 0xf8)();
    data_180005638 = rax_1;
    
    if (rax_1 != 0)
    {
        int64_t rax_3 = *(*arg1 + 0x2f0)(arg1, rax_1, arg3, "Ljava/lang/String;");
        
        if (rax_3 != 0)
        {
            int64_t rax_5 = *(*arg1 + 0x538)(arg1, arg4);
            
            if (rax_5 != 0)
            {
                *(*arg1 + 0x340)(arg1, arg2, rax_3, rax_5);
                int64_t* rcx_3 = data_180005648;
                
                if (*(*rcx_3 + 0x720)(rcx_3) == 0)
                    return 0;
                
                int64_t* rcx_4 = data_180005648;
                *(*rcx_4 + 0x88)(rcx_4);
            }
        }
    }
    
    return 0xfffff448;
}

int64_t sub_1800010d0(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t rax_1 = *(*arg1 + 0xf8)();
    data_180005638 = rax_1;
    
    if (rax_1 == 0)
        return 0xfffff448;
    
    int64_t rax_4 = *(*arg1 + 0x2f0)(arg1, rax_1, "rawBuffer", &data_1800031bc);
    
    if (rax_4 == 0)
        return 0xfffff448;
    
    int64_t rax_7 = *(*arg1 + 0x580)(arg1, 0x10006);
    
    if (rax_7 != 0)
    {
        *(*arg1 + 0x680)(arg1, rax_7, 0, 0x10006, arg4);
        int64_t* rcx_3 = data_180005648;
        
        if (*(*rcx_3 + 0x720)(rcx_3) == 0)
        {
            *(*arg1 + 0x340)(arg1, arg2, rax_4, rax_7);
            int64_t* rcx_5 = data_180005648;
            
            if (*(*rcx_5 + 0x720)(rcx_5) == 0)
                return 0;
        }
        
        int64_t* rcx_6 = data_180005648;
        *(*rcx_6 + 0x88)(rcx_6);
    }
    
    return 0xfffff448;
}

int64_t JNI_OnLoad(int64_t* arg1, int512_t arg2 @ zmm0)
{
    void var_38;
    int64_t rax_1 = (__security_cookie ^ &var_38);
    int64_t var_18;
    
    if (*(*arg1 + 0x30)(arg2, &var_18, 0x10006) != 0)
    {
        __security_check_cookie((rax_1 ^ &var_38));
        return 0xfffff448;
    }
    
    data_180005648 = var_18;
    __security_check_cookie((rax_1 ^ &var_38));
    return 0x10006;
}

int64_t Java_br_uol_pagseguro_client_plugpag_PlugPag_GetVersionLib(int64_t* arg1)
{
    GetVersionLib();
    /* jump -> *(*arg1 + 0x538) */
}

int64_t UnloadDriverConnection()
{
    /* tailcall */
    return UnloadDriverConnection();
}

int64_t Java_br_uol_pagseguro_client_plugpag_PlugPag_InitBTConnection__()
{
    /* tailcall */
    return InitBTConnection(0);
}

uint64_t Java_br_uol_pagseguro_client_plugpag_PlugPag_InitBTConnection__Ljava_lang_String_2(int64_t* arg1, int64_t arg2, int64_t arg3, int512_t arg4 @ zmm0)
{
    int64_t rax_1 = *(*arg1 + 0x548)(arg4, arg3, 0);
    int32_t rax_2 = InitBTConnection(rax_1);
    int64_t r9 = *arg1;
    *(r9 + 0x550)(arg1, arg3, rax_1, r9);
    return rax_2;
}

uint64_t Java_br_uol_pagseguro_client_plugpag_PlugPag_SimplePaymentTransaction(int64_t* arg1, int64_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int64_t arg6, int64_t arg7)
{
    __chkstk(0x105c8);
    void var_10608;
    int64_t rax_1 = (__security_cookie ^ &var_10608);
    void var_c0;
    void* var_105c8 = &var_c0;
    void* const var_105c0 = &data_1800031c0;
    int64_t i = 0;
    void var_df;
    void* var_105b8 = &var_df;
    char const* const var_105b0 = "cardBrand";
    void var_100;
    void* var_105a8 = &var_100;
    char const* const var_105a0 = "date";
    void var_b9;
    void* var_10598 = &var_b9;
    char const* const var_10590 = "holder";
    void var_ec;
    void* var_10588 = &var_ec;
    char const* const var_10580 = "hostNsu";
    void var_f5;
    void* var_10578 = &var_f5;
    char const* const var_10570 = "time";
    void var_b4;
    void* var_10568 = &var_b4;
    char const* const var_10560 = "userReference";
    void var_121;
    void* var_10558 = &var_121;
    char const* const var_10550 = "transactionCode";
    void var_521;
    void* var_10548 = &var_521;
    char const* const var_10540 = "message";
    void var_a9;
    void* var_10538 = &var_a9;
    char const* const var_10530 = "terminalSerialNumber";
    int64_t r12;
    
    if (arg6 == 0)
        r12 = 0;
    else
        r12 = *(*arg1 + 0x548)(arg1, arg6, 0);
    
    int64_t r15;
    
    if (arg7 == 0)
        r15 = 0;
    else
        r15 = *(*arg1 + 0x548)(arg1, arg7, 0);
    
    void var_10528;
    memset(&var_10528, 0, 0x104c1);
    int32_t result_1 = SimplePaymentTransaction(arg3, arg4, arg5, r12, r15, &var_10528, arg4, arg6, var_105c8);
    
    if (arg6 != 0)
    {
        int64_t r9_1 = *arg1;
        *(r9_1 + 0x550)(arg1, arg6, r12, r9_1);
    }
    
    if (arg7 != 0)
    {
        int64_t r9_2 = *arg1;
        *(r9_2 + 0x550)(arg1, arg7, r15, r9_2);
    }
    
    int32_t rax_7;
    
    if (result_1 == 0)
    {
        void* const* rbx_1 = &var_105c0;
        int64_t r8_4;
        
        do
        {
            int32_t rax_6;
            rax_6 = sub_180001000(arg1, arg2, *rbx_1, rbx_1[-1]);
            
            if (rax_6 < 0)
                goto label_180001556;
            
            i += 1;
            rbx_1 = &rbx_1[2];
        } while (i < 0xa);
        
        rax_7 = sub_1800010d0(arg1, arg2, r8_4, &var_10528);
    }
    
    uint64_t result;
    
    if ((result_1 != 0 || rax_7 >= 0))
        result = result_1;
    else
    {
    label_180001556:
        result = 0xfffff448;
    }
    
    __security_check_cookie((rax_1 ^ &var_10608));
    return result;
}

uint64_t Java_br_uol_pagseguro_client_plugpag_PlugPag_CancelTransaction(int64_t* arg1, int64_t arg2)
{
    __chkstk(0x105b0);
    void var_105d8;
    int64_t rax_1 = (__security_cookie ^ &var_105d8);
    void var_a0;
    void* var_105a8 = &var_a0;
    void* const var_105a0 = &data_1800031c0;
    void var_bf;
    void* var_10598 = &var_bf;
    char const* const var_10590 = "cardBrand";
    void var_e0;
    void* var_10588 = &var_e0;
    char const* const var_10580 = "date";
    void var_99;
    void* var_10578 = &var_99;
    char const* const var_10570 = "holder";
    void var_cc;
    void* var_10568 = &var_cc;
    char const* const var_10560 = "hostNsu";
    void var_d5;
    void* var_10558 = &var_d5;
    char const* const var_10550 = "time";
    void var_94;
    void* var_10548 = &var_94;
    char const* const var_10540 = "userReference";
    void var_101;
    void* var_10538 = &var_101;
    char const* const var_10530 = "transactionCode";
    void var_501;
    void* var_10528 = &var_501;
    char const* const var_10520 = "message";
    void var_89;
    void* var_10518 = &var_89;
    char const* const var_10510 = "terminalSerialNumber";
    void var_10508;
    memset(&var_10508, 0, 0x104c1);
    int32_t result_1 = CancelTransaction(&var_10508);
    int32_t rax_3;
    
    if (result_1 == 0)
    {
        int64_t i = 0;
        void* const* rbx_1 = &var_105a0;
        int64_t r8_2;
        
        do
        {
            int32_t rax_2;
            rax_2 = sub_180001000(arg1, arg2, *rbx_1, rbx_1[-1]);
            
            if (rax_2 < 0)
                goto label_180001716;
            
            i += 1;
            rbx_1 = &rbx_1[2];
        } while (i < 0xa);
        
        rax_3 = sub_1800010d0(arg1, arg2, r8_2, &var_10508);
    }
    
    uint64_t result;
    
    if ((result_1 != 0 || rax_3 >= 0))
        result = result_1;
    else
    {
    label_180001716:
        result = 0xfffff448;
    }
    
    __security_check_cookie((rax_1 ^ &var_105d8));
    return result;
}

uint64_t Java_br_uol_pagseguro_client_plugpag_PlugPag_GetLastApprovedTransactionStatus(int64_t* arg1, int64_t arg2)
{
    __chkstk(0x105b0);
    void var_105d8;
    int64_t rax_1 = (__security_cookie ^ &var_105d8);
    void var_a0;
    void* var_105a8 = &var_a0;
    void* const var_105a0 = &data_1800031c0;
    void var_bf;
    void* var_10598 = &var_bf;
    char const* const var_10590 = "cardBrand";
    void var_e0;
    void* var_10588 = &var_e0;
    char const* const var_10580 = "date";
    void var_99;
    void* var_10578 = &var_99;
    char const* const var_10570 = "holder";
    void var_cc;
    void* var_10568 = &var_cc;
    char const* const var_10560 = "hostNsu";
    void var_d5;
    void* var_10558 = &var_d5;
    char const* const var_10550 = "time";
    void var_94;
    void* var_10548 = &var_94;
    char const* const var_10540 = "userReference";
    void var_101;
    void* var_10538 = &var_101;
    char const* const var_10530 = "transactionCode";
    void var_501;
    void* var_10528 = &var_501;
    char const* const var_10520 = "message";
    void var_89;
    void* var_10518 = &var_89;
    char const* const var_10510 = "terminalSerialNumber";
    void var_10508;
    int32_t result_1 = GetLastApprovedTransactionStatus(&var_10508);
    int32_t rax_3;
    
    if (result_1 == 0)
    {
        int64_t i = 0;
        void* const* rbx_1 = &var_105a0;
        int64_t r8_2;
        
        do
        {
            int32_t rax_2;
            rax_2 = sub_180001000(arg1, arg2, *rbx_1, rbx_1[-1]);
            
            if (rax_2 < 0)
                goto label_1800018c6;
            
            i += 1;
            rbx_1 = &rbx_1[2];
        } while (i < 0xa);
        
        rax_3 = sub_1800010d0(arg1, arg2, r8_2, &var_10508);
    }
    
    uint64_t result;
    
    if ((result_1 != 0 || rax_3 >= 0))
        result = result_1;
    else
    {
    label_1800018c6:
        result = 0xfffff448;
    }
    
    __security_check_cookie((rax_1 ^ &var_105d8));
    return result;
}

uint64_t Java_br_uol_pagseguro_client_plugpag_PlugPag_SetVersionName(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int512_t arg5 @ zmm0)
{
    if (arg3 == 0)
        return 0xfffffc16;
    
    int64_t rax_2 = *(*arg1 + 0x548)(arg5, arg3, 0);
    
    if (arg4 == 0)
        return 0xfffffc16;
    
    int64_t rax_5 = *(*arg1 + 0x548)(arg1, arg4, 0);
    int32_t rax_6 = SetVersionName(rax_2, rax_5);
    int64_t r9 = *arg1;
    *(r9 + 0x550)(arg1, arg3, rax_2, r9);
    int64_t r9_1 = *arg1;
    *(r9_1 + 0x550)(arg1, arg4, rax_5, r9_1);
    return rax_6;
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
        return sub_180001a54(arg1, arg3);
    
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

int64_t sub_180001a54(int64_t arg1, int64_t arg2)
{
    if (__scrt_initialize_crt(0) != 0)
    {
        char rax_1 = __scrt_acquire_startup_lock();
        int64_t rbx;
        rbx = rax_1;
        arg_18 = rax_1;
        int64_t rdi;
        rdi = 1;
        
        if (data_1800055c0 != 0)
            __scrt_fastfail(7);
        
        data_1800055c0 = 1;
        
        if (__scrt_dllmain_before_initialize_c() != 0)
        {
            sub_180002550();
            atexit(sub_18000259c);
            sub_1800023b8();
            atexit(sub_1800023c8);
            __scrt_initialize_default_local_stdio_options();
            
            if ((_initterm_e(&data_180003158, &data_180003160) == 0 && __scrt_dllmain_after_initialize_c() != 0))
            {
                _initterm(&data_180003148, &data_180003150);
                data_1800055c0 = 2;
                rdi = 0;
            }
        }
        
        __scrt_release_startup_lock(rbx);
        
        if (rdi == 0)
        {
            if ((data_180005640 != 0 && __scrt_is_nonwritable_in_current_image(&data_180005640) != 0))
            {
                int64_t rbx_1 = data_180005640;
                j__guard_check_icall();
                rbx_1(arg1, 2, arg2);
            }
            
            data_180005040 += 1;
            return 1;
        }
    }
    
    return 0;
}

uint64_t dllmain_crt_process_detach(char arg1)
{
    int64_t rsi;
    rsi = arg1;
    int32_t rax = data_180005040;
    
    if (rax <= 0)
        return 0;
    
    data_180005040 = (rax - 1);
    char rax_3 = __scrt_acquire_startup_lock();
    int64_t rdi;
    rdi = rax_3;
    arg_10 = rax_3;
    
    if (data_1800055c0 != 2)
        __scrt_fastfail(7);
    
    __scrt_dllmain_uninitialize_c();
    data_1800055c0 = 0;
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
    
    if ((arg2 == 0 && data_180005040 <= arg2))
        return 0;
    
    int32_t rbx_1;
    
    if ((arg2 - 1) > 1)
    {
    label_180001c73:
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
                goto label_180001c73;
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
    
    capture_previous_context(&data_1800050f0);
    data_1800051e8 = __return_addr;
    data_180005188 = &stack_cookie_1;
    data_180005060 = data_1800051e8;
    data_180005170 = stack_cookie_1;
    data_180005050 = 0xc0000409;
    data_180005054 = 1;
    data_180005068 = 1;
    data_180005070 = 2;
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t var_10 = data_180005008;
    __raise_securityfailure(&data_180003198);
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

int64_t __scrt_acquire_startup_lock()
{
    int64_t result;
    
    if (sub_1800027c0() == 0)
    {
    label_180001f3a:
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
            
            if (0 == data_1800055c8)
            {
                data_1800055c8 = StackBase;
                z_1 = true;
            }
            else
            {
                result = data_1800055c8;
                z_1 = false;
            }
            
            if (z_1)
                goto label_180001f3a;
        } while (StackBase != result);
        
        result = 1;
    }
    
    return result;
}

errno_t __scrt_dllmain_after_initialize_c()
{
    errno_t result;
    
    if (sub_1800027c0() == 0)
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
    if ((sub_180002824() != 0 && sub_180002824() != 0))
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
    if ((sub_1800027c0() == 0 && arg2 == 1))
    {
        j__guard_check_icall();
        arg4(arg1, 0, arg3);
    }
    
    /* tailcall */
    return _seh_filter_dll(arg5, arg6);
}

int64_t __scrt_dllmain_uninitialize_c()
{
    if (sub_1800027c0() != 0)
        /* tailcall */
        return _execute_onexit_table(&data_1800055d0);
    
    sub_180002828();
    return _cexit();
}

int64_t __scrt_dllmain_uninitialize_critical()
{
    /* tailcall */
    return sub_180002824();
}

int64_t __scrt_initialize_crt(int32_t arg1)
{
    char rax = data_180005600;
    
    if (arg1 == 0)
        rax = 1;
    
    data_180005600 = rax;
    int64_t xcr0;
    __isa_available_init(xcr0);
    
    if ((sub_180002824() != 0 && sub_180002824() != 0))
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
    
    if ((sub_1800027c0() == 0 || arg1 != 0))
    {
        uint64_t __security_cookie_1 = __security_cookie;
        result = 1;
        int64_t r8_2 = ((RORQ(-1, (0x40 - (__security_cookie_1 & 0x3f)))) ^ __security_cookie_1);
        int64_t var_20_1 = r8_2;
        *data_1800055d0 = r8_2;
        int64_t var_20_2 = r8_2;
        data_1800055e0 = r8_2;
        data_1800055e8 = r8_2;
        data_1800055f8 = r8_2;
    }
    else if (_initialize_onexit_table(&data_1800055d0) == 0)
        result = _initialize_onexit_table(&data_1800055e8) == 0;
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
        
        if (rdx_1 == &data_180000328)
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
    int32_t result = sub_1800027c0();
    
    if ((result != 0 && rbx == 0))
    {
        data_1800055c8;
        data_1800055c8 = 0;
    }
    
    return result;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    data_180005600;
    int64_t result;
    result = 1;
    return result;
}

_onexit_t_1 _onexit(_onexit_t_1 arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    int32_t rax;
    
    if ((RORQ((__security_cookie_1 ^ data_1800055d0), (__security_cookie_1 & 0x3f))) != -1)
        rax = _register_onexit_function(&data_1800055d0, arg1);
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

int64_t sub_1800023b8()
{
    /* tailcall */
    return InitializeSListHead(&data_180005610);
}

int64_t sub_1800023c8()
{
    /* tailcall */
    return __std_type_info_destroy_list(&data_180005610);
}

int64_t sub_1800023d4() __pure
{
    return &data_180005620;
}

int64_t sub_1800023dc() __pure
{
    return &data_180005628;
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_180005620 |= 4;
    data_180005628 |= 2;
    return &data_180005628;
}

int64_t sub_180002400() __pure
{
    return &data_180005640;
}

int32_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd);
    
    data_180005630 = 0;
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
        data_180005630 &= result;
    }
    
    return result;
}

void sub_180002550()
{
    for (void* const i = &data_180003630; i < &data_180003630; i += 8)
    {
        int64_t rdi_1 = *i;
        
        if (rdi_1 != 0)
        {
            j__guard_check_icall();
            rdi_1(rdi_1);
        }
    }
}

void sub_18000259c()
{
    for (void* const i = &data_180003640; i < &data_180003640; i += 8)
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
    int32_t r8_2 = data_180005634;
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
        data_180005634 = r8_2;
        
        if (((rax_2 == 0x106c0 || rax_2 == 0x20660) || rax_2 == 0x20670))
        {
            r8_2 |= 1;
            data_180005634 = r8_2;
        }
        else
        {
            uint64_t rax_3 = (rax_2 - 0x30650);
            
            if ((rax_3 <= 0x20 && (TEST_BITQ(0x100010001, rax_3))))
            {
                r8_2 |= 1;
                data_180005634 = r8_2;
            }
        }
    }
    
    if (((((temp1 ^ 0x68747541) | (temp3 ^ 0x69746e65)) | (temp2 ^ 0x444d4163)) == 0 && (temp0_1 & 0xff00f00) >= 0x600f00))
    {
        r8_2 |= 4;
        data_180005634 = r8_2;
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
            data_180005634 = (r8_2 | 2);
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

int64_t sub_1800027b8() __pure
{
    return 1;
}

int64_t sub_1800027c0()
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

int64_t sub_180002824() __pure
{
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_180002828() __pure
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

void __chkstk(int64_t arg1 @ rax)
{
    void* r10 = (&arg_8 - arg1);
    
    if (&arg_8 < arg1)
        r10 = nullptr;
    
    TEB* gsbase;
    void* StackLimit = gsbase->NtTib.StackLimit;
    
    if (r10 < StackLimit)
    {
        r10 &= 0xf000;
        
        do
        {
            StackLimit -= 0x1000;
            *StackLimit = 0;
        } while (r10 != StackLimit);
    }
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

