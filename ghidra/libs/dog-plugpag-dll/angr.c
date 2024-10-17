extern unsigned long long g_180005638;
extern struct_2 *g_180005648;

int sub_180001000(struct struct_3 **a0, unsigned long long a1, unsigned long a2, unsigned long long a3)
{
    unsigned long long v1;  // rdi

    g_180005638 = *(a0)->field_f8();
    if (g_180005638)
    {
        v1 = *(a0)->field_2f0(a0);
        if (v1 && *(a0)->field_538(a0, a3))
        {
            *(a0)->field_340(a0, a1, v1);
            if (!(char)g_180005648->field_0->field_720(g_180005648))
                return 0;
            g_180005648->field_0->field_88(g_180005648);
        }
    }
    return -3000;
}

extern unsigned long long g_180005638;
extern struct_3 *g_180005648;

int sub_1800010d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rbp
    struct struct_1 **v5;  // rcx
    unsigned long v6;  // rsi
    unsigned long long v7;  // rsi
    unsigned long v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long v10;  // r9

    v4 = v3;
    g_180005638 = *(v5)->field_f8();
    if (!g_180005638)
        return;
    v1 = v6;
    v7 = *(v5)->field_2f0(v5);
    if (!v7)
        return;
    v2 = v8;
    v9 = *(v5)->field_580(v5, 65542);
    if (!v9)
        return;
    v0 = v10;
    *(v5)->field_680(v5, v9, 0, 65542);
    if (!(char)g_180005648->field_0->field_720(g_180005648))
    {
        *(v5)->field_340(v5, v3, v7, v9);
        if (!(char)g_180005648->field_0->field_720(g_180005648))
            return;
    }
    g_180005648->field_0->field_88(g_180005648);
}

extern unsigned long long g_180005000;
extern unsigned long long g_180005648;

long long JNI_OnLoad(struct struct_1 **a0)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]

    v2 = g_180005000 ^ &v0;
    if (!*(a0)->field_30())
        g_180005648 = *((long long *)&v1);
    return (unsigned long long)sub_1800019e0(v2 ^ &v0);
}

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_GetVersionLib(unsigned long a0)
{
    GetVersionLib();
    goto *((long long *)(*((long long *)rcx<8>) + 1336));
}

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_UnloadDriverConnection()
{
    return UnloadDriverConnection();
}

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_InitBTConnection__()
{
    return InitBTConnection(0);
}

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_InitBTConnection__Ljava_lang_String_2(struct struct_1 **a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v1;  // rbx

    v1 = *(a0)->field_548();
    *(a0)->field_550(a0, a2, v1, *(a0));
    return InitBTConnection(v1);
}

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_-8;
    unsigned int field_0;
} struct_0;

