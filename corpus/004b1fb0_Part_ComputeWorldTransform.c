
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: part matrix = ent angles x part angles x scale; places children and attach points
   (notes/capships.md) */

void Part_ComputeWorldTransform(byte *param_1,int *param_2,int param_3)

{
  float *out;
  int iVar1;
  vec3 local_60;
  vec3 local_54;
  vec3 local_48;
  vec3 local_3c;
  vec3 local_30;
  vec3 local_24;
  float local_18 [6];
  
  local_3c.y = 0;
  local_3c.z = 0;
  local_30.x = 0;
  local_30.z = 0;
  local_24.x = 0;
  local_24.y = 0;
  if ((*param_1 & 0x10) == 0) {
    local_3c.x = 0x10000;
  }
  else {
    local_3c.x = *(int *)(param_1 + 4);
  }
  out = (float *)param_2[10];
  local_30.y = local_3c.x;
  local_24.z = local_3c.x;
  call_Math_SinCos3(local_18,*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x38),
                    *(int *)(param_1 + 0x3c));
  call_Math_SinCos3(out,param_2[1],param_2[2],param_2[3]);
  call_Rot_SetSinCos(out);
  some_rotate_by_global(&local_3c,&local_60);
  some_rotate_by_global(&local_30,&local_54);
  some_rotate_by_global(&local_24,&local_48);
  for (iVar1 = param_2[8]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    call_Math_SinCos3(*(float **)(iVar1 + 0x28),*(int *)(iVar1 + 4),*(int *)(iVar1 + 8),
                      *(int *)(iVar1 + 0xc));
    call_Rot_SetSinCos(*(float **)(iVar1 + 0x28));
    some_rotate_by_global(&local_60,&local_60);
    some_rotate_by_global(&local_54,&local_54);
    some_rotate_by_global(&local_48,&local_48);
  }
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_60,&local_60);
  some_rotate_by_global(&local_54,&local_54);
  some_rotate_by_global(&local_48,&local_48);
  GLBL_3VEC3_output[0] = (float)local_60.x * _DAT_0052e5d8;
  GLBL_3VEC3_output[1] = (float)local_60.y * _DAT_0052e5d8;
  GLBL_3VEC3_output[2] = (float)local_60.z * _DAT_0052e5d8;
  GLBL_3VEC3_output[3] = (float)local_54.x * _DAT_0052e5d8;
  GLBL_3VEC3_output[4] = (float)local_54.y * _DAT_0052e5d8;
  GLBL_3VEC3_output[5] = (float)local_54.z * _DAT_0052e5d8;
  GLBL_3VEC3_output[6] = (float)local_48.x * _DAT_0052e5d8;
  GLBL_3VEC3_output[7] = (float)local_48.y * _DAT_0052e5d8;
  GLBL_3VEC3_output[8] = (float)local_48.z * _DAT_0052e5d8;
  if (*(char *)((int)param_2 + 0x1b) != '\0') {
    Part_PlaceChildrenAt(param_2);
  }
  if (param_3 == 0) {
    iVar1 = param_2[10];
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  if (*(int *)(*param_2 + 0x38) != 0) {
    Part_TransformAttachPoints(param_2);
  }
  return;
}

