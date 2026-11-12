
/* sweep */

undefined4 Mem_BlockContains(int *param_1,int *param_2,int param_3)

{
  if ((param_1 <= param_2) && (param_2 < (int *)(*param_1 + 0x10 + (int)param_1))) {
    return 1;
  }
  if ((param_1[3] != 0) && ((uint)param_1[3] < (uint)((int)param_2 + param_3))) {
    return 1;
  }
  return 0;
}

