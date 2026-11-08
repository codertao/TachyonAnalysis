
void FUN_00471630(int param_1)

{
  DAT_00577f04 = param_1;
  if (param_1 == 0) {
    sbi_label_flags_11c();
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGShield_005475d4,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGInternal_005475c4,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGROF_005475b8,0x10000);
    return;
  }
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGHull_005475e4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGShield_005475d4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGInternal_005475c4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGROF_005475b8,0x10000);
  return;
}

