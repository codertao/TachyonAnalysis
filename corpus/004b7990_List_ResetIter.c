
/* sweep: guess */

void List_ResetIter(int *param_1)

{
  param_1[3] = *(int *)(*param_1 + 0xc);
  *(int **)(*param_1 + 0xc) = param_1;
  return;
}

