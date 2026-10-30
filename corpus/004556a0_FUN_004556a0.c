
void FUN_004556a0(int param_1)

{
  FUN_00432910(0,0);
  FUN_004666e0(1,4,0,param_1,0x10000);
  FUN_004231f0(3,0,param_1 + 0x34,0x10000,0);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  *(undefined1 **)(param_1 + 0x68) = &LAB_004555f0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_004102c0(1);
  FUN_0040f5b0(0x3e8000,0x400000,0x80000,0);
  FUN_0044f3e0(1);
  *(undefined4 *)(param_1 + 0xf8) = 0xfa;
  FUN_0041c3e0(0);
  FUN_00430150(&PTR_DAT_0053e978);
  return;
}

