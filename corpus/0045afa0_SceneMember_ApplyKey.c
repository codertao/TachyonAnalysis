
/* sweep */

void SceneMember_ApplyKey(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  vec3 local_30;
  vec3 local_24;
  float local_18 [6];
  
  iVar1 = *(int *)(param_1 + 0x144);
  iVar2 = *(int *)(*param_2 + 0x30);
  if (iVar2 != 0) {
    local_30.x = param_2[4];
    local_30.y = param_2[5];
    local_30.z = param_2[6];
    if (iVar1 != 0) {
      call_Math_SinCos3(local_18,*(int *)(iVar1 + 0x4c),*(int *)(iVar1 + 0x50),
                        *(int *)(iVar1 + 0x54));
      call_Rot_SetSinCos(local_18);
      some_rotate_by_global(&local_30,&local_30);
    }
    if ((*(byte *)(param_2 + 0xd) & 8) != 0) {
      *(int *)(iVar2 + 0x34) = param_2[10];
      *(int *)(iVar2 + 0x38) = param_2[0xb];
      *(int *)(iVar2 + 0x3c) = param_2[0xc];
      *(int *)(iVar2 + 0x4c) = param_2[7];
      *(int *)(iVar2 + 0x50) = param_2[8];
      *(int *)(iVar2 + 0x54) = param_2[9];
    }
    if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
      if (iVar2 != iVar1) {
        local_30.x = local_30.x + *(int *)(iVar1 + 0x34);
        local_30.y = local_30.y + *(int *)(iVar1 + 0x38);
        local_30.z = local_30.z + *(int *)(iVar1 + 0x3c);
      }
      *(int *)(iVar2 + 0xa0) = (local_30.x - *(int *)(iVar2 + 0x34)) / *param_3;
      *(int *)(iVar2 + 0xa4) = (local_30.y - *(int *)(iVar2 + 0x38)) / *param_3;
      *(int *)(iVar2 + 0xa8) = (local_30.z - *(int *)(iVar2 + 0x3c)) / *param_3;
    }
    if ((*(byte *)(param_2 + 0xd) & 0x10) != 0) {
      local_30.y = param_2[5];
      local_30.x = param_2[4];
      local_30.z = param_2[6];
      *(int *)(iVar2 + 0xa0) = (local_30.x - *(int *)(iVar2 + 0x34)) / *param_3;
      *(int *)(iVar2 + 0xa4) = (local_30.y - *(int *)(iVar2 + 0x38)) / *param_3;
      *(int *)(iVar2 + 0xa8) = (local_30.z - *(int *)(iVar2 + 0x3c)) / *param_3;
    }
    if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
      if (iVar2 == iVar1) {
        local_24.x = param_2[1];
        local_24.y = param_2[2];
        local_24.z = param_2[3];
      }
      else {
        local_24.x = *(int *)(iVar1 + 0x4c) + param_2[1];
        local_24.y = *(int *)(iVar1 + 0x50) + param_2[2];
        local_24.z = *(int *)(iVar1 + 0x54) + param_2[3];
      }
      *(int *)(iVar2 + 0xac) = (local_24.x * 0x80 + *(int *)(iVar2 + 0x4c) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb0) = (local_24.y * 0x80 + *(int *)(iVar2 + 0x50) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb4) = (local_24.z * 0x80 + *(int *)(iVar2 + 0x54) * -0x80) / *param_3 >> 7;
    }
    if ((*(byte *)(param_2 + 0xd) & 0x20) != 0) {
      local_24.x = param_2[1];
      local_24.y = param_2[2];
      local_24.z = param_2[3];
      *(int *)(iVar2 + 0xac) = (local_24.x * 0x80 + *(int *)(iVar2 + 0x4c) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb0) = (local_24.y * 0x80 + *(int *)(iVar2 + 0x50) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb4) = (local_24.z * 0x80 + *(int *)(iVar2 + 0x54) * -0x80) / *param_3 >> 7;
    }
    if ((*(byte *)(param_2 + 0xd) & 2) != 0) {
      *(int *)(iVar2 + 0xa0) = local_30.x;
      *(int *)(iVar2 + 0xa4) = local_30.y;
      *(int *)(iVar2 + 0xa8) = local_30.z;
    }
    if ((*(byte *)(param_2 + 0xd) & 4) != 0) {
      Vec_AnglesToward((vec3 *)(param_2 + 1),(vec3 *)(iVar2 + 0x4c),&local_24);
      *(int *)(iVar2 + 0xac) =
           (local_24.x * 0x80 + ((vec3 *)(iVar2 + 0x4c))->x * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb0) = (local_24.y * 0x80 + *(int *)(iVar2 + 0x50) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb4) = (local_24.z * 0x80 + *(int *)(iVar2 + 0x54) * -0x80) / *param_3 >> 7;
    }
    if ((((*(byte *)(param_2 + 0xd) & 0x40) != 0) && (*(int *)(iVar2 + 0x8c) != 0)) &&
       (pcVar3 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x34), pcVar3 != (code *)0x0)) {
      (*pcVar3)(iVar2,0x1b,param_2[0xe]);
    }
  }
  return;
}

