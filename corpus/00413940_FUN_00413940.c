
void FUN_00413940(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0xf7) == '\0') {
    piVar1 = *(int **)(param_1 + 0xf0);
    iVar2 = *piVar1 - *(int *)(param_1 + 0x34) >> 3;
    if (iVar2 < 0x2001) {
      if (iVar2 < -0x2000) {
        iVar2 = -0x2000;
      }
    }
    else {
      iVar2 = 0x2000;
    }
    *(int *)(param_1 + 0xa0) = iVar2;
    iVar2 = piVar1[1] - *(int *)(param_1 + 0x38) >> 3;
    if (iVar2 < 0x2001) {
      if (iVar2 < -0x2000) {
        iVar2 = -0x2000;
      }
    }
    else {
      iVar2 = 0x2000;
    }
    *(int *)(param_1 + 0xa4) = iVar2;
    iVar2 = piVar1[2] - *(int *)(param_1 + 0x3c) >> 3;
    if (iVar2 < 0x2001) {
      if (iVar2 < -0x2000) {
        iVar2 = -0x2000;
      }
    }
    else {
      iVar2 = 0x2000;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa8) = iVar2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar2;
    uVar3 = FUN_0048e440((int *)(param_1 + 0x34),piVar1);
    if (uVar3 < 0x1f4000) {
      FUN_004018a0(param_1,param_1 + 0xdc);
    }
  }
  return;
}

