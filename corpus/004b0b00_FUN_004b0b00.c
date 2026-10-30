
int FUN_004b0b00(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)param_1[5];
  iVar5 = param_1[4];
  iVar3 = param_1[2] * iVar5 + *param_1;
  if (iVar5 != 0) {
    do {
      iVar2 = *piVar4;
      piVar1 = piVar4 + 2;
      piVar4 = piVar4 + 0x1d;
      iVar5 = iVar5 + -1;
      iVar3 = *piVar1 * param_1[3] + iVar2 * param_1[1] + iVar3;
    } while (iVar5 != 0);
  }
  return iVar3;
}

