
int something_list_related_get_next(int param_1)

{
  int next;
  
  next = *(int *)(param_1 + 4);
  if (next == 0) {
    return 0;
  }
  *(undefined4 *)(next + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(next + 8);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  *(undefined4 *)(next + 8) = 0;
  *(undefined4 *)(next + 4) = 0;
  return next;
}

