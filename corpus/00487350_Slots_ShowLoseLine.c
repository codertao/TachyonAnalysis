
/* sweep: guess */

void Slots_ShowLoseLine(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPay1_00557fa4,0x20000);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayBar1_00557f88,0x20000);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayLine1_00557f64,0x20000);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayLine12_00557f40,0x20000);
  }
  else {
    if (iVar1 == 2) {
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPay2_00557f9c,0x20000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayBar2_00557f7c,0x20000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayLine2_00557f58,0x20000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayLine22_00557f34,0x20000);
      return;
    }
    if (iVar1 == 3) {
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPay3_00557f94,0x20000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayBar3_00557f70,0x20000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayLine3_00557f4c,0x20000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAPayLine32_00557f28,0x20000);
      return;
    }
  }
  return;
}

