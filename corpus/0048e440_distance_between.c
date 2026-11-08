
void distance_between(vec3 *param_1,vec3 *param_2)

{
  int local_c;
  int local_8;
  int local_4;
  
  local_c = param_1->x - param_2->x;
  local_8 = param_1->y - param_2->y;
  local_4 = param_1->z - param_2->z;
  call_approx_vec_length(&local_c);
  return;
}

