
/* sweep: [ACTIONS] */

undefined4 KeyCfg_WriteAction(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = &DAT_00539a48;
  if (DAT_00539a48 != 0) {
    iVar2 = DAT_00539a48;
    do {
      if (iVar2 == param_1[1]) {
        return 2;
      }
      iVar2 = puVar3[1];
      puVar3 = puVar3 + 1;
    } while (iVar2 != 0);
  }
  if (DAT_0053cbc8 != 0) {
    piVar4 = &DAT_0053cbd0;
    do {
      if (((*(byte *)(piVar4 + 5) & 1) != 0) && (piVar4[-2] != *param_1)) {
        if ((*piVar4 == param_1[2]) && (param_1[2] != -1)) {
          return 1;
        }
        if ((piVar4[-1] == param_1[1]) && (param_1[1] != -1)) {
          return 1;
        }
        if ((piVar4[1] == param_1[3]) && (param_1[3] != 0)) {
          return 1;
        }
      }
      piVar1 = piVar4 + 6;
      piVar4 = piVar4 + 8;
    } while (*piVar1 != 0);
  }
  return 0;
}

