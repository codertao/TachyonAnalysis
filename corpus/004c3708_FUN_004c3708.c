
undefined4 * FUN_004c3708(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_006c9e94 == DAT_006c9e84) {
    pvVar2 = HeapReAlloc(DAT_006c9e9c,0,DAT_006c9e98,(DAT_006c9e84 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_006c9e84 = DAT_006c9e84 + 0x10;
    DAT_006c9e98 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_006c9e98 + DAT_006c9e94 * 0x14);
  pvVar2 = HeapAlloc(DAT_006c9e9c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_006c9e94 = DAT_006c9e94 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_006c9e9c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

