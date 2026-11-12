
/* sweep: guess */

void MpCfg_OnScrollInv(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_00546624 == 0) {
    DAT_00546624 = 1;
    return;
  }
  if (DAT_00589744 != 0) {
    piVar2 = (int *)(DAT_00589748 + 0x20);
    iVar1 = DAT_00589744;
    do {
      if (*(int *)(*piVar2 + 0x50) == 1) break;
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 9;
    } while (iVar1 != 0);
  }
  DAT_00592fc8 = iVar3;
  MpCfg_ScrollList(0);
  MpCfg_SetMode(1);
  return;
}

