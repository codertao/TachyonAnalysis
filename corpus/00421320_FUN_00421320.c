
void FUN_00421320(int param_1)

{
  if ((*(int *)(param_1 + 0x104) != 0) && (*(int *)(param_1 + 200) != 0)) {
    FUN_00465ff0(*(int *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
  }
  FUN_0041b8c0(param_1);
  FUN_0045cf80(param_1,*(int *)(param_1 + 100) + 0x14);
  return;
}

