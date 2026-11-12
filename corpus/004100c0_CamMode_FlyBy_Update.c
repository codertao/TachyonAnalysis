
/* sweep */

void CamMode_FlyBy_Update(int param_1)

{
  vec3 local_3c;
  vec3 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_30.x = *(int *)(param_1 + 0x4c);
  local_30.y = *(int *)(param_1 + 0x50);
  local_30.z = *(int *)(param_1 + 0x54);
  local_3c.x = 0;
  local_3c.y = 0x32000;
  local_3c.z = 0xfa0000;
  local_24 = 0xe38e3;
  local_20 = 0;
  local_1c = 0;
  Vec_RotateByOrientation(&local_24,&local_30);
  Rot_FromAngles(local_18,&local_30);
  some_rotate_by_global(&local_3c,&local_3c);
  DAT_005b9604 = local_3c.y + *(int *)(param_1 + 0x38);
  DAT_005b9600 = local_3c.x + *(int *)(param_1 + 0x34);
  DAT_005b9608 = local_3c.z + *(int *)(param_1 + 0x3c);
  local_3c.x = DAT_005b9600;
  local_3c.y = DAT_005b9604;
  local_3c.z = DAT_005b9608;
  Angles_ToLocal((int *)(param_1 + 0x4c),&DAT_005b95e8);
  Fade_StartDefault(0x3c,0);
  return;
}

