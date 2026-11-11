
/* within 360-range, or inside TARGET_SCAN_ANGLE cone */

bool Ai_InScanCone(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  vec3 local_c;
  
  if (param_3 <= *(uint *)(param_4 + 0x10)) {
    return true;
  }
  local_c.x = *(int *)(param_2 + 0x34) - *(int *)(param_1 + 0x34);
  local_c.y = *(int *)(param_2 + 0x38) - *(int *)(param_1 + 0x38);
  local_c.z = *(int *)(param_2 + 0x3c) - *(int *)(param_1 + 0x3c);
  call_Vec_NormalizeFast(&local_c);
  iVar1 = FUN_004e058e(param_4 + 0x20,&local_c);
  if (iVar1 < 0) {
    return false;
  }
  return *(int *)(param_4 + 0x14) <= iVar1;
}

