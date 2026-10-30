
void FUN_00409ee0(int param_1)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xe0)) {
    *(int *)(*(int *)(param_1 + 0xdc) + 0x7c) = param_1;
  }
  return;
}

