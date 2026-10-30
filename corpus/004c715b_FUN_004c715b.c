
int FUN_004c715b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_005652cc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_005652cc = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_005652cc != (FARPROC)0x0) {
        DAT_005652d0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_005652d4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_004c71aa;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_004c71aa:
    if (DAT_005652d0 != (FARPROC)0x0) {
      iVar1 = (*DAT_005652d0)();
      if ((iVar1 != 0) && (DAT_005652d4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_005652d4)(iVar1);
      }
    }
    iVar1 = (*DAT_005652cc)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

