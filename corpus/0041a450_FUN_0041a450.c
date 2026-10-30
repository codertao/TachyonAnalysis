
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a450(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_0048e370(0x2b0749c1);
  FUN_0041a380();
  uVar1 = 0;
  _DAT_005b29c4 = 0;
  if (param_1 != 0) {
    do {
      uVar1 = uVar1 + 1;
      DAT_005b29a4 = uVar1;
      FUN_0041a3b0(param_2);
    } while (uVar1 < param_1);
  }
  return;
}

