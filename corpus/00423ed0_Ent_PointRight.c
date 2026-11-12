
/* sweep */

void Ent_PointRight(int param_1,float param_2,int param_3,float *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong local_2c;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_2c._0_4_ = (int)(longlong)ROUND(param_2);
  local_24.x = (int)local_2c;
  local_24.y = 0;
  local_24.z = 0;
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  some_rotate_by_global(&local_24,&local_24);
  iVar1 = *param_5;
  iVar2 = param_5[1];
  *param_5 = iVar1 + local_24.x;
  iVar3 = param_5[2];
  param_5[1] = iVar2 + local_24.y;
  param_5[2] = iVar3 + local_24.z;
  local_2c._0_4_ = (int)(longlong)ROUND((float)(iVar1 + local_24.x) * *(float *)(param_3 + 0x3c));
  *param_5 = (int)local_2c;
  local_2c._0_4_ = (int)(longlong)ROUND((float)(iVar2 + local_24.y) * *(float *)(param_3 + 0x3c));
  param_5[1] = (int)local_2c;
  local_2c._0_4_ = (int)(longlong)ROUND((float)(iVar3 + local_24.z) * *(float *)(param_3 + 0x3c));
  param_5[2] = (int)local_2c;
  if (param_4 != (float *)0x0) {
    uVar4 = MathAsm_VecLengthF_Fwd(param_5);
    local_2c = (ulonglong)uVar4;
    *param_4 = (float)local_2c;
  }
  return;
}

