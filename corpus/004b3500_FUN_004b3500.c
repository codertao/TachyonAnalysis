
undefined4 FUN_004b3500(float *param_1,int param_2)

{
  if ((((*(float *)(param_2 + 0x28) <= *param_1) && (*param_1 <= *(float *)(param_2 + 0x2c))) &&
      (*(float *)(param_2 + 0x30) <= param_1[1])) &&
     (((param_1[1] <= *(float *)(param_2 + 0x34) && (*(float *)(param_2 + 0x38) <= param_1[2])) &&
      (param_1[2] <= *(float *)(param_2 + 0x3c))))) {
    return 1;
  }
  return 0;
}

