
/* sweep */

void MpLogin_OnPlay(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  if (g_PlayerVarStore != 0) {
    iVar2 = Ui_GetButtonState(&g_UiManager,s_BtnMPLoginPlay_005479a0);
    if (iVar2 != 8) {
      MpLogin_UnfocusAll();
      uVar3 = 0xffffffff;
      pcVar5 = &DAT_005a6080;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = (char *)(GLBL_spacesav + 0x16);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      bVar7 = DAT_005a60d4 == '\0';
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      if (bVar7) {
        str_sprintf(&DAT_005a60d4,s_orion_des_005479bc);
      }
      if (DAT_005a60f4 == '\0') {
        str_sprintf(&DAT_005a60f4,s_cutlass_des_005479b0);
      }
      if (DAT_005a6114 == '\0') {
        str_sprintf(&DAT_005a6114,s_orion_des_005479bc);
      }
      if (g_PlayerVarStore != 0) {
        VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
      }
      g_NextMode = &PTR_MpShipBW_Enter_005444b8;
      g_TitleMenu_ExitFlag = 1;
    }
  }
  return;
}

