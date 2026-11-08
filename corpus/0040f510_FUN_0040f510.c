
void FUN_0040f510(int param_1)

{
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = -0x400000;
  local_24.y = 0x800000;
  local_24.z = 0x800000;
  if (param_1 != 0) {
    call_math_todo_with_rotation
              (local_18,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
    call_copy_mathresult_to_global(local_18);
    some_rotate_by_global(&local_24,&local_24);
    DAT_005b9600 = *(int *)(param_1 + 0x34) + local_24.x;
    DAT_005b9604 = *(int *)(param_1 + 0x38) + local_24.y;
    DAT_005b9608 = *(int *)(param_1 + 0x3c) + local_24.z;
    FUN_0040f380(&DAT_005b9600,param_1 + 0x34,&DAT_005b95e8);
    FUN_0040f460(param_1,&DAT_005b95e8);
  }
  return;
}

