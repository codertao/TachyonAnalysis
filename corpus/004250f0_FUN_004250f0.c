
undefined4 FUN_004250f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_00535c10;
  if (param_1 != -1) {
    piVar2 = DAT_005b1de0;
  }
  if (param_2 != 0) {
    iVar3 = *piVar2;
    while (iVar3 != 0) {
      if ((piVar2[1] != 0) && (iVar3 != param_1)) {
        return 0;
      }
      piVar1 = piVar2 + 4;
      piVar2 = piVar2 + 4;
      iVar3 = *piVar1;
    }
  }
  piVar2 = DAT_005b1de0;
  if (param_1 == -1) {
    piVar2 = &DAT_00535c10;
  }
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    while (iVar3 != param_1) {
      iVar3 = piVar2[4];
      piVar2 = piVar2 + 4;
      if (iVar3 == 0) {
        return 1;
      }
    }
    if (piVar2[2] < param_2) {
      piVar2[1] = piVar2[2];
      return 1;
    }
    if (-1 < param_2) {
      piVar2[1] = param_2;
    }
  }
  return 1;
}

