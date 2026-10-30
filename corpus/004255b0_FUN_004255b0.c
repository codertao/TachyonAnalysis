
void FUN_004255b0(void)

{
  undefined **ppuVar1;
  
  if (DAT_005b1ddc == &PTR_s_GAME_OPTIONS_00535c88) {
    DAT_005b1ddc = &PTR_s_GAME_OPTIONS_00535c88;
    ppuVar1 = &PTR_s_GAME_OPTIONS_00535cac;
    if (PTR_s_GAME_OPTIONS_00535cac != (undefined *)0x0) {
      do {
        DAT_005b1ddc = ppuVar1;
        ppuVar1 = DAT_005b1ddc + 9;
      } while (DAT_005b1ddc[9] != (undefined *)0x0);
      FUN_00466590(1,9,0,0xff);
      return;
    }
  }
  else {
    DAT_005b1ddc = DAT_005b1ddc + -9;
  }
  FUN_00466590(1,9,0,0xff);
  return;
}

