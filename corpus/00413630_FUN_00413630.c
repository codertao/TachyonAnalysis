
void FUN_00413630(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 1) {
    *(short *)(param_1 + 0xcc) = *(short *)(param_1 + 0xcc) + 1;
  }
  else if (param_2 == 2) {
    *(short *)(param_1 + 0xcc) = *(short *)(param_1 + 0xcc) + -1;
    if (*(short *)(param_1 + 0xcc) < 0) {
      *(undefined2 *)(param_1 + 0xcc) = 0;
      return;
    }
  }
  else if (param_2 == 5) {
    *(undefined4 *)(param_1 + 0x174) = param_3;
    return;
  }
  return;
}

