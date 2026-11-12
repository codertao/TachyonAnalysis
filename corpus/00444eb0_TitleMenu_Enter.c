
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* builds title window + Login/Multi/Exit buttons, loads mnu(s).bdf, version text */

void TitleMenu_Enter(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c44 = 0;
  DAT_0054442c = 1;
  DAT_00562c48 = 0;
  _g_FlightStateFlags = 7;
  Rules_Set(&g_Rules_SinglePlayer);
  Gfx_SetBrightMode(0);
  TitleMenu_LoadUi();
  uVar1 = _time(0);
  _srand(uVar1);
  if (DAT_00590e24 == 0) {
    Gfx_InitColorTable();
    _DAT_00562c44 = 1;
    _DAT_00562cac = 0;
    DAT_00562ca8 = 0;
    Menu_SetVar4b40(0);
  }
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  Ui_ShowWindow(&g_UiManager,s_WndMainTitle_00544480,0);
  Ui_OpenWindow(&g_UiManager,s_WndMainTitle_00544480);
  MenuHotkey_SetEscape(0);
  MenuHotkey_SetAccept(0);
  TitleHover_Clear();
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  Menu_SetVar4b38(&LAB_00445030);
  if (DAT_00564ae4 == 0) {
    pcVar2 = s_mnus_bdf_00544474;
  }
  else {
    pcVar2 = s_mnu_bdf_0054446c;
  }
  Bdf_LoadBackdrop(pcVar2);
  TitleBg_SetVar441c(1);
  Ui_PresentFrame();
  Ui_SetButtonFlag(&g_UiManager,s_BtnLogin_00544460,0x40000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMulti_00544454,0x40000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnExit_0054444c,0x40000);
  if (DAT_00564ae4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffff000;
  }
  TitleCam_SetRate(uVar1);
  Ui_SetLabelText(&g_UiManager,s_TxtVersion_00544440,&DAT_0053f278);
  return;
}

