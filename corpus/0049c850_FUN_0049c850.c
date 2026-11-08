
void FUN_0049c850(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  piVar1 = *(int **)(PTR_global_mem_pool_root + 8);
  if (param_4 == -1) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 + *piVar1;
      if (piVar1[3] != 0) {
        *param_3 = *param_3 + ((piVar1[3] - *piVar1) - (int)piVar1) + -0x10;
      }
    }
  }
  else if (piVar1 != (int *)0x0) {
    do {
      if (piVar1[1] == param_4) {
        *param_1 = *param_1 + 1;
        *param_2 = *param_2 + *piVar1;
        if (piVar1[3] != 0) {
          *param_3 = *param_3 + ((piVar1[3] - *piVar1) - (int)piVar1) + -0x10;
        }
      }
      piVar1 = (int *)piVar1[3];
    } while (piVar1 != (int *)0x0);
    return;
  }
  return;
}

