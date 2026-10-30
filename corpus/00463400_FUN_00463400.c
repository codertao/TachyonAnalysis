
void FUN_00463400(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar1 = *(int *)(param_1 + 0xdc) + -1;
    *(int *)(param_1 + 0xdc) = iVar1;
    FUN_00463200(param_1,*(int *)(param_1 + 0x8c) + 0x598,*(undefined4 *)(param_1 + 0x104),iVar1);
  }
  return;
}

