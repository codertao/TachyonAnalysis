
/* sweep: guess */

void SpeedRing_Orient(int param_1,int param_2)

{
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.z = *(int *)(param_1 + 0xd4);
  local_24.x = 0;
  local_24.y = 0;
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  some_rotate_by_global(&local_24,&local_24);
  *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + local_24.x;
  *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + local_24.y;
  *(int *)(param_2 + 0xa8) = *(int *)(param_2 + 0xa8) + local_24.z;
  Vec_ToAngles((int *)(param_2 + 0xa0),*(undefined4 *)(param_1 + 0xd4));
  *(undefined4 *)(param_1 + 0xd8) = 8;
  Snd_PlayAtEnt(1,0xd,0,param_1,0x10000);
  return;
}

