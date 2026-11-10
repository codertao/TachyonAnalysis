
/* desired orientation = own orientation + (yaw,pitch,roll) offset */

void Ai_SetDesiredRelative(int param_1,int param_2,int param_3,int param_4)

{
  vec3 local_c;
  
  local_c.x = param_2;
  local_c.y = param_3;
  local_c.z = param_4;
  FUN_0048e720(&local_c,(vec3 *)(param_1 + 0x4c),(vec3 *)(param_1 + 0xdc));
  return;
}

