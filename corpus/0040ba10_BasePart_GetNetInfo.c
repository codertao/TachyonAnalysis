
/* sweep */

undefined4 BasePart_GetNetInfo(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xdc) == 0) {
    return 0;
  }
  *(undefined2 *)(param_2 + 0x20) = 1;
  *(undefined2 *)(param_2 + 0x22) = *(undefined2 *)(*(int *)(param_1 + 0xd4) + 0x44);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xe8);
  return 1;
}

