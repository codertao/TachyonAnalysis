
/* within 360-range, or inside TARGET_SCAN_ANGLE cone */

bool Ai_InScanCone(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_3 <= *(uint *)(param_4 + 0x10)) {
    return true;
  }
  local_c = *(int *)(param_2 + 0x34) - *(int *)(param_1 + 0x34);
  local_8 = *(int *)(param_2 + 0x38) - *(int *)(param_1 + 0x38);
  local_4 = *(int *)(param_2 + 0x3c) - *(int *)(param_1 + 0x3c);
  FUN_004e054e(&local_c);
  iVar1 = FUN_004e058e(param_4 + 0x20,&local_c);
  if (iVar1 < 0) {
    return false;
  }
  return *(int *)(param_4 + 0x14) <= iVar1;
}

