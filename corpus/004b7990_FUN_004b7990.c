
void FUN_004b7990(int *param_1)

{
  param_1[3] = *(int *)(*param_1 + 0xc);
  *(int **)(*param_1 + 0xc) = param_1;
  return;
}

