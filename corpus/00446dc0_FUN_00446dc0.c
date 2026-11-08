
void FUN_00446dc0(int param_1)

{
  DAT_00592fc0 = param_1;
  if (param_1 == 0) {
    sbi_label_flags_11c();
    sbi_label_flags_11c(&g_UiManager,s_TxtCFGShield_005475d4,0x10000);
    sbi_label_flags_11c(&g_UiManager,s_TxtCFGInternal_005475c4,0x10000);
    sbi_label_flags_11c(&g_UiManager,s_TxtCFGROF_005475b8,0x10000);
    return;
  }
  clr_label_flags_11c(&g_UiManager,s_TxtCFGHull_005475e4,0x10000);
  clr_label_flags_11c(&g_UiManager,s_TxtCFGShield_005475d4,0x10000);
  clr_label_flags_11c(&g_UiManager,s_TxtCFGInternal_005475c4,0x10000);
  clr_label_flags_11c(&g_UiManager,s_TxtCFGROF_005475b8,0x10000);
  return;
}

