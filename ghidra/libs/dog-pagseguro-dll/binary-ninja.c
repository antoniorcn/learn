int64_t sub_180001000() __pure
{
    return &data_180008888;
}

int64_t sub_180001010(FILE* arg1, char* arg2, int64_t arg3)
{
    arg_10 = arg2;
    _ArgList = arg3;
    int64_t r9;
    arg_20 = r9;
    return __stdio_common_vfprintf(data_180008888, arg1, arg2, nullptr, &_ArgList);
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
    return __stdio_common_vfprintf(data_180008888, _Stream, arg1, nullptr, &_ArgList);
}

int64_t sub_1800010c0()
{
    void var_68;
    int64_t rax_1 = (__security_cookie ^ &var_68);
    
    if (data_180008710 == 0)
    {
        __time64_t _Time = _time64(nullptr);
        void _Tm;
        _localtime64_s(&_Tm, &_Time);
        
        if (strftime(&data_180008710, 0x100, "PPPAGSEGURO_%Y-%m-%d.log", &_Tm) == 0)
        {
            memset(&data_180008710, 0, 0x100);
            __security_check_cookie((rax_1 ^ &var_68));
            return "PPPAGSEGURO.log";
        }
    }
    
    __security_check_cookie((rax_1 ^ &var_68));
    return &data_180008710;
}

int64_t sub_180001170()
{
    void var_68;
    int64_t rax_1 = (__security_cookie ^ &var_68);
    __time64_t _Time = _time64(nullptr);
    void _Tm;
    _localtime64_s(&_Tm, &_Time);
    uint64_t rax_3 = strftime(&data_180008810, 0x40, "%H:%M:%S|", &_Tm);
    
    if (rax_3 != 0)
    {
        __security_check_cookie((rax_1 ^ &var_68));
        return &data_180008810;
    }
    
    data_180008810 = rax_3;
    data_180008818 = rax_3;
    data_180008820 = rax_3;
    data_180008828 = rax_3;
    data_180008830 = rax_3;
    data_180008838 = rax_3;
    data_180008840 = rax_3;
    data_180008848 = rax_3;
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
    fopen_s(&_Stream, sub_1800010c0(), &data_180006208);
    FILE* _Stream_2 = _Stream;
    
    if (_Stream_2 != 0)
    {
        if (arg1 != 0)
        {
            sub_180001010(_Stream_2, &data_18000620c, rax_2);
            _Stream_2 = _Stream;
        }
        
        __stdio_common_vfprintf(data_180008888, _Stream_2, arg2, nullptr, &_ArgList);
        fflush(_Stream);
        fclose(_Stream);
    }
    
    if (arg1 != 0)
        sub_180001060(&data_18000620c, rax_2);
    
    FILE* _Stream_1 = __acrt_iob_func(1);
    int64_t result = __stdio_common_vfprintf(data_180008888, _Stream_1, arg2, nullptr, &_ArgList);
    __security_check_cookie((rax_1 ^ &var_68));
    return result;
}

void sub_180001330(int64_t arg1, char* arg2, int32_t arg3)
{
    if (arg2 != 0)
    {
        void var_128;
        int64_t var_28_1 = (__security_cookie ^ &var_128);
        char* rsi_1 = arg2;
        
        if (arg3 != 0)
        {
            sub_180001230(0, "[%s]:\n0  1  2  3  4  5  6  7  8…", arg1);
            uint64_t rbx_1 = 0;
            void var_108;
            memset(&var_108, 0x20, 0x64);
            void var_98;
            uint64_t r8_1 = memset(&var_98, 0, 0x64);
            int32_t rdi_1 = 0;
            
            if (arg3 != 0)
            {
                do
                {
                    uint32_t r9_1 = *rsi_1;
                    r8_1 = (rbx_1 * 3);
                    *(&var_108 + r8_1) = *"0123456789ABCDEF"[(r9_1 >> 4)];
                    *(&var_108 + (r8_1 + 1)) = *"0123456789ABCDEF"[(r9_1 & 0xf)];
                    *(&var_108 + (r8_1 + 2)) = 0x20;
                    
                    if ((r9_1 - 0x20) > 0x5e)
                        *(&var_98 + rbx_1) = 0x2e;
                    else
                        *(&var_98 + rbx_1) = r9_1;
                    
                    rbx_1 = (rbx_1 + 1);
                    
                    if ((rbx_1 == 0x10 || (rdi_1 + 1) == arg3))
                    {
                        char var_d9_1 = 0;
                        sub_180001230(0, "%s |%-16s|\n", &var_108);
                        rbx_1 = 0;
                        memset(&var_108, 0x20, 0x64);
                        r8_1 = memset(&var_98, 0, 0x64);
                    }
                    
                    rdi_1 += 1;
                    rsi_1 = &rsi_1[1];
                } while (rdi_1 < arg3);
            }
            
            sub_180001230(0, "--------------------------------…", r8_1);
        }
        
        __security_check_cookie((var_28_1 ^ &var_128));
    }
}

int64_t sub_1800014c0() __pure
{
    return 0xfffffc0e;
}

int64_t _guard_check_icall() __pure
{
    return;
}

int64_t GetVersionLib() __pure
{
    return "1.1.0";
}

void* InitBTConnection(int64_t arg1)
{
    memmove("comport", arg1, 9);
    data_180008049 = 2;
    HMODULE hModule = LoadLibraryA("BTSerial.dll");
    
    if (hModule == 0)
        return 0xfffffc0e;
    
    void* rax = GetProcAddress(hModule, "SerialPortOpen");
    data_18000804d = rax;
    
    if (rax != 0)
    {
        void* rax_1 = GetProcAddress(hModule, "SerialPortClose");
        data_180008065 = rax_1;
        
        if (rax_1 != 0)
        {
            void* rax_2 = GetProcAddress(hModule, "SerialPortRead");
            data_180008055 = rax_2;
            
            if (rax_2 != 0)
            {
                void* result = GetProcAddress(hModule, "SerialPortWrite");
                data_18000805d = result;
                
                if (result != 0)
                    return result;
            }
        }
    }
    
    return 0xfffffc0d;
}

void UnloadDriverConnection()
{
    __builtin_strncpy("comport", "        ", 8);
    data_180008048 = 0x20;
    data_18000804d = sub_1800014c0;
    data_180008055 = sub_1800014c0;
    data_18000805d = sub_1800014c0;
    data_180008065 = _guard_check_icall;
}

