
/* sweep */

void Glow_SpawnTowardCamera(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  vec3 local_10;
  
  local_10.x = *param_1 - DAT_005b9600;
  local_10.y = param_1[1] - DAT_005b9604;
  local_10.z = param_1[2] - DAT_005b9608;
  call_Vec_NormalizeFast(&local_10);
  lVar1 = (longlong)local_10.x * (longlong)(GLBL_R_DIST_MAX_VAL + -0x960000);
  lVar2 = (longlong)local_10.y * (longlong)(GLBL_R_DIST_MAX_VAL + -0x960000);
  lVar3 = (longlong)local_10.z * (longlong)(GLBL_R_DIST_MAX_VAL + -0x960000);
  local_10.x = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + DAT_005b9600;
  local_10.y = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + DAT_005b9604;
  local_10.z = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) + DAT_005b9608;
  Glow_Spawn(&local_10,DAT_005a7418);
  return;
}

