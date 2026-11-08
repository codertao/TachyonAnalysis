
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040edd0(int *param_1,vec3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  vec3 local_3c;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  FUN_004b1bb0(local_18,param_2);
  fVar1 = (float)*param_1 * _DAT_0052e5d8;
  local_24.x = 0x10000;
  local_30.y = 0x10000;
  local_3c.z = 0x10000;
  fVar2 = (float)param_1[1] * _DAT_0052e5d8;
  local_24.y = 0;
  local_24.z = 0;
  fVar3 = (float)param_1[2] * _DAT_0052e5d8;
  local_30.x = 0;
  local_30.z = 0;
  local_3c.x = 0;
  local_3c.y = 0;
  some_rotate_by_global(&local_24,&local_24);
  some_rotate_by_global(&local_30,&local_30);
  some_rotate_by_global(&local_3c,&local_3c);
  FUN_004b9a50(((float)local_24.x * fVar1 + (float)local_24.y * fVar2 + (float)local_24.z * fVar3) *
               _DAT_0052e5d4,
               ((float)local_30.x * fVar1 + (float)local_30.y * fVar2 + (float)local_30.z * fVar3) *
               _DAT_0052e5d4,
               ((float)local_3c.x * fVar1 + (float)local_3c.y * fVar2 + (float)local_3c.z * fVar3) *
               _DAT_0052e5d4);
  return;
}

