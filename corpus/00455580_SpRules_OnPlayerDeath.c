
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* death cam + sound */

void SpRules_OnPlayerDeath(int param_1)

{
  _DAT_005b7e3c = 1;
  *(undefined1 **)(param_1 + 0x68) = &LAB_00455390;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_004102c0(1);
  FUN_0040f5b0(0x60000,0x1040000,0x200000,0);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_004524d0(1);
  FUN_004666e0(1,4,0,param_1,0x10000);
  return;
}

