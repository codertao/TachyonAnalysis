
/* registry 'cbMulti' (BtnMulti): next=g_Mode_MPLogin(0x547940 WndMPLogin); DAT_00544430=0 */

void cb_MainMultiplayer(void)

{
  g_NextMode = &g_Mode_MPLogin;
  g_MpModeFlag = 0;
  g_TitleMenu_ExitFlag = 1;
  return;
}

