
/* sweep */

void Rect_Union(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  iVar1 = *param_1;
  if (*param_2 <= *param_1) {
    iVar1 = *param_2;
  }
  *param_3 = iVar1;
  iVar1 = param_1[1];
  if (param_2[1] <= param_1[1]) {
    iVar1 = param_2[1];
  }
  param_3[1] = iVar1;
  iVar1 = param_1[2];
  if (param_1[2] <= param_2[2]) {
    iVar1 = param_2[2];
  }
  param_3[2] = iVar1;
  if (param_2[3] < param_1[3]) {
    param_3[3] = param_1[3];
    return;
  }
  param_3[3] = param_2[3];
  return;
}

