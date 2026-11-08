
int FUN_004bcf9b(int param_1)

{
  bool bVar1;
  
  if (GLBL_use_locale_str_funcs == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement(&GLBL_locale_inprocess_gauge);
    bVar1 = GLBL_locale_counter != 0;
    if (bVar1) {
      InterlockedDecrement(&GLBL_locale_inprocess_gauge);
      init_andor_enter_crit_section_idx(0x13);
    }
    param_1 = FUN_004bd00a(param_1);
    if (bVar1) {
      leave_crit_section_idx(0x13);
    }
    else {
      InterlockedDecrement(&GLBL_locale_inprocess_gauge);
    }
  }
  return param_1;
}

