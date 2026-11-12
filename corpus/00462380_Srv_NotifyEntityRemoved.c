
/* sweep: guess */

void Srv_NotifyEntityRemoved(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 0;
  piVar4 = DAT_006af660;
  if (DAT_005897e0 != 0) {
    do {
      if ((((*piVar4 != 0) && (piVar4[0x32] != 0)) &&
          (*(int *)(param_1 + 100) == *(int *)(piVar4[0x32] + 100))) && (piVar4[0x4e] != 0)) {
        piVar3 = (int *)piVar4[0x4d];
        iVar2 = *piVar3;
        while (iVar2 != -1) {
          if (iVar2 == param_1) {
            *piVar3 = 0;
          }
          piVar1 = piVar3 + 1;
          piVar3 = piVar3 + 1;
          iVar2 = *piVar1;
        }
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x82;
    } while (uVar5 < DAT_005897e0);
  }
  return;
}

