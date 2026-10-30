
void FUN_0049d1f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x23) == '\0') {
    iVar1 = FUN_0049c3b0(*(undefined4 *)(param_1 + 0x1c),4,0,param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    FUN_004a14f0(*(undefined4 *)(param_1 + 0x18),0);
    FUN_004a1490(iVar1,*(undefined4 *)(param_1 + 0x1c));
    iVar2 = FUN_0049e870(iVar1);
    if (iVar2 != iVar1) {
      FUN_0049c530(iVar1);
      iVar1 = iVar2;
    }
    *(undefined1 *)(param_1 + 0x23) = 1;
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}

