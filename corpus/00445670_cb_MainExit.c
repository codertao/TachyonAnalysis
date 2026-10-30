
/* registry 'cbExit': delete playrtmp.sav; next=g_Mode_Splash(0x5482b0); exit title */

void cb_MainExit(void)

{
  File_Delete(s_playrtmp_sav_00544490);
  g_NextMode = &g_Mode_Splash;
  g_TitleMenu_ExitFlag = 1;
  return;
}

