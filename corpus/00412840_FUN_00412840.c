
void FUN_00412840(int param_1)

{
  byte bVar1;
  
  FUN_004155d0(param_1);
  bVar1 = *(byte *)(param_1 + 0xc0) & 0x3f;
  *(byte *)(param_1 + 0xc0) = bVar1;
  *(byte *)(param_1 + 0xc0) = *(byte *)(*(int *)(param_1 + 0xd4) + 0xc0) & 0xc0 | bVar1;
  if ((*(byte *)(*(int *)(param_1 + 0xe0) + 0x34) & 0x80) != 0) {
    FUN_0040acd0(param_1,*(int *)(param_1 + 0xe0));
  }
  return;
}

