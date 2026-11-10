
void FUN_00404f40(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x30c);
  *piVar1 = *piVar1 + -1;
  *(undefined4 *)(param_1 + 0xa4) = 3000;
  if (*piVar1 == 0) {
    Ai_ReacquireTarget(param_1);
  }
  return;
}

