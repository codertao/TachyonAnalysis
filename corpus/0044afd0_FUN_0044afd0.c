
void FUN_0044afd0(void)

{
  g_NextMode = &g_Mode_TitleMenu;
  g_TitleMenu_ExitFlag = 1;
  FUN_00437b30(0);
  FUN_00437b10(0);
  FUN_00437b40(0);
  FUN_00437b50(0);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  return;
}

