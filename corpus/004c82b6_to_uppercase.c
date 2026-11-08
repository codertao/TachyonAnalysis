
char * to_uppercase(char *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  void *local_c;
  
  local_c = (void *)0x0;
  if (GLBL_use_locale_str_funcs == 0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar3 = cVar1 + -0x20;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    InterlockedIncrement(&GLBL_locale_inprocess_gauge);
    bVar4 = GLBL_locale_counter == 0;
    if (!bVar4) {
      InterlockedDecrement(&GLBL_locale_inprocess_gauge);
      init_andor_enter_crit_section_idx(0x13);
    }
    if (GLBL_use_locale_str_funcs == 0) {
      if (bVar4) {
        InterlockedDecrement(&GLBL_locale_inprocess_gauge);
      }
      else {
        leave_crit_section_idx(0x13);
      }
      cVar1 = *param_1;
      pcVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = *pcVar3;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar3 = cVar1 + -0x20;
        }
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
    }
    else {
      _Size = FUN_004c225c(GLBL_use_locale_str_funcs,0x200,param_1,0xffffffff,0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (void *)0x0)) &&
         (iVar2 = FUN_004c225c(GLBL_use_locale_str_funcs,0x200,param_1,0xffffffff,local_c,_Size,0,1)
         , iVar2 != 0)) {
        FUN_004c1790(param_1,local_c);
      }
      if (bVar4) {
        InterlockedDecrement(&GLBL_locale_inprocess_gauge);
      }
      else {
        leave_crit_section_idx(0x13);
      }
      FUN_004bd512(local_c);
    }
  }
  return param_1;
}

