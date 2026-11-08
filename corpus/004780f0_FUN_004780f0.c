
void FUN_004780f0(void)

{
  int iVar1;
  char *pcVar2;
  
  g_TitleMenu_ExitFlag = 0;
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseInventory_00550a00);
  FUN_00477e10();
  FUN_00477a70();
  FUN_00477b70();
  FUN_00477af0();
  FUN_00477c80();
  DAT_0056363c = load_rtxt_bin(s_shiptext_bin_00545c20,0xa100);
  FUN_004783a0(&DAT_00562b14,&DAT_00562b14);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseInventory_00550a00,0);
  FUN_00437b30(FUN_004782c0);
  FUN_00437b10(FUN_004782c0);
  FUN_00445710();
  FUN_0043e8f0(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtInvKeyBanner_00550a84,&DAT_00562b14);
  iVar1 = FUN_0046f260();
  if (iVar1 == 1) {
    pcVar2 = s_INV_KEY_GALSPAN_00550a64;
  }
  else {
    if (iVar1 != 2) goto LAB_004781cd;
    pcVar2 = s_INV_KEY_BORA_00550a74;
  }
  FUN_0043e770(&GLBL_UI_ELEM_LIST,s_TxtInvKeyBanner_00550a84,pcVar2);
LAB_004781cd:
  FUN_004785c0();
  return;
}