uint64_t GetLastApprovedTransactionStatus(char* arg1)
{
    __chkstk(0x102e0);
    void var_102f8;
    int64_t rax_1 = (__security_cookie ^ &var_102f8);
    int64_t r12;
    r12 = 0;
    void var_10048;
    memset(&var_10048, 0, 0x10006);
    uint64_t result;
    
    if (arg1 != 0)
    {
        char* rsi;
        arg_18 = rsi;
        memset(arg1, 0, 0x104c1);
        void var_102a8;
        int32_t result_3 = Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_102a8, 0x160);
        int32_t result_1 = 0;
        int32_t result_2 = result_3;
        void var_102a4;
        char var_1004c;
        
        if (result_3 == 0)
        {
            int32_t var_102c8 = 0x10006;
            sub_180001230(0, &data_1800063f4, "Conectando serial (bt)...");
            int32_t result_4 = data_18000804d("comport");
            result_2 = result_4;
            
            if (result_4 == 0)
            {
                sub_180001230(0, &data_1800063f4, "Enviando msg...");
                sub_1800032b0(&var_102a8);
                int32_t result_5 = sub_180003530(&var_102a8, &var_10048, &var_102c8);
                result_2 = result_5;
                
                if (result_5 == 0)
                {
                    int32_t rbx_1 = var_102c8;
                    sub_180001330("msg_buffer", &var_10048, rbx_1);
                    void* rdi_1 = &var_10048;
                    
                    while (true)
                    {
                        int32_t rax_2 = data_18000805d(rdi_1, rbx_1);
                        
                        if (rax_2 >= 0)
                        {
                            rbx_1 -= rax_2;
                            rdi_1 += rbx_1;
                            
                            if (rbx_1 != 0)
                                continue;
                            else
                            {
                                int32_t result_6 = sub_1800039a0(&var_102a8);
                                result_2 = result_6;
                                
                                if (result_6 != 0)
                                    break;
                                
                                memset(&var_10048, 0, 0x10006);
                                char const* const var_102d8_1 = "Passou MessageDestroy";
                                sub_180001230((rbx_1 + 1), "TRACE|%s:%d|%s\n", "GetLastApprovedTransactionStatus");
                                var_102c8 = 0x10006;
                                int32_t result_7 = sub_180003a30(&var_10048, &var_102c8);
                                result_2 = result_7;
                                
                                if (result_7 < 0)
                                    break;
                                
                                char const* const var_102d8_2 = "Passou MessageReceive";
                                sub_180001230((rbx_1 + 1), "TRACE|%s:%d|%s\n", "GetLastApprovedTransactionStatus");
                                int32_t result_8 = sub_180003730(&var_102a8, &var_10048);
                                result_2 = result_8;
                                
                                if (result_8 != 0)
                                    break;
                                
                                char rdx_6 = 0;
                                
                                if (var_1004c != 0)
                                {
                                    while (true)
                                    {
                                        uint64_t rcx_12 = (rdx_6 * 3);
                                        
                                        if (*(&var_102a4 + (rcx_12 << 2)) == 1)
                                        {
                                            void var_102c0;
                                            memmove(&var_102c0, (&var_102a4 + (rcx_12 << 2)), 0xc);
                                            result_2 = 0;
                                            int16_t count_1;
                                            char* buffer1;
                                            sub_180001330("msg_field.value", buffer1, count_1);
                                            
                                            if (memcmp(buffer1, &data_180006480, count_1) != 0)
                                            {
                                                sub_180001230(0, &data_1800063f4, "Transacao Finalizada!");
                                                sub_1800032b0(&var_102a8);
                                                uint64_t count = count_1;
                                                
                                                if (memcmp(buffer1, &data_1800064a0, count) != 0)
                                                {
                                                    if (memcmp(buffer1, &data_1800064a4, count) != 0)
                                                    {
                                                        result_2 = -0x3ec;
                                                        
                                                        if (memcmp(buffer1, &data_1800064a8, count) == 0)
                                                            result_2 = -0x3fb;
                                                    }
                                                    else
                                                        result_2 = -0x3fa;
                                                }
                                                else
                                                {
                                                    r12 = 1;
                                                    sub_180003ba0(&var_102a8, arg1);
                                                }
                                            }
                                            
                                            break;
                                        }
                                        
                                        rdx_6 += 1;
                                        
                                        if (rdx_6 >= var_1004c)
                                            goto label_180001842;
                                    }
                                    
                                    break;
                                }
                            }
                        }
                        
                    label_180001842:
                        result_2 = -0x7cf;
                        break;
                    }
                }
            }
        }
        
        data_180008065();
        rsi = 0;
        
        if (var_1004c <= 0)
        {
        label_1800018a1:
            memset(&var_102a8, 0, 0x25d);
        }
        else
        {
            while (true)
            {
                void* rbx_2 = (&var_102a4 + (rsi * 0xc));
                
                if (rbx_2 == 0)
                    break;
                
                free(*(rbx_2 + 4));
                rsi += 1;
                *rbx_2 = 0;
                *(rbx_2 + 8) = 0;
                
                if (rsi >= var_1004c)
                    goto label_1800018a1;
            }
        }
        
        sub_180002fa0(result_2, &arg1[0x10007]);
        memmove(arg1, &var_10048, 0x10006);
        
        if (r12 != 1)
            result_1 = result_2;
        
        result = result_1;
    }
    else
        result = 0xfffffc0f;
    
    __security_check_cookie((rax_1 ^ &var_102f8));
    return result;
}