extern unsigned long long g_180005000;

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_SimplePaymentTransaction(struct struct_2 **a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned int a4, unsigned long long a5, unsigned long a6)
{
    int <0x180001330[is_24]|Stack bp+0x20, 1 B>;  // [bp+0x20]
    unsigned long v0;  // [bp-0x10588]
    unsigned long v1;  // [bp-0x10580]
    unsigned long v2;  // [bp-0x10578]
    unsigned long v3;  // [bp-0x10570]
    unsigned long v4;  // [bp-0x10568]
    unsigned long v5;  // [bp-0x10560]
    unsigned long v6;  // [bp-0x10558]
    unsigned long v7;  // [bp-0x10550]
    unsigned long v8;  // [bp-0x10548]
    unsigned long v9;  // [bp-0x10540]
    unsigned long v10;  // [bp-0x10538]
    unsigned long v11;  // [bp-0x10530]
    char v12;  // [bp-0x10528]
    char v13;  // [bp-0x521]
    char v14;  // [bp-0x121]
    char v15;  // [bp-0x100]
    char v16;  // [bp-0xf5]
    char v17;  // [bp-0xec]
    char v18;  // [bp-0xdf]
    char v19;  // [bp-0xc0]
    char v20;  // [bp-0xb9]
    char v21;  // [bp-0xb4]
    char v22;  // [bp-0xa9]
    unsigned long long v23;  // [bp-0x58]
    unsigned long v24;  // [bp-0x40]
    unsigned long v25;  // [bp-0x38]
    unsigned long v26;  // [bp-0x30]
    unsigned long v27;  // [bp-0x28]
    unsigned long v28;  // [bp-0x20]
    unsigned long v29;  // [bp-0x18]
    unsigned long v30;  // [bp-0x10]
    unsigned long v31;  // [bp-0x8]
    char v32;  // [bp+0x0]
    unsigned long v33;  // [bp+0x8]
    char v34;  // [bp+0x10]
    char v35;  // [bp+0x18]
    unsigned long v36;  // [bp+0x20]
    char v38;  // [bp+0x48]
    char v39;  // [bp+0x58]
    unsigned long v47;  // rbx
    unsigned long v48;  // rsi
    unsigned long v49;  // rdi
    unsigned long v50;  // r12
    unsigned long v51;  // r13
    unsigned long v52;  // r14
    unsigned long v53;  // r15
    unsigned long long v54;  // rax
    unsigned long long v55;  // rbx
    unsigned long long v57;  // r12
    unsigned long long v58;  // r15
    unsigned long long v59;  // r8
    unsigned long long v60;  // rax
    struct_0 *v61;  // rbx, Other Possible Types: unsigned long
    void* v62;  // rdi, Other Possible Types: unsigned long

    *((int *)&v31) = rbp<8>;
    v30 = v47;
    v29 = v48;
    v28 = v49;
    v27 = v50;
    v26 = v51;
    v25 = v52;
    v24 = v53;
    (unsigned int)v54 = sub_1800028c0();
    rsp<8> = (unsigned long *)((char *)&v24 - v54);
    v23 = g_180005000 ^ (char *)&v24 - v54;
    v55 = a6;
    *((char **)&(&v32)[-1 * v54]) = &v19;
    *((char **)((char *)&v33 - v54)) = "bin";
    v62 = 0;
    *((unsigned int *)((char *)&v30 - v54)) = a3;
    *((char **)&(&v34)[-1 * v54]) = &v18;
    *((char **)&(&v35)[-1 * v54]) = "cardBrand";
    *((char **)((char *)&<0x180001330[is_24]|Stack bp+0x20, 1 B> - v54)) = &v15;
    *((char **)((char *)&a4 - v54)) = "date";
    *((char **)((char *)&a5 - v54)) = &v20;
    *((char **)((char *)&a6 - v54)) = "holder";
    v0 = &v17;
    v1 = "hostNsu";
    v2 = &v16;
    v3 = "time";
    v4 = &v21;
    v5 = "userReference";
    v6 = &v14;
    v7 = "transactionCode";
    v8 = &v13;
    v9 = "message";
    v10 = &v22;
    v11 = "terminalSerialNumber";
    *((unsigned long long *)((char *)&v31 - v54)) = a1;
    v57 = (!a1 ? *(a0)->field_548(a0, a5, 0) : 0);
    v58 = (!v55 ? *(a0)->field_548(a0, v55, 0) : 0);
    memset(&v12, 0, 66753);
    v59 = a4;
    a4 = &v12;
    v36 = v58;
    (unsigned int)v60 = SimplePaymentTransaction(a2, (unsigned int)a5, v59, v57, v58);
    if (a6)
        *(a0)->field_550(a0);
    if (v55)
        *(a0)->field_550(a0, v55, v58, *(a0), *((long long *)(reg_48<8> + 32)), *((long long *)(reg_48<8> + 40)), *((long long *)(reg_48<8> + 48)));
    if (!(unsigned int)v60)
    {
        v61 = &v38;
        do
        {
            if (sub_180001000(a0, a1, *((long long *)v61), *((long long *)(v61 - 8))) < 0)
                return (unsigned long long)sub_1800019e0(v23 ^ &v32);
        } while ((v62 += 1, v61 = &v39, v62 < 10));
    }
    return (unsigned long long)sub_1800019e0(v23 ^ &v32);
}

typedef struct struct_0 {
    unsigned long long field_-8;
    unsigned int field_0;
} struct_0;

