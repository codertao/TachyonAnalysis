
void FUN_004929e0(void)

{
  undefined **ppuVar1;
  
  if (DAT_005657ac == &PTR_s_VON_OPTIONS_00559ef0) {
    DAT_005657ac = &PTR_s_VON_OPTIONS_00559ef0;
    ppuVar1 = &PTR_s_VON_OPTIONS_00559f14;
    if (PTR_s_VON_OPTIONS_00559f14 != (undefined *)0x0) {
      do {
        DAT_005657ac = ppuVar1;
        ppuVar1 = DAT_005657ac + 9;
      } while (DAT_005657ac[9] != (undefined *)0x0);
      FUN_00466590(1,9,0,0xff);
      return;
    }
  }
  else {
    DAT_005657ac = DAT_005657ac + -9;
  }
  FUN_00466590(1,9,0,0xff);
  return;
}

