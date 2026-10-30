
void FUN_0044c710(void)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_005912e0 == 0) {
    iVar1 = FUN_0043ca90(&g_UiManager,s_BtnLanCancel_00547fc0);
    if (iVar1 == 8) goto LAB_0044c7da;
    FUN_0043ce50(&g_UiManager,s_BtnLanCancel_00547fc0,8);
    Ui_SetButtonFlag(&g_UiManager,s_BtnLanCancel_00547fc0,0x80000);
    FUN_0043ce50(&g_UiManager,s_BtnLanSearch_00547fd0,1);
    pcVar2 = s_BtnLanSearch_00547fd0;
  }
  else {
    iVar1 = FUN_0043ca90(&g_UiManager,s_BtnLanSearch_00547fd0);
    if (iVar1 == 8) goto LAB_0044c7da;
    FUN_0043ce50(&g_UiManager,s_BtnLanSearch_00547fd0,8);
    Ui_SetButtonFlag(&g_UiManager,s_BtnLanSearch_00547fd0,0x80000);
    FUN_0043ce50(&g_UiManager,s_BtnLanCancel_00547fc0,1);
    pcVar2 = s_BtnLanCancel_00547fc0;
  }
  FUN_0043c150(&g_UiManager,pcVar2,0x80000);
LAB_0044c7da:
  if (DAT_0055e3f0 < 1) {
    iVar1 = FUN_0043ca90(&g_UiManager,s_BtnLanJoin_00547fb4);
    if (iVar1 != 8) {
      FUN_0043ce50(&g_UiManager,s_BtnLanJoin_00547fb4,8);
    }
  }
  else {
    iVar1 = FUN_0043ca90(&g_UiManager,s_BtnLanJoin_00547fb4);
    if (iVar1 == 8) {
      FUN_0043ce50(&g_UiManager,s_BtnLanJoin_00547fb4,1);
      return;
    }
  }
  return;
}

