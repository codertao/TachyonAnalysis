
void FUN_00409e80(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (*(int *)(param_2 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x34) = *param_3;
    *(undefined4 *)(param_1 + 0x38) = param_3[1];
    *(undefined4 *)(param_1 + 0x3c) = param_3[2];
    *(undefined4 *)(param_1 + 0x4c) = *param_4;
    *(undefined4 *)(param_1 + 0x50) = param_4[1];
    *(undefined4 *)(param_1 + 0x54) = param_4[2];
    DAT_005b9810 = param_1;
    return;
  }
  FUN_00409dd0(param_1,param_2,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 0x7c));
  return;
}

