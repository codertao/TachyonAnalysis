
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void SbWing_ScrollList(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  iVar5 = -1;
  iVar1 = DAT_00563e2c + -6;
  if (DAT_00563e28 != 0) {
    piVar2 = (int *)(DAT_00589724 + 0x10);
    uVar4 = DAT_00563e28;
    do {
      if (*piVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar2 = piVar2 + 0x38;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar3 = iVar3 + param_1;
  if ((iVar1 < 1) || (iVar3 < 0)) {
    iVar3 = 0;
  }
  else if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  uVar4 = 0;
  if (DAT_00589720 != 0) {
    piVar2 = (int *)(DAT_00589724 + 0x10);
    do {
      if ((*piVar2 != 0) && (iVar5 = iVar5 + 1, iVar5 == iVar3)) {
        DAT_00563e28 = uVar4;
        DAT_00563e30 = iVar3;
      }
      piVar2 = piVar2 + 0x38;
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_00589720);
  }
  SbWing_RefreshHireButtons();
  SbWing_RefreshSlots();
  local_10 = *(int *)(DAT_00558d2c + 0x44) + DAT_00558d44;
  local_c = *(int *)(DAT_00558d2c + 0x48) + _DAT_00558d48;
  local_8 = *(int *)(DAT_00558d2c + 0x44) + DAT_00558d4c;
  local_4 = *(int *)(DAT_00558d2c + 0x48) + DAT_00558d50;
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,&local_10,0);
  return;
}

