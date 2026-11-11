
void FUN_00487f20(void)

{
  g_StarbaseScreen = &g_Mode_StarbaseHub;
  g_TitleMenu_ExitFlag = 1;
  FUN_0049da00(s_PLAYER_CASHES_OUT_00558130,&DAT_005833e0,&DAT_00583498);
  FUN_00486c90();
  Player_AddCredits(DAT_0056e30c + DAT_0056e2ec + DAT_0056e2cc);
  return;
}

