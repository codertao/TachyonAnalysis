
undefined4 FUN_0048ced0(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    to_uppercase(param_1);
    uVar1 = FUN_0048eb00(param_1,DAT_0056ab78,0x10000,2);
    if (uVar1 < DAT_0056ab8c) {
      return 1;
    }
  }
  return 0;
}

