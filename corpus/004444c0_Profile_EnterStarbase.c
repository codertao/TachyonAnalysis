
/* sweep */

void Profile_EnterStarbase(void)

{
  Music_Close();
  load_sbf_and_bin(&DAT_005b2b78,&DAT_005b2b88);
  g_NextMode = &PTR_Loading_Enter_00541138;
  g_ReturnMode = &g_Mode_StarbaseHub;
  TitleCam_SetRate(0xfffff000);
  g_TitleMenu_ExitFlag = 1;
  return;
}

