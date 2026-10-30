
void FUN_00405000(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00401080(param_1,0xb);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return;
  }
  FUN_00404f60(param_1);
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_00404f00(*(int *)(param_1 + 0xfc));
  }
  return;
}

