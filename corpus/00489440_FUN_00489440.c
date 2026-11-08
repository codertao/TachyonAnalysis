
void FUN_00489440(int param_1)

{
  DAT_0056c48c = param_1;
  if (param_1 == 0) {
    sbi_label_flags_11c();
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingHull_005596a4,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingShield_00559694,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingEnergy_00559684,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingAgility_00559674,0x10000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingAccel_00559664,0x10000);
    return;
  }
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingSpeed_005596b0,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingHull_005596a4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingShield_00559694,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingEnergy_00559684,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingAgility_00559674,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingAccel_00559664,0x10000);
  return;
}

