
/* sweep: guess */

void Vec_ToAngles(int *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong local_8;
  
  fVar4 = (float)param_1[2];
  fVar3 = (float)param_1[1];
  fVar2 = (float)*param_1;
  local_8 = (ulonglong)param_2;
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar5 = (float)local_8;
  if (fVar5 < fVar1) {
    local_8._0_4_ = (int)(longlong)ROUND((fVar2 / fVar1) * fVar5);
    *param_1 = (int)local_8;
    local_8._0_4_ = (int)(longlong)ROUND((fVar3 / fVar1) * fVar5);
    param_1[1] = (int)local_8;
    local_8._0_4_ = (int)(longlong)ROUND((fVar4 / fVar1) * fVar5);
    param_1[2] = (int)local_8;
    return;
  }
  return;
}

