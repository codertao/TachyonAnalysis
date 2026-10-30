
void FUN_00471060(void)

{
  FUN_00469eb0();
  FUN_00437dc0(&DAT_00583420);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&g_CurrentSavPath,g_PlayerVarStore);
  }
  VarStore_Close();
  FUN_0049c6e0(0xa101);
  g_PlayerVarStore = 0;
  FUN_00468f50(0);
  thunk_FUN_004b5550();
  FUN_0049e8b0();
  FUN_00437bd0(0);
  return;
}

