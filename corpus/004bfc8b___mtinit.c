
/* CRT */

undefined4 __mtinit(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  __mtinitlocks();
  DAT_00561924 = TlsAlloc();
  if (DAT_00561924 != 0xffffffff) {
    lpTlsValue = (DWORD *)_calloc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00561924,lpTlsValue);
      if (BVar1 != 0) {
        __initptd(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

