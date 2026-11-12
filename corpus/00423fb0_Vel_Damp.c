
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Vel_Damp(int param_1,undefined4 param_2,float *param_3)

{
  uint uVar1;
  undefined8 local_8;
  
  local_8._0_4_ = (undefined4)(longlong)ROUND((float)*(int *)(param_1 + 0xa0) * _DAT_0052e764);
  *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_8;
  local_8._0_4_ = (undefined4)(longlong)ROUND((float)*(int *)(param_1 + 0xa4) * _DAT_0052e764);
  *(undefined4 *)(param_1 + 0xa4) = (undefined4)local_8;
  local_8._0_4_ = (undefined4)(longlong)ROUND((float)*(int *)(param_1 + 0xa8) * _DAT_0052e764);
  *(undefined4 *)(param_1 + 0xa8) = (undefined4)local_8;
  if (param_3 != (float *)0x0) {
    uVar1 = MathAsm_VecLengthF_Fwd((undefined4 *)(param_1 + 0xa0));
    local_8 = (ulonglong)uVar1;
    *param_3 = (float)local_8;
  }
  return;
}

