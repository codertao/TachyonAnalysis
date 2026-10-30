
void FUN_00456b60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x8c) + 0xd0;
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + param_2;
  iVar1 = FUN_00455e60(param_1 + 0x11c,iVar3,*(undefined4 *)(param_1 + 0xfc));
  if (iVar1 < *(int *)(param_1 + 0x140)) {
    uVar2 = FUN_00455e60(param_1 + 0x11c,iVar3,*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x140) = uVar2;
  }
  return;
}

