
/* sweep */

void Angles_ToLocal(vec3 *param_1,int param_2)

{
  undefined4 uVar1;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.z = 0;
  local_24.y = 0x10000;
  Rot_FromAngles(local_18,param_1);
  some_rotate_by_global(&local_24,&local_24);
  Rot_FromAnglesInv(local_18,param_2);
  Rot_ApplyCurrent(&local_24,&local_24);
  uVar1 = Math_Atan2(local_24.x,-local_24.y);
  *(undefined4 *)(param_2 + 8) = uVar1;
  return;
}

