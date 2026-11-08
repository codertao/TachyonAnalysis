
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* apply instance scale to model-space segment */

void Coll_ScaleSegment(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  
  fVar1 = _DAT_0052e544 / (float)param_3;
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  *param_2 = fVar1 * *param_2;
  param_2[1] = fVar1 * param_2[1];
  param_2[2] = fVar1 * param_2[2];
  return;
}

