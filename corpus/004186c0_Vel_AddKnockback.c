
/* sweep */

void Vel_AddKnockback(int *param_1,int *param_2,int *param_3)

{
  vec3 local_c;
  
  local_c.x = *param_1 - *param_2;
  local_c.y = param_1[1] - param_2[1];
  local_c.z = param_1[2] - param_2[2];
  call_Vec_Normalize(&local_c);
  param_3[1] = param_3[1] + local_c.y * 2;
  *param_3 = *param_3 + local_c.x * 2;
  param_3[2] = param_3[2] + local_c.z * 2;
  return;
}

