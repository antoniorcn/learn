#include "out.h"



undefined * FUN_180001000(void)

{
  return &DAT_180008888;
}



void FUN_180001010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_180001000();
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0,&local_res18);
  return;
}



void FUN_180001060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180001000();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}



void FUN_1800010c0(void)

{
  size_t sVar1;
  undefined auStack_68 [32];
  __time64_t local_48;
  tm local_40;
  ulonglong local_18;
  
  local_18 = DAT_180008000 ^ (ulonglong)auStack_68;
  if (DAT_180008710 == '\0') {
    local_48 = _time64((__time64_t *)0x0);
    _localtime64_s(&local_40,&local_48);
    sVar1 = strftime(&DAT_180008710,0x100,"PPPAGSEGURO_%Y-%m-%d.log",&local_40);
    if (sVar1 == 0) {
      memset(&DAT_180008710,0,0x100);
      __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180001170(void)

{
  size_t sVar1;
  undefined auStack_68 [32];
  __time64_t local_48;
  tm local_40;
  ulonglong local_18;
  
  local_18 = DAT_180008000 ^ (ulonglong)auStack_68;
  local_48 = _time64((__time64_t *)0x0);
  _localtime64_s(&local_40,&local_48);
  sVar1 = strftime(&DAT_180008810,0x40,"%H:%M:%S|",&local_40);
  if (sVar1 == 0) {
    _DAT_180008810 = sVar1;
    _DAT_180008818 = sVar1;
    _DAT_180008820 = sVar1;
    _DAT_180008828 = sVar1;
    _DAT_180008830 = sVar1;
    _DAT_180008838 = sVar1;
    _DAT_180008840 = sVar1;
    _DAT_180008848 = sVar1;
    __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
    return;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}



void FUN_180001230(int param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *pFVar1;
  undefined8 uVar2;
  char *_Filename;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined auStack_68 [32];
  undefined8 *local_48;
  FILE *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180008000 ^ (ulonglong)auStack_68;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar2 = FUN_180001170();
  _Filename = (char *)FUN_1800010c0();
  puVar4 = &DAT_180006208;
  fopen_s(&local_38,_Filename,"a+");
  if (local_38 != (FILE *)0x0) {
    if (param_1 != 0) {
      FUN_180001010(local_38,&DAT_18000620c,uVar2,param_4);
    }
    pFVar1 = local_38;
    puVar3 = (undefined8 *)FUN_180001000();
    param_4 = 0;
    puVar4 = param_2;
    local_48 = &local_res18;
    __stdio_common_vfprintf(*puVar3,pFVar1);
    fflush(local_38);
    fclose(local_38);
  }
  if (param_1 != 0) {
    FUN_180001060(&DAT_18000620c,uVar2,puVar4,param_4);
  }
  uVar2 = __acrt_iob_func(1);
  puVar3 = (undefined8 *)FUN_180001000();
  local_48 = &local_res18;
  __stdio_common_vfprintf(*puVar3,uVar2,param_2,0);
  __security_check_cookie(local_30 ^ (ulonglong)auStack_68);
  return;
}



void FUN_180001330(undefined8 param_1,byte *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined auStack_128 [32];
  char local_108 [47];
  undefined local_d9;
  byte local_98 [112];
  ulonglong local_28;
  
  if (param_2 != (byte *)0x0) {
    local_28 = DAT_180008000 ^ (ulonglong)auStack_128;
    if (param_3 != 0) {
      FUN_180001230(0,
                    "[%s]:\n0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F |0123456789ABCDEF|\n------------------------------------------------------------------\n"
                    ,param_1,param_4);
      uVar3 = 0;
      memset(local_108,0x20,100);
      uVar5 = 100;
      memset(local_98,0,100);
      uVar4 = 0;
      if (param_3 != 0) {
        do {
          bVar1 = *param_2;
          param_4 = (byte *)(ulonglong)bVar1;
          uVar2 = (int)uVar3 * 3;
          uVar5 = (ulonglong)uVar2;
          local_108[uVar5] = "0123456789ABCDEF"[bVar1 >> 4];
          local_108[uVar2 + 1] = "0123456789ABCDEF"[(int)(char)bVar1 & 0xf];
          local_108[uVar2 + 2] = ' ';
          if ((byte)(bVar1 - 0x20) < 0x5f) {
            local_98[uVar3] = bVar1;
          }
          else {
            local_98[uVar3] = 0x2e;
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if ((uVar2 == 0x10) || (uVar4 + 1 == param_3)) {
            param_4 = local_98;
            local_d9 = 0;
            FUN_180001230(0,"%s |%-16s|\n",local_108,param_4);
            uVar3 = 0;
            memset(local_108,0x20,100);
            uVar5 = 100;
            memset(local_98,0,100);
          }
          uVar4 = uVar4 + 1;
          param_2 = param_2 + 1;
        } while (uVar4 < param_3);
      }
      FUN_180001230(0,"------------------------------------------------------------------\n",uVar5,
                    param_4);
    }
    __security_check_cookie(local_28 ^ (ulonglong)auStack_128);
  }
  return;
}



undefined8 FUN_1800014c0(void)

{
  return 0xfffffc0e;
}



void _guard_check_icall(void)

{
  return;
}



char * GetVersionLib(void)

{
                    // 0x14e0  3  GetVersionLib
  return "1.1.0";
}



FARPROC InitBTConnection(void *param_1)

{
  HMODULE hModule;
  
                    // 0x14f0  4  InitBTConnection
  memmove(s_comport_180008040,param_1,9);
  DAT_180008049 = 2;
  hModule = LoadLibraryA("BTSerial.dll");
  if (hModule == (HMODULE)0x0) {
    return (FARPROC)0xfffffc0e;
  }
  PTR_FUN_18000804d = GetProcAddress(hModule,"SerialPortOpen");
  if (((((FARPROC)PTR_FUN_18000804d != (FARPROC)0x0) &&
       (PTR__guard_check_icall_180008065 = GetProcAddress(hModule,"SerialPortClose"),
       (FARPROC)PTR__guard_check_icall_180008065 != (FARPROC)0x0)) &&
      (PTR_FUN_180008055 = GetProcAddress(hModule,"SerialPortRead"),
      (FARPROC)PTR_FUN_180008055 != (FARPROC)0x0)) &&
     (PTR_FUN_18000805d = GetProcAddress(hModule,"SerialPortWrite"),
     (FARPROC)PTR_FUN_18000805d != (FARPROC)0x0)) {
    return (FARPROC)PTR_FUN_18000805d;
  }
  return (FARPROC)0xfffffc0d;
}



void UnloadDriverConnection(void)

{
  s_comport_180008040[0] = ' ';
  s_comport_180008040[1] = ' ';
  s_comport_180008040[2] = ' ';
  s_comport_180008040[3] = ' ';
  s_comport_180008040[4] = ' ';
  s_comport_180008040[5] = ' ';
  s_comport_180008040[6] = ' ';
  s_comport_180008040[7] = ' ';
                    // 0x15c0  8  UnloadDriverConnection
  DAT_180008048 = 0x20;
  PTR_FUN_18000804d = FUN_1800014c0;
  PTR_FUN_180008055 = FUN_1800014c0;
  PTR_FUN_18000805d = FUN_1800014c0;
  PTR__guard_check_icall_180008065 = _guard_check_icall;
  return;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void GetLastApprovedTransactionStatus
               (void *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined *puVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined auStack_102f8 [32];
  char *pcStack_102d8;
  uint auStack_102c8 [2];
  undefined auStack_102c0 [2];
  ushort uStack_102be;
  byte *pbStack_102bc;
  short asStack_102a8 [2];
  undefined auStack_102a4 [8];
  undefined4 auStack_1029c [148];
  byte bStack_1004c;
  byte abStack_10048 [65568];
  
                    // 0x1610  2  GetLastApprovedTransactionStatus
  uVar4 = DAT_180008000 ^ (ulonglong)auStack_102f8;
  memset(abStack_10048,0,0x10006);
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x104c1);
    iVar2 = FUN_180002d10(asStack_102a8,0x160);
    if (iVar2 == 0) {
      auStack_102c8[0] = 0x10006;
      FUN_180001230(0,&DAT_1800063f4,"Conectando serial (bt)...",param_4);
      iVar2 = (*(code *)PTR_FUN_18000804d)();
      if (iVar2 == 0) {
        pcVar11 = "Enviando msg...";
        puVar8 = &DAT_1800063f4;
        FUN_180001230(0,&DAT_1800063f4,"Enviando msg...",param_4);
        FUN_1800032b0((longlong)asStack_102a8,puVar8,pcVar11,param_4);
        iVar2 = FUN_180003530(asStack_102a8,abStack_10048,auStack_102c8);
        uVar9 = auStack_102c8[0];
        if (iVar2 == 0) {
          FUN_180001330("msg_buffer",abStack_10048,auStack_102c8[0],param_4);
          pbVar10 = abStack_10048;
          do {
            iVar2 = (*(code *)PTR_FUN_18000805d)(pbVar10);
            if (iVar2 < 0) goto LAB_180001842;
            uVar9 = uVar9 - iVar2;
            pbVar10 = pbVar10 + uVar9;
          } while (uVar9 != 0);
          uVar5 = FUN_1800039a0(asStack_102a8);
          iVar2 = (int)uVar5;
          if (iVar2 == 0) {
            memset(abStack_10048,0,0x10006);
            pcStack_102d8 = "Passou MessageDestroy";
            FUN_180001230(1,"TRACE|%s:%d|%s\n","GetLastApprovedTransactionStatus",0xcf);
            auStack_102c8[0] = 0x10006;
            iVar2 = FUN_180003a30(abStack_10048,auStack_102c8);
            if (-1 < iVar2) {
              pbVar10 = (byte *)0xd4;
              pcStack_102d8 = "Passou MessageReceive";
              FUN_180001230(1,"TRACE|%s:%d|%s\n","GetLastApprovedTransactionStatus",0xd4);
              iVar2 = FUN_180003730(asStack_102a8,abStack_10048);
              if (iVar2 == 0) {
                uVar6 = 0;
                if (bStack_1004c != 0) {
                  do {
                    if (*(short *)(auStack_102a4 + uVar6 * 0xc) == 1) {
                      memmove(auStack_102c0,auStack_102a4 + uVar6 * 0xc,0xc);
                      iVar2 = 0;
                      FUN_180001330("msg_field.value",pbStack_102bc,(uint)uStack_102be,pbVar10);
                      iVar3 = memcmp(pbStack_102bc,&DAT_180006480,(ulonglong)uStack_102be);
                      if (iVar3 != 0) {
                        pcVar11 = "Transacao Finalizada!";
                        puVar8 = &DAT_1800063f4;
                        FUN_180001230(0,&DAT_1800063f4,"Transacao Finalizada!",pbVar10);
                        FUN_1800032b0((longlong)asStack_102a8,puVar8,pcVar11,pbVar10);
                        iVar3 = memcmp(pbStack_102bc,&DAT_1800064a0,(ulonglong)uStack_102be);
                        if (iVar3 == 0) {
                          FUN_180003ba0((longlong)asStack_102a8,(longlong)param_1);
                        }
                        else {
                          iVar2 = memcmp(pbStack_102bc,&DAT_1800064a4,(ulonglong)uStack_102be);
                          if (iVar2 == 0) {
                            iVar2 = -0x3fa;
                          }
                          else {
                            iVar3 = memcmp(pbStack_102bc,&DAT_1800064a8,(ulonglong)uStack_102be);
                            iVar2 = -0x3ec;
                            if (iVar3 == 0) {
                              iVar2 = -0x3fb;
                            }
                          }
                        }
                      }
                      goto LAB_180001847;
                    }
                    bVar7 = (char)uVar6 + 1;
                    uVar6 = (ulonglong)bVar7;
                  } while (bVar7 < bStack_1004c);
                }
LAB_180001842:
                iVar2 = -1999;
              }
            }
          }
        }
      }
    }
LAB_180001847:
    (*(code *)PTR__guard_check_icall_180008065)();
    bVar7 = 0;
    if (bStack_1004c != 0) {
      do {
        uVar6 = (ulonglong)bVar7;
        lVar1 = uVar6 * 0xc;
        if ((undefined8 *)(auStack_102a4 + lVar1) == (undefined8 *)0x0) goto LAB_1800018a6;
        free(*(void **)(auStack_102a4 + lVar1 + 4));
        bVar7 = bVar7 + 1;
        *(undefined8 *)(auStack_102a4 + lVar1) = 0;
        auStack_1029c[uVar6 * 3] = 0;
      } while (bVar7 < bStack_1004c);
    }
    memset(asStack_102a8,0,0x25d);
LAB_1800018a6:
    FUN_180002fa0(iVar2,(void *)((longlong)param_1 + 0x10007));
    memmove(param_1,abStack_10048,0x10006);
  }
  __security_check_cookie(uVar4 ^ (ulonglong)auStack_102f8);
  return;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void PPPAGSEGURO_PaymentTransaction
               (undefined param_1,int param_2,uint param_3,void *param_4,void *param_5,void *param_6
               ,void *param_7)

{
  longlong lVar1;
  byte *_Buf1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined uVar8;
  byte bVar9;
  undefined *puVar10;
  uint uVar11;
  char cVar12;
  byte *pbVar13;
  undefined uVar14;
  char *pcVar15;
  uint uVar16;
  undefined auStackY_10338 [32];
  uint uStack_102f8;
  char cStack_102f4;
  undefined uStack_102f3;
  void *pvStack_102f0;
  uint uStack_102e8;
  undefined auStack_102e0 [2];
  ushort uStack_102de;
  byte *pbStack_102dc;
  undefined4 uStack_102c8;
  undefined auStack_102c4 [8];
  undefined4 auStack_102bc [148];
  byte bStack_1006c;
  byte abStack_10068 [65576];
  
                    // 0x1a00  5  PPPAGSEGURO_PaymentTransaction
  uVar4 = DAT_180008000 ^ (ulonglong)auStackY_10338;
  uVar16 = 0x10006;
  pvStack_102f0 = param_7;
  uStack_102f3 = 0;
  uStack_102f8 = 0x10006;
  uStack_102e8 = param_3;
  memset(abStack_10068,0,0x10006);
  uVar8 = 0;
  uVar14 = 0xc1;
  pvVar7 = param_7;
  memset(param_7,0,0x104c1);
  uVar5 = FUN_1800031a0((char)pvVar7,uVar8,uVar14,(char)param_4,param_5,param_6,param_7);
  iVar2 = (int)uVar5;
  pvVar7 = pvStack_102f0;
  if (iVar2 == 0) {
    pbVar13 = (byte *)(ulonglong)uStack_102e8;
    iVar2 = FUN_180002780(&uStack_102c8,param_1,param_2,uStack_102e8,param_4,param_5,param_6);
    pvVar7 = pvStack_102f0;
    if ((iVar2 == 0) &&
       (iVar2 = FUN_180003530((undefined2 *)&uStack_102c8,abStack_10068,&uStack_102f8),
       pvVar7 = pvStack_102f0, uVar16 = uStack_102f8, iVar2 == 0)) {
      FUN_180001230(0,&DAT_1800063f4,"Conectando serial (bt)...",pbVar13);
      iVar2 = (*(code *)PTR_FUN_18000804d)();
      pvVar7 = pvStack_102f0;
      uVar16 = uStack_102f8;
      if (iVar2 == 0) {
        pcVar15 = "Enviando msg...";
        puVar10 = &DAT_1800063f4;
        FUN_180001230(0,&DAT_1800063f4,"Enviando msg...",pbVar13);
        FUN_1800032b0((longlong)&uStack_102c8,puVar10,pcVar15,pbVar13);
        uVar16 = uStack_102f8;
        FUN_180001330("msg_buffer",abStack_10068,uStack_102f8,pbVar13);
        pbVar13 = abStack_10068;
        uVar11 = uVar16;
        do {
          iVar2 = (*(code *)PTR_FUN_18000805d)(pbVar13);
          if (iVar2 < 0) goto LAB_180001c9e;
          uVar11 = uVar11 - iVar2;
          pbVar13 = pbVar13 + uVar11;
        } while (uVar11 != 0);
        uVar5 = FUN_1800039a0(&uStack_102c8);
        iVar2 = (int)uVar5;
        pvVar7 = pvStack_102f0;
        if (iVar2 == 0) {
          uStack_102f8 = 0x10006;
          memset(abStack_10068,0,0x10006);
          iVar2 = FUN_180003a30(abStack_10068,&uStack_102f8);
          FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","PPPAGSEGURO_PaymentTransaction",0x14c);
          uVar16 = uStack_102f8;
          pvVar7 = pvStack_102f0;
          if (-1 < iVar2) {
            uVar5 = 0x14f;
            FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","PPPAGSEGURO_PaymentTransaction",0x14f);
            FUN_180001230(0,&DAT_1800063f4,"Resposta OK.",uVar5);
            iVar2 = FUN_180003730((short *)&uStack_102c8,abStack_10068);
            pvVar7 = pvStack_102f0;
            if (iVar2 == 0) {
              uVar6 = 0;
              if (bStack_1006c != 0) {
                pbVar13 = (byte *)0xa01;
                do {
                  if (*(short *)(auStack_102c4 + uVar6 * 0xc) == 0xa01) {
                    memmove(auStack_102e0,auStack_102c4 + uVar6 * 0xc,0xc);
                    if (*pbStack_102dc != 0) {
                      iVar2 = -0x3eb;
                      pvVar7 = pvStack_102f0;
                      goto LAB_180001ca8;
                    }
                    FUN_1800039a0(&uStack_102c8);
                    pvVar7 = pvStack_102f0;
                    cVar12 = '\0';
                    goto LAB_180001d70;
                  }
                  bVar9 = (char)uVar6 + 1;
                  uVar6 = (ulonglong)bVar9;
                } while (bVar9 < bStack_1006c);
              }
LAB_180001c9e:
              iVar2 = -1999;
              pvVar7 = pvStack_102f0;
            }
          }
        }
      }
    }
LAB_180001ca8:
    (*(code *)PTR__guard_check_icall_180008065)();
    bVar9 = 0;
    if (bStack_1006c != 0) {
      do {
        uVar6 = (ulonglong)bVar9;
        lVar1 = uVar6 * 0xc;
        if ((undefined8 *)(auStack_102c4 + lVar1) == (undefined8 *)0x0) goto LAB_18000201b;
        free(*(void **)(auStack_102c4 + lVar1 + 4));
        bVar9 = bVar9 + 1;
        *(undefined8 *)(auStack_102c4 + lVar1) = 0;
        auStack_102bc[uVar6 * 3] = 0;
      } while (bVar9 < bStack_1006c);
    }
    memset(&uStack_102c8,0,0x25d);
  }
LAB_18000201b:
  FUN_180002fa0(iVar2,(void *)((longlong)pvVar7 + 0x10007));
  memmove(pvVar7,abStack_10068,(ulonglong)uVar16);
  __security_check_cookie(uVar4 ^ (ulonglong)auStackY_10338);
  return;
LAB_180001d70:
  FUN_180001230(0,&DAT_1800063f4,"Aguardando transacao...",pbVar13);
  Sleep(DAT_180008049 * 1000);
  memset(abStack_10068,0,0x10006);
  iVar2 = FUN_180002d10((undefined2 *)&uStack_102c8,0x202);
  if (iVar2 != 0) goto LAB_180001ca8;
  uStack_102f8 = 0x10006;
  iVar2 = FUN_180003530((undefined2 *)&uStack_102c8,abStack_10068,&uStack_102f8);
  uVar16 = uStack_102f8;
  if (iVar2 != 0) goto LAB_180001ca8;
  FUN_180001330("msg_buffer",abStack_10068,uStack_102f8,pbVar13);
  pbVar13 = abStack_10068;
  uVar11 = uVar16;
  do {
    iVar2 = (*(code *)PTR_FUN_18000805d)(pbVar13);
    if (iVar2 < 0) {
      iVar2 = -1999;
      goto LAB_180001ca8;
    }
    uVar11 = uVar11 - iVar2;
    pbVar13 = pbVar13 + uVar11;
  } while (uVar11 != 0);
  uVar5 = FUN_1800039a0(&uStack_102c8);
  iVar2 = (int)uVar5;
  if (iVar2 != 0) goto LAB_180001ca8;
  memset(abStack_10068,0,0x10006);
  FUN_180001230(1,"TRACE|%s:%d|%s\n","PPPAGSEGURO_PaymentTransaction",0x175);
  uStack_102f8 = 0x10006;
  iVar2 = FUN_180003a30(abStack_10068,&uStack_102f8);
  uVar16 = uStack_102f8;
  if (iVar2 < 0) goto LAB_180001ca8;
  pbVar13 = (byte *)0x17a;
  FUN_180001230(1,"TRACE|%s:%d|%s\n","PPPAGSEGURO_PaymentTransaction",0x17a);
  iVar2 = FUN_180003730((short *)&uStack_102c8,abStack_10068);
  uVar16 = uStack_102f8;
  if (iVar2 != 0) goto LAB_180001ca8;
  uVar6 = 0;
  if (bStack_1006c == 0) {
LAB_180001f0e:
    iVar2 = -1999;
    goto LAB_180001ca8;
  }
  while( true ) {
    if (*(short *)(auStack_102c4 + uVar6 * 0xc) == 1) break;
    bVar9 = (char)uVar6 + 1;
    uVar6 = (ulonglong)bVar9;
    if (bStack_1006c <= bVar9) goto LAB_180001f0e;
  }
  memmove(auStack_102e0,auStack_102c4 + uVar6 * 0xc,0xc);
  FUN_180001330("msg_field.value",pbStack_102dc,(uint)uStack_102de,pbVar13);
  iVar3 = memcmp(pbStack_102dc,&DAT_180006480,(ulonglong)uStack_102de);
  iVar2 = 0;
  if (iVar3 != 0) {
    pcVar15 = "Transacao Finalizada!";
    puVar10 = &DAT_1800063f4;
    FUN_180001230(0,&DAT_1800063f4,"Transacao Finalizada!",pbVar13);
    FUN_1800032b0((longlong)&uStack_102c8,puVar10,pcVar15,pbVar13);
    _Buf1 = pbStack_102dc;
    uVar6 = (ulonglong)uStack_102de;
    cStack_102f4 = '\x01';
    iVar2 = memcmp(pbStack_102dc,&DAT_1800064a0,(ulonglong)uStack_102de);
    if (iVar2 == 0) {
      uStack_102f3 = 1;
      FUN_180003ba0((longlong)&uStack_102c8,(longlong)pvVar7);
      cVar12 = cStack_102f4;
      iVar2 = 0;
    }
    else {
      iVar3 = memcmp(_Buf1,&DAT_1800064a8,uVar6);
      iVar2 = -0x3ec;
      cVar12 = cStack_102f4;
      if (iVar3 == 0) {
        iVar2 = -0x3fb;
      }
    }
  }
  FUN_1800039a0(&uStack_102c8);
  uVar16 = uStack_102f8;
  if (cVar12 != '\0') goto LAB_180001ca8;
  goto LAB_180001d70;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void CancelTransaction(void *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  longlong lVar1;
  bool bVar2;
  byte *_Buf1;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined auStack_102f8 [32];
  char *pcStack_102d8;
  uint uStack_102d0;
  uint auStack_102c8 [2];
  undefined auStack_102c0 [2];
  ushort uStack_102be;
  byte *pbStack_102bc;
  short asStack_102a8 [2];
  undefined auStack_102a4 [8];
  undefined4 auStack_1029c [148];
  byte bStack_1004c;
  byte abStack_10048 [65568];
  
                    // 0x2070  1  CancelTransaction
  uVar5 = DAT_180008000 ^ (ulonglong)auStack_102f8;
  auStack_102c8[0] = 0x10006;
  bVar2 = false;
  memset(abStack_10048,0,0x10006);
  if (param_1 == (void *)0x0) goto LAB_180002395;
  memset(param_1,0,0x104c1);
  uVar3 = FUN_180002d10(asStack_102a8,0x400);
  if ((uVar3 == 0) && (uVar3 = FUN_180003530(asStack_102a8,abStack_10048,auStack_102c8), uVar3 == 0)
     ) {
    FUN_180001230(0,&DAT_1800063f4,"Conectando serial (bt)...",param_4);
    uVar3 = (*(code *)PTR_FUN_18000804d)();
    if (uVar3 == 0) {
      pcVar12 = "Enviando msg...";
      puVar9 = &DAT_1800063f4;
      FUN_180001230(0,&DAT_1800063f4,"Enviando msg...",param_4);
      FUN_1800032b0((longlong)asStack_102a8,puVar9,pcVar12,param_4);
      uVar3 = auStack_102c8[0];
      FUN_180001330("msg_buffer",abStack_10048,auStack_102c8[0],param_4);
      pbVar11 = abStack_10048;
      do {
        iVar4 = (*(code *)PTR_FUN_18000805d)(pbVar11);
        if (iVar4 < 0) goto LAB_1800022e2;
        uVar3 = uVar3 - iVar4;
        pbVar11 = pbVar11 + uVar3;
      } while (uVar3 != 0);
      uVar6 = FUN_1800039a0(asStack_102a8);
      uVar3 = (uint)uVar6;
      if (uVar3 == 0) {
        auStack_102c8[0] = 0x10006;
        memset(abStack_10048,0,0x10006);
        uVar3 = FUN_180003a30(abStack_10048,auStack_102c8);
        pcStack_102d8 = "ret_code";
        uStack_102d0 = uVar3;
        FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","CancelTransaction",0x1dc);
        if (-1 < (int)uVar3) {
          uStack_102d0 = auStack_102c8[0];
          uVar6 = 0x1df;
          pcStack_102d8 = "buffer_size";
          FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","CancelTransaction",0x1df);
          FUN_180001230(0,&DAT_1800063f4,"Resposta OK.",uVar6);
          uVar3 = FUN_180003730(asStack_102a8,abStack_10048);
          if (uVar3 == 0) {
            uVar7 = 0;
            if (bStack_1004c != 0) {
              pbVar11 = (byte *)0xa01;
              do {
                if (*(short *)(auStack_102a4 + uVar7 * 0xc) == 0xa01) {
                  memmove(auStack_102c0,auStack_102a4 + uVar7 * 0xc,0xc);
                  if (*pbStack_102bc == 0) {
                    FUN_1800039a0(asStack_102a8);
                    goto LAB_180002410;
                  }
                  uVar3 = 0xfffffc15;
                  goto LAB_1800022e7;
                }
                bVar8 = (char)uVar7 + 1;
                uVar7 = (ulonglong)bVar8;
              } while (bVar8 < bStack_1004c);
            }
LAB_1800022e2:
            uVar3 = 0xfffff831;
          }
        }
      }
    }
  }
  goto LAB_1800022e7;
  while( true ) {
    auStack_102c8[0] = 0x10006;
    uVar3 = FUN_180003530(asStack_102a8,abStack_10048,auStack_102c8);
    uVar10 = auStack_102c8[0];
    if (uVar3 != 0) break;
    FUN_180001330("msg_buffer",abStack_10048,auStack_102c8[0],pbVar11);
    pbVar11 = abStack_10048;
    do {
      iVar4 = (*(code *)PTR_FUN_18000805d)(pbVar11);
      if (iVar4 < 0) goto LAB_1800022e2;
      uVar10 = uVar10 - iVar4;
      pbVar11 = pbVar11 + uVar10;
    } while (uVar10 != 0);
    uVar6 = FUN_1800039a0(asStack_102a8);
    uVar3 = (uint)uVar6;
    if (uVar3 != 0) break;
    memset(abStack_10048,0,0x10006);
    pcStack_102d8 = "Passou MessageDestroy";
    FUN_180001230(1,"TRACE|%s:%d|%s\n","CancelTransaction",0x205);
    auStack_102c8[0] = 0x10006;
    uVar3 = FUN_180003a30(abStack_10048,auStack_102c8);
    if ((int)uVar3 < 0) break;
    pbVar11 = (byte *)0x20a;
    pcStack_102d8 = "Passou MessageReceive";
    FUN_180001230(1,"TRACE|%s:%d|%s\n","CancelTransaction",0x20a);
    uVar3 = FUN_180003730(asStack_102a8,abStack_10048);
    if (uVar3 != 0) break;
    uVar7 = 0;
    if (bStack_1004c == 0) goto LAB_1800022e2;
    while( true ) {
      if (*(short *)(auStack_102a4 + uVar7 * 0xc) == 1) break;
      bVar8 = (char)uVar7 + 1;
      uVar7 = (ulonglong)bVar8;
      if (bStack_1004c <= bVar8) goto LAB_1800022e2;
    }
    memmove(auStack_102c0,auStack_102a4 + uVar7 * 0xc,0xc);
    FUN_180001330("msg_field.value",pbStack_102bc,(uint)uStack_102be,pbVar11);
    iVar4 = memcmp(pbStack_102bc,&DAT_180006480,(ulonglong)uStack_102be);
    uVar3 = 0;
    if (iVar4 != 0) {
      pcVar12 = "Transacao Finalizada!";
      puVar9 = &DAT_1800063f4;
      FUN_180001230(0,&DAT_1800063f4,"Transacao Finalizada!",pbVar11);
      FUN_1800032b0((longlong)asStack_102a8,puVar9,pcVar12,pbVar11);
      _Buf1 = pbStack_102bc;
      uVar7 = (ulonglong)uStack_102be;
      bVar2 = true;
      iVar4 = memcmp(pbStack_102bc,&DAT_1800064a0,(ulonglong)uStack_102be);
      if (iVar4 == 0) {
        FUN_180003ba0((longlong)asStack_102a8,(longlong)param_1);
        uVar3 = 0;
      }
      else {
        iVar4 = memcmp(_Buf1,&DAT_1800064a8,uVar7);
        uVar3 = 0xfffffc14;
        if (iVar4 == 0) {
          uVar3 = 0xfffffc05;
        }
      }
    }
    FUN_1800039a0(asStack_102a8);
    if (bVar2) break;
LAB_180002410:
    FUN_180001230(0,&DAT_1800063f4,"Aguardando transacao...",pbVar11);
    Sleep(DAT_180008049 * 1000);
    memset(abStack_10048,0,0x10006);
    uVar3 = FUN_180002d10(asStack_102a8,0x202);
    if (uVar3 != 0) break;
  }
LAB_1800022e7:
  (*(code *)PTR__guard_check_icall_180008065)();
  bVar8 = 0;
  if (bStack_1004c != 0) {
    do {
      uVar7 = (ulonglong)bVar8;
      lVar1 = uVar7 * 0xc;
      if ((undefined8 *)(auStack_102a4 + lVar1) == (undefined8 *)0x0) goto LAB_180002346;
      free(*(void **)(auStack_102a4 + lVar1 + 4));
      bVar8 = bVar8 + 1;
      *(undefined8 *)(auStack_102a4 + lVar1) = 0;
      auStack_1029c[uVar7 * 3] = 0;
    } while (bVar8 < bStack_1004c);
  }
  memset(asStack_102a8,0,0x25d);
LAB_180002346:
  FUN_180002fa0(uVar3,(void *)((longlong)param_1 + 0x10007));
  memmove(param_1,abStack_10048,0x10006);
LAB_180002395:
  __security_check_cookie(uVar5 ^ (ulonglong)auStack_102f8);
  return;
}



void SimplePaymentTransaction
               (undefined param_1,int param_2,uint param_3,void *param_4,void *param_5,void *param_6
               )

{
                    // 0x26a0  7  SimplePaymentTransaction
  PPPAGSEGURO_PaymentTransaction(param_1,param_2,param_3,param_4,param_4,param_5,param_6);
  return;
}



undefined8 SetVersionName(void *param_1,void *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
                    // 0x26d0  6  SetVersionName
  if ((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) {
    return 0xfffffc16;
  }
  uVar1 = 0xffffffffffffffff;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)param_1 + uVar2) != '\0');
  if (0x19 < uVar2) {
    return 0xfffffc09;
  }
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)((longlong)param_2 + uVar1) != '\0');
  if (10 < uVar1) {
    return 0xfffffc08;
  }
  memmove(&DAT_180008860,param_1,0x1a);
  memmove(&DAT_180008850,param_2,0xb);
  return 0;
}



undefined8 FUN_1800026e0(void *param_1,void *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) {
    return 0xfffffc16;
  }
  uVar1 = 0xffffffffffffffff;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)param_1 + uVar2) != '\0');
  if (0x19 < uVar2) {
    return 0xfffffc09;
  }
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)((longlong)param_2 + uVar1) != '\0');
  if (10 < uVar1) {
    return 0xfffffc08;
  }
  memmove(&DAT_180008860,param_1,0x1a);
  memmove(&DAT_180008850,param_2,0xb);
  return 0;
}



