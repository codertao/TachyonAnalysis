
void FUN_00410d90(int param_1)

{
  if (((*(uint *)(param_1 + 0x128) ^ DAT_005897e4) & 0xf) == 0) {
    FUN_004561b0(param_1 + 0x144,*(int *)(param_1 + 0x8c) + 0xd0,0x12,1);
  }
  Dcb_SetRangeFlags(param_1 + 0x144,*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  return;
}

