
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044cdd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if (DAT_00591100 == 0) {
    Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
    FUN_0044c840(s_HOST_MSG_3_005480a0);
    _DAT_00562c94 = 0;
    DAT_00591100 = 1;
    DAT_00591248 = 0;
    iVar1 = FUN_004a6d90(&DAT_00591630);
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x30) & 1) != 0) {
        FUN_0043a990(&g_UiManager,s_WndMPSystemLan_00547ee0);
        FUN_0044ccc0(s_WndPassword_00548084,s_WndMPSystem_00547ea8,&g_UiManager,0x5b2c38,0x1f,
                     s_EntryPassWord_00548090);
        iVar2 = FUN_0044cc00();
        while (iVar2 != 0) {
          MessagePump_IdleTick();
          Ui_Update(&g_UiManager);
          FUN_0044c3f0();
          Ui_RefreshWindow(&g_UiManager,s_WndPassword_00548084,0,0);
          iVar2 = FUN_0044cc00();
        }
        Ui_ShowWindow(&g_UiManager,s_WndMPSystemLan_00547ee0,0);
        FUN_0043a8d0(&g_UiManager,s_WndMPSystemLan_00547ee0);
      }
      iVar2 = 0x5dc;
      do {
        iVar2 = iVar2 + -1;
        MessagePump_IdleTick();
        Ui_Update(&g_UiManager);
        FUN_0044c3f0();
        if ((*(byte *)(iVar1 + 0x30) & 1) == 0) {
          uVar4 = *(undefined4 *)(iVar1 + 8);
          uVar5 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar1 + 8);
          uVar5 = 0x5b2c38;
        }
        iVar3 = FUN_004a6ec0(uVar4,uVar5);
        if (iVar2 == 0) {
          thunk_FUN_00445720();
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
        iVar1 = FUN_004a6f70(&DAT_005a6080,0,&DAT_00591660,0xc4);
        if (iVar1 == 1) {
          pcVar6 = s_HOST_MSG_ERR_CPLAYER_00540f08;
        }
        else {
          iVar1 = FUN_004a7080(0x5dc);
          if (iVar1 == -2) {
            pcVar6 = s_HOST_MSG_ERR_TIMEOUT_00540edc;
          }
          else {
            if (iVar1 != -1) {
              FUN_0044cb30();
              g_TitleMenu_ExitFlag = 1;
              g_StarbaseScreen = &PTR_FUN_00541138;
              return;
            }
            pcVar6 = s_HOST_MSG_ERR_SERVER_00540ef4;
          }
        }
      }
      FUN_0044c840(pcVar6);
    }
    DAT_00591248 = 1;
    FUN_0044cb30();
    Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
  }
  return;
}

