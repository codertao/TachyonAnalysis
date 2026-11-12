
/* segment -> model local: minus instance pos (+0x1c), inverse rotate (+0x34..), fixed -> float */

void Coll_SegmentToModelSpace(float *param_1,float *param_2,int *param_3,int *param_4,int param_5)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18 [6];
  
  local_30 = *param_3 - *(int *)(param_5 + 0x1c);
  local_2c = param_3[1] - *(int *)(param_5 + 0x20);
  local_28 = param_3[2] - *(int *)(param_5 + 0x24);
  local_24 = *param_4 - *(int *)(param_5 + 0x1c);
  local_20 = param_4[1] - *(int *)(param_5 + 0x20);
  local_1c = param_4[2] - *(int *)(param_5 + 0x24);
  call_Math_SinCos3(local_18,-*(int *)(param_5 + 0x34),-*(int *)(param_5 + 0x38),
                    -*(int *)(param_5 + 0x3c));
  call_Rot_SetSinCos(local_18);
  Rot_ApplyCurrent(&local_30,&local_30);
  Rot_ApplyCurrent(&local_24,&local_24);
  *param_1 = (float)local_30 * f_global_scalar_maybe;
  param_1[1] = (float)local_2c * f_global_scalar_maybe;
  param_1[2] = (float)local_28 * f_global_scalar_maybe;
  *param_2 = (float)local_24 * f_global_scalar_maybe;
  param_2[1] = (float)local_20 * f_global_scalar_maybe;
  param_2[2] = (float)local_1c * f_global_scalar_maybe;
  return;
}

