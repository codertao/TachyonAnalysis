
/* dismiss splash, show WndLogin profile list [inferred] */

void Login_DismissSplash(void)

{
  g_TitleMenu_ExitFlag = 1;
  DAT_00562ccc = 0;
  DAT_00590e20 = 1;
  g_NextMode = 0;
  return;
}

