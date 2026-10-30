
void FUN_004b5920(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_1;
  piVar1 = (int *)(*(int *)(param_1 + 0x24) + param_1);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  *(int **)(param_1 + 0x24) = piVar1;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      if (*piVar1 != 0) {
        *piVar1 = *piVar1 + param_1;
        piVar1 = piVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  iVar2 = 0;
  piVar1 = *(int **)(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar2 = iVar2 + 1;
      *piVar1 = *piVar1 + param_1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

