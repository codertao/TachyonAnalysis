
void FUN_0040cd80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c940(*DAT_005b97bc,*(undefined4 *)(param_1 + 0xc));
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar1 < *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  FUN_0040cd50(param_1,iVar1);
  if (iVar1 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00408da0(*(int *)(param_1 + 0x18),iVar1);
    }
    if (*(int *)(param_1 + 4) < iVar1) {
      FUN_0040cc50();
      *(int *)(param_1 + 4) = iVar1;
      return;
    }
    FUN_0040ccd0(param_1,iVar1);
    *(int *)(param_1 + 4) = iVar1;
  }
  return;
}

