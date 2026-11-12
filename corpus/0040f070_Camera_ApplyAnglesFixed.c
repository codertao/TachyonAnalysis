
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Camera_ApplyAnglesFixed(int *param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (float)*param_1 * _DAT_0052e5d8;
  local_8 = (float)param_1[1] * _DAT_0052e5d8;
  local_4 = (float)param_1[2] * _DAT_0052e5d8;
  FogSheets_FeedRotate(&local_c);
  return;
}

