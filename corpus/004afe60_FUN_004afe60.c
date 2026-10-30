
void FUN_004afe60(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x60) + param_1;
  *(int *)(param_1 + 0x48) = iVar1;
  piVar3 = (int *)(*(int *)(iVar1 + 0x18) + iVar1);
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + iVar1;
  *(int **)(iVar1 + 0x18) = piVar3;
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + iVar1;
  uVar2 = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    do {
      *piVar3 = *piVar3 + *(int *)(iVar1 + 0x14);
      piVar3[1] = piVar3[1] + *(int *)(iVar1 + 0x14);
      piVar3[2] = piVar3[2] + *(int *)(iVar1 + 0x14);
      piVar3[3] = piVar3[3] + *(int *)(iVar1 + 0x1c);
      piVar3[0x11] = 0;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x12;
    } while (uVar2 < *(uint *)(iVar1 + 0xc));
  }
  return;
}

