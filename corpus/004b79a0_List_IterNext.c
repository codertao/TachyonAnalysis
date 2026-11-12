
/* sweep: guess */

void List_IterNext(int *param_1)

{
  if ((char)param_1[5] != '\x01') {
    param_1[3] = *(int *)(*param_1 + 0x10);
    *(int **)(*param_1 + 0x10) = param_1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

