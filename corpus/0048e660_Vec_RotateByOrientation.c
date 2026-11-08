
/* rotate a 3-vector by an entity orientation basis (used to map control rates / local vel to world)
    */

void Vec_RotateByOrientation(int *param_1,undefined4 *param_2)

{
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  if (((*param_1 != 0) || (param_1[1] != 0)) || (param_1[2] != 0)) {
    call_math_todo_with_rotation(local_18,*param_1,param_1[1],param_1[2]);
    call_copy_mathresult_to_global(local_18);
    some_rotate_by_global(&vec3_00559d10,&local_24);
    some_rotate_by_global(&vec3_00559d20,&local_30);
    call_math_todo_with_rotation(local_18,*param_2,param_2[1],param_2[2]);
    call_copy_mathresult_to_global(local_18);
    some_rotate_by_global(&local_24,&local_24);
    some_rotate_by_global(&local_30,&local_30);
    FUN_004e071b(&local_24,&local_30,param_2);
  }
  return;
}

