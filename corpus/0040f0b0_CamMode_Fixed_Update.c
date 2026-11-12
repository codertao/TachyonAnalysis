
/* sweep: camera-mode table callback */

void CamMode_Fixed_Update(int param_1)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  vec3 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_24 = DAT_005b95e8;
  local_20 = DAT_005b95ec;
  local_1c = DAT_005b95f0;
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  local_30.x = *(int *)(DAT_005b1f0c + 0x530);
  local_30.y = *(int *)(DAT_005b1f0c + 0x534);
  local_30.z = *(int *)(DAT_005b1f0c + 0x538);
  some_rotate_by_global(&local_30,&local_30);
  DAT_005b9600 = *(int *)(param_1 + 0x34) + local_30.x;
  DAT_005b9604 = *(int *)(param_1 + 0x38) + local_30.y;
  DAT_005b9608 = *(int *)(param_1 + 0x3c) + local_30.z;
  DAT_005b95e8 = ((vec3 *)(param_1 + 0x4c))->x;
  DAT_005b95ec = *(undefined4 *)(param_1 + 0x50);
  DAT_005b95f0 = *(undefined4 *)(param_1 + 0x54);
  switch(*(undefined4 *)(DAT_005b95e0 + 0x2c)) {
  case 7:
    local_3c = 0xff800000;
    break;
  case 8:
    local_3c = 0x800000;
    break;
  case 9:
    local_3c = 0;
    local_38 = 0x800000;
    goto LAB_0040f1af;
  case 10:
    local_3c = 0x1000000;
    break;
  default:
    local_3c = 0;
  }
  local_38 = 0;
LAB_0040f1af:
  local_34 = 0;
  Vec_RotateByOrientation(&local_3c,&DAT_005b95e8);
  View_ShakeStep();
  if (g_CutsceneActive == 0) {
    Camera_LookAt(&local_3c,&local_24,&DAT_005b95e8);
    Camera_ApplyAnglesFixed(&local_3c);
    Camera_SetFromAngles(param_1 + 0xa0,&DAT_005b95e8);
  }
  return;
}

