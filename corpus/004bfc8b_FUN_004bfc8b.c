
undefined4 FUN_004bfc8b(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_004c15a4();
  DAT_00561924 = TlsAlloc();
  if (DAT_00561924 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_004c6219(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00561924,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004bfcdf(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

