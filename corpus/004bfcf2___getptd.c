
/* CRT: per-thread data (TLS); +0x14 rand seed, +0x18 strtok ctx, +0x38 asctime buf */

DWORD * __getptd(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_00561924);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)_calloc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00561924,lpTlsValue);
      if (BVar1 != 0) {
        __initptd(lpTlsValue);
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

