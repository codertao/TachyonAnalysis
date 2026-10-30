
void FUN_00444960(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043bf10(&g_UiManager,s_LOGIN_DELWARNING_00541334);
  FUN_00437b30(0);
  FUN_00437b10(0);
  FUN_00437b40(0);
  FUN_00437b50(0);
  FUN_00444450();
  DAT_00541188 = param_1;
  DAT_005a3848 = FUN_0041fd80(s_borders2_box_005410dc,0xa000);
  DAT_00562c10 = 1;
  FUN_0043a990(&g_UiManager,s_WndLogin_00541204);
  Ui_ShowWindow(&g_UiManager,s_WndLoginDlg_005411d8,0);
  FUN_0043a8d0(&g_UiManager,s_WndLoginDlg_005411d8);
  if ((iVar1 == 0) || (g_CurrentProfileSlot == -1)) {
    str_sprintf(&DAT_005a3860,s__You_are_about_to_delete_this_pl_005412dc);
  }
  else {
    str_sprintf(&DAT_005a3860,*(undefined4 *)(iVar1 + 0x40),
                &DAT_005a3990 + g_CurrentProfileSlot * 0x8c);
    FUN_0043e6a0(&g_UiManager,s_TxtDelSlotTxt_00541324,&DAT_005a3990 + g_CurrentProfileSlot * 0x8c);
  }
  FUN_0043e6a0(&g_UiManager,s_TxtDelConfirm_005412cc,&DAT_005a3860);
  FUN_0043f5d0(&g_UiManager,s_IADlgSlot_005412c0,2);
  FUN_0043f810(&DAT_00583420,s_IADlgSlot_005412c0,0);
  return;
}

