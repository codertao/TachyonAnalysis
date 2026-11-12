
/* sweep */

void Ent_GetForwardVec(vec3 *param_1,vec3 *param_2)

{
  undefined1 local_18 [24];
  
  param_2->x = 0;
  param_2->y = 0;
  param_2->z = 0x10000;
  Rot_FromAngles(local_18,param_1);
  some_rotate_by_global(param_2,param_2);
  return;
}

