
void FUN_00443d20(void)

{
  if (DAT_00590e34 == &g_Mode_StarbaseHub) {
    FUN_00469090(0);
  }
  else {
    g_NextMode = DAT_00590e34;
  }
  FUN_00444e30();
  FUN_0048b720();
  FUN_00437dc0(&g_UiManager);
  FUN_00469eb0();
  FUN_004acfa0();
  return;
}