extern char g_1800016bf;
extern unsigned long long g_180005000;

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_CancelTransaction(struct struct_3 **a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10558]
    unsigned long v1;  // [bp-0x10550]
    unsigned long v2;  // [bp-0x10548]
    unsigned long v3;  // [bp-0x10540]
    unsigned long v4;  // [bp-0x10538]
    unsigned long v5;  // [bp-0x10530]
    unsigned long v6;  // [bp-0x10528]
    unsigned long v7;  // [bp-0x10520]
    unsigned long v8;  // [bp-0x10518]
    unsigned long v9;  // [bp-0x10510]
    char v10;  // [bp-0x10508]
    char v11;  // [bp-0x501]
    char v12;  // [bp-0x101]
    char v13;  // [bp-0xe0]
    char v14;  // [bp-0xd5]
    char v15;  // [bp-0xcc]
    char v16;  // [bp-0xbf]
    char v17;  // [bp-0xa0]
    char v18;  // [bp-0x99]
    char v19;  // [bp-0x94]
    char v20;  // [bp-0x89]
    unsigned long long v21;  // [bp-0x38]
    char v22;  // [bp-0x30]
    unsigned long v23;  // [bp-0x28]
    unsigned long v24;  // [bp-0x20]
    unsigned long v25;  // [bp-0x18]
    unsigned long v26;  // [bp-0x10]
    unsigned long v27;  // [bp-0x8]
    char v28;  // [bp+0x0]
    unsigned long v29;  // [bp+0x8]
    char v30;  // [bp+0x10]
    unsigned long v31;  // [bp+0x18]
    char v32;  // [bp+0x20]
    char v33;  // [bp+0x28]
    char v34;  // [bp+0x30]
    char v35;  // [bp+0x38]
    char v36;  // [bp+0x40]
    char v37;  // [bp+0x48]
    char v38;  // [bp+0x50]
    unsigned long v44;  // rbx
    unsigned long v45;  // rsi
    unsigned long v46;  // rdi
    unsigned long v47;  // r14
    unsigned long v48;  // r15
    unsigned long long v49;  // rax
    struct_0 *v50;  // rbx, Other Possible Types: unsigned long
    void* v51;  // rdi, Other Possible Types: unsigned long

    v31 = v44;
    *((int *)&v27) = rbp<8>;
    v26 = v45;
    v25 = v46;
    v24 = v47;
    v23 = v48;
    (unsigned int)v49 = sub_1800028c0();
    v21 = g_180005000 ^ (char *)&v23 - v49;
    *((char **)((char *)&v29 - v49)) = &v17;
    *((char **)&(&v30)[-1 * v49]) = "bin";
    *((char **)((char *)&v31 - v49)) = &v16;
    *((char **)&(&v32)[-1 * v49]) = "cardBrand";
    *((char **)&(&v33)[-1 * v49]) = &v13;
    *((char **)&(&v34)[-1 * v49]) = "date";
    *((char **)&(&v35)[-1 * v49]) = &v18;
    *((char **)&(&v36)[-1 * v49]) = "holder";
    *((char **)&(&v37)[-1 * v49]) = &v15;
    *((char **)&(&v38)[-1 * v49]) = "hostNsu";
    v0 = &v14;
    v1 = "time";
    v2 = &v19;
    v3 = "userReference";
    v4 = &v12;
    v5 = "transactionCode";
    v6 = &v11;
    v7 = "message";
    v8 = &v20;
    v9 = "terminalSerialNumber";
    *((char **)&(&v22)[-1 * v49]) = &g_1800016bf;
    memset(&v10, 0, 66753);
    if (!CancelTransaction(&v10))
    {
        v51 = 0;
        v50 = &v35;
        do
        {
            if (sub_180001000(a0, a1, *((long long *)v50), *((long long *)(v50 - 8))) < 0)
                return (unsigned long long)sub_1800019e0(v21 ^ &v28);
        } while ((v51 += 1, v50 = &v37, v51 < 10));
    }
    return (unsigned long long)sub_1800019e0(v21 ^ &v28);
}

typedef struct struct_0 {
    unsigned long long field_-8;
    unsigned int field_0;
} struct_0;

