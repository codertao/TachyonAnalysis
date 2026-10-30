
void FUN_00402700(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0x90) + 0xd0) & 0x1c) != 0) {
    FUN_00402630(param_1);
    return;
  }
  FUN_00401080(param_1,1);
  return;
}

