
void FUN_00435550(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar3 = *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x1a0);
    uVar2 = 0;
    *(int *)(param_1 + 0x90) = iVar3;
    if (*(int *)(param_1 + 0x8c) != 0) {
      piVar1 = (int *)(iVar3 + 4);
      do {
        *piVar1 = *piVar1 + *(int *)(param_1 + 0x1a0);
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 5;
      } while (uVar2 < *(uint *)(param_1 + 0x8c));
    }
  }
  return;
}

