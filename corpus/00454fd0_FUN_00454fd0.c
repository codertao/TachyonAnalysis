
int FUN_00454fd0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00454fa0(*(undefined4 *)(DAT_005b3300 + 0x90));
  if (iVar1 != 0) {
    return *(int *)(DAT_005b3300 + 0x90);
  }
  iVar1 = FUN_004510d0();
  if (iVar1 != 0) {
    iVar2 = FUN_00454fa0(iVar1);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  if (DAT_0058f488 != 0) {
    iVar1 = FUN_00454fa0(DAT_005b3318);
    if (iVar1 != 0) {
      return DAT_005b3318;
    }
  }
  return 0;
}

