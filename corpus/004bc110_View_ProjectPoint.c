
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: camera-space point -> screen x,y */

void View_ProjectPoint(undefined4 *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 local_8;
  
  fVar2 = (float)_DAT_006b0834;
  iVar1 = param_2[2];
  local_8 = (undefined4)(longlong)ROUND((float)*param_2 * (fVar2 / (float)iVar1) + _DAT_006b082c);
  *param_1 = local_8;
  local_8 = (undefined4)(longlong)ROUND(_DAT_006b0830 - (float)param_2[1] * (fVar2 / (float)iVar1));
  param_1[1] = local_8;
  return;
}

