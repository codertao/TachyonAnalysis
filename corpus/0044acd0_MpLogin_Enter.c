
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: WndMPLogin */

void MpLogin_Enter(void)

{
  uint uVar1;
  undefined1 local_80 [128];
  
  uVar1 = 0;
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c00 = 0;
  DAT_00592e64 = 1;
  Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  MenuHotkey_SetEscape(MpLogin_GoBack);
  MenuHotkey_SetAccept(MpLogin_OnPlay);
  MenuHotkey_SetUp(&LAB_0044b390);
  MenuHotkey_SetDown(&LAB_0044b3b0);
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  TitleHover_Clear();
  Ui_ShowCursor();
  Ui_ShowWindow(&g_UiManager,s_WndMPLogin_00547980,0);
  Ui_OpenWindow(&g_UiManager,s_WndMPLogin_00547980);
  Faces_Load();
  MpLogin_RefreshSlots();
  DAT_005a60c0 = 0xffffffff;
  MpLogin_SelectSlot(GLBL_spacesav[0x29]);
  MpLogin_UnfocusAll();
  do {
    str_sprintf(local_80,s_BtnMPLoginSel_d_00547970,uVar1);
    str_sprintf(&DAT_005a41e0,s_EntryMPLogin_d_00547960,uVar1);
    Ui_BindButtonToLabel(&g_UiManager,local_80,&DAT_005a41e0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  load_sbf_and_bin(&DAT_005b2b78,s_mpbay_00547958);
  return;
}

