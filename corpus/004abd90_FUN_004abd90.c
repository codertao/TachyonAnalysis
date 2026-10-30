
undefined4 FUN_004abd90(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined4 local_8;
  
  fVar1 = (float)DAT_00604450;
  if (fVar1 <= *param_1) {
    if (*param_3 < fVar1) {
      *param_4 = ((*param_2 - *param_4) * (fVar1 - *param_3)) / (*param_1 - *param_3) + *param_4;
      *param_3 = (float)DAT_00604450;
    }
  }
  else {
    if (*param_3 < fVar1) {
      return 0xffffffff;
    }
    *param_2 = ((fVar1 - *param_1) * (*param_4 - *param_2)) / (*param_3 - *param_1) + *param_2;
    *param_1 = (float)DAT_00604450;
  }
  fVar1 = (float)DAT_00604458;
  if (*param_1 <= fVar1) {
    if (fVar1 < *param_3) {
      *param_4 = ((*param_2 - *param_4) * (fVar1 - *param_3)) / (*param_1 - *param_3) + *param_4;
      *param_3 = (float)DAT_00604458;
    }
  }
  else {
    if (fVar1 < *param_3) {
      return 0xffffffff;
    }
    *param_2 = ((fVar1 - *param_1) * (*param_4 - *param_2)) / (*param_3 - *param_1) + *param_2;
    *param_1 = (float)DAT_00604458;
  }
  fVar1 = (float)DAT_00604454;
  if (fVar1 <= *param_2) {
    if (*param_4 < fVar1) {
      *param_3 = ((*param_1 - *param_3) * (fVar1 - *param_4)) / (*param_2 - *param_4) + *param_3;
      *param_4 = (float)DAT_00604454;
    }
  }
  else {
    if (*param_4 < fVar1) {
      return 0xffffffff;
    }
    local_8 = (int)(longlong)
                   ROUND(((fVar1 - *param_2) * (*param_3 - *param_1)) / (*param_4 - *param_2));
    *param_1 = (float)local_8 + *param_1;
    *param_2 = (float)DAT_00604454;
  }
  fVar1 = (float)DAT_0060445c;
  if (fVar1 < *param_2) {
    if (fVar1 < *param_4) {
      return 0xffffffff;
    }
    *param_1 = ((fVar1 - *param_2) * (*param_3 - *param_1)) / (*param_4 - *param_2) + *param_1;
    *param_2 = (float)DAT_0060445c;
    return 0;
  }
  if (fVar1 < *param_4) {
    *param_3 = ((*param_1 - *param_3) * (fVar1 - *param_4)) / (*param_2 - *param_4) + *param_3;
    *param_4 = (float)DAT_0060445c;
  }
  return 0;
}

