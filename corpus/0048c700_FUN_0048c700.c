
void FUN_0048c700(int param_1,int param_2)

{
  *(int *)(&DAT_0056abd4 + param_1 * 0x170) = param_2;
  if (param_2 != 0) {
    FUN_0048c6b0();
    return;
  }
  FUN_0048c6d0(param_1,2);
  return;
}

