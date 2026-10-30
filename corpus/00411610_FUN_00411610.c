
void FUN_00411610(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(code **)(param_1 + 0x134) = FUN_00410e30;
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x54);
    return;
  }
  *(undefined1 **)(param_1 + 0x134) = &LAB_00410e90;
  return;
}

