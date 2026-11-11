
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044acd0(void)

{
  uint uVar1;
  undefined1 local_80 [128];
  
  uVar1 = 0;
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c00 = 0;
  DAT_00592e64 = 1;
  Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  FUN_00437b30(FUN_0044afd0);
  FUN_00437b10(FUN_0044b030);
  FUN_00437b40(&LAB_0044b390);
  FUN_00437b50(&LAB_0044b3b0);
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_00445710();
  FUN_0043efa0();
  Ui_ShowWindow(&g_UiManager,s_WndMPLogin_00547980,0);
  FUN_0043a8d0(&g_UiManager,s_WndMPLogin_00547980);
  FUN_0044b8c0();
  FUN_0044b730();
  DAT_005a60c0 = 0xffffffff;
  FUN_0044b3d0(GLBL_spacesav[0x29]);
  FUN_0044b180();
  do {
    str_sprintf(local_80,s_BtnMPLoginSel_d_00547970,uVar1);
    str_sprintf(&DAT_005a41e0,s_EntryMPLogin_d_00547960,uVar1);
    FUN_0043cdb0(&g_UiManager,local_80,&DAT_005a41e0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  load_sbf_and_bin(&DAT_005b2b78,s_mpbay_00547958);
  return;
}

