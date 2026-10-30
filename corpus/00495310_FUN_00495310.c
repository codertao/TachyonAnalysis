
void FUN_00495310(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x90);
  uVar1 = param_1;
  if (iVar2 != 0) {
    FUN_00494db0(param_1,iVar2 + 0x34,iVar2 + 0x4c,*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x54),
                 *(undefined4 *)(param_1 + 0xec));
    uVar1 = FUN_0048e440(param_1 + 0x34,iVar2 + 0x34);
    FUN_00494fe0(param_1);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xd4) + -1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar2;
  if ((iVar2 == 0) || (uVar1 < 0x64000)) {
    FUN_004941b0(param_1);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xec) + *(int *)(*(int *)(param_1 + 0xdc) + 0x8c);
    *(int *)(param_1 + 0xec) = iVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x88);
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0xec) = iVar2;
      return;
    }
  }
  return;
}

