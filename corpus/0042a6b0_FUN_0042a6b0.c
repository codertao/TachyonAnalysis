
void FUN_0042a6b0(int param_1,int *param_2)

{
  code *pcVar1;
  vec3 *fvec;
  vec3 local_24;
  undefined1 auStack_18 [24];
  
  *param_2 = *(int *)(param_1 + 0x34);
  param_2[1] = *(int *)(param_1 + 0x38);
  param_2[2] = *(int *)(param_1 + 0x3c);
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = 0;
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) {
    fvec = (vec3 *)(*pcVar1)(param_1,0xb,0);
    if (fvec != (vec3 *)0x0) {
      FUN_004b1bb0(auStack_18,(vec3 *)(param_1 + 0x4c));
      some_rotate_by_global(fvec,&local_24);
    }
  }
  param_2[1] = param_2[1] + local_24.y;
  *param_2 = *param_2 + local_24.x;
  param_2[2] = param_2[2] + local_24.z;
  return;
}

