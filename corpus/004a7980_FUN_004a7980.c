
int FUN_004a7980(uint param_1)

{
  int iVar1;
  
  param_1 = param_1 & 0xff;
  if (0x7e < param_1) {
    iVar1 = param_1 - 0x80;
    if (0x3f < iVar1) {
      iVar1 = 0x80 - iVar1;
    }
    return iVar1 + 0x40;
  }
  if (0x3f < param_1) {
    param_1 = 0x80 - param_1;
  }
  return 0x40 - param_1;
}