void FUN_180002780(undefined4 *param_1,undefined param_2,int param_3,int param_4,void *param_5,
                  void *param_6,void *param_7)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined auStack_98 [32];
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined local_68;
  undefined local_67;
  char local_66 [6];
  char local_60 [24];
  char local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_180008000 ^ (ulonglong)auStack_98;
  memset(param_1,0,0x25d);
  local_67 = (undefined)param_3;
  cVar2 = (char)(param_4 / 10);
  local_66[0] = (char)param_4 + cVar2 * -10;
  if (9 < param_4) {
    local_66[0] = local_66[0] + cVar2 * '\x10';
  }
  local_68 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x25d);
    *param_1 = 0x2000001;
    uStack_74 = 0;
    local_78 = 0x19;
    uStack_76 = 5;
    *(undefined *)(param_1 + 0x97) = 0;
    local_70 = 0;
    pvVar4 = malloc(5);
    uStack_74 = SUB84(pvVar4,0);
    local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
    if (pvVar4 != (void *)0x0) {
      memmove(pvVar4,"1.1.0",5);
      memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc);
      *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
      uStack_74 = 0;
      local_78 = 0xcd;
      uStack_76 = 1;
      local_70 = 0;
      pvVar4 = malloc(1);
      uStack_74 = SUB84(pvVar4,0);
      local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
      if (pvVar4 != (void *)0x0) {
        memmove(pvVar4,&DAT_18000654c,1);
        memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc);
        *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
        if (DAT_180008860 != '\0') {
          uVar7 = 0xffffffffffffffff;
          uStack_74 = 0;
          local_70 = 0;
          uVar6 = 0xffffffffffffffff;
          do {
            uVar5 = uVar6 + 1;
            pcVar1 = &DAT_180008861 + uVar6;
            uVar6 = uVar5;
          } while (*pcVar1 != '\0');
          uStack_76 = (undefined2)uVar5;
          local_78 = 0xce;
          pvVar4 = malloc(uVar5 & 0xffff);
          uStack_74 = SUB84(pvVar4,0);
          local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
          if (pvVar4 != (void *)0x0) {
            memmove(pvVar4,&DAT_180008860,uVar5 & 0xffff);
            memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc);
            *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
            if (DAT_180008850 != '\0') {
              uStack_74 = 0;
              local_70 = 0;
              uVar6 = 0xffffffffffffffff;
              do {
                uVar5 = uVar6 + 1;
                pcVar1 = &DAT_180008851 + uVar6;
                uVar6 = uVar5;
              } while (*pcVar1 != '\0');
              uStack_76 = (undefined2)uVar5;
              local_78 = 0xcf;
              pvVar4 = malloc(uVar5 & 0xffff);
              uStack_74 = SUB84(pvVar4,0);
              local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
              if (pvVar4 != (void *)0x0) {
                memmove(pvVar4,&DAT_180008850,uVar5 & 0xffff);
                memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc);
                *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
                uStack_74 = 0;
                local_78 = 0x31;
                uStack_76 = 1;
                local_70 = 0;
                pvVar4 = malloc(1);
                uStack_74 = SUB84(pvVar4,0);
                local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
                if (pvVar4 != (void *)0x0) {
                  memmove(pvVar4,&local_68,1);
                  memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc);
                  *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
                  uStack_74 = 0;
                  local_78 = 0x21;
                  uStack_76 = 1;
                  local_70 = 0;
                  pvVar4 = malloc(1);
                  uStack_74 = SUB84(pvVar4,0);
                  local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
                  if (pvVar4 != (void *)0x0) {
                    memmove(pvVar4,&local_67,1);
                    memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc);
                    *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
                    uStack_74 = 0;
                    local_78 = 0x22;
                    uStack_76 = 1;
                    local_70 = 0;
                    pvVar4 = malloc(1);
                    uStack_74 = SUB84(pvVar4,0);
                    local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
                    if (pvVar4 != (void *)0x0) {
                      memmove(pvVar4,local_66,1);
                      memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc);
                      *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
                      FUN_180004030(param_6,local_60);
                      uStack_74 = 0;
                      local_70 = 0;
                      uVar6 = 0xffffffffffffffff;
                      do {
                        uVar5 = uVar6 + 1;
                        lVar3 = uVar6 + 1;
                        uVar6 = uVar5;
                      } while (local_60[lVar3] != '\0');
                      uStack_76 = (undefined2)uVar5;
                      local_78 = 0x24;
                      pvVar4 = malloc(uVar5 & 0xffff);
                      uStack_74 = SUB84(pvVar4,0);
                      local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
                      if (pvVar4 != (void *)0x0) {
                        memmove(pvVar4,local_60,uVar5 & 0xffff);
                        memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,0xc
                               );
                        *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
                        if (param_3 == 3) {
                          FUN_180004030(param_5,local_48);
                          uStack_74 = 0;
                          local_70 = 0;
                          uVar6 = 0xffffffffffffffff;
                          do {
                            uVar5 = uVar6 + 1;
                            lVar3 = uVar6 + 1;
                            uVar6 = uVar5;
                          } while (local_48[lVar3] != '\0');
                          uStack_76 = (undefined2)uVar5;
                          local_78 = 0x23;
                          pvVar4 = malloc(uVar5 & 0xffff);
                          uStack_74 = SUB84(pvVar4,0);
                          local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
                          if (pvVar4 == (void *)0x0) goto LAB_180002ce4;
                          memmove(pvVar4,local_48,uVar5 & 0xffff);
                          memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,
                                  0xc);
                          *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
                        }
                        if (param_7 != (void *)0x0) {
                          uStack_74 = 0;
                          local_70 = 0;
                          do {
                            uVar7 = uVar7 + 1;
                          } while (*(char *)((longlong)param_7 + uVar7) != '\0');
                          uStack_76 = (undefined2)uVar7;
                          local_78 = 0x47;
                          pvVar4 = malloc(uVar7 & 0xffff);
                          uStack_74 = SUB84(pvVar4,0);
                          local_70 = (undefined4)((ulonglong)pvVar4 >> 0x20);
                          if (pvVar4 != (void *)0x0) {
                            memmove(pvVar4,param_7,uVar7 & 0xffff);
                          }
                          memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x97) * 3 + 1,&local_78,
                                  0xc);
                          *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
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
  }
