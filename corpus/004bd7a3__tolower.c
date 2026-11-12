
/* CRT */

int _tolower(int param_1)

{
  bool bVar1;
  
  if (GLBL_use_locale_str_funcs == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&GLBL_locale_inprocess_gauge);
    bVar1 = GLBL_locale_counter != 0;
    if (bVar1) {
      InterlockedDecrement(&GLBL_locale_inprocess_gauge);
      __lock(0x13);
    }
    param_1 = __tolower_lk(param_1);
    if (bVar1) {
      __unlock(0x13);
    }
    else {
      InterlockedDecrement(&GLBL_locale_inprocess_gauge);
    }
  }
  return param_1;
}

