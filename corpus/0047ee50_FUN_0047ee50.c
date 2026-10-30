
void FUN_0047ee50(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = -1;
  iVar1 = DAT_005636b8 + -4;
  if (DAT_005636ac != 0) {
    piVar2 = (int *)(DAT_00589738 + 0xfc);
    uVar5 = DAT_005636ac;
    do {
      if (*piVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      piVar2 = piVar2 + 0x40;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar4 = iVar4 + param_1;
  if ((iVar1 < 1) || (iVar4 < 0)) {
    iVar4 = 0;
  }
  else if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  uVar3 = 0;
  uVar5 = DAT_005636ac;
  iVar1 = DAT_005636b0;
  if (DAT_00589734 != 0) {
    piVar2 = (int *)(DAT_00589738 + 0xfc);
    do {
      if ((*piVar2 != 0) && (iVar6 = iVar6 + 1, uVar5 = uVar3, iVar1 = iVar4, iVar6 == iVar4))
      break;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x40;
      uVar5 = DAT_005636ac;
      iVar1 = DAT_005636b0;
    } while (uVar3 < DAT_00589734);
  }
  DAT_005636b0 = iVar1;
  DAT_005636ac = uVar5;
  Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseNews_00552c88,&DAT_00552c14,0);
  FUN_0047ef20();
  return;
}

