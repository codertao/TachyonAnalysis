
uint FUN_0042af30(uint param_1)

{
  if (0x4a < param_1) {
    return 0xff00;
  }
  if (0x18 < param_1) {
    return 0xffff00;
  }
  return -(uint)(param_1 != 0) & 0xff0000;
}