extern char g_180001878;
extern unsigned long long g_180005000;

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_GetLastApprovedTransactionStatus(struct struct_3 **a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10558]
    unsigned long v1;  // [bp-0x10550]
    unsigned long v2;  // [bp-0x10548]
    unsigned long v3;  // [bp-0x10540]
    unsigned long v4;  // [bp-0x10538]
    unsigned long v5;  // [bp-0x10530]
    unsigned long v6;  // [bp-0x10528]
    unsigned long v7;  // [bp-0x10520]
    unsigned long v8;  // [bp-0x10518]
    unsigned long v9;  // [bp-0x10510]
    char v10;  // [bp-0x10508]
    char v11;  // [bp-0x501]
    char v12;  // [bp-0x101]
    char v13;  // [bp-0xe0]
    char v14;  // [bp-0xd5]
    char v15;  // [bp-0xcc]
    char v16;  // [bp-0xbf]
    char v17;  // [bp-0xa0]
    char v18;  // [bp-0x99]
    char v19;  // [bp-0x94]
    char v20;  // [bp-0x89]
    unsigned long long v21;  // [bp-0x38]
    char v22;  // [bp-0x30]
    unsigned long v23;  // [bp-0x28]
    unsigned long v24;  // [bp-0x20]
    unsigned long v25;  // [bp-0x18]
    unsigned long v26;  // [bp-0x10]
    unsigned long v27;  // [bp-0x8]
    char v28;  // [bp+0x0]
    unsigned long v29;  // [bp+0x8]
    char v30;  // [bp+0x10]
    unsigned long v31;  // [bp+0x18]
    char v32;  // [bp+0x20]
    char v33;  // [bp+0x28]
    char v34;  // [bp+0x30]
    char v35;  // [bp+0x38]
    char v36;  // [bp+0x40]
    char v37;  // [bp+0x48]
    char v38;  // [bp+0x50]
    unsigned long v44;  // rbx
    unsigned long v45;  // rsi
    unsigned long v46;  // rdi
    unsigned long v47;  // r14
    unsigned long v48;  // r15
    unsigned long long v49;  // rax
    struct_0 *v50;  // rbx, Other Possible Types: unsigned long
    void* v51;  // rdi, Other Possible Types: unsigned long

    v31 = v44;
    *((int *)&v27) = rbp<8>;
    v26 = v45;
    v25 = v46;
    v24 = v47;
    v23 = v48;
    (unsigned int)v49 = sub_1800028c0();
    v21 = g_180005000 ^ (char *)&v23 - v49;
    *((char **)((char *)&v29 - v49)) = &v17;
    *((char **)&(&v30)[-1 * v49]) = "bin";
    *((char **)((char *)&v31 - v49)) = &v16;
    *((char **)&(&v32)[-1 * v49]) = "cardBrand";
    *((char **)&(&v33)[-1 * v49]) = &v13;
    *((char **)&(&v34)[-1 * v49]) = "date";
    *((char **)&(&v35)[-1 * v49]) = &v18;
    *((char **)&(&v36)[-1 * v49]) = "holder";
    *((char **)&(&v37)[-1 * v49]) = &v15;
    *((char **)&(&v38)[-1 * v49]) = "hostNsu";
    v0 = &v14;
    v1 = "time";
    v2 = &v19;
    v3 = "userReference";
    v4 = &v12;
    v5 = "transactionCode";
    v6 = &v11;
    v7 = "message";
    v8 = &v20;
    v9 = "terminalSerialNumber";
    *((char **)&(&v22)[-1 * v49]) = &g_180001878;
    if (!GetLastApprovedTransactionStatus(&v10))
    {
        v51 = 0;
        v50 = &v35;
        do
        {
            if (sub_180001000(a0, a1, *((long long *)v50), *((long long *)(v50 - 8))) < 0)
                return (unsigned long long)sub_1800019e0(v21 ^ &v28);
        } while ((v51 += 1, v50 = &v37, v51 < 10));
    }
    return (unsigned long long)sub_1800019e0(v21 ^ &v28);
}

