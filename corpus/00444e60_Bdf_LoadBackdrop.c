
/* reset scene then load+apply a .bdf (arg = filename) */

void Bdf_LoadBackdrop(undefined4 param_1)

{
  FUN_00444e30();
  FUN_00431a30();
  FUN_0046dd60();
  FUN_004af2e0();
  FUN_004b1c80(0xa001,0xa001);
  FUN_00468940(0xa001);
  FUN_004676a0(0xa001);
  Bdf_LoadAndApply(param_1);
  return;
}

