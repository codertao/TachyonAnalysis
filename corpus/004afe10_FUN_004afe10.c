
void FUN_004afe10(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) + param_1;
  *(int *)(param_1 + 0x4c) = iVar3;
  iVar1 = *(int *)(iVar3 + 0x14) + *(int *)(param_1 + 0x60) + param_1;
  *(int *)(iVar3 + 0x14) = iVar1;
  uVar2 = 0;
  if (*(int *)(iVar3 + 0x10) != 0) {
    do {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + param_1 + *(int *)(param_1 + 0x60);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + param_1 + *(int *)(param_1 + 0x60);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x74;
    } while (uVar2 < *(uint *)(iVar3 + 0x10));
  }
  return;
}

