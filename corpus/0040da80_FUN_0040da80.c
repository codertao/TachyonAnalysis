
void FUN_0040da80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0040d910(param_2,*(undefined4 *)(param_1 + 100));
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x18) = param_1;
    uVar2 = FUN_0040da40(GLBL_spacesav[0x6b]);
    FUN_0040ce90(iVar1,uVar2);
    FUN_00408da0(param_1,*(undefined4 *)(iVar1 + 4));
  }
  return;
}

