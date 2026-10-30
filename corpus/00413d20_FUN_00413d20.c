
void FUN_00413d20(int param_1,undefined4 param_2,int param_3)

{
  *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_3 + 6);
  *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(param_3 + 8);
  *(short *)(param_1 + 0x11e) = (short)*(char *)(param_3 + 10);
  *(undefined1 **)(param_1 + 0x80) = &LAB_0041aa00;
  *(code **)(param_1 + 0x70) = FUN_00413a90;
  *(undefined1 *)(param_1 + 0xf1) = *(undefined1 *)(param_3 + 0xb);
  FUN_004b2950(param_1 + 0x18,0);
  FUN_0045cff0(param_1,*(int *)(param_1 + 100) + 0x14);
  *(undefined4 *)(param_1 + 0xb8) = 0x28000;
  if (*(short *)(param_3 + 0xc) != 0) {
    *(undefined2 *)(param_1 + 0xcc) = 1;
  }
  return;
}

