
uint FUN_004c2f88(uint param_1)

{
  uint uVar1;
  
  if (DAT_00561464 < 2) {
    uVar1 = (byte)PTR_DAT_00561258[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_004bc62d(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

