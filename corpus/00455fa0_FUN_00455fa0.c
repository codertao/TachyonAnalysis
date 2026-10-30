
undefined4 FUN_00455fa0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    return *(undefined4 *)(param_1 + 0x1c);
  }
  return *(undefined4 *)(param_1 + 4);
}

