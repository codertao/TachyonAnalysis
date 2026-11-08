
void FUN_004b1c10(int param_1,vec3 *param_2)

{
  undefined1 local_18 [24];
  
  call_math_todo_with_rotation
            (local_18,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
             *(undefined4 *)(param_1 + 0x3c));
  call_copy_mathresult_to_global(local_18);
  some_rotate_by_global(param_2,param_2);
  param_2->x = param_2->x + *(int *)(param_1 + 0x1c);
  param_2->y = param_2->y + *(int *)(param_1 + 0x20);
  param_2->z = param_2->z + *(int *)(param_1 + 0x24);
  return;
}