uint64_t PPPAGSEGURO_PaymentTransaction(char arg1, int32_t arg2, int32_t arg3, char* arg4, char* arg5, char* arg6, char* arg7)
{
    __chkstk(0x102f8);
    void var_10338;
    int64_t rax_1 = (__security_cookie ^ &var_10338);
    uint32_t count_1 = 0x10006;
    char var_102f3 = 0;
    uint32_t count_2 = 0x10006;
    void var_10068;
    memset(&var_10068, 0, 0x10006);
    int64_t rcx_2;
    int64_t rdx;
    int64_t r8;
    rcx_2 = memset(arg7, 0, 0x104c1);
    int32_t result_2 = sub_1800031a0(rcx_2, rdx, r8, arg4, arg5, arg6, arg7);
    int32_t result_1 = result_2;
    char* r15_1;
    
    if (result_2 != 0)
        r15_1 = arg7;
    else
    {
        void var_102c8;
        int32_t result_3 = DBI1::clearDBI(&var_102c8, arg1, arg2, arg3, arg4, arg5, arg6);
        result_1 = result_3;
        void var_102c4;
        char i_2;
        char* rsi;
        
        if (result_3 != 0)
            r15_1 = arg7;
        else
        {
            int32_t result_4 = sub_180003530(&var_102c8, &var_10068, &count_2);
            result_1 = result_4;
            
            if (result_4 != 0)
            {
                r15_1 = arg7;
                count_1 = count_2;
            }
            else
            {
                sub_180001230(0, &data_1800063f4, "Conectando serial (bt)...");
                int32_t result_5 = data_18000804d("comport");
                result_1 = result_5;
                
                if (result_5 != 0)
                {
                    r15_1 = arg7;
                    count_1 = count_2;
                }
                else
                {
                    sub_180001230(0, &data_1800063f4, "Enviando msg...");
                    sub_1800032b0(&var_102c8);
                    count_1 = count_2;
                    uint32_t i = count_1;
                    sub_180001330("msg_buffer", &var_10068, count_1);
                    void* rdi_1 = &var_10068;
                    
                    do
                    {
                        int32_t rax_2 = data_18000805d(rdi_1, i);
                        
                        if (rax_2 < 0)
                            goto label_180001c9e;
                        
                        i -= rax_2;
                        rdi_1 += i;
                    } while (i != 0);
                    
                    int32_t result_6 = sub_1800039a0(&var_102c8);
                    result_1 = result_6;
                    
                    if (result_6 != 0)
                        r15_1 = arg7;
                    else
                    {
                        count_2 = 0x10006;
                        memset(&var_10068, 0, 0x10006);
                        int32_t result_7 = sub_180003a30(&var_10068, &count_2);
                        char* var_10310_1;
                        var_10310_1 = result_7;
                        result_1 = result_7;
                        char const* const var_10318_2 = "ret_code";
                        sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "PPPAGSEGURO_PaymentTransaction");
                        
                        if (result_1 < 0)
                        {
                            r15_1 = arg7;
                            count_1 = count_2;
                        }
                        else
                        {
                            count_1 = count_2;
                            var_10310_1 = count_1;
                            char const* const var_10318_3 = "buffer_size";
                            sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "PPPAGSEGURO_PaymentTransaction");
                            sub_180001230(0, &data_1800063f4, "Resposta OK.");
                            int32_t result_8 = sub_180003730(&var_102c8, &var_10068);
                            result_1 = result_8;
                            
                            if (result_8 != 0)
                                r15_1 = arg7;
                            else
                            {
                                char rdx_7 = 0;
                                
                                if (i_2 == 0)
                                {
                                label_180001c9e:
                                    result_1 = -0x7cf;
                                    r15_1 = arg7;
                                }
                                else
                                {
                                    uint64_t rcx_11;
                                    
                                    while (true)
                                    {
                                        rcx_11 = (rdx_7 * 3);
                                        
                                        if (*(&var_102c4 + (rcx_11 << 2)) == 0xa01)
                                            break;
                                        
                                        rdx_7 += 1;
                                        
                                        if (rdx_7 >= i_2)
                                            goto label_180001c9e;
                                    }
                                    
                                    void var_102e0;
                                    memmove(&var_102e0, (&var_102c4 + (rcx_11 << 2)), 0xc);
                                    int32_t var_102dc;
                                    int32_t var_102d8;
                                    
                                    if (*((0 | var_102dc) | (var_102d8 << 0x20)) == 0)
                                    {
                                        sub_1800039a0(&var_102c8);
                                        r15_1 = arg7;
                                        rsi = 0;
                                        
                                        while (true)
                                        {
                                            sub_180001230(0, &data_1800063f4, "Aguardando transacao...");
                                            Sleep((data_180008049 * 0x3e8));
                                            memset(&var_10068, 0, 0x10006);
                                            int32_t result_9 = Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_102c8, 0x202);
                                            result_1 = result_9;
                                            
                                            if (result_9 != 0)
                                                goto label_180001ca8;
                                            
                                            count_2 = 0x10006;
                                            int32_t result_10 = sub_180003530(&var_102c8, &var_10068, &count_2);
                                            result_1 = result_10;
                                            
                                            if (result_10 != 0)
                                                break;
                                            
                                            count_1 = count_2;
                                            uint32_t i_1 = count_1;
                                            sub_180001330("msg_buffer", &var_10068, count_1);
                                            void* rdi_3 = &var_10068;
                                            
                                            do
                                            {
                                                int32_t rax_11 = data_18000805d(rdi_3, i_1);
                                                
                                                if (rax_11 < 0)
                                                {
                                                    result_1 = -0x7cf;
                                                    goto label_180001ca8;
                                                }
                                                
                                                i_1 -= rax_11;
                                                rdi_3 += i_1;
                                            } while (i_1 != 0);
                                            
                                            int32_t result_11 = sub_1800039a0(&var_102c8);
                                            result_1 = result_11;
                                            
                                            if (result_11 != 0)
                                                goto label_180001ca8;
                                            
                                            memset(&var_10068, 0, 0x10006);
                                            char const* const var_10318_4 = "Passou MessageDestroy";
                                            sub_180001230((result_1 + 1), "TRACE|%s:%d|%s\n", "PPPAGSEGURO_PaymentTransaction");
                                            count_2 = 0x10006;
                                            int32_t result_12 = sub_180003a30(&var_10068, &count_2);
                                            result_1 = result_12;
                                            
                                            if (result_12 < 0)
                                                break;
                                            
                                            char const* const var_10318_5 = "Passou MessageReceive";
                                            sub_180001230(1, "TRACE|%s:%d|%s\n", "PPPAGSEGURO_PaymentTransaction");
                                            int32_t result_13 = sub_180003730(&var_102c8, &var_10068);
                                            result_1 = result_13;
                                            
                                            if (result_13 != 0)
                                                break;
                                            
                                            char rdx_14 = 0;
                                            
                                            if (i_2 == 0)
                                            {
                                            label_180001f0e:
                                                count_1 = count_2;
                                                result_1 = -0x7cf;
                                                goto label_180001ca8;
                                            }
                                            
                                            uint64_t rcx_29;
                                            
                                            while (true)
                                            {
                                                rcx_29 = (rdx_14 * 3);
                                                
                                                if (*(&var_102c4 + (rcx_29 << 2)) == 1)
                                                    break;
                                                
                                                rdx_14 += 1;
                                                
                                                if (rdx_14 >= i_2)
                                                    goto label_180001f0e;
                                            }
                                            
                                            memmove(&var_102e0, (&var_102c4 + (rcx_29 << 2)), 0xc);
                                            result_1 = 0;
                                            int16_t count_3;
                                            sub_180001330("msg_field.value", var_102dc, count_3);
                                            
                                            if (memcmp(var_102dc, &data_180006480, count_3) != 0)
                                            {
                                                sub_180001230(0, &data_1800063f4, "Transacao Finalizada!");
                                                sub_1800032b0(&var_102c8);
                                                uint64_t count = count_3;
                                                int64_t buffer1 = var_102dc;
                                                char var_102f4_1 = 1;
                                                
                                                if (memcmp(buffer1, &data_1800064a0, count) != 0)
                                                {
                                                    result_1 = -0x3ec;
                                                    
                                                    if (memcmp(buffer1, &data_1800064a8, count) == 0)
                                                        result_1 = -0x3fb;
                                                }
                                                else
                                                {
                                                    var_102f3 = 1;
                                                    sub_180003ba0(&var_102c8, r15_1);
                                                }
                                                
                                                rsi = var_102f4_1;
                                            }
                                            
                                            sub_1800039a0(&var_102c8);
                                            
                                            if (rsi != 0)
                                                break;
                                            
                                            count_1 = count_2;
                                        }
                                        
                                        count_1 = count_2;
                                    }
                                    else
                                    {
                                        result_1 = -0x3eb;
                                        r15_1 = arg7;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    label_180001ca8:
        data_180008065();
        rsi = 0;
        
        if (i_2 > 0)
        {
            do
            {
                void* rdi_2 = (&var_102c4 + (rsi * 0xc));
                
                if (rdi_2 == 0)
                    goto label_180002024;
                
                free(*(rdi_2 + 4));
                rsi += 1;
                *rdi_2 = 0;
                *(rdi_2 + 8) = 0;
            } while (rsi < i_2);
        }
        
        memset(&var_102c8, 0, 0x25d);
    }
    
label_180002024:
    sub_180002fa0(result_1, &r15_1[0x10007]);
    memmove(r15_1, &var_10068, count_1);
    uint64_t result = 0;
    
    if (var_102f3 != 1)
        result = result_1;
    
    __security_check_cookie((rax_1 ^ &var_10338));
    return result;
}

uint64_t CancelTransaction(char* arg1)
{
    __chkstk(0x102d8);
    void var_102f8;
    int64_t rax_1 = (__security_cookie ^ &var_102f8);
    int32_t i_1 = 0x10006;
    int64_t r15;
    r15 = 0;
    int64_t r13;
    r13 = 0;
    void var_10048;
    memset(&var_10048, 0, 0x10006);
    uint64_t result;
    
    if (arg1 != 0)
    {
        char const* const rsi;
        arg_18 = rsi;
        memset(arg1, 0, 0x104c1);
        void var_102a8;
        int32_t result_3 = Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_102a8, 0x400);
        int32_t result_1 = 0;
        int32_t result_2 = result_3;
        void var_102a4;
        char var_1004c;
        
        if (result_3 == 0)
        {
            int32_t result_4 = sub_180003530(&var_102a8, &var_10048, &i_1);
            result_2 = result_4;
            
            if (result_4 == 0)
            {
                sub_180001230(0, &data_1800063f4, "Conectando serial (bt)...");
                int32_t result_5 = data_18000804d("comport");
                result_2 = result_5;
                
                if (result_5 == 0)
                {
                    sub_180001230(0, &data_1800063f4, "Enviando msg...");
                    sub_1800032b0(&var_102a8);
                    int32_t i_3 = i_1;
                    sub_180001330("msg_buffer", &var_10048, i_3);
                    void* rdi_1 = &var_10048;
                    
                    while (true)
                    {
                        int32_t rax_2 = data_18000805d(rdi_1, i_3);
                        
                        if (rax_2 >= 0)
                        {
                            i_3 -= rax_2;
                            rdi_1 += i_3;
                            
                            if (i_3 != 0)
                                continue;
                            else
                            {
                                int32_t result_6 = sub_1800039a0(&var_102a8);
                                result_2 = result_6;
                                
                                if (result_6 != 0)
                                    break;
                                
                                i_1 = 0x10006;
                                memset(&var_10048, 0, 0x10006);
                                int32_t result_7 = sub_180003a30(&var_10048, &i_1);
                                int32_t result_14 = result_7;
                                result_2 = result_7;
                                char const* const var_102d8_1 = "ret_code";
                                sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "CancelTransaction");
                                
                                if (result_2 < 0)
                                    break;
                                
                                int32_t i_2 = i_1;
                                char const* const var_102d8_2 = "buffer_size";
                                sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "CancelTransaction");
                                sub_180001230(0, &data_1800063f4, "Resposta OK.");
                                int32_t result_8 = sub_180003730(&var_102a8, &var_10048);
                                result_2 = result_8;
                                
                                if (result_8 != 0)
                                    break;
                                
                                char rdx_6 = 0;
                                
                                if (var_1004c != 0)
                                {
                                    uint64_t rcx_10;
                                    
                                    while (true)
                                    {
                                        rcx_10 = (rdx_6 * 3);
                                        
                                        if (*(&var_102a4 + (rcx_10 << 2)) == 0xa01)
                                            break;
                                        
                                        rdx_6 += 1;
                                        
                                        if (rdx_6 >= var_1004c)
                                            goto label_1800022e2;
                                    }
                                    
                                    void var_102c0;
                                    memmove(&var_102c0, (&var_102a4 + (rcx_10 << 2)), 0xc);
                                    int32_t var_102bc;
                                    int32_t var_102b8;
                                    
                                    if (*((0 | var_102bc) | (var_102b8 << 0x20)) != 0)
                                    {
                                        result_2 = -0x3eb;
                                        break;
                                    }
                                    
                                    sub_1800039a0(&var_102a8);
                                    
                                    while (true)
                                    {
                                        sub_180001230(0, &data_1800063f4, "Aguardando transacao...");
                                        Sleep((data_180008049 * 0x3e8));
                                        memset(&var_10048, 0, 0x10006);
                                        int32_t result_9 = Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_102a8, 0x202);
                                        result_2 = result_9;
                                        
                                        if (result_9 != 0)
                                            goto label_1800022e7;
                                        
                                        i_1 = 0x10006;
                                        int32_t result_10 = sub_180003530(&var_102a8, &var_10048, &i_1);
                                        result_2 = result_10;
                                        
                                        if (result_10 != 0)
                                            goto label_1800022e7;
                                        
                                        int32_t i = i_1;
                                        sub_180001330("msg_buffer", &var_10048, i);
                                        void* rdi_3 = &var_10048;
                                        
                                        do
                                        {
                                            int32_t rax_12 = data_18000805d(rdi_3, i);
                                            
                                            if (rax_12 < 0)
                                                goto label_1800022e2;
                                            
                                            i -= rax_12;
                                            rdi_3 += i;
                                        } while (i != 0);
                                        
                                        int32_t result_11 = sub_1800039a0(&var_102a8);
                                        result_2 = result_11;
                                        
                                        if (result_11 != 0)
                                            goto label_1800022e7;
                                        
                                        memset(&var_10048, 0, 0x10006);
                                        char const* const var_102d8_3 = "Passou MessageDestroy";
                                        sub_180001230((result_2 + 1), "TRACE|%s:%d|%s\n", "CancelTransaction");
                                        i_1 = 0x10006;
                                        int32_t result_12 = sub_180003a30(&var_10048, &i_1);
                                        result_2 = result_12;
                                        
                                        if (result_12 < 0)
                                            goto label_1800022e7;
                                        
                                        char const* const var_102d8_4 = "Passou MessageReceive";
                                        sub_180001230(1, "TRACE|%s:%d|%s\n", "CancelTransaction");
                                        int32_t result_13 = sub_180003730(&var_102a8, &var_10048);
                                        result_2 = result_13;
                                        
                                        if (result_13 != 0)
                                            goto label_1800022e7;
                                        
                                        char rdx_15 = 0;
                                        
                                        if (var_1004c == 0)
                                            break;
                                        
                                        uint64_t rcx_32;
                                        
                                        while (true)
                                        {
                                            rcx_32 = (rdx_15 * 3);
                                            
                                            if (*(&var_102a4 + (rcx_32 << 2)) == 1)
                                                break;
                                            
                                            rdx_15 += 1;
                                            
                                            if (rdx_15 >= var_1004c)
                                                goto label_1800022e2;
                                        }
                                        
                                        memmove(&var_102c0, (&var_102a4 + (rcx_32 << 2)), 0xc);
                                        result_2 = 0;
                                        int16_t count_1;
                                        sub_180001330("msg_field.value", var_102bc, count_1);
                                        
                                        if (memcmp(var_102bc, &data_180006480, count_1) != 0)
                                        {
                                            sub_180001230(0, &data_1800063f4, "Transacao Finalizada!");
                                            sub_1800032b0(&var_102a8);
                                            uint64_t count = count_1;
                                            int64_t buffer1 = var_102bc;
                                            r15 = 1;
                                            
                                            if (memcmp(buffer1, &data_1800064a0, count) != 0)
                                            {
                                                result_2 = -0x3ec;
                                                
                                                if (memcmp(buffer1, &data_1800064a8, count) == 0)
                                                    result_2 = -0x3fb;
                                            }
                                            else
                                            {
                                                r13 = 1;
                                                sub_180003ba0(&var_102a8, arg1);
                                            }
                                        }
                                        
                                        sub_1800039a0(&var_102a8);
                                        
                                        if (r15 != 0)
                                            goto label_1800022e7;
                                    }
                                }
                            }
                        }
                        
                    label_1800022e2:
                        result_2 = -0x7cf;
                        break;
                    }
                }
            }
        }
        
    label_1800022e7:
        data_180008065();
        rsi = 0;
        
        if (var_1004c <= 0)
        {
        label_180002341:
            memset(&var_102a8, 0, 0x25d);
        }
        else
        {
            while (true)
            {
                void* rdi_2 = (&var_102a4 + (rsi * 0xc));
                
                if (rdi_2 == 0)
                    break;
                
                free(*(rdi_2 + 4));
                rsi += 1;
                *rdi_2 = 0;
                *(rdi_2 + 8) = 0;
                
                if (rsi >= var_1004c)
                    goto label_180002341;
            }
        }
        
        sub_180002fa0(result_2, &arg1[0x10007]);
        memmove(arg1, &var_10048, 0x10006);
        
        if (r13 != 1)
            result_1 = result_2;
        
        result = result_1;
    }
    else
        result = 0xfffffc0f;
    
    __security_check_cookie((rax_1 ^ &var_102f8));
    return result;
}

uint64_t SimplePaymentTransaction(char arg1, int32_t arg2, int32_t arg3, char* arg4, char* arg5, char* arg6)
{
    return PPPAGSEGURO_PaymentTransaction(arg1, arg2, arg3, arg4, arg4, arg5, arg6);
}

int64_t SetVersionName(char* arg1, char* arg2)
{
    /* tailcall */
    return sub_1800026e0(arg1, arg2);
}

int64_t sub_1800026e0(char* arg1, char* arg2)
{
    if ((arg1 == 0 || arg2 == 0))
        return 0xfffffc16;
    
    int64_t rax = -1;
    int64_t r8 = -1;
    
    do
        r8 += 1;
     while (arg1[r8] != 0);
    
    if (r8 >= 0x1a)
        return 0xfffffc09;
    
    do
        rax += 1;
     while (arg2[rax] != 0);
    
    if (rax >= 0xb)
        return 0xfffffc08;
    
    memmove(&data_180008860, arg1, 0x1a);
    memmove(&data_180008850, arg2, 0xb);
    return 0;
}

int64_t DBI1::clearDBI(int32_t* arg1, char arg2, int32_t arg3, int32_t arg4, int64_t arg5, int64_t arg6, char* arg7)
{
    void var_98;
    int64_t rax_1 = (__security_cookie ^ &var_98);
    memset(arg1, 0, 0x25d);
    char var_68 = arg2;
    char var_67 = arg3;
    uint64_t rdx_2 = (arg4 / 0xa);
    int32_t rcx_1 = (arg4 - ((rdx_2 * 5) * 2));
    
    if (arg4 >= 0xa)
        rcx_1 += (rdx_2 << 4);
    
    char var_66 = rcx_1;
    int64_t result;
    
    if (arg1 == 0)
        result = 0xfffffc16;
    else
    {
        memset(arg1, 0, 0x25d);
        *arg1 = 0x2000001;
        int64_t var_78 = 0;
        var_78 = 0x50019;
        arg1[0x97] = 0;
        int32_t var_70_1 = 0;
        int64_t rax_6 = malloc(5);
        var_78 = rax_6;
        int64_t rax_8;
        
        if (rax_6 != 0)
        {
            memmove(rax_6, "1.1.0", 5);
            memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
            arg1[0x97] += 1;
            var_78 = 0;
            var_78 = 0x100cd;
            int32_t var_70_2 = 0;
            rax_8 = malloc(1);
            var_78 = rax_8;
        }
        
        if ((rax_6 == 0 || rax_8 == 0))
            result = 1;
        else
        {
            memmove(rax_8, &data_18000654c, 1);
            memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
            arg1[0x97] += 1;
            
            if (data_180008860 == 0)
                result = 0xfffffc07;
            else
            {
                int64_t rbx_1 = -1;
                var_78 = 0;
                int32_t var_70_3 = 0;
                int64_t rax_10 = -1;
                
                do
                    rax_10 += 1;
                 while (&data_180008860[rax_10] != 0);
                
                uint32_t count_1 = rax_10;
                var_78 = 0xce;
                *var_78[2] = rax_10;
                int64_t rax_11 = malloc(count_1);
                var_78 = rax_11;
                
                if (rax_11 == 0)
                    result = 1;
                else
                {
                    memmove(rax_11, &data_180008860, count_1);
                    memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                    arg1[0x97] += 1;
                    
                    if (data_180008850 == 0)
                        result = 0xfffffc07;
                    else
                    {
                        var_78 = 0;
                        int32_t var_70_4 = 0;
                        int64_t rax_13 = -1;
                        
                        do
                            rax_13 += 1;
                         while (&data_180008850[rax_13] != 0);
                        
                        uint32_t count_2 = rax_13;
                        var_78 = 0xcf;
                        *var_78[2] = rax_13;
                        int64_t rax_14 = malloc(count_2);
                        var_78 = rax_14;
                        
                        if (rax_14 == 0)
                            result = 1;
                        else
                        {
                            memmove(rax_14, &data_180008850, count_2);
                            memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                            arg1[0x97] += 1;
                            var_78 = 0;
                            var_78 = 0x10031;
                            int32_t var_70_5 = 0;
                            int64_t rax_16 = malloc(1);
                            var_78 = rax_16;
                            
                            if (rax_16 == 0)
                                result = 1;
                            else
                            {
                                memmove(rax_16, &var_68, 1);
                                memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                                arg1[0x97] += 1;
                                var_78 = 0;
                                var_78 = 0x10021;
                                int32_t var_70_6 = 0;
                                int64_t rax_18 = malloc(1);
                                var_78 = rax_18;
                                
                                if (rax_18 == 0)
                                    result = 1;
                                else
                                {
                                    memmove(rax_18, &var_67, 1);
                                    memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                                    arg1[0x97] += 1;
                                    var_78 = 0;
                                    var_78 = 0x10022;
                                    int32_t var_70_7 = 0;
                                    int64_t rax_20 = malloc(1);
                                    var_78 = rax_20;
                                    
                                    if (rax_20 == 0)
                                        result = 1;
                                    else
                                    {
                                        memmove(rax_20, &var_66, 1);
                                        memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                                        arg1[0x97] += 1;
                                        void var_60;
                                        sub_180004030(arg6, &var_60);
                                        var_78 = 0;
                                        int32_t var_70_8 = 0;
                                        int64_t rax_22 = -1;
                                        
                                        do
                                            rax_22 += 1;
                                         while (*(&var_60 + rax_22) != 0);
                                        
                                        uint32_t count_3 = rax_22;
                                        var_78 = 0x24;
                                        *var_78[2] = rax_22;
                                        int64_t rax_23 = malloc(count_3);
                                        var_78 = rax_23;
                                        
                                        if (rax_23 == 0)
                                            result = 1;
                                        else
                                        {
                                            memmove(rax_23, &var_60, count_3);
                                            memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                                            arg1[0x97] += 1;
                                            
                                            if (arg3 != 3)
                                                goto label_180002c4d;
                                            
                                            void var_48;
                                            sub_180004030(arg5, &var_48);
                                            var_78 = 0;
                                            int32_t var_70_9 = 0;
                                            int64_t rax_25 = -1;
                                            
                                            do
                                                rax_25 += 1;
                                             while (*(&var_48 + rax_25) != 0);
                                            
                                            uint32_t count_4 = rax_25;
                                            var_78 = 0x23;
                                            *var_78[2] = rax_25;
                                            int64_t rax_26 = malloc(count_4);
                                            var_78 = rax_26;
                                            
                                            if (rax_26 == 0)
                                                result = 1;
                                            else
                                            {
                                                memmove(rax_26, &var_48, count_4);
                                                memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                                                arg1[0x97] += 1;
                                            label_180002c4d:
                                                
                                                if (arg7 != 0)
                                                {
                                                    var_78 = 0;
                                                    int32_t var_70_10 = 0;
                                                    
                                                    do
                                                        rbx_1 += 1;
                                                     while (arg7[rbx_1] != 0);
                                                    
                                                    *var_78[2] = rbx_1;
                                                    uint32_t count = rbx_1;
                                                    var_78 = 0x47;
                                                    int64_t rax_28 = malloc(count);
                                                    var_78 = rax_28;
                                                    
                                                    if (rax_28 != 0)
                                                        memmove(rax_28, arg7, count);
                                                    
                                                    memmove(&arg1[((arg1[0x97] * 3) + 1)], &var_78, 0xc);
                                                    arg1[0x97] += 1;
                                                }
                                                
                                                result = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    __security_check_cookie((rax_1 ^ &var_98));
    return result;
}

int64_t Concurrency::details::UMSThreadProxy::InternalSwitchTo(int16_t* arg1, int16_t arg2)
{
    void var_48;
    int64_t rax_1 = (__security_cookie ^ &var_48);
    memset(arg1, 0, 0x25d);
    
    if (arg1 != 0)
    {
        memset(arg1, 0, 0x25d);
        *arg1 = 1;
        arg1[1] = arg2;
        arg1[0x12e] = 0;
    }
    
    int64_t var_20 = 0;
    var_20 = 0x50019;
    int32_t var_18 = 0;
    int64_t rax_2 = malloc(5);
    var_20 = rax_2;
    
    if (rax_2 != 0)
        memmove(rax_2, "1.1.0", 5);
    
    int32_t result;
    
    if (arg1 == 0)
        result = -0x3ea;
    else
    {
        memmove(&arg1[(((arg1[0x12e] * 3) + 1) * 2)], &var_20, 0xc);
        arg1[0x12e] += 1;
        result = 0;
    }
    
    if (arg2 == 0x400)
    {
        char var_28 = 0x63;
        var_20 = 0;
        var_20 = 0x10031;
        int32_t var_18_1 = 0;
        int64_t rax_4 = malloc(1);
        var_20 = rax_4;
        
        if (rax_4 == 0)
            result = 1;
        else
        {
            memmove(rax_4, &var_28, 1);
            
            if (arg1 == 0)
                result = -0x3ea;
            else
            {
                memmove(&arg1[(((arg1[0x12e] * 3) + 1) * 2)], &var_20, 0xc);
                arg1[0x12e] += 1;
                
                if (data_180008860 == 0)
                    result = -0x3f9;
                else
                {
                    var_20 = 0;
                    int32_t var_18_2 = 0;
                    int64_t rax_6 = -1;
                    
                    do
                        rax_6 += 1;
                     while (&data_180008860[rax_6] != 0);
                    
                    uint32_t count = rax_6;
                    var_20 = 0xce;
                    *var_20[2] = rax_6;
                    int64_t rax_7 = malloc(count);
                    var_20 = rax_7;
                    
                    if (rax_7 == 0)
                        result = 1;
                    else
                    {
                        memmove(rax_7, &data_180008860, count);
                        memmove(&arg1[(((arg1[0x12e] * 3) + 1) * 2)], &var_20, 0xc);
                        arg1[0x12e] += 1;
                        result = 0;
                    }
                }
            }
        }
    }
    else if (result == 0)
        result = 0;
    
    __security_check_cookie((rax_1 ^ &var_48));
    return result;
}

int32_t sub_180002f40(char* arg1, uint64_t arg2, char* arg3, int64_t arg4)
{
    arg_18 = arg3;
    _ArgList = arg4;
    int32_t result = __stdio_common_vsprintf((data_180008888 | 2), arg1, arg2, arg3, nullptr, &_ArgList);
    
    if (result < 0)
        return -1;
    
    return result;
}

void sub_180002fa0(int32_t arg1, int64_t arg2)
{
    if (arg1 <= 0)
    {
        if (arg1 == 0)
            /* tailcall */
            return memmove(arg2, "Transacao realizada com sucesso", 0x1f);
        
        if ((arg1 + 0x3fb) <= 0x12)
            switch (arg1)
            {
                case 0xfffffc05:
                {
                    /* tailcall */
                    return memmove(arg2, "Erro de comunicacao, realize con…", 0x36);
                }
                case 0xfffffc06:
                {
                    /* tailcall */
                    return memmove(arg2, "Sem dados para consulta", 0x17);
                }
                case 0xfffffc0b:
                {
                    /* tailcall */
                    return memmove(arg2, "Parametro de codigo de venda mui…", 0x29);
                }
                case 0xfffffc0c:
                {
                    /* tailcall */
                    return memmove(arg2, "Parametro de valor da transacao …", 0x28);
                }
                case 0xfffffc0f:
                {
                    /* tailcall */
                    return memmove(arg2, "Parametro de resultado da transa…", 0x35);
                }
                case 0xfffffc10:
                {
                    /* tailcall */
                    return memmove(arg2, "Parametro de codigo de venda nao…", 0x2e);
                }
                case 0xfffffc11:
                {
                    /* tailcall */
                    return memmove(arg2, "Parametro de valor total da tran…", 0x37);
                }
                case 0xfffffc12:
                {
                    /* tailcall */
                    return memmove(arg2, "Parametro de valor da transacao …", 0x31);
                }
                case 0xfffffc13:
                {
                    /* tailcall */
                    return memmove(arg2, "Buffer de resposta invalido, ref…", 0x2f);
                }
                case 0xfffffc14:
                {
                    /* tailcall */
                    return memmove(arg2, "Transacao negada", 0x10);
                }
                case 0xfffffc15:
                {
                    /* tailcall */
                    return memmove(arg2, "Terminal nao esta pronto para tr…", 0x2a);
                }
                case 0xfffffc16:
                {
                    /* tailcall */
                    return memmove(arg2, "Parametro de aplicacao invalido", 0x1f);
                }
                case 0xfffffc17:
                {
                    /* tailcall */
                    return memmove(arg2, "Erro ao gerar mensagem de transa…", 0x23);
                }
            }
    }
}

int64_t sub_180003160(char* arg1)
{
    char i = *arg1;
    char* rbx = arg1;
    
    for (; i != 0; i = *rbx)
    {
        rbx = &rbx[1];
        
        if (isdigit(i) == 0)
            return 0;
    }
    
    return 1;
}

char* sub_1800031a0(int64_t arg1, int64_t arg2, int64_t arg3, char* arg4, char* arg5, char* arg6, int64_t arg7)
{
    if (arg4 == 0)
        return 0xfffffc12;
    
    char* rbx = arg4;
    
    if (*arg4 != 0)
    {
        do
        {
            int32_t rax_2 = isdigit(*rbx);
            rbx = &rbx[1];
            
            if (rax_2 == 0)
                return 0xfffffc0c;
        } while (*rbx != 0);
    }
    
    int64_t rbx_1 = -1;
    int64_t rax_3 = -1;
    
    do
        rax_3 += 1;
     while (arg4[rax_3] != 0);
    
    if (rax_3 == 0)
        return 0xfffffc12;
    
    if (arg5 == 0)
        return 0xfffffc11;
    
    if (sub_180003160(arg5) == 0)
        return 0xfffffc0c;
    
    int64_t rax_7 = -1;
    
    do
        rax_7 += 1;
     while (arg5[rax_7] != 0);
    
    if (rax_7 == 0)
        return 0xfffffc11;
    
    if (arg6 == 0)
        return 0xfffffc10;
    
    do
        rbx_1 += 1;
     while (arg6[rbx_1] != 0);
    
    if (rbx_1 > 0xb)
        return 0xfffffc0b;
    
    if (arg7 == 0)
        return 0xfffffc0f;
    
    return arg6;
}

int64_t sub_1800032b0(void* arg1)
{
    void var_468;
    int64_t rax_1 = (__security_cookie ^ &var_468);
    void var_438;
    memset(&var_438, 0, 0x400);
    sub_180001230(0, &data_1800063f4, "********************************…");
    *(arg1 + 0x25c);
    sub_180001230(0, "DUMPING MSG [%04X] NTAGS: %d\n", *(arg1 + 2));
    sub_180001230(0, &data_1800063f4, "********************************…");
    int16_t i = 0;
    
    if (*(arg1 + 0x25c) > 0)
    {
        do
        {
            uint64_t rcx_1 = (i * 3);
            uint64_t rax_3 = 0;
            int16_t rdx_1 = *((arg1 + (rcx_1 << 2)) + 4);
            void* rsi_1 = (arg1 + (rcx_1 << 2));
            void* rcx_2 = &data_180008070;
            char const* const rax_4;
            
            while (true)
            {
                if (*rcx_2 == rdx_1)
                {
                    rax_4 = *((rax_3 * 0xa) + &data_180008072);
                    break;
                }
                
                rax_3 = (rax_3 + 1);
                rcx_2 += 0xa;
                
                if (rax_3 >= 0x12)
                {
                    rax_4 = "TAG UNKNOW";
                    break;
                }
            }
            
            char const* const var_448_1 = rax_4;
            int32_t rax_5;
            int64_t r9_2;
            rax_5 = sub_180002f40(&var_438, 0x3ff, "[%04X][%s]: ", rdx_1);
            int32_t rbx_1 = rax_5;
            int16_t j = 0;
            
            if (0 < *(rsi_1 + 6))
            {
                do
                {
                    int32_t rax_8;
                    rax_8 = sub_180002f40((&var_438 + rbx_1), 0x3ff, "%02X ", *(j + *(rsi_1 + 8)));
                    rbx_1 += rax_8;
                    j += 1;
                } while (j < *(rsi_1 + 6));
            }
            
            int32_t rax_10;
            int64_t r9_4;
            rax_10 = sub_180002f40((&var_438 + rbx_1), 0x3ff, &data_180006838, r9_2);
            int32_t rbx_2 = (rbx_1 + rax_10);
            int16_t j_1 = 0;
            
            if (0 < *(rsi_1 + 6))
            {
                do
                {
                    char rdx_2 = *(j_1 + *(rsi_1 + 8));
                    int64_t rax_13 = rbx_2;
                    int32_t rax_14;
                    
                    if ((rdx_2 - 0x20) > 0x5e)
                        rax_14 = sub_180002f40((&var_438 + rax_13), 0x3ff, &data_180006840, r9_4);
                    else
                        rax_14 = sub_180002f40((&var_438 + rax_13), 0x3ff, &data_18000683c, rdx_2);
                    
                    rbx_2 += rax_14;
                    j_1 += 1;
                } while (j_1 < *(rsi_1 + 6));
            }
            
            sub_180002f40((&var_438 + rbx_2), 0x3ff, &data_180006844, r9_4);
            sub_180001230(0, &data_1800063f4, &var_438);
            i += 1;
        } while (i < *(arg1 + 0x25c));
    }
    
    int64_t result = sub_180001230(0, &data_1800063f4, "********************************…");
    __security_check_cookie((rax_1 ^ &var_468));
    return result;
}

int64_t sub_180003530(int16_t* arg1, char* arg2, int32_t* arg3)
{
    void var_78;
    int64_t rax_1 = (__security_cookie ^ &var_78);
    int32_t rbx = 0;
    int64_t result;
    
    if (((arg1 == 0 || arg2 == 0) || arg3 == 0))
        result = 0xfffffc16;
    else
    {
        char i_2 = arg1[0x12e];
        
        if (i_2 != 0)
        {
            void* rcx = &arg1[3];
            uint64_t i_1 = i_2;
            uint64_t i;
            
            do
            {
                uint32_t rax_2 = *rcx;
                rcx += 0xc;
                rbx = ((rbx + 4) + rax_2);
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
        
        if (*arg3 >= (rbx + 6))
        {
            int16_t var_50 = *arg1;
            char var_54;
            memmove(&var_54, &var_50, 2);
            char var_53;
            *arg2 = var_53;
            arg2[1] = var_54;
            var_50 = arg1[1];
            memmove(&var_54, &var_50, 2);
            arg2[2] = var_53;
            arg2[3] = var_54;
            var_50 = rbx;
            memmove(&var_54, &var_50, 2);
            int64_t r14;
            r14 = 0;
            arg2[4] = var_53;
            arg2[5] = var_54;
            void* rsi_2 = &arg2[6];
            
            if (arg1[0x12e] <= 0)
            {
            label_1800036e9:
                *arg3 = (rbx + 6);
                result = 0;
            }
            else
            {
                while (true)
                {
                    void* rbx_4 = &arg1[(((r14 * 3) + 1) * 2)];
                    
                    if ((rbx_4 != 0 && rsi_2 != 0))
                    {
                        int32_t rbp_2 = (*(rbx_4 + 2) + 4);
                        
                        if (((*arg3 - rsi_2) + arg2) >= rbp_2)
                        {
                            sub_1800040f0(rsi_2, *rbx_4);
                            sub_1800040f0((rsi_2 + 2), *(rbx_4 + 2));
                            memmove((rsi_2 + 4), *(rbx_4 + 4), *(rbx_4 + 2));
                            r14 += 1;
                            rsi_2 += rbp_2;
                            
                            if (r14 >= arg1[0x12e])
                                goto label_1800036e9;
                            
                            continue;
                        }
                    }
                    
                    result = 0xfffff831;
                    break;
                }
            }
        }
        else
            result = 0xfffffc17;
    }
    
    __security_check_cookie((rax_1 ^ &var_78));
    return result;
}

int64_t sub_180003730(int16_t* arg1, char* arg2)
{
    void var_78;
    int64_t rax_1 = (__security_cookie ^ &var_78);
    int64_t result;
    
    if ((arg1 == 0 || arg2 == 0))
        result = 0xfffffc16;
    else
    {
        sub_180001230(1, "TRACE|%s:%d|\n", "MessageParseBuffer");
        *arg1 = ((*arg2 * 0x100) + arg2[1]);
        arg1[1] = ((arg2[2] * 0x100) + arg2[3]);
        void* rsi_1 = &arg2[6];
        int16_t i = ((arg2[4] * 0x100) + arg2[5]);
        uint32_t i_1 = i;
        char const* const var_58_1 = "data_length";
        sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "MessageParseBuffer");
        arg1[0x12e] = 0;
        
        if (i != 0)
        {
            int32_t var_48;
            int32_t r15_1 = var_48;
            
            do
            {
                void* r14_3 = &arg1[(((arg1[0x12e] * 3) + 1) * 2)];
                int32_t rdi_1;
                
                if ((r14_3 == 0 || rsi_1 == 0))
                    rdi_1 = 2;
                else
                {
                    memmove(&var_48, rsi_1, 2);
                    *r14_3 = ((var_48 * 0x100) + *var_48[1]);
                    memmove(&var_48, (rsi_1 + 2), 2);
                    uint64_t _Size = ((var_48 * 0x100) + *var_48[1]);
                    *(r14_3 + 2) = _Size;
                    int64_t rax_9 = malloc(_Size);
                    uint32_t count = *(r14_3 + 2);
                    *(r14_3 + 4) = rax_9;
                    memmove(rax_9, (rsi_1 + 4), count);
                    r15_1 = (*(r14_3 + 2) + 4);
                    rdi_1 = 0;
                }
                
                int32_t var_50_1 = rdi_1;
                char const* const var_58_2 = "ret_code";
                sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "MessageParseBuffer");
                
                if (rdi_1 != 0)
                {
                    result = 0xfffff831;
                    goto label_180003979;
                }
                
                arg1[0x12e] += 1;
                i -= r15_1;
                rsi_1 += r15_1;
                
                if (arg1[0x12e] >= 0x32)
                {
                    result = 0xfffffc0a;
                    goto label_180003979;
                }
            } while (i != 0);
        }
        
        sub_180001230(1, "TRACE|%s:%d|\n", "MessageParseBuffer");
        result = 0;
    }
    
label_180003979:
    __security_check_cookie((rax_1 ^ &var_78));
    return result;
}

int64_t sub_1800039a0(void* arg1)
{
    int64_t rdi;
    rdi = 0;
    
    if (*(arg1 + 0x25c) > 0)
    {
        do
        {
            void* rbx_3 = (arg1 + (((rdi * 3) + 1) << 2));
            
            if (rbx_3 == 0)
                return 0xfffff831;
            
            free(*(rbx_3 + 4));
            rdi += 1;
            *rbx_3 = 0;
            *(rbx_3 + 8) = 0;
        } while (rdi < *(arg1 + 0x25c));
    }
    
    memset(arg1, 0, 0x25d);
    return 0;
}

uint64_t sub_180003a30(char* arg1, int32_t* arg2)
{
    int32_t rax = data_180008055(arg1, 0x10, 0x2710);
    int32_t var_10 = rax;
    void* const var_18 = "ret_read";
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "MessageReceive");
    
    if (rax < 0)
        return rax;
    
    uint32_t rbx_1 = ((arg1[4] * 0x100) + (arg1[5] + 6));
    
    if (rbx_1 > (*arg2 - 0x10))
        return 0xfffffc0a;
    
    uint32_t var_10_1 = rbx_1;
    void* const var_18_1 = "expected_bytes";
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "MessageReceive");
    int32_t var_10_2 = (rbx_1 - 0x10);
    void* const var_18_2 = "expected_bytes - HEADER_SIZE";
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "MessageReceive");
    int32_t rax_6 = data_180008055(&arg1[0x10], (rbx_1 - 0x10), 0x7d0);
    int32_t var_10_3 = rax_6;
    void* const var_18_3 = "ret_read";
    sub_180001230(1, "DVARI|%s:%d|[%s]: %d\n", "MessageReceive");
    sub_180001330("msg_buffer", arg1, rbx_1);
    
    if (rax_6 < 0)
        return rax_6;
    
    *arg2 = rbx_1;
    return 0;
}

int64_t sub_180003ba0(void* arg1, char* arg2)
{
    void var_58;
    int64_t rax_1 = (__security_cookie ^ &var_58);
    char* rdi = arg2;
    int64_t result;
    
    if (arg1 == 0)
        result = 0xfffffc13;
    else if (rdi != 0)
    {
        char i = *(arg1 + 0x25c);
        arg2 = 0;
        int64_t var_38 = 0;
        int32_t var_30_1 = 0;
        
        if (i != 0)
        {
            do
            {
                uint64_t rax_2 = arg2;
                
                if (*(arg1 + (((rax_2 * 3) + 1) << 2)) == 5)
                {
                    memmove(&var_38, (arg1 + (((rax_2 * 3) + 1) << 2)), 0xc);
                    int16_t count_8 = *var_38[2];
                    uint32_t count_1 = count_8;
                    
                    if (count_8 > 0x40)
                        count_1 = 0x40;
                    
                    memmove(&rdi[0x1047f], var_38, count_1);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i);
        }
        
        char i_1 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_2 = 0;
        
        if (i_1 != 0)
        {
            do
            {
                uint64_t rcx_2 = (arg2 * 3);
                
                if (*((arg1 + (rcx_2 << 2)) + 4) == 0x28)
                {
                    memmove(&var_38, ((arg1 + (rcx_2 << 2)) + 4), 0xc);
                    arg2 = var_38;
                    void* rcx_4 = &rdi[0x10407];
                    uint32_t j_2 = *var_38[2];
                    
                    if ((arg2 != 0 && (rcx_4 != 0 && j_2 != 0)))
                    {
                        uint64_t j_1 = j_2;
                        uint64_t j;
                        
                        do
                        {
                            rcx_4 += 2;
                            *(rcx_4 - 2) = *"0123456789ABCDEF1.1.0"[(*arg2 >> 4)];
                            uint32_t rax_11 = *arg2;
                            arg2 = &arg2[1];
                            *(rcx_4 - 1) = *"0123456789ABCDEF1.1.0"[(rax_11 & 0xf)];
                            j = j_1;
                            j_1 -= 1;
                        } while (j != 1);
                    }
                    
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_1);
        }
        
        char i_2 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_3 = 0;
        uint32_t count = 0xa;
        
        if (i_2 != 0)
        {
            do
            {
                uint64_t rax_14 = arg2;
                
                if (*(arg1 + (((rax_14 * 3) + 1) << 2)) == 0x29)
                {
                    memmove(&var_38, (arg1 + (((rax_14 * 3) + 1) << 2)), 0xc);
                    int16_t count_9 = *var_38[2];
                    uint32_t count_2 = count_9;
                    
                    if (count_9 > 0xa)
                        count_2 = 0xa;
                    
                    memmove(&rdi[0x10428], var_38, count_2);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_2);
        }
        
        char i_3 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_4 = 0;
        
        if (i_3 != 0)
        {
            do
            {
                uint64_t rax_18 = arg2;
                
                if (*(arg1 + (((rax_18 * 3) + 1) << 2)) == 0x46)
                {
                    memmove(&var_38, (arg1 + (((rax_18 * 3) + 1) << 2)), 0xc);
                    int16_t count_10 = *var_38[2];
                    uint32_t count_3 = count_10;
                    
                    if (count_10 > 8)
                        count_3 = 8;
                    
                    memmove(&rdi[0x10433], var_38, count_3);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_3);
        }
        
        char i_4 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_5 = 0;
        
        if (i_4 != 0)
        {
            do
            {
                uint64_t rax_22 = arg2;
                
                if (*(arg1 + (((rax_22 * 3) + 1) << 2)) == 0x30)
                {
                    memmove(&var_38, (arg1 + (((rax_22 * 3) + 1) << 2)), 0xc);
                    int16_t count_11 = *var_38[2];
                    uint32_t count_4 = count_11;
                    
                    if (count_11 > 0xc)
                        count_4 = 0xc;
                    
                    memmove(&rdi[0x1043c], var_38, count_4);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_4);
        }
        
        char i_5 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_6 = 0;
        
        if (i_5 != 0)
        {
            do
            {
                uint64_t rax_26 = arg2;
                
                if (*(arg1 + (((rax_26 * 3) + 1) << 2)) == 0x32)
                {
                    memmove(&var_38, (arg1 + (((rax_26 * 3) + 1) << 2)), 0xc);
                    int16_t count_12 = *var_38[2];
                    uint32_t count_5 = count_12;
                    
                    if (count_12 > 0x1e)
                        count_5 = 0x1e;
                    
                    memmove(&rdi[0x10449], var_38, count_5);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_5);
        }
        
        char i_6 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_7 = 0;
        
        if (i_6 != 0)
        {
            do
            {
                uint64_t rax_30 = arg2;
                
                if (*(arg1 + (((rax_30 * 3) + 1) << 2)) == 0x33)
                {
                    memmove(&var_38, (arg1 + (((rax_30 * 3) + 1) << 2)), 0xc);
                    int16_t count_13 = *var_38[2];
                    uint32_t count_6 = count_13;
                    
                    if (count_13 > 6)
                        count_6 = 6;
                    
                    memmove(&rdi[0x10468], var_38, count_6);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_6);
        }
        
        char i_7 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_8 = 0;
        
        if (i_7 != 0)
        {
            do
            {
                uint64_t rax_34 = arg2;
                
                if (*(arg1 + (((rax_34 * 3) + 1) << 2)) == 0x34)
                {
                    memmove(&var_38, (arg1 + (((rax_34 * 3) + 1) << 2)), 0xc);
                    int16_t count_14 = *var_38[2];
                    uint32_t count_7 = count_14;
                    
                    if (count_14 > 4)
                        count_7 = 4;
                    
                    memmove(&rdi[0x1046f], var_38, count_7);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_7);
        }
        
        char i_8 = *(arg1 + 0x25c);
        arg2 = 0;
        var_38 = 0;
        int32_t var_30_9 = 0;
        
        if (i_8 != 0)
        {
            do
            {
                uint64_t rax_38 = arg2;
                
                if (*(arg1 + (((rax_38 * 3) + 1) << 2)) == 0x47)
                {
                    memmove(&var_38, (arg1 + (((rax_38 * 3) + 1) << 2)), 0xc);
                    int16_t count_15 = *var_38[2];
                    
                    if (count_15 <= 0xa)
                        count = count_15;
                    
                    memmove(&rdi[0x10474], var_38, count);
                    break;
                }
                
                arg2 += 1;
            } while (arg2 < i_8);
        }
        
        result = 0;
    }
    else
        result = 0xfffffc0f;
    
    __security_check_cookie((rax_1 ^ &var_58));
    return result;
}

int64_t sub_180004030(int64_t arg1, int64_t arg2)
{
    void var_78;
    int64_t rax_1 = (__security_cookie ^ &var_78);
    int64_t s;
    int64_t* rbx = &s;
    __builtin_memset(&s, 0, 0x32);
    int32_t rdi = 0xc;
    memmove(&s, arg1, 0xc);
    
    if (s == 0x30)
    {
        do
        {
            rbx += 1;
            rdi -= 1;
        } while (*rbx == 0x30);
    }
    
    int64_t rsi = (rdi - 2);
    memmove(arg2, rbx, rsi);
    void* rdi_1 = (rsi + arg2);
    *rdi_1 = 0x2e;
    int64_t result = memmove((rdi_1 + 1), (rsi + rbx), 2);
    *(rdi_1 + 3) = 0;
    __security_check_cookie((rax_1 ^ &var_78));
    return result;
}

int64_t sub_1800040f0(char* arg1, int16_t arg2)
{
    void var_48;
    int64_t rax_1 = (__security_cookie ^ &var_48);
    int16_t var_20 = arg2;
    char result_1;
    memmove(&result_1, &var_20, 2);
    char var_27;
    *arg1 = var_27;
    char result = result_1;
    arg1[1] = result;
    __security_check_cookie((rax_1 ^ &var_48));
    return result;
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
    
    capture_previous_context(&data_1800081d0);
    data_1800082c8 = __return_addr;
    data_180008268 = &stack_cookie_1;
    data_180008140 = data_1800082c8;
    data_180008250 = stack_cookie_1;
    data_180008130 = 0xc0000409;
    data_180008134 = 1;
    data_180008148 = 1;
    data_180008150 = 2;
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t var_10 = data_180008008;
    __raise_securityfailure(&data_1800061f0);
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
        return sub_180004350(arg1, arg3);
    
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

int64_t sub_180004350(int64_t arg1, int64_t arg2)
{
    if (__scrt_initialize_crt(0) != 0)
    {
        char rax_1 = __scrt_acquire_startup_lock();
        int64_t rbx;
        rbx = rax_1;
        arg_18 = rax_1;
        int64_t rdi;
        rdi = 1;
        
        if (data_1800086a8 != 0)
            __scrt_fastfail(7);
        
        data_1800086a8 = 1;
        
        if (__scrt_dllmain_before_initialize_c() != 0)
        {
            sub_180004cc8();
            atexit(sub_180004d14);
            sub_180004b38();
            atexit(sub_180004b48);
            __scrt_initialize_default_local_stdio_options();
            
            if ((_initterm_e(&data_1800061c0, &data_1800061c8) == 0 && __scrt_dllmain_after_initialize_c() != 0))
            {
                _initterm(&data_1800061b0, &data_1800061b8);
                data_1800086a8 = 2;
                rdi = 0;
            }
        }
        
        __scrt_release_startup_lock(rbx);
        
        if (rdi == 0)
        {
            if ((data_180008880 != 0 && __scrt_is_nonwritable_in_current_image(&data_180008880) != 0))
            {
                int64_t rbx_1 = data_180008880;
                j__guard_check_icall();
                rbx_1(arg1, 2, arg2);
            }
            
            data_1800086a0 += 1;
            return 1;
        }
    }
    
    return 0;
}

uint64_t dllmain_crt_process_detach(char arg1)
{
    int64_t rsi;
    rsi = arg1;
    int32_t rax = data_1800086a0;
    
    if (rax <= 0)
        return 0;
    
    data_1800086a0 = (rax - 1);
    char rax_3 = __scrt_acquire_startup_lock();
    int64_t rdi;
    rdi = rax_3;
    arg_10 = rax_3;
    
    if (data_1800086a8 != 2)
        __scrt_fastfail(7);
    
    __scrt_dllmain_uninitialize_c();
    data_1800086a8 = 0;
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
    
    if ((arg2 == 0 && data_1800086a0 <= arg2))
        return 0;
    
    int32_t rbx_1;
    
    if ((arg2 - 1) > 1)
    {
    label_18000456f:
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
                goto label_18000456f;
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
    
    if (sub_180004f38() == 0)
    {
    label_1800046ba:
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
            
            if (0 == data_1800086b0)
            {
                data_1800086b0 = StackBase;
                z_1 = true;
            }
            else
            {
                result = data_1800086b0;
                z_1 = false;
            }
            
            if (z_1)
                goto label_1800046ba;
        } while (StackBase != result);
        
        result = 1;
    }
    
    return result;
}

errno_t __scrt_dllmain_after_initialize_c()
{
    errno_t result;
    
    if (sub_180004f38() == 0)
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
    if ((sub_180004fa4() != 0 && sub_180004fa4() != 0))
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
    if ((sub_180004f38() == 0 && arg2 == 1))
    {
        j__guard_check_icall();
        arg4(arg1, 0, arg3);
    }
    
    /* tailcall */
    return _seh_filter_dll(arg5, arg6);
}

int64_t __scrt_dllmain_uninitialize_c()
{
    if (sub_180004f38() != 0)
        /* tailcall */
        return _execute_onexit_table(&data_1800086b8);
    
    sub_180004fa8();
    return _cexit();
}

int64_t __scrt_dllmain_uninitialize_critical()
{
    /* tailcall */
    return sub_180004fa4();
}

int64_t __scrt_initialize_crt(int32_t arg1)
{
    char rax = data_1800086e8;
    
    if (arg1 == 0)
        rax = 1;
    
    data_1800086e8 = rax;
    int64_t xcr0;
    __isa_available_init(xcr0);
    
    if ((sub_180004fa4() != 0 && sub_180004fa4() != 0))
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
    
    if ((sub_180004f38() == 0 || arg1 != 0))
    {
        uint64_t __security_cookie_1 = __security_cookie;
        result = 1;
        int64_t r8_2 = ((RORQ(-1, (0x40 - (__security_cookie_1 & 0x3f)))) ^ __security_cookie_1);
        int64_t var_20_1 = r8_2;
        *data_1800086b8 = r8_2;
        int64_t var_20_2 = r8_2;
        data_1800086c8 = r8_2;
        data_1800086d0 = r8_2;
        data_1800086e0 = r8_2;
    }
    else if (_initialize_onexit_table(&data_1800086b8) == 0)
        result = _initialize_onexit_table(&data_1800086d0) == 0;
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
    int32_t result = sub_180004f38();
    
    if ((result != 0 && rbx == 0))
    {
        data_1800086b0;
        data_1800086b0 = 0;
    }
    
    return result;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    data_1800086e8;
    int64_t result;
    result = 1;
    return result;
}

_onexit_t_1 _onexit(_onexit_t_1 arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    int32_t rax;
    
    if ((RORQ((__security_cookie_1 ^ data_1800086b8), (__security_cookie_1 & 0x3f))) != -1)
        rax = _register_onexit_function(&data_1800086b8, arg1);
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
    data_180008008 = result;
    return result;
}

int64_t DllMain(HMODULE arg1, int32_t arg2)
{
    if (arg2 == 1)
        DisableThreadLibraryCalls(arg1);
    
    return 1;
}

int64_t sub_180004b38()
{
    /* tailcall */
    return InitializeSListHead(&data_1800086f0);
}

int64_t sub_180004b48()
{
    /* tailcall */
    return __std_type_info_destroy_list(&data_1800086f0);
}

int64_t sub_180004b54() __pure
{
    return &data_180008700;
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_180008888 |= 4;
    data_180008700 |= 2;
    return &data_180008700;
}

int64_t sub_180004b78() __pure
{
    return &data_180008880;
}

int32_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd);
    
    data_180008708 = 0;
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
        data_180008708 &= result;
    }
    
    return result;
}

void sub_180004cc8()
{
    for (void* const i = &data_180006e28; i < &data_180006e28; i += 8)
    {
        int64_t rdi_1 = *i;
        
        if (rdi_1 != 0)
        {
            j__guard_check_icall();
            rdi_1(rdi_1);
        }
    }
}

void sub_180004d14()
{
    for (void* const i = &data_180006e38; i < &data_180006e38; i += 8)
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
    data_18000801c = 2;
    int32_t temp0;
    temp0 = __cpuid(0, 0);
    data_180008018 = 1;
    int32_t r8_2 = data_18000870c;
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
        data_180008020 = -1;
        r8_2 |= 4;
        int32_t rax_2 = (temp0_1 & 0xfff3ff0);
        data_18000870c = r8_2;
        
        if (((rax_2 == 0x106c0 || rax_2 == 0x20660) || rax_2 == 0x20670))
        {
            r8_2 |= 1;
            data_18000870c = r8_2;
        }
        else
        {
            uint64_t rax_3 = (rax_2 - 0x30650);
            
            if ((rax_3 <= 0x20 && (TEST_BITQ(0x100010001, rax_3))))
            {
                r8_2 |= 1;
                data_18000870c = r8_2;
            }
        }
    }
    
    if (((((temp1 ^ 0x68747541) | (temp3 ^ 0x69746e65)) | (temp2 ^ 0x444d4163)) == 0 && (temp0_1 & 0xff00f00) >= 0x600f00))
    {
        r8_2 |= 4;
        data_18000870c = r8_2;
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
            data_18000870c = (r8_2 | 2);
    }
    
    if ((TEST_BITD(temp2, 0x14)))
    {
        data_180008018 = 2;
        data_18000801c = 6;
        
        if (((TEST_BITD(temp2, 0x1b)) && (TEST_BITD(temp2, 0x1c))))
        {
            int32_t temp0_3;
            temp0_3 = _xgetbv(0, arg1);
            
            if ((((temp0_3 << 0x20) | temp1) & 6) == 6)
            {
                int32_t rax_8 = (data_18000801c | 8);
                data_180008018 = 3;
                data_18000801c = rax_8;
                
                if ((var_20 & 0x20) != 0)
                {
                    data_180008018 = 5;
                    data_18000801c = (rax_8 | 0x20);
                }
            }
        }
    }
    
    return 0;
}

int64_t sub_180004f30() __pure
{
    return 1;
}

int64_t sub_180004f38()
{
    int64_t result;
    result = data_180008030 != 0;
    return result;
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

int64_t sub_180004fa4() __pure
{
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_180004fa8() __pure
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

int32_t memcmp(void const* buffer1, void const* buffer2, uint64_t count)
{
    /* tailcall */
    return memcmp(buffer1, buffer2, count);
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

