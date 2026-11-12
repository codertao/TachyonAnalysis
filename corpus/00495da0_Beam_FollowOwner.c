
/* sweep */

void Beam_FollowOwner(int param_1)

{
  int iVar1;
  vec3 local_24;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(param_1 + 0xf4);
  ((vec3 *)(param_1 + 0x4c))->x = *(int *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  some_rotate_by_global((vec3 *)(param_1 + 0xfc),&local_24);
  *(int *)(param_1 + 0x34) = *(int *)(iVar1 + 0x34) + local_24.x;
  *(int *)(param_1 + 0x38) = *(int *)(iVar1 + 0x38) + local_24.y;
  *(int *)(param_1 + 0x3c) = *(int *)(iVar1 + 0x3c) + local_24.z;
  return;
}

