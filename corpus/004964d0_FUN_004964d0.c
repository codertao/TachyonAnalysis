
void FUN_004964d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if ((0x7fff < *(int *)(param_2 + 0x54)) && (0xfff < *(int *)(param_2 + 0xcc))) {
    local_4 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(param_3 + 0x34));
    if ((0x3e7fff < local_4) && (local_4 <= *(int *)(param_2 + 0xcc))) {
      local_4 = local_4 + 0x12c000;
      Vec_DirAngles(param_5,&local_c,param_4);
    }
  }
  return;
}

