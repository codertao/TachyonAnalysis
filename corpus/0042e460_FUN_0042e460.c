
void FUN_0042e460(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0x6d600000;
  *(undefined4 *)(param_1 + 0x38) = 0x6d600000;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(code **)(param_1 + 0x68) = FUN_00453c40;
  FUN_004ad900(*(undefined4 *)(*(int *)(param_1 + 0x58) + 100),DAT_005a6818,0x80,100,100,0x80);
  DAT_005b00b8 = *(undefined4 *)(param_1 + 0x70);
  *(undefined1 **)(param_1 + 0x70) = &LAB_0042e3b0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  return;
}

