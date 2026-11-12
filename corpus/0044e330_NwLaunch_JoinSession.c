
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 NwLaunch_JoinSession(void)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  NwLaunch_SetStatus(s_HOST_MSG_FINDING_SESSION_0054827c);
  iVar1 = NetDrv_FindSessionByGuid(&DAT_00590ef0);
  if (iVar1 == 0) {
    NwLaunch_SetStatus(s_HOST_MSG_ERR_NOTFOUND_00548264);
    return 0;
  }
  if ((*(byte *)(iVar1 + 0x30) & 1) != 0) {
    Ui_CloseWindow(&g_UiManager,s_WndNWLaunch_00548258);
    PasswordDlg_Show(s_WndPassword_00548084,s_WndNWLaunch_00548258,&g_UiManager,0x5b2c38,0x1f,
                     s_EntryPassWord_00548090);
    iVar2 = MpSystem_Nop_stub();
    while (iVar2 != 0) {
      TitleMenu_Tick();
      NwLaunch_Render();
      Ui_RefreshWindow(&g_UiManager,s_WndPassword_00548084,0,0);
      iVar2 = MpSystem_Nop_stub();
    }
    Ui_ShowWindow(&g_UiManager,s_WndNWLaunch_00548258,0);
    Ui_OpenWindow(&g_UiManager,s_WndNWLaunch_00548258);
  }
  NwLaunch_SetStatus(s_HOST_MSG_3_005480a0);
  DVar3 = timeGetTime();
  DAT_00590ee4 = DVar3 + 30000;
  do {
    TitleMenu_Tick();
    NwLaunch_Render();
    if ((*(byte *)(iVar1 + 0x30) & 1) == 0) {
      uVar5 = *(undefined4 *)(iVar1 + 8);
      uVar6 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 8);
      uVar6 = 0x5b2c38;
    }
    iVar2 = NetDrv_JoinSessionById(uVar5,uVar6);
    if (g_TitleMenu_ExitFlag != 0) {
      return 0;
    }
    DVar3 = timeGetTime();
    if (DAT_00590ee4 < DVar3) {
      Nop();
      iVar2 = -0x45;
      break;
    }
  } while (iVar2 == 1);
  switch(iVar2) {
  case -0x45:
    goto switchD_0044e476_caseD_ffffffbb;
  default:
    if (((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) {
      Voice_ClientInit();
      uVar4 = DAT_005b2b04;
      if (DAT_005b2b04 == 0) {
        uVar4 = (uint)DAT_00565894;
      }
      _DAT_005916c8 = (undefined2)uVar4;
    }
    NwLaunch_SetStatus(s_HOST_MSG_5_0054824c);
    iVar1 = NetDrv_CreatePlayer(&DAT_005a6080,0,&g_JoinBlob,0xc4);
    if (iVar1 == 1) {
      NwLaunch_SetStatus(s_HOST_MSG_ERR_CPLAYER_00540f08);
      return 0;
    }
    iVar1 = NetDrv_GetServerId(0x5dc);
    if (iVar1 != -2) {
      if (iVar1 != -1) {
        return 1;
      }
      goto switchD_0044e476_caseD_ffffffff;
    }
switchD_0044e476_caseD_ffffffbb:
    NwLaunch_SetStatus(s_HOST_MSG_ERR_TIMEOUT_00540edc);
    return 0;
  case -3:
    NwLaunch_SetStatus(s_HOST_MSG_ERR_SESSION_FULL_00548044);
    return 0;
  case -2:
    NwLaunch_SetStatus(s_HOST_MSG_ERR_PW_00548060);
    return 0;
  case -1:
switchD_0044e476_caseD_ffffffff:
    NwLaunch_SetStatus(s_HOST_MSG_ERR_ERR_00548070);
    return 0;
  }
}

