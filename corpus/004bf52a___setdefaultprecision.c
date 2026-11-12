
/* CRT: _controlfp(_PC_53,_MCW_PC) */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}

