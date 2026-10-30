
void FUN_0044ab10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_00469ac0(s_SliderBar_00541040);
  iVar2 = FUN_00469ac0(s_SliderHover_00541034);
  iVar3 = FUN_00469ac0(s_SliderDown_00541028);
  if (iVar1 != 0) {
    FUN_004abcc0(0x1b,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                 *(undefined4 *)(iVar1 + 0x48));
  }
  if (iVar2 != 0) {
    FUN_004abcc0(0x1c,*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44),
                 *(undefined4 *)(iVar2 + 0x48));
  }
  if (iVar3 != 0) {
    FUN_004abcc0(0x1d,*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x44),
                 *(undefined4 *)(iVar3 + 0x48));
  }
  uVar4 = Ui_FindWindowDef(&g_UiManager,s_WndMPShipDM_0054767c);
  uVar5 = Ui_FindButton(&g_UiManager,s_BtnCFGTxtUp_00547930);
  uVar6 = Ui_FindButton(&g_UiManager,s_BtnCFGTxtDn_00547924);
  FUN_00465880(&DAT_005474f8,uVar4,uVar5,uVar6);
  uVar5 = Ui_FindButton(&g_UiManager,s_BtnCFGInvUp_00547918);
  uVar6 = Ui_FindButton(&g_UiManager,s_BtnCFGInvDn_0054790c);
  FUN_00465880(&DAT_00547538,uVar4,uVar5,uVar6);
  return;
}

