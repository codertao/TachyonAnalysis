
undefined4 FUN_00455e40(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x2c) & 4) != 0) {
    return *(undefined4 *)(param_2 + 0xc);
  }
  return *(undefined4 *)(param_2 + 8);
}

