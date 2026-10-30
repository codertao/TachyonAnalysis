
DWORD * FUN_004bfcf2(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_00561924);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_004c6219(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00561924,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004bfcdf(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_004bfd4d;
      }
    }
    __amsg_exit(0x10);
  }
LAB_004bfd4d:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

