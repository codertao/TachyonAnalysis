
/* CRT */

undefined4 _wctomb(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&GLBL_locale_inprocess_gauge);
  bVar2 = GLBL_locale_counter != 0;
  if (bVar2) {
    InterlockedDecrement(&GLBL_locale_inprocess_gauge);
    __lock(0x13);
  }
  uVar1 = __wctomb_lk(param_1,param_2);
  if (bVar2) {
    __unlock(0x13);
  }
  else {
    InterlockedDecrement(&GLBL_locale_inprocess_gauge);
  }
  return uVar1;
}

