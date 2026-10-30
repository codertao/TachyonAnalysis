
void FUN_00401e20(int param_1)

{
  if (param_1 == DAT_005653a0) {
    if (*(int *)(param_1 + 0x354) != 0) {
      FUN_00401080(param_1,0xd);
      return;
    }
LAB_00401e5d:
    FUN_00401080(param_1,4);
    return;
  }
  if (*(int *)(param_1 + 0xf8) == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0xf0) != 0) {
      FUN_00401080(param_1,5);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(*(int *)(param_1 + 0xf8) + 0x104) == 5) goto LAB_00401e5d;
  }
  FUN_00401080(param_1,0);
  return;
}

