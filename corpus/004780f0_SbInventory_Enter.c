
/* sweep: WndStarBaseInventory */

void SbInventory_Enter(void)

{
  int iVar1;
  char *pcVar2;
  
  g_TitleMenu_ExitFlag = 0;
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseInventory_00550a00);
  SbInventory_Load();
  SbInventory_SetItemsEnabled();
  SbInventory_RefreshItems();
  SbInventory_SetKeysEnabled();
  SbInventory_RefreshKeys();
  DAT_0056363c = load_rtxt_bin(s_shiptext_bin_00545c20,0xa100);
  SbInventory_ShowItem(&DAT_00562b14,&DAT_00562b14);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseInventory_00550a00,0);
  MenuHotkey_SetEscape(SbInventory_GoBack);
  MenuHotkey_SetAccept(SbInventory_GoBack);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtInvKeyBanner_00550a84,&DAT_00562b14);
  iVar1 = Player_GetSide();
  if (iVar1 == 1) {
    pcVar2 = s_INV_KEY_GALSPAN_00550a64;
  }
  else {
    if (iVar1 != 2) goto LAB_004781cd;
    pcVar2 = s_INV_KEY_BORA_00550a74;
  }
  Ui_SetLabelTextById(&GLBL_UI_ELEM_LIST,s_TxtInvKeyBanner_00550a84,pcVar2);
LAB_004781cd:
  SbInventory_InitSliders();
  return;
}

