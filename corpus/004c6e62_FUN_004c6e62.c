
undefined4 FUN_004c6e62(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&GLBL_locale_inprocess_gauge);
  bVar2 = GLBL_locale_counter != 0;
  if (bVar2) {
    InterlockedDecrement(&GLBL_locale_inprocess_gauge);
    init_andor_enter_crit_section_idx(0x13);
  }
  uVar1 = FUN_004c6ebf(param_1,param_2,param_3);
  if (bVar2) {
    leave_crit_section_idx(0x13);
  }
  else {
    InterlockedDecrement(&GLBL_locale_inprocess_gauge);
  }
  return uVar1;
}

