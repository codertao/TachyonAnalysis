
void FUN_0040eef0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_30.z = 0x10000;
  local_24.y = 0x10000;
  local_30.x = 0;
  local_30.y = 0;
  local_24.x = 0;
  local_24.z = 0;
  call_math_todo_with_rotation(local_18,*param_3,param_3[1],param_3[2]);
  call_copy_mathresult_to_global(local_18);
  some_rotate_by_global(&local_30,&local_30);
  some_rotate_by_global(&local_24,&local_24);
  call_math_todo_with_rotation(local_18,-*param_2,-param_2[1],-param_2[2]);
  call_copy_mathresult_to_global(local_18);
  FUN_004b2410(&local_30,&local_30);
  FUN_004b2410(&local_24,&local_24);
  iVar1 = FUN_004e086c(local_30.x,-local_30.z);
  call_math_todo_with_rotation(local_18,iVar1,0,0);
  call_copy_mathresult_to_global(local_18);
  FUN_0052dc22(&local_30,&local_30);
  FUN_0052dc22(&local_24,&local_24);
  iVar2 = FUN_004e086c(local_30.y,-local_30.z);
  call_math_todo_with_rotation(local_18,0,iVar2,0);
  call_copy_mathresult_to_global(local_18);
  FUN_0052dccb(&local_24,&local_24);
  iVar3 = FUN_004e086c(local_24.x,-local_24.y);
  param_1[1] = iVar2 * -0x80 >> 7;
  *param_1 = iVar1 * -0x80 >> 7;
  param_1[2] = (iVar3 << 7) >> 7;
  return;
}

