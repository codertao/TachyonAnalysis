
undefined4 FUN_00455e00(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x2c) & 2) != 0) {
    return *(undefined4 *)(param_2 + 0x44);
  }
  return *(undefined4 *)(param_2 + 0x40);
}

