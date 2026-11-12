
/* sweep: guess */

void SceneDbg_QuitToTitle(void)

{
  if (DAT_005a6730 != 0) {
    g_NextMode = &g_Mode_TitleMenu;
    g_MissionEndFlag = 1;
    DAT_005b7e38 = 1;
  }
  return;
}

