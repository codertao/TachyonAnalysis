
int FUN_0040a9f0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xe0)) {
    if (((*(uint *)(*(int *)(param_1 + 0xdc) + 0x34) & 0x2000) != 0) &&
       (*(int *)(*(int *)(param_1 + 0xdc) + 0x7c) != 0)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

