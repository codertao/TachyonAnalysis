
void FUN_00433c90(int param_1,int param_2,int param_3)

{
  *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_3 + 6);
  if (*(int *)(param_2 + 0x170) != 0) {
    FUN_00466160(param_1,*(int *)(param_2 + 0x170),*(undefined4 *)(param_2 + 0x184),0,
                 *(undefined4 *)(param_2 + 0x178),*(undefined4 *)(param_2 + 0x180),
                 *(undefined4 *)(param_2 + 0x17c));
  }
  *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(param_3 + 8);
  *(short *)(param_1 + 0x11e) = (short)*(char *)(param_3 + 10);
  *(code **)(param_1 + 0x70) = FUN_00433c10;
  *(code **)(param_1 + 0x68) = FUN_00433c40;
  FUN_004b2950(param_1 + 0x18,0);
  FUN_0045cbf0(param_1,*(int *)(param_1 + 100) + 0x14);
  *(undefined4 *)(param_1 + 0xb8) = 0x28000;
  return;
}

