
void FUN_00462300(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar2 = DAT_006af660;
  if (DAT_005897e0 != 0) {
    do {
      if ((((*piVar2 != 0) && (piVar2[0x32] != 0)) &&
          (*(int *)(param_1 + 100) == *(int *)(piVar2[0x32] + 100))) && (piVar2[0x49] != 0)) {
        piVar1 = (int *)piVar2[0x48];
        iVar3 = 0;
        if (0 < piVar2[0x49]) {
          do {
            if (*piVar1 == param_1) {
              *piVar1 = 0;
            }
            iVar3 = iVar3 + 1;
            piVar1 = piVar1 + 1;
          } while (iVar3 < piVar2[0x49]);
        }
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 0x82;
    } while (uVar4 < DAT_005897e0);
  }
  return;
}

