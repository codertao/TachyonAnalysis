
int FUN_004347b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xd8) + 0x5c) == -1) {
    return 0;
  }
  iVar1 = FUN_00434850(param_1);
  return *(int *)(*(int *)(param_1 + 0xd8) + 0x5c) * 0x20 + *(int *)(iVar1 + 0xf8);
}

