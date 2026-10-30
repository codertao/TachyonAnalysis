
void FUN_004112d0(int param_1)

{
  Dcb_SetRangeFlags((undefined4 *)(param_1 + 0x15c),*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  if (((*(byte *)(*(int *)(param_1 + 0xdc) + 0x138) & 8) != 0) &&
     ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x130) & 1) == 0)) {
    FUN_00404c00(param_1);
    *(undefined4 *)(param_1 + 0x15c) = 40000;
  }
  return;
}

