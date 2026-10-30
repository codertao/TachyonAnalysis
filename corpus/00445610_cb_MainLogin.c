
/* registry 'cbLogin' (BtnLogin, single-player): next=g_Mode_Login(0x541170 WndLogin);
   DAT_00544430=1 */

void cb_MainLogin(void)

{
  g_NextMode = &g_Mode_Login;
  g_MpModeFlag = 1;
  g_TitleMenu_ExitFlag = 1;
  return;
}

