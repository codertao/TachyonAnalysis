
void FUN_00411f80(int param_1,undefined4 param_2)

{
  undefined1 local_c [12];
  
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x18c) = param_2;
  *(undefined2 *)(param_1 + 0x76) = 0xf;
  *(undefined4 *)(param_1 + 0xb8) = 0x20000;
  *(undefined4 *)(param_1 + 0x180) = 50000;
  *(code **)(param_1 + 0x80) = FUN_00411af0;
  *(code **)(param_1 + 0x68) = FUN_004112d0;
  FUN_00410830((int *)(param_1 + 0x100),local_c,1,1,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(&DAT_00533e90 + *(int *)(*(int *)(param_1 + 0xe4) + 0x60) * 4),
               *(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x154) = DAT_005a5540;
  DAT_005a5540 = DAT_005a5540 + 1;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x60);
  FUN_0045cff0(param_1,*(int *)(param_1 + 100) + 0x14);
  Dcb_SetRangeFlags(param_1 + 0x15c,*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  return;
}