LAB_180002ce4:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_98);
  return;
}



void FUN_180002d10(undefined2 *param_1,short param_2)

{
  char *pcVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined auStack_48 [32];
  undefined local_28 [8];
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  ulonglong uVar4;
  
  local_10 = DAT_180008000 ^ (ulonglong)auStack_48;
  memset(param_1,0,0x25d);
  if (param_1 != (undefined2 *)0x0) {
    memset(param_1,0,0x25d);
    *param_1 = 1;
    param_1[1] = param_2;
    *(undefined *)(param_1 + 0x12e) = 0;
  }
  uStack_1c = 0;
  local_20 = 0x19;
  uStack_1e = 5;
  local_18 = 0;
  pvVar2 = malloc(5);
  uStack_1c = SUB84(pvVar2,0);
  local_18 = (undefined4)((ulonglong)pvVar2 >> 0x20);
  if (pvVar2 != (void *)0x0) {
    memmove(pvVar2,"1.1.0",5);
  }
  if (param_1 != (undefined2 *)0x0) {
    memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x12e) * 6 + 2,&local_20,0xc);
    *(char *)(param_1 + 0x12e) = *(char *)(param_1 + 0x12e) + '\x01';
  }
  if (param_2 == 0x400) {
    local_28[0] = 99;
    uStack_1c = 0;
    local_20 = 0x31;
    uStack_1e = 1;
    local_18 = 0;
    pvVar2 = malloc(1);
    uStack_1c = SUB84(pvVar2,0);
    local_18 = (undefined4)((ulonglong)pvVar2 >> 0x20);
    if ((pvVar2 != (void *)0x0) && (memmove(pvVar2,local_28,1), param_1 != (undefined2 *)0x0)) {
      memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x12e) * 6 + 2,&local_20,0xc);
      *(char *)(param_1 + 0x12e) = *(char *)(param_1 + 0x12e) + '\x01';
      if (DAT_180008860 != '\0') {
        uStack_1c = 0;
        local_18 = 0;
        uVar4 = 0xffffffffffffffff;
        do {
          uVar3 = uVar4 + 1;
          pcVar1 = &DAT_180008861 + uVar4;
          uVar4 = uVar3;
        } while (*pcVar1 != '\0');
        uStack_1e = (undefined2)uVar3;
        local_20 = 0xce;
        pvVar2 = malloc(uVar3 & 0xffff);
        uStack_1c = SUB84(pvVar2,0);
        local_18 = (undefined4)((ulonglong)pvVar2 >> 0x20);
        if (pvVar2 != (void *)0x0) {
          memmove(pvVar2,&DAT_180008860,uVar3 & 0xffff);
          memmove(param_1 + (ulonglong)*(byte *)(param_1 + 0x12e) * 6 + 2,&local_20,0xc);
          *(char *)(param_1 + 0x12e) = *(char *)(param_1 + 0x12e) + '\x01';
        }
      }
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
  return;
}



