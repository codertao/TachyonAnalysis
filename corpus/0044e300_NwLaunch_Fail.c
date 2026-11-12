
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void NwLaunch_Fail(void)

{
  NwLaunch_SetStatus(s_HOST_MSG_4_00548240);
  _DAT_00562c94 = &DAT_00590ef0;
  g_StarbaseScreen = &PTR_Loading_Enter_00541138;
  g_TitleMenu_ExitFlag = 1;
  return;
}

