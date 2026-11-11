
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044e5b0(void)

{
  DWORD DVar1;
  int iVar2;
  
  FUN_0044e270(s_HOST_MSG_1_005482a4);
  _DAT_00590ef0 = 0;
  _DAT_00590ef4 = 0;
  _DAT_00590ef8 = 0;
  _DAT_00590efc = 0;
  NW_ConnectToHost();
  FUN_0044e270(s_HOST_MSG_2_00548298);
  DVar1 = timeGetTime();
  DAT_00590ee4 = DVar1 + 30000;
  FUN_00442020();
  FUN_0044e790();
  thunk_FUN_004a9cf0();
  iVar2 = thunk_FUN_004aa420();
  if (g_TitleMenu_ExitFlag == 0) {
    while( true ) {
      DVar1 = timeGetTime();
      if (DAT_00590ee4 < DVar1) {
        thunk_FUN_00445720();
        iVar2 = -0x45;
      }
      if (DAT_0055e3f0 != 0) break;
      if (iVar2 == -0x45) goto LAB_0044e69a;
      FUN_00442020();
      FUN_0044e790();
      thunk_FUN_004a9cf0();
      iVar2 = thunk_FUN_004aa420();
      if (g_TitleMenu_ExitFlag != 0) {
        return 0;
      }
    }
    if (iVar2 != -0x45) {
      if (iVar2 == -3) {
        FUN_0044e270(s_HOST_MSG_ERR_SESSION_FULL_00548044);
        return 0;
      }
      if (iVar2 != -1) {
        return 1;
      }
      FUN_0044e270(s_HOST_MSG_ERR_ERR_00548070);
      return 0;
    }
LAB_0044e69a:
    FUN_0044e270(s_HOST_MSG_ERR_TIMEOUT_00540edc);
  }
  return 0;
}