int FUN_180002f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180001000();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



void FUN_180002fa0(int param_1,void *param_2)

{
  char *_Src;
  
  if (0 < param_1) {
switchD_180002fd4_caseD_fffffc07:
    return;
  }
  if (param_1 == 0) {
    _Src = "Transacao realizada com sucesso";
  }
  else {
    switch(param_1) {
    case -0x3fb:
                    // WARNING: Could not recover jumptable at 0x0001800030ef. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Erro de comunicacao, realize consulta para verificacao",0x36);
      return;
    case -0x3fa:
                    // WARNING: Could not recover jumptable at 0x0001800030d8. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Sem dados para consulta",0x17);
      return;
    default:
      goto switchD_180002fd4_caseD_fffffc07;
    case -0x3f5:
                    // WARNING: Could not recover jumptable at 0x0001800030aa. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Parametro de codigo de venda muito grande",0x29);
      return;
    case -0x3f4:
                    // WARNING: Could not recover jumptable at 0x00018000307c. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Parametro de valor da transacao invalido",0x28);
      return;
    case -0x3f1:
                    // WARNING: Could not recover jumptable at 0x0001800030c1. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Parametro de resultado da transacao nao pode ser nulo",0x35);
      return;
    case -0x3f0:
                    // WARNING: Could not recover jumptable at 0x000180003093. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Parametro de codigo de venda nao pode ser nulo",0x2e);
      return;
    case -0x3ef:
                    // WARNING: Could not recover jumptable at 0x000180003065. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Parametro de valor total da transacao nao pode ser nulo",0x37);
      return;
    case -0x3ee:
                    // WARNING: Could not recover jumptable at 0x00018000304e. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Parametro de valor da transacao nao pode ser nulo",0x31);
      return;
    case -0x3ed:
                    // WARNING: Could not recover jumptable at 0x000180003037. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Buffer de resposta invalido, refaca a transacao",0x2f);
      return;
    case -0x3ec:
                    // WARNING: Could not recover jumptable at 0x000180003020. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Transacao negada",0x10);
      return;
    case -0x3eb:
                    // WARNING: Could not recover jumptable at 0x000180003009. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Terminal nao esta pronto para transacionar",0x2a);
      return;
    case -0x3ea:
      _Src = "Parametro de aplicacao invalido";
      break;
    case -0x3e9:
                    // WARNING: Could not recover jumptable at 0x000180002fe6. Too many branches
                    // WARNING: Treating indirect jump as call
      memmove(param_2,"Erro ao gerar mensagem de transacao",0x23);
      return;
    }
  }
                    // WARNING: Could not recover jumptable at 0x000180003106. Too many branches
                    // WARNING: Treating indirect jump as call
  memmove(param_2,_Src,0x1f);
  return;
}



