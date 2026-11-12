
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 NwLaunch_Connect(void)

{
  DWORD DVar1;
  int iVar2;
  
  NwLaunch_SetStatus(s_HOST_MSG_1_005482a4);
  _DAT_00590ef0 = 0;
  _DAT_00590ef4 = 0;
  _DAT_00590ef8 = 0;
  _DAT_00590efc = 0;
  NW_ConnectToHost();
  NwLaunch_SetStatus(s_HOST_MSG_2_00548298);
  DVar1 = timeGetTime();
  DAT_00590ee4 = DVar1 + 30000;
  TitleMenu_Tick();
  NwLaunch_Render();
  DPlay_FreeAllSessions();
  iVar2 = DPlay_EnumSessions();
  if (g_TitleMenu_ExitFlag == 0) {
    while( true ) {
      DVar1 = timeGetTime();
      if (DAT_00590ee4 < DVar1) {
        Nop();
        iVar2 = -0x45;
      }
      if (DAT_0055e3f0 != 0) break;
      if (iVar2 == -0x45) goto LAB_0044e69a;
      TitleMenu_Tick();
      NwLaunch_Render();
      DPlay_FreeAllSessions();
      iVar2 = DPlay_EnumSessions();
      if (g_TitleMenu_ExitFlag != 0) {
        return 0;
      }
    }
    if (iVar2 != -0x45) {
      if (iVar2 == -3) {
        NwLaunch_SetStatus(s_HOST_MSG_ERR_SESSION_FULL_00548044);
        return 0;
      }
      if (iVar2 != -1) {
        return 1;
      }
      NwLaunch_SetStatus(s_HOST_MSG_ERR_ERR_00548070);
      return 0;
    }
LAB_0044e69a:
    NwLaunch_SetStatus(s_HOST_MSG_ERR_TIMEOUT_00540edc);
  }
  return 0;
}

