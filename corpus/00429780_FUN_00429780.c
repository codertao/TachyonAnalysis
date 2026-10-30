
undefined * FUN_00429780(int param_1,int param_2)

{
  if (param_2 != 1) {
    if (param_1 == 1) {
      return (undefined *)0x7f00;
    }
    return &DAT_0060007f + ((param_1 != 2) - 1 & 0x1f0f91);
  }
  if (param_1 == 1) {
    return (undefined *)0xff00;
  }
  return (undefined *)(((param_1 != 2) - 1 & 0x3f1f21) + 0xc000ff);
}

