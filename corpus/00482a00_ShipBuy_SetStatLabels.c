
/* sweep */

void ShipBuy_SetStatLabels(int param_1)

{
  DAT_0056f3e0 = param_1;
  if (param_1 == 0) {
    sbi_label_flags_11c();
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGHull_00557800,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGShield_005577f0,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGEnergy_005577e0,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGAgility_005577d0,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGAccel_005577c0,0x10000);
    return;
  }
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGSpeed_0055780c,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGHull_00557800,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGShield_005577f0,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGEnergy_005577e0,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGAgility_005577d0,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGAccel_005577c0,0x10000);
  return;
}

