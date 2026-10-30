
undefined4 FUN_0042f670(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  bVar2 = false;
  puVar5 = &DAT_00539a48;
  if (DAT_00539a48 != 0) {
    iVar3 = DAT_00539a48;
    do {
      if (iVar3 == param_1[1]) {
        return 2;
      }
      iVar3 = puVar5[1];
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
  uVar4 = 1;
  if (DAT_0053cbc8 != 0) {
    piVar6 = &DAT_0053cbcc;
    do {
      if ((*(byte *)(piVar6 + 6) & 1) != 0) {
        if (piVar6[-1] == *param_1) {
          *piVar6 = param_1[1];
          piVar6[1] = param_1[2];
          piVar6[2] = param_1[3];
        }
        else {
          if ((piVar6[1] == param_1[2]) && (param_1[2] != -1)) {
            piVar6[1] = -1;
            bVar2 = true;
          }
          if ((*piVar6 == param_1[1]) && (param_1[1] != -1)) {
            *piVar6 = -1;
            bVar2 = true;
          }
          if ((piVar6[2] != param_1[3]) || (param_1[3] == 0)) goto LAB_0042f711;
          piVar6[2] = 0;
        }
        bVar2 = true;
      }
LAB_0042f711:
      piVar1 = piVar6 + 7;
      piVar6 = piVar6 + 8;
    } while (*piVar1 != 0);
    if (bVar2) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

