
void FUN_004addf0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_1[2] != 0) {
      FUN_004ad7d0(param_1[2]);
    }
    if (*param_1 != 0) {
      FUN_0049c530(*param_1);
    }
    piVar2 = (int *)param_1[1];
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[7];
      FUN_004acf80(piVar2);
      if (*piVar2 != 0) {
        FUN_0049c530(*piVar2);
      }
      FUN_0049c530(piVar2);
      piVar2 = piVar1;
    }
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}

