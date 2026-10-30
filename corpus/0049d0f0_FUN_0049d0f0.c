
void FUN_0049d0f0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[7] != 0) {
      FUN_0049d050(param_1);
      FUN_0049c530(param_1[7]);
      param_1[7] = 0;
    }
    if (param_1[8] != 0) {
      FUN_0049c530(param_1[8]);
      param_1[8] = 0;
    }
    if (param_1[0xe] != 0) {
      FUN_0049dd10(param_1);
    }
    for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}

