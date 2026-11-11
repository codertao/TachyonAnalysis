
void FUN_0040c770(int param_1)

{
  vec3 *out;
  int iVar1;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(param_1 + 200);
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = 0;
  local_30.x = 0;
  local_30.y = 0x2710000;
  local_30.z = 0x9c40000;
  local_24.x = global_bad_shift_rng();
  local_24.x = local_24.x & 0x1ffffff;
  FUN_004b1bb0(local_18,&local_24);
  out = (vec3 *)(iVar1 + 0x34);
  call_Rot_AboutY(&local_30,out);
  local_30.x = 0;
  local_30.y = 0;
  local_30.z = 0;
  Vec_DirAngles(out,&local_30,iVar1 + 0x4c);
  return;
}

