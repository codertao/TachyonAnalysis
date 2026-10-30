
void FUN_0048ddf0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      iVar1 = *piVar2;
      FUN_0048dcd0(param_1,iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x3c) + 4));
      FUN_0048dcd0(param_1,iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x3c) + 8));
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x11;
    } while (uVar3 < DAT_005a5544);
  }
  return;
}

