
void FUN_00444020(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if ((g_CurrentProfileSlot != -1) && ((&DAT_005a3990)[g_CurrentProfileSlot * 0x8c] != '\0')) {
    iVar1 = FUN_0043bf10(&g_UiManager,s_LOGIN_CURRENTGAME_00541250);
    if (iVar1 == 0) {
      pcVar3 = s__Current_Game_00541240;
    }
    else {
      pcVar3 = *(char **)(iVar1 + 0x40);
    }
    str_sprintf(&DAT_005a38e0,s__s___s_00534230,pcVar3,&DAT_005a3990 + g_CurrentProfileSlot * 0x8c);
    FUN_0043e6a0(&g_UiManager,s_TxtLoginCurGame_00541230,&DAT_005a38e0);
    iVar1 = Ui_GetButtonState(&g_UiManager,s_BtnLoginPlay_00541220);
    if (iVar1 == 8) {
      set_button_state(&g_UiManager,s_BtnLoginPlay_00541220,1);
    }
    iVar1 = Ui_GetButtonState(&g_UiManager,s_BtnLoginDelete_00541210);
    if (iVar1 == 8) {
      set_button_state(&g_UiManager,s_BtnLoginDelete_00541210,1);
    }
    uVar2 = FUN_0043ce30(&g_UiManager,s_BtnLoginCopy_005411f4);
    if ((uVar2 & 0x80000) == 0) {
      iVar1 = Ui_GetButtonState(&g_UiManager,s_BtnLoginCopy_005411f4);
      if (iVar1 != 8) goto LAB_00444162;
      pcVar3 = s_BtnLoginCopy_005411f4;
    }
    else {
      iVar1 = Ui_GetButtonState(&g_UiManager,s_BtnLoginPaste_005411e4);
      if (iVar1 != 8) goto LAB_00444162;
      pcVar3 = s_BtnLoginPaste_005411e4;
    }
    set_button_state(&g_UiManager,pcVar3,1);
LAB_00444162:
    str_sprintf(&DAT_005a41e0,s_BtnLoginSel_d_0054118c,g_CurrentProfileSlot);
    iVar1 = Ui_GetButtonState(&g_UiManager,&DAT_005a41e0);
    if ((iVar1 != 1) && (iVar1 = Ui_GetButtonState(&g_UiManager,&DAT_005a41e0), iVar1 != 2)) {
      return;
    }
    FUN_0043c1b0(&g_UiManager,&DAT_005a41e0,2);
    return;
  }
  set_button_state(&g_UiManager,s_BtnLoginPlay_00541220,8);
  set_button_state(&g_UiManager,s_BtnLoginDelete_00541210,8);
  uVar2 = FUN_0043ce30(&g_UiManager,s_BtnLoginCopy_005411f4);
  if ((uVar2 & 0x80000) == 0) {
    pcVar3 = s_BtnLoginCopy_005411f4;
  }
  else {
    if (DAT_00541184 != -1) goto LAB_00444220;
    pcVar3 = s_BtnLoginPaste_005411e4;
  }
  set_button_state(&g_UiManager,pcVar3,8);
LAB_00444220:
  iVar1 = FUN_0043bf10(&g_UiManager,s_LOGIN_CURRENTGAME_00541250);
  if (iVar1 == 0) {
    pcVar3 = s__Current_Game_00541240;
  }
  else {
    pcVar3 = *(char **)(iVar1 + 0x40);
  }
  str_sprintf(&DAT_005a38e0,&DAT_00534e38,pcVar3);
  FUN_0043e6a0(&g_UiManager,s_TxtLoginCurGame_00541230,&DAT_005a38e0);
  return;
}