undefined8 FUN_180003160(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = isdigit((int)cVar1);
    param_1 = param_1 + 1;
    if (iVar2 == 0) break;
    cVar1 = *param_1;
  }
  return 0;
}



undefined8
FUN_1800031a0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,char *param_5,
             longlong param_6,longlong param_7)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined7 in_register_00000089;
  
  if (CONCAT71(in_register_00000089,param_4) == 0) {
    return 0xfffffc12;
  }
  cVar2 = *(char *)CONCAT71(in_register_00000089,param_4);
  pcVar1 = (char *)CONCAT71(in_register_00000089,param_4);
  while (cVar2 != '\0') {
    iVar3 = isdigit((int)*pcVar1);
    pcVar1 = pcVar1 + 1;
    if (iVar3 == 0) {
      return 0xfffffc0c;
    }
    cVar2 = *pcVar1;
  }
  uVar6 = 0xffffffffffffffff;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (((char *)CONCAT71(in_register_00000089,param_4))[lVar4] != '\0');
  if (lVar4 == 0) {
    return 0xfffffc12;
  }
  if (param_5 != (char *)0x0) {
    uVar5 = FUN_180003160(param_5);
    if ((int)uVar5 == 0) {
      return 0xfffffc0c;
    }
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_5[lVar4] != '\0');
    if (lVar4 != 0) {
      if (param_6 == 0) {
        return 0xfffffc10;
      }
      do {
        uVar6 = uVar6 + 1;
      } while (*(char *)(param_6 + uVar6) != '\0');
      if (0xb < uVar6) {
        return 0xfffffc0b;
      }
      uVar5 = 0;
      if (param_7 == 0) {
        uVar5 = 0xfffffc0f;
      }
      return uVar5;
    }
  }
  return 0xfffffc11;
}



