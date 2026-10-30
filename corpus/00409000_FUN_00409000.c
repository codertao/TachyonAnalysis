
undefined4 FUN_00409000(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 6) != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0xad);
    return uVar1;
  }
  if ((param_1 & 0x100) != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0xae);
    return uVar1;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0xaf);
    return uVar1;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0xb0);
    return uVar1;
  }
  if ((param_1 & 0x800) != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0xb1);
    return uVar1;
  }
  if ((param_1 & 0x2000) != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0xb3);
    return uVar1;
  }
  if ((param_1 & 0x4000) != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0xb2);
    return uVar1;
  }
  return 0;
}

