
undefined4 FUN_004277c0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  else if (10 < param_2) {
    param_2 = 10;
  }
  uVar1 = global_bad_shift_rng();
  if ((uVar1 & 0x3fff) < param_2 * 700) {
    uVar2 = FUN_004944c0(param_1);
    return uVar2;
  }
  return 0;
}