void FUN_1800032b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined auStack_468 [32];
  char *local_448;
  undefined local_438 [1024];
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = DAT_180008000 ^ (ulonglong)auStack_468;
  memset(local_438,0,0x400);
  FUN_180001230(0,&DAT_1800063f4,"***************************************************************",
                param_4);
  uVar6 = (ulonglong)*(byte *)(param_1 + 0x25c);
  FUN_180001230(0,"DUMPING MSG [%04X] NTAGS: %d\n",(ulonglong)*(ushort *)(param_1 + 2),uVar6);
  FUN_180001230(0,&DAT_1800063f4,"***************************************************************",
                uVar6);
  uVar10 = 0;
  uVar8 = uVar10;
  if (*(char *)(param_1 + 0x25c) != '\0') {
    do {
      uVar9 = *(ushort *)(param_1 + 4 + (ulonglong)uVar8 * 0xc);
      lVar1 = param_1 + (ulonglong)uVar8 * 0xc;
      puVar7 = &DAT_180008070;
      uVar6 = 0;
      do {
        if (*puVar7 == uVar9) {
          local_448 = *(char **)((longlong)&PTR_s_ERROR_CODE_180008072 + uVar6 * 10);
          goto LAB_1800033b5;
        }
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar3;
        puVar7 = puVar7 + 5;
      } while (uVar3 < 0x12);
      local_448 = "TAG UNKNOW";
LAB_1800033b5:
      uVar6 = (ulonglong)uVar9;
      iVar4 = FUN_180002f40(local_438,0x3ff,"[%04X][%s]: ",uVar6);
      uVar9 = uVar10;
      if (*(short *)(lVar1 + 6) != 0) {
        do {
          uVar6 = (ulonglong)*(byte *)((ulonglong)uVar9 + *(longlong *)(lVar1 + 8));
          iVar5 = FUN_180002f40(local_438 + iVar4,0x3ff,"%02X ",uVar6);
          iVar4 = iVar4 + iVar5;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(lVar1 + 6));
      }
      iVar5 = FUN_180002f40(local_438 + iVar4,0x3ff,&DAT_180006838,uVar6);
      iVar4 = iVar4 + iVar5;
      uVar9 = uVar10;
      if (*(short *)(lVar1 + 6) != 0) {
        do {
          bVar2 = *(byte *)((ulonglong)uVar9 + *(longlong *)(lVar1 + 8));
          if ((byte)(bVar2 - 0x20) < 0x5f) {
            uVar6 = (ulonglong)bVar2;
            iVar5 = FUN_180002f40(local_438 + iVar4,0x3ff,&DAT_18000683c,uVar6);
          }
          else {
            iVar5 = FUN_180002f40(local_438 + iVar4,0x3ff,&DAT_180006840,uVar6);
          }
          iVar4 = iVar4 + iVar5;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(lVar1 + 6));
      }
      FUN_180002f40(local_438 + iVar4,0x3ff,&DAT_180006844,uVar6);
      FUN_180001230(0,&DAT_1800063f4,local_438,uVar6);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 0x25c));
  }
  FUN_180001230(0,&DAT_1800063f4,"***************************************************************",
                uVar6);
  __security_check_cookie(local_38 ^ (ulonglong)auStack_468);
  return;
}



void FUN_180003530(undefined2 *param_1,undefined *param_2,uint *param_3)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  undefined auStack_78 [32];
  uint local_58;
  undefined local_54;
  undefined local_53;
  undefined2 local_50 [4];
  ulonglong local_48;
  
  local_48 = DAT_180008000 ^ (ulonglong)auStack_78;
  iVar5 = 0;
  if (((param_1 != (undefined2 *)0x0) && (param_2 != (undefined *)0x0)) && (param_3 != (uint *)0x0))
  {
    if (*(byte *)(param_1 + 0x12e) != 0) {
      puVar3 = param_1 + 3;
      uVar4 = (ulonglong)*(byte *)(param_1 + 0x12e);
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 6;
        iVar5 = iVar5 + 4 + (uint)uVar2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    local_58 = iVar5 + 6;
    if (local_58 <= *param_3) {
      local_50[0] = *param_1;
      memmove(&local_54,local_50,2);
      *param_2 = local_53;
      param_2[1] = local_54;
      local_50[0] = param_1[1];
      memmove(&local_54,local_50,2);
      param_2[2] = local_53;
      param_2[3] = local_54;
      local_50[0] = (undefined2)iVar5;
      memmove(&local_54,local_50,2);
      bVar7 = 0;
      param_2[4] = local_53;
      param_2[5] = local_54;
      puVar6 = param_2 + 6;
      if (*(char *)(param_1 + 0x12e) != '\0') {
        do {
          puVar1 = param_1 + (ulonglong)bVar7 * 6 + 2;
          if (((puVar1 == (undefined2 *)0x0) || (puVar6 == (undefined *)0x0)) ||
             (uVar2 = puVar1[1], (*param_3 - (int)puVar6) + (int)param_2 < uVar2 + 4))
          goto LAB_180003706;
          FUN_1800040f0(puVar6,*puVar1);
          FUN_1800040f0(puVar6 + 2,puVar1[1]);
          memmove(puVar6 + 4,*(void **)(puVar1 + 2),(ulonglong)(ushort)puVar1[1]);
          bVar7 = bVar7 + 1;
          puVar6 = puVar6 + (uVar2 + 4);
        } while (bVar7 < *(byte *)(param_1 + 0x12e));
      }
      *param_3 = local_58;
    }
  }
LAB_180003706:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_78);
  return;
}



void FUN_180003730(short *param_1,byte *param_2)

{
  short *psVar1;
  void *_Dst;
  ushort uVar2;
  ushort uVar3;
  byte *_Src;
  uint uVar4;
  uint uVar5;
  undefined auStack_78 [32];
  char *local_58;
  uint local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_180008000 ^ (ulonglong)auStack_78;
  if ((param_1 != (short *)0x0) && (param_2 != (byte *)0x0)) {
    FUN_180001230(1,"TRACE|%s:%d|\n","MessageParseBuffer",0x113);
    *param_1 = (ushort)*param_2 * 0x100 + (ushort)param_2[1];
    param_1[1] = (ushort)param_2[2] * 0x100 + (ushort)param_2[3];
    _Src = param_2 + 6;
    uVar3 = (ushort)param_2[4] * 0x100 + (ushort)param_2[5];
    local_50 = (uint)uVar3;
    local_58 = "data_length";
    FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","MessageParseBuffer",0x11a);
    *(undefined *)(param_1 + 0x12e) = 0;
    uVar5 = local_48;
    do {
      if (uVar3 == 0) {
        FUN_180001230(1,"TRACE|%s:%d|\n","MessageParseBuffer",0x132);
        break;
      }
      psVar1 = param_1 + (ulonglong)*(byte *)(param_1 + 0x12e) * 6 + 2;
      if ((psVar1 == (short *)0x0) || (_Src == (byte *)0x0)) {
        uVar4 = 2;
      }
      else {
        memmove(&local_48,_Src,2);
        *psVar1 = (ushort)(byte)local_48 * 0x100 + (ushort)local_48._1_1_;
        memmove(&local_48,_Src + 2,2);
        uVar2 = (short)((local_48 & 0xff) * 0x100) + (ushort)local_48._1_1_;
        psVar1[1] = uVar2;
        _Dst = malloc((ulonglong)uVar2);
        *(void **)(psVar1 + 2) = _Dst;
        memmove(_Dst,_Src + 4,(ulonglong)(ushort)psVar1[1]);
        uVar5 = (ushort)psVar1[1] + 4;
        uVar4 = 0;
      }
      local_58 = "ret_code";
      local_50 = uVar4;
      FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","MessageParseBuffer",0x122);
      if (uVar4 != 0) break;
      *(char *)(param_1 + 0x12e) = *(char *)(param_1 + 0x12e) + '\x01';
      uVar3 = uVar3 - (short)uVar5;
      _Src = _Src + uVar5;
    } while (*(byte *)(param_1 + 0x12e) < 0x32);
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStack_78);
  return;
}



undefined8 FUN_1800039a0(void *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*(char *)((longlong)param_1 + 0x25c) != '\0') {
    do {
      puVar1 = (undefined8 *)((longlong)param_1 + (ulonglong)bVar2 * 0xc + 4);
      if (puVar1 == (undefined8 *)0x0) {
        return 0xfffff831;
      }
      free(*(void **)((longlong)puVar1 + 4));
      bVar2 = bVar2 + 1;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
    } while (bVar2 < *(byte *)((longlong)param_1 + 0x25c));
  }
  memset(param_1,0,0x25d);
  return 0;
}



