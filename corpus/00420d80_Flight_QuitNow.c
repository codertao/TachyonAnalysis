
/* sweep */

void Flight_QuitNow(void)

{
  g_NextMode = g_ReturnMode;
  g_MissionEndFlag = 1;
  DAT_005b7e38 = 1;
  return;
}

