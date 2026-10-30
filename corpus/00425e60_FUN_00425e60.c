
void FUN_00425e60(int param_1)

{
  if ((*(short *)(param_1 + 0xce) == 0) && ((*(byte *)(*(int *)(param_1 + 0xd8) + 0xe4) & 2) == 0))
  {
    FUN_0042e060(param_1);
  }
  FUN_004b19f0(param_1 + 0x18);
  FUN_004b19a0(*(int *)(*(int *)(param_1 + 0xd8) + 0xd8) + 0x18);
  FUN_00425d10(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xd8));
  FUN_004b19a0(*(int *)(param_1 + 0xd8) + 0x18);
  FUN_00425d60(*(undefined4 *)(param_1 + 0xd8),1);
  return;
}

