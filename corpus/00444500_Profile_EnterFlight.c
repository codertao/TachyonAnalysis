
/* sweep */

void Profile_EnterFlight(void)

{
  Profile_EnterStarbase();
  DAT_00590e34 = &g_Mode_InFlight;
  g_TitleMenu_ExitFlag = 1;
  return;
}

