
/* sweep */

void BasePart_ComputeAimAngles(undefined4 param_1,vec3 *param_2,undefined4 param_3)

{
  vec3 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_30.x = 0;
  local_30.y = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_30.z = 0x10000;
  Rot_FromAngles(local_18,param_2);
  some_rotate_by_global(&local_30,&local_30);
  Rot_FromAnglesInv(local_18,param_1);
  Rot_ApplyCurrent(&local_30,&local_30);
  Vec_DirAngles(&local_24,&local_30,param_3);
  return;
}

