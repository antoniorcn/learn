#include "out.h"



undefined * FUN_180001000(void)

{
  return &DAT_1800057a8;
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
  
  local_18 = DAT_180005000 ^ (ulonglong)auStack_68;
  if (DAT_180005620 == '\0') {
    local_48 = _time64((__time64_t *)0x0);
    _localtime64_s(&local_40,&local_48);
    sVar1 = strftime(&DAT_180005620,0x100,"PPPAGSEGURO_%Y-%m-%d.log",&local_40);
    if (sVar1 == 0) {
      memset(&DAT_180005620,0,0x100);
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
  
  local_18 = DAT_180005000 ^ (ulonglong)auStack_68;
  local_48 = _time64((__time64_t *)0x0);
  _localtime64_s(&local_40,&local_48);
  sVar1 = strftime(&DAT_180005720,0x40,"%H:%M:%S|",&local_40);
  if (sVar1 == 0) {
    _DAT_180005720 = sVar1;
    _DAT_180005728 = sVar1;
    _DAT_180005730 = sVar1;
    _DAT_180005738 = sVar1;
    _DAT_180005740 = sVar1;
    _DAT_180005748 = sVar1;
    _DAT_180005750 = sVar1;
    _DAT_180005758 = sVar1;
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
  
  local_30 = DAT_180005000 ^ (ulonglong)auStack_68;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar2 = FUN_180001170();
  _Filename = (char *)FUN_1800010c0();
  puVar4 = &DAT_180003248;
  fopen_s(&local_38,_Filename,"a+");
  if (local_38 != (FILE *)0x0) {
    if (param_1 != 0) {
      FUN_180001010(local_38,&DAT_18000324c,uVar2,param_4);
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
    FUN_180001060(&DAT_18000324c,uVar2,puVar4,param_4);
  }
  uVar2 = __acrt_iob_func(1);
  puVar3 = (undefined8 *)FUN_180001000();
  local_48 = &local_res18;
  __stdio_common_vfprintf(*puVar3,uVar2,param_2,0);
  __security_check_cookie(local_30 ^ (ulonglong)auStack_68);
  return;
}



int FUN_180001330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180001000();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



void FUN_180001390(LPCVOID param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined auStackY_68 [32];
  _OVERLAPPED local_38;
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_180005000 ^ (ulonglong)auStackY_68;
  local_38.Internal = 0;
  local_38.InternalHigh = 0;
  local_38.u.Pointer = (PVOID)0x0;
  local_38.hEvent = (HANDLE)0x0;
  local_38.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (local_38.hEvent != (HANDLE)0x0) {
    BVar1 = WriteFile(DAT_180005760,param_1,param_2,local_18,&local_38);
    if ((((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 == 0x3e5)) &&
        (DVar2 = WaitForSingleObject(local_38.hEvent,0xffffffff), DVar2 == 0)) &&
       (BVar1 = GetOverlappedResult(DAT_180005760,&local_38,local_18,0), BVar1 != 0)) {
      FlushFileBuffers(DAT_180005760);
    }
    CloseHandle(local_38.hEvent);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SerialPortOpen(char *param_1)

{
  BOOL BVar1;
  char *pcVar2;
  undefined auStackY_68 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
                    // 0x1490  2  SerialPortOpen
  local_10 = DAT_180005000 ^ (ulonglong)auStackY_68;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_180001230(1,"DVARS|%s:%d|[%s]: %s\n","SerialPortOpen",0x5d);
  pcVar2 = strstr(param_1,"COM");
  if (pcVar2 == param_1) {
    FUN_180001330(&local_28,0x14,"\\\\.\\%s",param_1);
  }
  else {
    strncpy_s((char *)&local_28,0x14,param_1,0x13);
  }
  DAT_180005760 =
       CreateFileA((LPCSTR)&local_28,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,
                   (HANDLE)0x0);
  FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","SerialPortOpen",0x6d);
  if (DAT_180005760 == (HANDLE)0xffffffffffffffff) {
    GetLastError();
    FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","SerialPortOpen",0x70);
    __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
    return;
  }
  FUN_180001230(1,"TRACE|%s:%d|%s\n","SerialPortOpen",0x74);
  _DAT_180005768 = 0x1c;
  BVar1 = GetCommState(DAT_180005760,(LPDCB)&DAT_180005768);
  if (BVar1 == 0) {
    GetLastError();
    FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","SerialPortOpen",0x78);
  }
  else {
    _DAT_18000576c = 0x1c200;
    _DAT_18000577a = 8;
    DAT_18000577c = 0;
    BVar1 = SetCommState(DAT_180005760,(LPDCB)&DAT_180005768);
    if (BVar1 != 0) {
      FUN_180001230(1,"TRACE|%s:%d|%s\n","SerialPortOpen",0x86);
      _DAT_180005788 = 0x32;
      _DAT_180005790 = 0x32;
      _DAT_18000578c = 10;
      _DAT_180005798 = 0x32;
      _DAT_180005794 = 10;
      BVar1 = SetCommTimeouts(DAT_180005760,(LPCOMMTIMEOUTS)&DAT_180005788);
      if (BVar1 != 0) {
        FUN_180001230(1,"TRACE|%s:%d|success opening \'%s\'\n","SerialPortOpen",0x94);
        __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
        return;
      }
    }
  }
  CloseHandle(DAT_180005760);
  DAT_180005760 = (HANDLE)0x0;
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}



void SerialPortRead(LPVOID param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  undefined auStackY_98 [32];
  _OVERLAPPED local_68;
  DWORD local_48 [2];
  undefined8 local_40;
  DWORD local_38;
  DWORD local_30 [2];
  ulonglong local_28;
  
                    // 0x1790  3  SerialPortRead
  local_28 = DAT_180005000 ^ (ulonglong)auStackY_98;
  uVar2 = 0;
  iVar1 = (int)((param_3 & 0xffffffff) / 0xfa);
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (DAT_180005760 == (HANDLE)0xffffffffffffffff) {
      uVar2 = 0;
    }
    else {
      local_48[0] = 0;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      local_38 = 0;
      ClearCommError(DAT_180005760,local_48,(LPCOMSTAT)&local_40);
      uVar2 = local_40._4_4_;
    }
    if (param_2 <= uVar2) goto LAB_180001826;
    Sleep(0xfa);
  }
  if (param_2 <= uVar2) {
LAB_180001826:
    local_68.Internal = 0;
    local_68.InternalHigh = 0;
    local_68.u.Pointer = (PVOID)0x0;
    local_68.hEvent = (HANDLE)0x0;
    local_68.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    ReadFile(DAT_180005760,param_1,param_2,local_30,&local_68);
    CloseHandle(local_68.hEvent);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_98);
  return;
}



uint SerialPortWrite(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
                    // 0x18b0  4  SerialPortWrite
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      DVar3 = 0x800;
      if (param_2 - uVar2 < 0x800) {
        DVar3 = param_2 - uVar2;
      }
      FUN_180001230(1,"TRACE|%s:%d|escrevendo serial. i=%d , wlen=%d\n","SerialPortWrite",0xc5);
      iVar1 = FUN_180001390((LPCVOID)((ulonglong)uVar2 + param_1),DVar3);
      if (iVar1 != 1) {
        return 0xfffff82b;
      }
      Sleep(0xfa);
      uVar2 = uVar2 + DVar3;
    } while (uVar2 < param_2);
  }
  FUN_180001230(1,"DVARI|%s:%d|[%s]: %d\n","SerialPortWrite",0xcb);
  return uVar2;
}



void SerialPortClose(void)

{
                    // 0x1980  1  SerialPortClose
  if (DAT_180005760 != (HANDLE)0x0) {
    CloseHandle(DAT_180005760);
    DAT_180005760 = (HANDLE)0x0;
  }
  return;
}



// Library Function - Single Match
//  __security_check_cookie
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180005000) && ((short)(_StackCookie >> 0x30) == 0)) {
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
                    // WARNING: Could not recover jumptable at 0x000180001a11. Too many branches
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
  *(undefined8 *)(puVar3 + -8) = 0x180001a42;
  capture_previous_context((PCONTEXT)&DAT_1800050e0);
  _DAT_180005050 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180005178 = puVar3 + 0x40;
  _DAT_180005160 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180005040 = 0xc0000409;
  _DAT_180005044 = 1;
  _DAT_180005058 = 1;
  DAT_180005060 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180005000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180005008;
  *(undefined8 *)(puVar3 + -8) = 0x180001ae4;
  DAT_1800051d8 = _DAT_180005050;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180003230);
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
    if (DAT_1800055b0 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_1800055b0 = DAT_1800055b0 + -1;
      uVar9 = __scrt_acquire_startup_lock();
      if (DAT_1800055b8 != 2) {
        uVar8 = 0;
        __scrt_fastfail(7);
      }
      __scrt_dllmain_uninitialize_c();
      DAT_1800055b8 = 0;
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
      if (DAT_1800055b8 != 0) {
        __scrt_fastfail(7);
      }
      DAT_1800055b8 = 1;
      bVar4 = __scrt_dllmain_before_initialize_c();
      if (bVar4) {
        _RTC_Initialize();
        atexit((_func_5014 *)&LAB_180002574);
        FUN_180002398();
        atexit((_func_5014 *)&LAB_1800023a8);
        __scrt_initialize_default_local_stdio_options();
        iVar6 = _initterm_e(&DAT_1800031f8,&DAT_180003200);
        if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
          _initterm(&DAT_1800031e8,&DAT_1800031f0);
          DAT_1800055b8 = 2;
          bVar2 = false;
        }
      }
      __scrt_release_startup_lock((char)uVar8);
      if (!bVar2) {
        ppcVar10 = (code **)FUN_1800023d8();
        if ((*ppcVar10 != (code *)0x0) &&
           (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)ppcVar10),
           (char)uVar11 != '\0')) {
          pcVar1 = *ppcVar10;
          _guard_check_icall();
          (*pcVar1)(param_1,2,param_3);
        }
        DAT_1800055b0 = DAT_1800055b0 + 1;
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
  
  if ((param_2 == 0) && (DAT_1800055b0 < 1)) {
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



// WARNING: Removing unreachable block (ram,0x000180001e85)
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
LAB_180001f1a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1800055c0 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1800055c0;
        pvVar1 = DAT_1800055c0;
      }
      DAT_1800055c0 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180001f1a;
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
    uVar3 = FUN_180002790();
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
  
  bVar1 = FUN_1800020a8(0);
  return bVar1;
}



