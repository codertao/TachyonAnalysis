
void FUN_0041ba10(int param_1,int param_2)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x78) != param_2) {
      param_1 = *(int *)(param_1 + 8);
      if (param_1 == 0) {
        return;
      }
    }
    FUN_0041b950(param_1);
    FUN_0041b9b0(param_1);
  }
  return;
}

