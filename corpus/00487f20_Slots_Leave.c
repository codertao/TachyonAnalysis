
/* sweep: PLAYER_CASHES_OUT */

void Slots_Leave(void)

{
  g_StarbaseScreen = &g_Mode_StarbaseHub;
  g_TitleMenu_ExitFlag = 1;
  SndTrig_PostEvent(s_PLAYER_CASHES_OUT_00558130,&DAT_005833e0,&DAT_00583498);
  Slots_CashOut();
  Player_AddCredits(DAT_0056e30c + DAT_0056e2ec + DAT_0056e2cc);
  return;
}

