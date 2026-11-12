
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void MpSystem_JoinLanTick(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if (DAT_00591100 == 0) {
    Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
    MpSystem_SetBanner(s_HOST_MSG_3_005480a0);
    _DAT_00562c94 = 0;
    DAT_00591100 = 1;
    DAT_00591248 = 0;
    iVar1 = NetDrv_FindSessionByGuid(&DAT_00591630);
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x30) & 1) != 0) {
        Ui_CloseWindow(&g_UiManager,s_WndMPSystemLan_00547ee0);
        PasswordDlg_Show(s_WndPassword_00548084,s_WndMPSystem_00547ea8,&g_UiManager,0x5b2c38,0x1f,
                         s_EntryPassWord_00548090);
        iVar2 = MpSystem_Nop_stub();
        while (iVar2 != 0) {
          MessagePump_IdleTick();
          Ui_Update(&g_UiManager);
          MpSystem_Render();
          Ui_RefreshWindow(&g_UiManager,s_WndPassword_00548084,0,0);
          iVar2 = MpSystem_Nop_stub();
        }
        Ui_ShowWindow(&g_UiManager,s_WndMPSystemLan_00547ee0,0);
        Ui_OpenWindow(&g_UiManager,s_WndMPSystemLan_00547ee0);
      }
      iVar2 = 0x5dc;
      do {
        iVar2 = iVar2 + -1;
        MessagePump_IdleTick();
        Ui_Update(&g_UiManager);
        MpSystem_Render();
        if ((*(byte *)(iVar1 + 0x30) & 1) == 0) {
          uVar4 = *(undefined4 *)(iVar1 + 8);
          uVar5 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar1 + 8);
          uVar5 = 0x5b2c38;
        }
        iVar3 = NetDrv_JoinSessionById(uVar4,uVar5);
        if (iVar2 == 0) {
          Nop();
          goto LAB_0044cf17;
        }
      } while (iVar3 == 1);
      if (iVar3 == -3) {
        pcVar6 = s_HOST_MSG_ERR_SESSION_FULL_00548044;
      }
      else if (iVar3 == -2) {
        pcVar6 = s_HOST_MSG_ERR_PW_00548060;
      }
      else if (iVar3 == -1) {
LAB_0044cf17:
        pcVar6 = s_HOST_MSG_ERR_ERR_00548070;
      }
      else {
        if (((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) {
          Voice_ClientInit();
          if (DAT_005b2b04 == 0) {
            _DAT_005916c8 = DAT_00565894;
          }
          else {
            _DAT_005916c8 = (undefined2)DAT_005b2b04;
          }
        }
        iVar1 = NetDrv_CreatePlayer(&DAT_005a6080,0,&g_JoinBlob,0xc4);
        if (iVar1 == 1) {
          pcVar6 = s_HOST_MSG_ERR_CPLAYER_00540f08;
        }
        else {
          iVar1 = NetDrv_GetServerId(0x5dc);
          if (iVar1 == -2) {
            pcVar6 = s_HOST_MSG_ERR_TIMEOUT_00540edc;
          }
          else {
            if (iVar1 != -1) {
              MpSystem_OnLanCancel();
              g_TitleMenu_ExitFlag = 1;
              g_StarbaseScreen = &PTR_Loading_Enter_00541138;
              return;
            }
            pcVar6 = s_HOST_MSG_ERR_SERVER_00540ef4;
          }
        }
      }
      MpSystem_SetBanner(pcVar6);
    }
    DAT_00591248 = 1;
    MpSystem_OnLanCancel();
    Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
  }
  return;
}

