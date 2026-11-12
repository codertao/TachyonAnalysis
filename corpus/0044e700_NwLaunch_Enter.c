
/* sweep: WndNWLaunch */

void NwLaunch_Enter(void)

{
  bool bVar1;
  int iVar2;
  
  g_TitleMenu_ExitFlag = 0;
  Ui_BuildWindows(&g_UiManager);
  MenuHotkey_SetEscape(NwLaunch_GoBack);
  MenuHotkey_SetAccept(0);
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  TitleHover_Clear();
  Ui_ShowCursor();
  Ui_ShowWindow(&g_UiManager,s_WndNWLaunch_00548258,0);
  Ui_OpenWindow(&g_UiManager,s_WndNWLaunch_00548258);
  DAT_00590f00._0_1_ = 0;
  Ui_SetLabelText(&g_UiManager,s_TxtNWStatus_00548224,&DAT_00590f00);
  bVar1 = false;
  iVar2 = NwLaunch_Connect();
  if (iVar2 != 0) {
    iVar2 = NwLaunch_JoinSession();
    if (iVar2 != 0) goto LAB_0044e6ca;
  }
  bVar1 = true;
LAB_0044e6ca:
  DPlay_StopEnumSessions();
  if (!bVar1) {
    NwLaunch_Fail();
  }
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  return;
}

