
/* sweep */

void CapShip_DeathBlastPos(float param_1,vec3 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_20;
  float local_18 [6];
  
  iVar3 = (int)param_1;
  call_Math_SinCos3(local_18,*(int *)((int)param_1 + 0x4c),*(int *)((int)param_1 + 0x50),
                    *(int *)((int)param_1 + 0x54));
  call_Rot_SetSinCos(local_18);
  if (*(int *)((int)param_1 + 0xc4) == 0) {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x58) + 0x48);
  }
  else {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xc4) + 0x48);
  }
  if (iVar5 == 0) {
    param_2->x = *(int *)((int)param_1 + 0x34);
    param_2->y = *(int *)((int)param_1 + 0x38);
    param_2->z = *(int *)((int)param_1 + 0x3c);
    return;
  }
  if ((*(byte *)((int)param_1 + 0x18) & 0x10) == 0) {
    param_1 = 65536.0;
  }
  else {
    param_1 = (float)*(int *)((int)param_1 + 0x1c);
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
    param_2->x = 0;
    param_2->y = 0;
    param_2->z = 0;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x18);
    uVar4 = global_bad_shift_rng();
    uVar4 = (uVar4 >> 4) % (*(int *)(iVar5 + 0xc) - 1U);
    piVar1 = (int *)(iVar2 + uVar4 * 0x48);
    local_20 = (int)(longlong)ROUND(param_1 * **(float **)(iVar2 + uVar4 * 0x48));
    param_2->x = local_20;
    local_20 = (int)(longlong)ROUND(param_1 * *(float *)(*piVar1 + 4));
    param_2->y = local_20;
    local_20 = (int)(longlong)ROUND(param_1 * *(float *)(*piVar1 + 8));
    param_2->z = local_20;
    some_rotate_by_global(param_2,param_2);
  }
  param_2->x = param_2->x + *(int *)(iVar3 + 0x34);
  param_2->y = param_2->y + *(int *)(iVar3 + 0x38);
  param_2->z = param_2->z + *(int *)(iVar3 + 0x3c);
  return;
}

