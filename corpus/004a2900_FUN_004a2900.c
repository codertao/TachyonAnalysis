
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a2900(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_005640d8 != 0) {
    FUN_004a2970();
  }
  _DAT_005640dc = param_1;
  DAT_005640e0 = param_2;
  FUN_004a1d80(0);
  FUN_004a1c90();
  DirectInputCreateA(param_1,0x500,&DAT_005640d4,0);
  FUN_004a2460();
  uVar1 = FUN_004a2890();
  FUN_004a1d80(uVar1);
  FUN_004a29b0(3);
  DAT_005640d8 = 1;
  return 0;
}

