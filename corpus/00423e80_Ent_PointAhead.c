
/* sweep */

void Ent_PointAhead(int param_1,float param_2)

{
  int local_2c;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.y = 0;
  local_2c = (int)(longlong)ROUND(param_2);
  local_24.z = local_2c;
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  some_rotate_by_global(&local_24,(vec3 *)(param_1 + 0xa0));
  return;
}

