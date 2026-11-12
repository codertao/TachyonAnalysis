
/* CRT */

undefined4 __heap_init(int param_1)

{
  int iVar1;
  
  DAT_006c9e9c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_006c9e9c != (HANDLE)0x0) {
    iVar1 = ___sbh_heap_init();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_006c9e9c);
  }
  return 0;
}

