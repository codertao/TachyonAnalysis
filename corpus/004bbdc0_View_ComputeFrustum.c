
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: focal length from fov (+0x14), half-angles, then View_BuildFrustumPlanes */

void View_ComputeFrustum(int *param_1)

{
  float10 fVar1;
  float10 fVar2;
  int local_8;
  
  fVar1 = (float10)(*param_1 + 1 >> 1) * (float10)_DAT_0052f008;
  fVar2 = (float10)fptan(fVar1);
  local_8 = (int)(longlong)
                 ROUND(((float10)(param_1[1] + -2) * (float10)_DAT_0052ef60) / fVar2 +
                       (float10)_DAT_0052ef60);
  *(double *)(param_1 + 6) = (double)fVar1;
  *(double *)(param_1 + 8) = (double)fVar1;
  fVar1 = (float10)fpatan((float10)(param_1[2] + -1 >> 1) / (float10)local_8,(float10)1);
  *(double *)(param_1 + 10) = (double)fVar1;
  *(double *)(param_1 + 0xc) = (double)fVar1;
  local_8 = (int)(longlong)ROUND((double)local_8);
  param_1[5] = local_8;
  View_BuildFrustumPlanes(param_1);
  return;
}

