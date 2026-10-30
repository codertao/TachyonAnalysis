
undefined4 FUN_00455e20(int param_1,undefined4 *param_2)

{
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    return param_2[1];
  }
  return *param_2;
}

