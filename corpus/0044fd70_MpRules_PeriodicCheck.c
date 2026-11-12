
/* sweep: guess */

void MpRules_PeriodicCheck(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((DAT_005897e4 & 0x7ff) == 0) {
    (&DAT_00590d84)[DAT_00590d7c] = DAT_006af664;
    DAT_00590d7c = DAT_00590d7c + 1;
    if (0x1f < DAT_00590d7c) {
      DAT_00590d7c = 0;
    }
    piVar2 = &DAT_00590d84;
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 + iVar1;
    } while ((int)piVar2 < 0x590e04);
    DAT_00590d80 = uVar3 >> 5;
  }
  return;
}

