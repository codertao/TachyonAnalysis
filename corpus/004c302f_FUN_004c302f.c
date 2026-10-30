
undefined4 FUN_004c302f(int param_1)

{
  int iVar1;
  
  DAT_006c9e9c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_006c9e9c != (HANDLE)0x0) {
    iVar1 = FUN_004c306b();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_006c9e9c);
  }
  return 0;
}

