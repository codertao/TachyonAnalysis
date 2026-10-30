
void FUN_0044e700(void)

{
  bool bVar1;
  int iVar2;
  
  g_TitleMenu_ExitFlag = 0;
  Ui_BuildWindows(&g_UiManager);
  FUN_00437b30(FUN_0044e7e0);
  FUN_00437b10(0);
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_00445710();
  FUN_0043efa0();
  Ui_ShowWindow(&g_UiManager,s_WndNWLaunch_00548258,0);
  FUN_0043a8d0(&g_UiManager,s_WndNWLaunch_00548258);
  DAT_00590f00._0_1_ = 0;
  FUN_0043e6a0(&g_UiManager,s_TxtNWStatus_00548224,&DAT_00590f00);
  bVar1 = false;
  iVar2 = FUN_0044e5b0();
  if (iVar2 != 0) {
    iVar2 = FUN_0044e330();
    if (iVar2 != 0) goto LAB_0044e6ca;
  }
  bVar1 = true;
LAB_0044e6ca:
  thunk_FUN_004aa4b0();
  if (!bVar1) {
    FUN_0044e300();
  }
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  return;
}

