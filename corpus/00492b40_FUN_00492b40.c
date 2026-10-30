
int FUN_00492b40(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    return (*(uint *)(param_1 + 0x50) >> 2) + *(uint *)(param_1 + 0x50);
  }
  return *(int *)(param_1 + 0x50);
}

