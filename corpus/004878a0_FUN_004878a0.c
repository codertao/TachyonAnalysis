
void FUN_004878a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) || (DAT_0056dff0 != 0)) {
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotSpinMax_005580e0);
    if (iVar1 == 8) {
      return;
    }
    FUN_0043ce50(&DAT_00583420,s_BtnSlotSpin_005580c4,8);
    FUN_0043ce50(&DAT_00583420,s_BtnSlotSpinMax_005580e0,8);
    FUN_0043ce50(&DAT_00583420,s_BtnSlotPlay_005580b8,8);
    FUN_0043ce50(&DAT_00583420,s_BtnSlotPlayUp_005580f0,8);
    FUN_0043ce50(&DAT_00583420,s_BtnSlotPlayDn_005580d0,8);
    return;
  }
  if (DAT_0056e000 == 300) {
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotPlayUp_005580f0);
    if (iVar1 != 8) {
      uVar2 = 8;
LAB_004878ef:
      FUN_0043ce50(&DAT_00583420,s_BtnSlotPlayUp_005580f0,uVar2);
    }
  }
  else {
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotPlayUp_005580f0);
    if (iVar1 == 8) {
      uVar2 = 1;
      goto LAB_004878ef;
    }
  }
  iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotSpinMax_005580e0);
  if (iVar1 == 8) {
    FUN_0043ce50(&DAT_00583420,s_BtnSlotSpinMax_005580e0,1);
  }
  if (DAT_0056e000 == 0) {
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotPlayDn_005580d0);
    if (iVar1 != 8) {
      FUN_0043ce50(&DAT_00583420,s_BtnSlotPlayDn_005580d0,8);
    }
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotSpin_005580c4);
    if (iVar1 == 1) {
      uVar2 = 8;
LAB_004879b5:
      FUN_0043ce50(&DAT_00583420,s_BtnSlotSpin_005580c4,uVar2);
    }
  }
  else {
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotPlayDn_005580d0);
    if (iVar1 == 8) {
      FUN_0043ce50(&DAT_00583420,s_BtnSlotPlayDn_005580d0,1);
    }
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotSpin_005580c4);
    if (iVar1 == 8) {
      uVar2 = 1;
      goto LAB_004879b5;
    }
  }
  if (DAT_0056e000 < 300) {
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotPlay_005580b8);
    if (iVar1 != 8) goto LAB_00487a0f;
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0043ca90(&DAT_00583420,s_BtnSlotPlay_005580b8);
    if (iVar1 != 1) goto LAB_00487a0f;
    uVar2 = 8;
  }
  FUN_0043ce50(&DAT_00583420,s_BtnSlotPlay_005580b8,uVar2);
LAB_00487a0f:
  if (DAT_00603b47 != '\0') {
    FUN_00486cb0(1);
    return;
  }
  if (DAT_00603b45 == '\0') {
    if (((DAT_00603b48 == '\0') && (DAT_00603b2d == '\0')) && (DAT_00603a2d == '\0')) {
      return;
    }
    FUN_00486ed0();
    return;
  }
  FUN_00486cb0(0xffffffff);
  return;
}