long long Java_br_uol_pagseguro_client_plugpag_PlugPag_SetVersionName(struct struct_1 **a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // [bp+0x10]
    unsigned long v2;  // [bp+0x18]
    unsigned long v3;  // r15
    unsigned long long v4;  // r15
    unsigned long v5;  // rbx
    unsigned long v6;  // rdi
    unsigned long long v7;  // rbx

    if (!a2)
        return 4294966294;
    v2 = v3;
    v4 = *(a0)->field_548();
    if (a3)
    {
        v0 = v5;
        v1 = v6;
        v7 = *(a0)->field_548(a0, a3, 0);
        *(a0)->field_550(a0, a2, v4, *(a0));
        *(a0)->field_550(a0, a3, v7, *(a0));
        return SetVersionName(v4, v7);
    }
    return 4294966294;
}

extern unsigned long long g_180003198;
extern unsigned long long g_180005000;
extern unsigned long long g_180005008;
extern unsigned int g_180005050;
extern unsigned int g_180005054;
extern unsigned long long g_180005060;
extern unsigned int g_180005068;
extern unsigned long long g_180005070;
extern unsigned long long g_1800050f0;
extern unsigned long long g_180005170;
extern struct_0 *g_180005188;
extern unsigned long long g_1800051e8;

void sub_1800019e0(unsigned long long a0)
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
        sub_180001e98(&g_1800050f0);
        g_1800051e8 = *((long long *)&v2);
        g_180005188 = &v3;
        g_180005060 = g_1800051e8;
        g_180005170 = v3;
        g_180005050 = 3221226505;
        g_180005054 = 1;
        g_180005068 = 1;
        g_180005070 = 2;
        v0 = g_180005000;
        v1 = g_180005008;
        sub_180001d90(&g_180003198);
        return;
    }
}

extern unsigned long long g_180003148;
extern unsigned long long g_180003150;
extern unsigned long long g_180003158;
extern unsigned long long g_180003160;
extern unsigned int g_180005040;
extern unsigned int g_1800055c0;

