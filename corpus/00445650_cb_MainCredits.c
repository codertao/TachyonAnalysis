
/* registry 'cbCredits' (BtnCredits): next=g_Mode_Credits(0x53ff08 WndCredits) */

void cb_MainCredits(void)

{
  g_NextMode = &g_Mode_Credits;
  g_TitleMenu_ExitFlag = 1;
  return;
}

