
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
  FUN_004256f0(&PTR_FUN_0053f6d8);
  FUN_004ad380(0);
  FUN_00444d80();
  uVar1 = FUN_004bc50d(0);
  FUN_004bcda0(uVar1);
  if (DAT_00590e24 == 0) {
    FUN_00431620();
    _DAT_00562c44 = 1;
    _DAT_00562cac = 0;
    DAT_00562ca8 = 0;
    FUN_00437bc0(0);
  }
  FUN_00440460(&DAT_00583420,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  Ui_ShowWindow(&g_UiManager,s_WndMainTitle_00544480,0);
  FUN_0043a8d0(&g_UiManager,s_WndMainTitle_00544480);
  FUN_00437b30(0);
  FUN_00437b10(0);
  FUN_00445710();
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_00437bd0(&LAB_00445030);
  if (DAT_00564ae4 == 0) {
    pcVar2 = s_mnus_bdf_00544474;
  }
  else {
    pcVar2 = s_mnu_bdf_0054446c;
  }
  Bdf_LoadBackdrop(pcVar2);
  FUN_004452d0(1);
  FUN_004455f0();
  Ui_SetButtonFlag(&g_UiManager,s_BtnLogin_00544460,0x40000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMulti_00544454,0x40000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnExit_0054444c,0x40000);
  if (DAT_00564ae4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffff000;
  }
  FUN_00445090(uVar1);
  FUN_0043e6a0(&g_UiManager,s_TxtVersion_00544440,&DAT_0053f278);
  return;
}