// Library Function - Single Match
//  __scrt_dllmain_crt_thread_attach
// 
// Library: Visual Studio 2015 Release

undefined __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180002804();
  if (cVar1 != '\0') {
    cVar1 = FUN_180002804();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180002804();
  }
  return 0;
}



// Library Function - Single Match
//  __scrt_dllmain_crt_thread_detach
// 
// Library: Visual Studio 2015 Release

undefined __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180002804();
  FUN_180002804();
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
    _execute_onexit_table(&DAT_1800055c8);
    return;
  }
  uVar2 = FUN_180002808();
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
  FUN_180002804();
  FUN_180002804();
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
    DAT_1800055f8 = 1;
  }
  __isa_available_init();
  uVar1 = FUN_180002804();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_180002804();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = FUN_180002804();
  }
  return uVar1 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1800020a8(uint param_1)

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
      bVar2 = 0x40 - ((byte)DAT_180005000 & 0x3f) & 0x3f;
      _DAT_1800055d8 = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180005000;
      local_28 = (undefined4)_DAT_1800055d8;
      uStack_24 = (undefined4)(_DAT_1800055d8 >> 0x20);
      _DAT_1800055c8 = local_28;
      uRam00000001800055cc = uStack_24;
      uRam00000001800055d0 = local_28;
      uRam00000001800055d4 = uStack_24;
      _DAT_1800055e0 = local_28;
      uRam00000001800055e4 = uStack_24;
      uRam00000001800055e8 = local_28;
      uRam00000001800055ec = uStack_24;
      _DAT_1800055f0 = _DAT_1800055d8;
    }
    else {
      iVar5 = _initialize_onexit_table(&DAT_1800055c8);
      if (iVar5 == 0) {
        iVar5 = _initialize_onexit_table(&DAT_1800055e0);
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



// WARNING: Removing unreachable block (ram,0x000180002202)
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
       param_1 - 0x180000000U < uVar1)) goto LAB_1800021eb;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1800021eb:
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
    DAT_1800055c0 = 0;
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
  if ((DAT_1800055f8 == '\0') || (param_2 == '\0')) {
    FUN_180002804();
    FUN_180002804();
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
  
  bVar2 = (byte)DAT_180005000 & 0x3f;
  if (((DAT_180005000 ^ _DAT_1800055c8) >> bVar2 | (DAT_180005000 ^ _DAT_1800055c8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1800055c8,_Func);
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
  if (DAT_180005000 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180005000 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180005000 == 0x2b992ddfa232) {
      DAT_180005000 = 0x2b992ddfa233;
    }
  }
  DAT_180005008 = ~DAT_180005000;
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



void FUN_180002398(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000239f. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_180005600);
  return;
}



undefined * FUN_1800023b4(void)

{
  return &DAT_180005610;
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
  puVar1 = (ulonglong *)FUN_1800023b4();
  *puVar1 = *puVar1 | 2;
  return;
}



undefined * FUN_1800023d8(void)

{
  return &DAT_1800057a0;
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
  _DAT_180005618 = 0;
  *(undefined8 *)(puVar4 + -8) = 0x180002421;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18000242b;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180002445;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined **)(puVar4 + 0x30) = local_res18;
    *(undefined **)(puVar4 + 0x28) = local_res20;
    *(undefined **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180002486;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800024b8;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800024da;
  BVar2 = IsDebuggerPresent();
  *(undefined **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800024fb;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180002506;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if (LVar3 == 0) {
    _DAT_180005618 = _DAT_180005618 & -(uint)(BVar2 == 1);
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
  
  for (ppcVar2 = (code **)&DAT_1800037a0; ppcVar2 < &DAT_1800037a0; ppcVar2 = ppcVar2 + 1) {
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



// WARNING: Removing unreachable block (ram,0x0001800026e5)
// WARNING: Removing unreachable block (ram,0x00018000264a)
// WARNING: Removing unreachable block (ram,0x0001800025ec)
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
  DAT_18000501c = 2;
  piVar1 = (int *)cpuid_basic_info(0);
  _DAT_180005018 = 1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  uVar5 = DAT_18000561c;
  if ((piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU | piVar1[1] ^ 0x756e6547U) == 0) {
    _DAT_180005020 = 0xffffffffffffffff;
    uVar6 = *puVar2 & 0xfff3ff0;
    if ((((uVar6 == 0x106c0) || (uVar6 == 0x20660)) || (uVar6 == 0x20670)) ||
       ((uVar5 = DAT_18000561c | 4, uVar6 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar6 - 0x30650) & 0x3f) & 1) != 0)))) {
      uVar5 = DAT_18000561c | 5;
    }
  }
  DAT_18000561c = uVar5;
  if (((piVar1[1] ^ 0x68747541U | piVar1[2] ^ 0x69746e65U | piVar1[3] ^ 0x444d4163U) == 0) &&
     (0x600eff < (*puVar2 & 0xff00f00))) {
    DAT_18000561c = DAT_18000561c | 4;
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    local_20 = *(uint *)(lVar3 + 4);
    if ((local_20 >> 9 & 1) != 0) {
      DAT_18000561c = DAT_18000561c | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180005018 = 2;
    DAT_18000501c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000501c = 0xe;
      _DAT_180005018 = 3;
      if ((local_20 & 0x20) != 0) {
        _DAT_180005018 = 5;
        DAT_18000501c = 0x2e;
      }
    }
  }
  return 0;
}



undefined8 FUN_180002790(void)

{
  return 1;
}



// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2015 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180005030 != 0;
}



void _guard_check_icall(void)

{
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800027bc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027c2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027c8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void _seh_filter_dll(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027ce. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027d4. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027da. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027e0. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027e6. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _execute_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027ec. Too many branches
                    // WARNING: Treating indirect jump as call
  _execute_onexit_table();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027f2. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800027f8. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800027fe. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



undefined FUN_180002804(void)

{
  return 1;
}



undefined8 FUN_180002808(void)

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

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0001800028a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_1800028b9(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}



void FUN_1800028d5(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



