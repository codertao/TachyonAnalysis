
/* rotate a 3-vector by an entity orientation basis (used to map control rates / local vel to world)
    */

void Vec_RotateByOrientation(int *param_1,vec3 *param_2)

{
  vec3 local_30;
  vec3 local_24;
  float local_18 [6];
  
  if (((*param_1 != 0) || (param_1[1] != 0)) || (param_1[2] != 0)) {
    call_Math_SinCos3(local_18,*param_1,param_1[1],param_1[2]);
    call_Rot_SetSinCos(local_18);
    some_rotate_by_global(&vec3_00559d10,&local_24);
    some_rotate_by_global(&vec3_00559d20,&local_30);
    call_Math_SinCos3(local_18,param_2->x,param_2->y,param_2->z);
    call_Rot_SetSinCos(local_18);
    some_rotate_by_global(&local_24,&local_24);
    some_rotate_by_global(&local_30,&local_30);
    call_Vec_BasisToAngles(&local_24,&local_30,param_2);
  }
  return;
}

