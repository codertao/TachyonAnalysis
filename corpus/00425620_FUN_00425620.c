
void FUN_00425620(void)

{
  int *piVar1;
  
  piVar1 = (int *)((int)DAT_005b1ddc + 0x24);
  DAT_005b1ddc = (undefined **)((int)DAT_005b1ddc + 0x24);
  if (*piVar1 == 0) {
    DAT_005b1ddc = &PTR_s_GAME_OPTIONS_00535c88;
  }
  FUN_00466590(1,9,0,0xff);
  return;
}

