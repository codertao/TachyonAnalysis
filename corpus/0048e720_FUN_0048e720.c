
void FUN_0048e720(vec3 *param_1,vec3 *param_2,vec3 *result_out)

{
  vec3 local_30;
  vec3 local_24;
  vec3 local_18 [2];
  
  if (((param_1->x == 0) && (param_1->y == 0)) && (param_1->z == 0)) {
    result_out->x = param_2->x;
    result_out->y = param_2->y;
    result_out->z = param_2->z;
    return;
  }
  call_math_todo_with_rotation(local_18,param_1->x,param_1->y,param_1->z);
  call_copy_mathresult_to_global(local_18);
  some_rotate_by_global(&vec3_00559d10,&local_24);
  some_rotate_by_global(&vec3_00559d20,&local_30);
  call_math_todo_with_rotation(local_18,param_2->x,param_2->y,param_2->z);
  call_copy_mathresult_to_global(local_18);
  some_rotate_by_global(&local_24,&local_24);
  some_rotate_by_global(&local_30,&local_30);
  FUN_004e071b(&local_24,&local_30,result_out);
  return;
}

