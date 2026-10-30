
void FUN_00404ed0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x30c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00404f60(param_1);
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_00404f00(*(int *)(param_1 + 0xfc));
    }
  }
  return;
}

