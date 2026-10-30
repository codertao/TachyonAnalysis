
void FUN_00461100(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0xc4) = *(undefined2 *)(param_2 + 0x68);
  if (*(char *)(param_1 + 0x89) == '\0') {
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_2 + 0x7c) != 0x1002)) {
      *(undefined1 *)(param_1 + 0x89) = 5;
    }
    if ((((*(char *)(param_1 + 0x89) == '\0') && (DAT_005a4040 != 0)) &&
        (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_2 + 0x78) != DAT_005a40b4)) {
      *(undefined1 *)(param_1 + 0x89) = 4;
    }
  }
  return;
}

