
/* sweep: guess */

void Ship_ComputeForward(int param_1,undefined4 param_2,vec3 *param_3)

{
  int iVar1;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(param_1 + 0x8c);
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  some_rotate_by_global((vec3 *)(iVar1 + 0x5bc),param_3);
  param_3->x = param_3->x + *(int *)(param_1 + 0x34);
  param_3->y = param_3->y + *(int *)(param_1 + 0x38);
  param_3->z = param_3->z + *(int *)(param_1 + 0x3c);
  return;
}