int sub_180001a04(unsigned long long a0, unsigned long a1, unsigned long long a2)
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
                return sub_180001fbc();
            return 1;
        }
        else
        {
            v1 = v10;
            v2 = v11;
            v4 = v12;
            v0 = v13;
            if (!(char)sub_18000207c(0, a2))
            {
                v21 = 0;
            }
            else
            {
                (char)v16 = sub_180001f0c();
                v3 = v16;
                v17 = 1;
                if (g_1800055c0)
                    sub_180002408(7);
                g_1800055c0 = 1;
                if ((char)sub_180001f7c())
                {
                    sub_180002550();
                    sub_1800022d0(sub_18000259c);
                    InitializeSListHead();
                    sub_1800022d0(sub_1800023c8);
                    sub_1800023e4();
                    if (!_initterm_e(&g_180003158, &g_180003160) && (char)sub_180001f48(&g_180003158, &g_180003160))
                    {
                        _initterm(&g_180003148, &g_180003150);
                        g_1800055c0 = 2;
                        v17 = 0;
                    }
                }
                *((char *)&a0) = v16;
                sub_180002230(a0);
                if (!v17)
                {
                    v22 = sub_180002400();
                    if (*(v22) && (char)sub_180002194(v22))
                    {
                        sub_1800025e8(*(v22));
                        v23(a0, 2, a2);
                    }
                    g_180005040 = g_180005040 + 1;
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
        if (g_180005040 <= 0)
        {
            v14 = 0;
        }
        else
        {
            g_180005040 = g_180005040 - 1;
            v2 = sub_180001f0c();
            if (g_1800055c0 != 2)
                sub_180002408(7);
            sub_180002038();
            g_1800055c0 = 0;
            sub_180002068();
            sub_180002230(v2);
            v14 = (char)sub_180002254(a2, 0);
        }
        return v14;
    }
}

int sub_180001ce3()
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

int sub_180001cfc(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    return 1;
}

extern unsigned int g_180005040;

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
    if ((unsigned int)(v11 - 1) > 1 || (v0 = (unsigned int)sub_180001cfc(v15, v11, v14), v0 && v0))
    {
        v0 = sub_180002394(v15, v11);
        if ((unsigned int)v11 == 1 && !v0)
        {
            sub_180002394(v15, 0);
            sub_180001a04(v15, 0, v14);
            sub_180001cfc(v15, 0, v14);
        }
        if (!(unsigned int)v11 || (unsigned int)v11 == 3)
        {
            v0 = sub_180001a04(v15, v11, v14);
            if (v0)
                v0 = sub_180001cfc(v15, v11, v14);
        }
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

void sub_180001d90(EXCEPTION_POINTERS *a0)
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

int sub_180001e98()
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

extern unsigned long long g_1800055c8;

int sub_180001f0c()
{
    int tmp_3;  // tmp #3
    int tmp_0;  // tmp #0
    unsigned long v1;  // rax, Other Possible Types: unsigned long long
    struct struct_0 **v2;  // gs
    unsigned long long v3;  // rcx
    unsigned long v4;  // cc_dep2, Other Possible Types: unsigned long long

    (unsigned int)v1 = sub_1800027c0();
    if ((unsigned int)v1)
    {
        v3 = v2[6]->field_8;
        while (true)
        {
            tmp_3 = 0;
            g_1800055c8 = v3;
            if (g_1800055c8)
            {
                tmp_0 = 0;
                g_1800055c8 = v3;
                v4 = g_1800055c8;
                v1 = g_1800055c8;
            }
            else
            {
                tmp_0 = 0;
                g_1800055c8 = v3;
                v4 = g_1800055c8;
                v1 = 0;
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

int sub_180001f48(unsigned long long a0, unsigned long long a1)
{
    unsigned long v1;  // rax, Other Possible Types: unsigned long long, char

    if (sub_1800027c0())
    {
        (unsigned int)v1 = sub_1800025f0(a0, a1);
    }
    else
    {
        *((unsigned int *)&v1) = _configure_narrow_argv(sub_1800027b8());
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

int sub_180001f7c()
{
    unsigned long long v1;  // rax

    (unsigned int)v1 = sub_1800020c8(0);
    *((char *)&v1) = (char)v1;
    return v1;
}

int sub_180001f94()
{
    unsigned long v1;  // rax, Other Possible Types: unsigned long long, char

    (unsigned int)v1 = sub_180002824();
    if ((char)v1)
    {
        *((unsigned int *)&v1) = sub_180002824();
        if (v1)
        {
            v1 = 1;
            return v1;
        }
        (unsigned int)v1 = sub_180002824();
    }
    *((char *)&v1) = 0;
    return v1;
}

int sub_180001fbc()
{
    char v1;  // rax

    sub_180002824();
    *((unsigned int *)&v1) = sub_180002824();
    v1 = 1;
    return *((unsigned int *)&v1);
}

int sub_180001fd4()
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
    if (!sub_1800027c0() && v9 == 1)
    {
        sub_1800025e8(v10);
        v10(v11, 0, v12);
    }
    v13 = *((long long *)&v5);
    v14 = *((int *)&v4);
    v16 = v2;
    _seh_filter_dll();
    return;
}

extern char g_1800055d0;

void sub_180002038()
{
    unsigned long long v1;  // rcx

    if (sub_1800027c0())
    {
        v1 = &g_1800055d0;
        _execute_onexit_table();
        return;
    }
    else if (sub_180002828())
    {
        return;
    }
    else
    {
        _cexit();
        return;
    }
}

void sub_180002068()
{
    sub_180002824();
    sub_180002824();
    return;
}

extern char g_180005600;

int sub_18000207c(unsigned long long a0, unsigned long long a1)
{
    char v1;  // al
    unsigned long long v2;  // rax, Other Possible Types: unsigned long, char

    v1 = g_180005600;
    if (!(unsigned int)a0)
        v1 = 1;
    g_180005600 = v1;
    sub_1800025f0(a0, a1);
    (unsigned int)v2 = sub_180002824();
    if ((char)v2)
    {
        *((unsigned int *)&v2) = sub_180002824();
        if (v2)
        {
            v2 = 1;
            return v2;
        }
        (unsigned int)v2 = sub_180002824();
    }
    *((char *)&v2) = 0;
    return v2;
}

extern unsigned long long g_180005000;
extern uint128_t g_1800055d0;
extern unsigned long long g_1800055e0;
extern uint128_t g_1800055e8;
extern unsigned long long g_1800055f8;

int sub_1800020c8(unsigned long a0)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v4;  // rax, Other Possible Types: unsigned int, char
    char v5;  // cl
    unsigned long long v7;  // xmm1lq

    if ((unsigned int)a0 > 1)
    {
        sub_180002408(5);
        [D] Unsupported jumpkind Ijk_SigTRAP at address 6442459536
    }
    if (sub_1800027c0() && !(unsigned int)a0)
    {
        *((unsigned int *)&v4) = _initialize_onexit_table(&g_1800055d0);
        if (*((unsigned int *)&v4))
        {
            v4 = 0;
            return v4;
        }
        (unsigned int)v4 = _initialize_onexit_table(&g_1800055e8);
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
    g_1800055d0 = *((int128_t *)&v0);
    v0 = v0;
    v1 = v0;
    v2 = v0;
    g_1800055e0 = v7;
    g_1800055e8 = *((int128_t *)&v0);
    g_1800055f8 = v2;
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

int sub_180002194(unsigned long a0)
{
    unsigned int v0[10];  // [bp-0x18]
    unsigned int v3;  // eax, Other Possible Types: unsigned long long, unsigned long, char
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

long long sub_180002226()
{
}

extern void* g_1800055c8;

void sub_180002230(unsigned long a0)
{
    int tmp_0;  // tmp #0
    int tmp_5;  // tmp #5
    int tmp_3;  // tmp #3

    if (!sub_1800027c0())
    {
        return;
    }
    else if ((char)a0)
    {
        return;
    }
    else
    {
LABEL_180002247:
        tmp_0 = g_1800055c8;
        g_1800055c8 = 0;
        tmp_5 = CasCmpNE(tmp_3, tmp_0);
        if (tmp_5)
            goto LABEL_180002247;
        return;
    }
}

extern char g_180005600;

int sub_180002254(unsigned long a0, unsigned long a1)
{
    char v1;  // rax

    if (!g_180005600 || !(char)a1)
    {
        sub_180002824();
        *((unsigned int *)&v1) = sub_180002824();
    }
    v1 = 1;
    return *((unsigned int *)&v1);
}

extern unsigned long long g_180005000;
extern unsigned long long g_1800055d0;

int sub_180002280(unsigned int a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long v4;  // rax, Other Possible Types: unsigned long long

    v0 = v2;
    if ((((char)((unsigned int)g_180005000 & 63) & 63) ? (g_180005000 ^ g_1800055d0) >> ((char)((unsigned int)g_180005000 & 63) & 63) | (g_180005000 ^ g_1800055d0) << 64 - ((char)((unsigned int)g_180005000 & 63) & 63) : (g_180005000 ^ g_1800055d0) >> ((char)((unsigned int)g_180005000 & 63) & 63) | (g_180005000 ^ g_1800055d0) << 64 - ((char)((unsigned int)g_180005000 & 63) & 63)) != -1)
        (unsigned int)v4 = _register_onexit_function(&g_1800055d0, a0);
    else
        (unsigned int)v4 = _crt_atexit(a0);
    if (!(unsigned int)v4)
        return a0;
    return 0;
}

void sub_1800022d0(unsigned long a0)
{
    sub_180002280(a0);
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

int sub_180002394(unsigned int *a0, unsigned long a1)
{
    if ((unsigned int)a1 == 1)
        DisableThreadLibraryCalls(a0);
    return 1;
}

extern void g_180005610;

void InitializeSListHead()
{
    ::kernel32.dll::InitializeSListHead(&g_180005610);
    return;
}

extern char g_180005610;

long long sub_1800023c8()
{
    unsigned long long v1;  // rcx

    v1 = &g_180005610;
    return __std_type_info_destroy_list();
}

int sub_1800023d4()
{
    return 2147505696;
}

int sub_1800023dc()
{
    return 2147505704;
}

void sub_1800023e4()
{
    *((long long *)sub_1800023d4()) = *((long long *)sub_1800023d4()) | 4;
    *((long long *)sub_1800023dc()) = *((long long *)sub_1800023dc()) | 2;
    return;
}

int sub_180002400()
{
    return 2147505728;
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

extern unsigned int g_180005630;

int sub_180002408()
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
        g_180005630 = 0;
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
            g_180005630 = g_180005630 & -(0 < (char)v14);
            v16 = v8;
            return;
        }
        v16 = v8;
        return;
    }
}

extern struct_0 *g_180003630;

void sub_180002550()
{
    struct struct_0 **v1;  // rbx, Other Possible Types: unsigned long
    struct struct_0 **v2;  // rdi

    for (v1 = &g_180003630; v1 < 6442464816; v1 += 8)
    {
        v2 = *((long long *)v1);
        if (v2)
        {
            sub_1800025e8(v2);
            v2(v2);
        }
    }
    return;
}

extern struct_0 *g_180003640;

long long sub_18000259c()
{
    struct struct_0 **v1;  // rbx, Other Possible Types: unsigned long
    struct struct_0 **v2;  // rdi

    for (v1 = &g_180003640; v1 < 6442464832; v1 += 8)
    {
        v2 = *((long long *)v1);
        if (v2)
            sub_1800025e8(v2);
    }
    return v2(v2);
}

void sub_1800025e8(unsigned long a0)
{
    return;
}

extern unsigned int g_180005018;
extern unsigned int g_18000501c;
extern unsigned long long g_180005020;
extern unsigned int g_180005634;

void sub_1800025f0(unsigned long a0, unsigned long a1)
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
    v12 = g_180005634;
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
        v12 = g_180005634 | 4;
        g_180005634 = v12;
    }
    v1 = v7;
    v2 = 0;
    v17 = v8;
    return;
}

int sub_1800027b8()
{
    return 1;
}

extern unsigned int g_180005030;

int sub_1800027c0()
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

int sub_180002824()
{
    char v1;  // al
    unsigned int v2;  // eax

    v1 = 1;
    return v2;
}

int sub_180002828()
{
    return 0;
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

long long sub_18000282c(unsigned long a0, unsigned long long a1, unsigned long a2, struct_0 *a3)
{
    sub_18000284c(a1, a3, a3->field_38);
    return 1;
}

typedef struct struct_3 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    unsigned int field_8;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_1 *field_10;
} struct_2;

typedef struct struct_0 {
    char padding_0[3];
    char field_3;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
} struct_1;

void sub_18000284c(unsigned long long *a0, struct_2 *a1, struct_3 *a2)
{
    unsigned long long *v1;  // r9, Other Possible Types: unsigned long
    unsigned long long *v2;  // r10, Other Possible Types: unsigned long
    struct_0 *v3;  // rcx

    v1 = a0;
    v2 = a0;
    if ((a2->field_0 & 4))
        v2 = a2->field_4 + (char *)a0 & -(a2->field_8);
    v3 = a1->field_10->field_8 + a1->field_8;
    if ((v3->field_3 & 15))
        v1 = (char *)v1 + (v3->field_3 & 0xfffffff0);
    sub_1800019e0(v1 ^ *((long long *)((*((int *)&a2->field_0) & -8) + v2)));
    return;
}

int sub_1800028c0()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rax
    void* v2;  // r10, Other Possible Types: unsigned long
    struct struct_0 **v3;  // gs
    char *v4;  // r11, Other Possible Types: unsigned long

    v2 = (char *)&v0 - v1;
    if (&v0 < v1)
        v2 = 0;
    v4 = v3[2];
    if (v2 >= v4)
        return v1;
    *((unsigned short *)&v2) = (unsigned short)v2 & 0xf000;
    do
    {
        v4 -= 0x1000;
        *((char *)v4) = 0;
    } while (v2 != v4);
    return v1;
}

long long sub_180002930()
{
    goto rax<8>;
}

typedef struct struct_0 {
    char padding_0[64];
    char field_40;
} struct_0;

long long sub_180002932(unsigned long a0, struct_0 *a1)
{
    return (unsigned long long)sub_180002230(a1->field_40);
}

typedef struct struct_0 {
    char padding_0[56];
    char field_38;
} struct_0;

long long sub_180002949(unsigned long a0, struct_0 *a1)
{
    sub_180002068();
    return (unsigned long long)sub_180002230(a1->field_38);
}

long long sub_180002965(struct struct_0 **a0, unsigned long long a1)
{
    unsigned long long v1;  // r8
    unsigned long long v2;  // r9

    return sub_180001fd4(a0, a1, v1, v2, *(a0)->field_0, a0);
}

long long sub_18000299b(struct struct_0 **a0, unsigned long a1)
{
    return *(a0)->field_0 == 3221225477;
}