int FUN_180003a30(byte *param_1,uint *param_2)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  
  iVar1 = (*(code *)PTR_FUN_180008055)(param_1,0x10,10000);
  FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","MessageReceive",0x17e);
  if (-1 < iVar1) {
    uVar2 = (ushort)param_1[4] * 0x100 + param_1[5] + 6;
    if (*param_2 - 0x10 < (uint)uVar2) {
      iVar1 = -0x3f6;
    }
    else {
      FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","MessageReceive",0x189);
      FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","MessageReceive",0x18a);
      iVar1 = (*(code *)PTR_FUN_180008055)(param_1 + 0x10,uVar2 - 0x10,2000);
      pbVar3 = (byte *)0x18c;
      FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","MessageReceive",0x18c);
      FUN_180001330("msg_buffer",param_1,(uint)uVar2,pbVar3);
      if (-1 < iVar1) {
        *param_2 = (uint)uVar2;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



void FUN_180003ba0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  byte *pbVar4;
  size_t sVar5;
  ulonglong uVar6;
  size_t sVar7;
  undefined auStack_58 [32];
  undefined2 local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180008000 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 5) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          sVar5 = (size_t)uStack_36;
          if (0x40 < uStack_36) {
            sVar5 = 0x40;
          }
          memmove((void *)(param_2 + 0x1047f),(void *)CONCAT44(local_30,uStack_34),sVar5);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        if (*(short *)(param_1 + 4 + uVar6 * 0xc) == 0x28) {
          memmove(&local_38,(void *)(param_1 + uVar6 * 0xc + 4),0xc);
          pbVar4 = (byte *)CONCAT44(local_30,uStack_34);
          if (((pbVar4 != (byte *)0x0) && ((char *)(param_2 + 0x10407) != (char *)0x0)) &&
             (uStack_36 != 0)) {
            uVar6 = (ulonglong)uStack_36;
            pcVar2 = (char *)(param_2 + 0x10407);
            do {
              *pcVar2 = "0123456789ABCDEF1.1.0"[*pbVar4 >> 4];
              bVar3 = *pbVar4;
              pbVar4 = pbVar4 + 1;
              pcVar2[1] = "0123456789ABCDEF1.1.0"[bVar3 & 0xf];
              uVar6 = uVar6 - 1;
              pcVar2 = pcVar2 + 2;
            } while (uVar6 != 0);
          }
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    sVar5 = 10;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 0x29) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          uVar6 = (ulonglong)uStack_36;
          if (10 < uStack_36) {
            uVar6 = sVar5;
          }
          memmove((void *)(param_2 + 0x10428),(void *)CONCAT44(local_30,uStack_34),uVar6);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 0x46) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          sVar7 = (size_t)uStack_36;
          if (8 < uStack_36) {
            sVar7 = 8;
          }
          memmove((void *)(param_2 + 0x10433),(void *)CONCAT44(local_30,uStack_34),sVar7);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 0x30) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          sVar7 = (size_t)uStack_36;
          if (0xc < uStack_36) {
            sVar7 = 0xc;
          }
          memmove((void *)(param_2 + 0x1043c),(void *)CONCAT44(local_30,uStack_34),sVar7);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 0x32) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          sVar7 = (size_t)uStack_36;
          if (0x1e < uStack_36) {
            sVar7 = 0x1e;
          }
          memmove((void *)(param_2 + 0x10449),(void *)CONCAT44(local_30,uStack_34),sVar7);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 0x33) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          sVar7 = (size_t)uStack_36;
          if (6 < uStack_36) {
            sVar7 = 6;
          }
          memmove((void *)(param_2 + 0x10468),(void *)CONCAT44(local_30,uStack_34),sVar7);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 0x34) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          sVar7 = (size_t)uStack_36;
          if (4 < uStack_36) {
            sVar7 = 4;
          }
          memmove((void *)(param_2 + 0x1046f),(void *)CONCAT44(local_30,uStack_34),sVar7);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
    uVar6 = 0;
    local_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_30 = 0;
    if (*(byte *)(param_1 + 0x25c) != 0) {
      do {
        lVar1 = uVar6 * 3 + 1;
        if (*(short *)(param_1 + lVar1 * 4) == 0x47) {
          memmove(&local_38,(void *)(param_1 + lVar1 * 4),0xc);
          if (uStack_36 < 0xb) {
            sVar5 = (size_t)uStack_36;
          }
          memmove((void *)(param_2 + 0x10474),(void *)CONCAT44(local_30,uStack_34),sVar5);
          break;
        }
        bVar3 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(param_1 + 0x25c));
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_58);
  return;
}



void FUN_180004030(void *param_1,void *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *_Src;
  size_t _Size;
  int iVar3;
  undefined auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180008000 ^ (ulonglong)auStack_78;
  _Src = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar3 = 0xc;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  memmove(&local_58,param_1,0xc);
  cVar2 = (char)local_58;
  while (cVar2 == '0') {
    _Src = (undefined8 *)((longlong)_Src + 1);
    iVar3 = iVar3 + -1;
    cVar2 = *(char *)_Src;
  }
  _Size = (size_t)(iVar3 + -2);
  memmove(param_2,_Src,_Size);
  puVar1 = (undefined *)(_Size + (longlong)param_2);
  *puVar1 = 0x2e;
  memmove(puVar1 + 1,(char *)(_Size + (longlong)_Src),2);
  puVar1[3] = 0;
  __security_check_cookie(local_20 ^ (ulonglong)auStack_78);
  return;
}



void FUN_1800040f0(undefined *param_1,undefined2 param_2)

{
  undefined auStack_48 [32];
  undefined local_28;
  undefined local_27;
  undefined2 local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_180008000 ^ (ulonglong)auStack_48;
  local_20[0] = param_2;
  memmove(&local_28,local_20,2);
  *param_1 = local_27;
  param_1[1] = local_28;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}



// Library Function - Single Match
//  __security_check_cookie
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180008000) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __report_gsfailure(_StackCookie);
}



// Library Function - Single Match
//  __raise_securityfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x0001800041b1. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __report_gsfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack_38 [8];
  undefined auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800041e2;
  capture_previous_context((PCONTEXT)&DAT_1800081d0);
  _DAT_180008140 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180008268 = puVar3 + 0x40;
  _DAT_180008250 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180008130 = 0xc0000409;
  _DAT_180008134 = 1;
  _DAT_180008148 = 1;
  DAT_180008150 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180008000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180008008;
  *(undefined8 *)(puVar3 + -8) = 0x180004284;
  DAT_1800082c8 = _DAT_180008140;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800061f0);
  return;
}



// Library Function - Single Match
//  capture_previous_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// Library Function - Single Match
//  int __cdecl dllmain_crt_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
// const)
// 
// Library: Visual Studio 2015 Release

int __cdecl dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code **ppcVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  
  if (param_2 == 0) {
    uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0);
    if (DAT_1800086a0 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_1800086a0 = DAT_1800086a0 + -1;
      uVar9 = __scrt_acquire_startup_lock();
      if (DAT_1800086a8 != 2) {
        uVar8 = 0;
        __scrt_fastfail(7);
      }
      __scrt_dllmain_uninitialize_c();
      DAT_1800086a8 = 0;
      __scrt_dllmain_uninitialize_critical();
      uVar12 = (undefined7)((ulonglong)uVar8 >> 8);
      __scrt_release_startup_lock((char)uVar9);
      cVar5 = __scrt_uninitialize_crt(CONCAT71(uVar12,param_3 != (void *)0x0),'\0');
      uVar7 = (uint)(cVar5 != '\0');
    }
    return uVar7;
  }
  if (param_2 == 1) {
    uVar8 = __scrt_initialize_crt(0);
    if ((char)uVar8 != '\0') {
      uVar8 = __scrt_acquire_startup_lock();
      bVar2 = true;
      if (DAT_1800086a8 != 0) {
        __scrt_fastfail(7);
      }
      DAT_1800086a8 = 1;
      bVar4 = __scrt_dllmain_before_initialize_c();
      if (bVar4) {
        _RTC_Initialize();
        atexit((_func_5014 *)&LAB_180004d14);
        FUN_180004b38();
        atexit((_func_5014 *)&LAB_180004b48);
        __scrt_initialize_default_local_stdio_options();
        iVar6 = _initterm_e(&DAT_1800061c0,&DAT_1800061c8);
        if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
          _initterm(&DAT_1800061b0,&DAT_1800061b8);
          DAT_1800086a8 = 2;
          bVar2 = false;
        }
      }
      __scrt_release_startup_lock((char)uVar8);
      if (!bVar2) {
        ppcVar10 = (code **)FUN_180004b78();
        if ((*ppcVar10 != (code *)0x0) &&
           (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)ppcVar10),
           (char)uVar11 != '\0')) {
          pcVar1 = *ppcVar10;
          _guard_check_icall();
          (*pcVar1)(param_1,2,param_3);
        }
        DAT_1800086a0 = DAT_1800086a0 + 1;
        return 1;
      }
    }
    return 0;
  }
  if (param_2 == 2) {
    bVar3 = __scrt_dllmain_crt_thread_attach();
  }
  else {
    if (param_2 != 3) {
      return 1;
    }
    bVar3 = __scrt_dllmain_crt_thread_detach();
  }
  return (int)bVar3;
}



// Library Function - Single Match
//  int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
// const)
// 
// Library: Visual Studio 2015 Release

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_1800086a0 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) ||
          ((iVar1 = dllmain_raw(param_1,param_2,param_3), iVar1 != 0 &&
           (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)))) {
    uVar2 = DllMain(param_1,param_2);
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      DllMain(param_1,0);
      dllmain_crt_dispatch(param_1,0,param_3);
      dllmain_raw(param_1,0,param_3);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)) {
      iVar1 = dllmain_raw(param_1,param_2,param_3);
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x000180004625)
// Library Function - Single Match
//  int __cdecl dllmain_raw(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64 const)
// 
// Library: Visual Studio 2015 Release

