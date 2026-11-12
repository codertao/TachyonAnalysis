
/* sweep: guess */

void ProjReplica_Orient(int param_1)

{
  int *piVar1;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = *(int *)(*(int *)(param_1 + 0xd4) + 0x54) * 2 * DAT_006af60c;
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  some_rotate_by_global(&local_24,&local_24);
  piVar1 = (int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x108) = *piVar1;
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x3c);
  *piVar1 = *piVar1 - local_24.x;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - local_24.y;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - local_24.z;
  return;
}

