
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b24d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 local_14;
  
  iVar1 = param_1[2];
  fVar2 = (float)*param_1 * _DAT_00668fac - (float)param_1[1] * _DAT_00668fa8;
  fVar3 = (float)*param_1 * _DAT_00668fa8 + (float)param_1[1] * _DAT_00668fac;
  local_14 = (undefined4)(longlong)ROUND(_DAT_00668fa0 * (float)iVar1 + _DAT_00668fa4 * fVar3);
  param_2[1] = local_14;
  fVar3 = _DAT_00668fa4 * (float)iVar1 - _DAT_00668fa0 * fVar3;
  local_14 = (undefined4)(longlong)ROUND(_DAT_00668f9c * fVar3 - _DAT_00668f98 * fVar2);
  param_2[2] = local_14;
  local_14 = (undefined4)(longlong)ROUND(_DAT_00668f98 * fVar3 + _DAT_00668f9c * fVar2);
  *param_2 = local_14;
  return;
}