int __cdecl dllmain_raw(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  return 1;
}



void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
// 
// Library: Visual Studio 2015 Release

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_1800046ba:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1800086b0 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1800086b0;
        pvVar1 = DAT_1800086b0;
      }
      DAT_1800086b0 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1800046ba;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}



// Library Function - Single Match
//  __scrt_dllmain_after_initialize_c
// 
// Library: Visual Studio 2015 Release

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_180004f30();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = __isa_available_init();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// Library Function - Single Match
//  __scrt_dllmain_before_initialize_c
// 
// Library: Visual Studio 2015 Release

bool __scrt_dllmain_before_initialize_c(void)

{
  bool bVar1;
  
  bVar1 = FUN_180004848(0);
  return bVar1;
}



// Library Function - Single Match
//  __scrt_dllmain_crt_thread_attach
// 
// Library: Visual Studio 2015 Release

undefined __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180004fa4();
  if (cVar1 != '\0') {
    cVar1 = FUN_180004fa4();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180004fa4();
  }
  return 0;
}



// Library Function - Single Match
//  __scrt_dllmain_crt_thread_detach
// 
// Library: Visual Studio 2015 Release

undefined __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180004fa4();
  FUN_180004fa4();
  return 1;
}



// Library Function - Single Match
//  __scrt_dllmain_exception_filter
// 
// Library: Visual Studio 2015 Release

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,
               undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    _guard_check_icall();
    (*(code *)param_4)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



// Library Function - Single Match
//  __scrt_dllmain_uninitialize_c
// 
// Library: Visual Studio 2015 Release

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_1800086b8);
    return;
  }
  uVar2 = FUN_180004fa8();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}



// Library Function - Single Match
//  __scrt_dllmain_uninitialize_critical
// 
// Library: Visual Studio 2015 Release

void __scrt_dllmain_uninitialize_critical(void)

{
  FUN_180004fa4();
  FUN_180004fa4();
  return;
}



// Library Function - Single Match
//  __scrt_initialize_crt
// 
// Library: Visual Studio 2015 Release

ulonglong __scrt_initialize_crt(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_1800086e8 = 1;
  }
  __isa_available_init();
  uVar1 = FUN_180004fa4();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_180004fa4();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = FUN_180004fa4();
  }
  return uVar1 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180004848(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined uVar4;
  int iVar5;
  undefined7 extraout_var;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_1 < 2) {
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar3 = true;
      bVar2 = 0x40 - ((byte)DAT_180008000 & 0x3f) & 0x3f;
      _DAT_1800086c8 = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180008000;
      local_28 = (undefined4)_DAT_1800086c8;
      uStack_24 = (undefined4)(_DAT_1800086c8 >> 0x20);
      _DAT_1800086b8 = local_28;
      uRam00000001800086bc = uStack_24;
      uRam00000001800086c0 = local_28;
      uRam00000001800086c4 = uStack_24;
      _DAT_1800086d0 = local_28;
      uRam00000001800086d4 = uStack_24;
      uRam00000001800086d8 = local_28;
      uRam00000001800086dc = uStack_24;
      _DAT_1800086e0 = _DAT_1800086c8;
    }
    else {
      iVar5 = _initialize_onexit_table(&DAT_1800086b8);
      if (iVar5 == 0) {
        iVar5 = _initialize_onexit_table(&DAT_1800086d0);
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = false;
      }
    }
    return bVar3;
  }
  __scrt_fastfail(5);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}



// WARNING: Removing unreachable block (ram,0x0001800049a2)
// Library Function - Single Match
//  __scrt_is_nonwritable_in_current_image
// 
// Library: Visual Studio 2015 Release

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000320;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18000498b;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000498b:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
// 
// Library: Visual Studio 2015 Release

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1800086b0 = 0;
    UNLOCK();
  }
  return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
// 
// Library: Visual Studio 2015 Release

undefined __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_1800086e8 == '\0') || (param_2 == '\0')) {
    FUN_180004fa4();
    FUN_180004fa4();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _onexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  _onexit_t p_Var3;
  
  bVar2 = (byte)DAT_180008000 & 0x3f;
  if (((DAT_180008000 ^ _DAT_1800086b8) >> bVar2 | (DAT_180008000 ^ _DAT_1800086b8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1800086b8,_Func);
  }
  p_Var3 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var3 = _Func;
  }
  return p_Var3;
}



// Library Function - Single Match
//  atexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Library: Visual Studio 2015 Release

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  if (DAT_180008000 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180008000 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180008000 == 0x2b992ddfa232) {
      DAT_180008000 = 0x2b992ddfa233;
    }
  }
  DAT_180008008 = ~DAT_180008000;
  return;
}



// Library Function - Single Match
//  DllMain
// 
// Library: Visual Studio 2015 Release

undefined8 DllMain(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}



void FUN_180004b38(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004b3f. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_1800086f0);
  return;
}



undefined * FUN_180004b54(void)

{
  return &DAT_180008700;
}



// Library Function - Single Match
//  __scrt_initialize_default_local_stdio_options
// 
// Library: Visual Studio 2015 Release

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001000();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180004b54();
  *puVar1 = *puVar1 | 2;
  return;
}



undefined * FUN_180004b78(void)

{
  return &DAT_180008880;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_fastfail
// 
// Library: Visual Studio 2015 Release

void __scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined local_res18 [8];
  undefined local_res20 [8];
  undefined auStack_5c8 [8];
  undefined auStack_5c0 [232];
  undefined local_4d8 [152];
  undefined *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  _DAT_180008708 = 0;
  *(undefined8 *)(puVar4 + -8) = 0x180004bc1;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180004bcb;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180004be5;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined **)(puVar4 + 0x30) = local_res18;
    *(undefined **)(puVar4 + 0x28) = local_res20;
    *(undefined **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180004c26;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180004c58;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180004c7a;
  BVar2 = IsDebuggerPresent();
  *(undefined **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180004c9b;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180004ca6;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if (LVar3 == 0) {
    _DAT_180008708 = _DAT_180008708 & -(uint)(BVar2 == 1);
  }
  return;
}



// Library Function - Single Match
//  _RTC_Initialize
// 
// Library: Visual Studio 2015 Release

void _RTC_Initialize(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  for (ppcVar2 = (code **)&DAT_180006e28; ppcVar2 < &DAT_180006e28; ppcVar2 = ppcVar2 + 1) {
    pcVar1 = *ppcVar2;
    if (pcVar1 != (code *)0x0) {
      _guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}



void _guard_check_icall(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000180004e85)
// WARNING: Removing unreachable block (ram,0x000180004dea)
// WARNING: Removing unreachable block (ram,0x000180004d8c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __isa_available_init
// 
// Library: Visual Studio 2015 Release

undefined8 __isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  uint local_20;
  
  local_20 = 0;
  DAT_18000801c = 2;
  piVar1 = (int *)cpuid_basic_info(0);
  _DAT_180008018 = 1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  uVar5 = DAT_18000870c;
  if ((piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU | piVar1[1] ^ 0x756e6547U) == 0) {
    _DAT_180008020 = 0xffffffffffffffff;
    uVar6 = *puVar2 & 0xfff3ff0;
    if ((((uVar6 == 0x106c0) || (uVar6 == 0x20660)) || (uVar6 == 0x20670)) ||
       ((uVar5 = DAT_18000870c | 4, uVar6 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar6 - 0x30650) & 0x3f) & 1) != 0)))) {
      uVar5 = DAT_18000870c | 5;
    }
  }
  DAT_18000870c = uVar5;
  if (((piVar1[1] ^ 0x68747541U | piVar1[2] ^ 0x69746e65U | piVar1[3] ^ 0x444d4163U) == 0) &&
     (0x600eff < (*puVar2 & 0xff00f00))) {
    DAT_18000870c = DAT_18000870c | 4;
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    local_20 = *(uint *)(lVar3 + 4);
    if ((local_20 >> 9 & 1) != 0) {
      DAT_18000870c = DAT_18000870c | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180008018 = 2;
    DAT_18000801c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000801c = 0xe;
      _DAT_180008018 = 3;
      if ((local_20 & 0x20) != 0) {
        _DAT_180008018 = 5;
        DAT_18000801c = 0x2e;
      }
    }
  }
  return 0;
}



undefined8 FUN_180004f30(void)

{
  return 1;
}



// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2015 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180008030 != 0;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180004f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f62. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f68. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void _seh_filter_dll(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f6e. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f74. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f7a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f80. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f86. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _execute_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  _execute_onexit_table();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f92. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000180004f98. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180004f9e. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



undefined FUN_180004fa4(void)

{
  return 1;
}



undefined8 FUN_180004fa8(void)

{
  return 0;
}



// Library Function - Single Match
//  __GSHandlerCheckCommon
// 
// Library: Visual Studio 2015 Release

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*(byte *)param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(lVar1 + 3) & 0xfffffff0);
  }
  __security_check_cookie(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  _alloca_probe
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void _alloca_probe(void)

{
  undefined *in_RAX;
  undefined *puVar1;
  undefined *puVar2;
  undefined local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = (undefined *)StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180005092. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0001800050b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_1800050c9(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}



void FUN_1800050e5(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



