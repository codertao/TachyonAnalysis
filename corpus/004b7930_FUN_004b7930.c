
void FUN_004b7930(int param_1,int *param_2)

{
  if (param_1 == *param_2) {
    *param_2 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 4) == 0)) goto LAB_004b7980;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
LAB_004b7980:
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}

