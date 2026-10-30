
void FUN_0048e510(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_2;
  fVar1 = *param_1;
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *param_1 = fVar1 / fVar3;
  *param_2 = fVar2 / fVar3;
  return;
}

