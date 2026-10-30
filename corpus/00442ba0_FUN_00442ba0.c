
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442ba0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  char *pcVar9;
  
  if ((DAT_005a4010 == '\0') || (DAT_005b2bc4 == '\0')) {
    FUN_00443af0();
  }
  else if (g_TitleMenu_ExitFlag == 0) {
    FUN_0043e770(&g_UiManager,s_TxtHostStatus_00540d08,s_HOST_STATUS_SESSION_00540f50);
    FUN_00443870();
    Profile_LoadoutInit(0);
    FUN_00458230();
    DAT_005b2c58 = DAT_005b2c04;
    if (DAT_005b2c04 == 0) {
      iVar2 = FUN_0044c8b0();
    }
    else {
      iVar2 = FUN_0044c950();
    }
    iVar6 = DAT_005b2bc0;
    if (iVar2 == 0) {
      pcVar9 = s_HOST_MSG_ERR_CREATESESSION_00540f34;
    }
    else {
      FUN_004256f0(&PTR_FUN_005483d0);
      if (DAT_005b2c08 == 0) {
        _g_FlightStateFlags = 3;
      }
      else {
        _g_FlightStateFlags = 1;
        iVar6 = iVar6 + 1;
      }
      iVar2 = 0x5dc;
      do {
        iVar2 = iVar2 + -1;
        iVar3 = FUN_004a6f20(&DAT_005b2bc4,&DAT_005a6080,iVar6,&DAT_005b2be4,0,0,0,0);
        if (iVar2 == 0) {
          iVar3 = -1;
        }
        MessagePump_IdleTick();
      } while (iVar3 == 1);
      if (iVar3 == -1) {
        pcVar9 = s_HOST_MSG_ERR_CREATESESSION_00540f34;
      }
      else {
        uVar4 = 0xffffffff;
        pcVar9 = &DAT_005a4010;
        do {
          pcVar7 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar9 = pcVar7 + -uVar4;
        pcVar7 = (char *)&DAT_005a64e4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar7 = pcVar7 + 4;
        }
        bVar8 = DAT_005b2c04 == 1;
        _DAT_00562c00 = 1;
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar7 = pcVar7 + 1;
        }
        if (bVar8) {
          DAT_005a4040 = 1;
          _strncpy(&DAT_005a4054,&DAT_005b2bc4,0x1f);
          _strncpy(&DAT_005a4074,&DAT_005b2be4,0x1f);
          DAT_005a4050 = DAT_005b2bc0;
          iVar2 = _rand();
          DAT_005a40b4 = (int)(CONCAT44(iVar2 >> 0x1f,iVar2 >> 4) % 9000) + 1000;
          DAT_005a4048 = FUN_0044c8e0(s_12_166_151_201_00534900);
          str_sprintf(&DAT_005a41e0,s_HOST_GAMETYPE__d_00540f20,DAT_005b2c0c);
          iVar2 = FUN_0043bf10(&g_UiManager,&DAT_005a41e0);
          if ((iVar2 == 0) || (pcVar9 = *(char **)(iVar2 + 0x40), pcVar9 == (char *)0x0)) {
            pcVar9 = (char *)&DAT_005a41e0;
          }
          _strncpy(&DAT_005a4094,pcVar9,0x1f);
          FUN_00442980(&DAT_005a4054,0x20,0x2b);
          FUN_00442980(&DAT_005a4074,0x20,0x2b);
          FUN_00442980(&DAT_005a4094,0x20,0x2b);
        }
        FUN_00442a70(&DAT_005a41e0);
        FUN_004a7180(&DAT_005a41e0);
        iVar2 = FUN_004a6fa0(&DAT_005a6080,1);
        if (iVar2 != 1) {
          DAT_005a64f4 = &DAT_00591660;
          DAT_005a64f8 = 0xc4;
          if (g_PlayerVarStore != 0) {
            VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
            VarStore_Close();
            g_PlayerVarStore = 0;
          }
          g_TitleMenu_ExitFlag = 1;
          g_StarbaseScreen = &PTR_FUN_00541138;
          g_ReturnMode = &PTR_FUN_00540a40;
          return;
        }
        pcVar9 = s_HOST_MSG_ERR_CPLAYER_00540f08;
      }
    }
    FUN_0043e770(&g_UiManager,s_TxtHostStatus_00540d08,pcVar9);
    return;
  }
  return;
}

