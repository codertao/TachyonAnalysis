
void FUN_00413940(int param_1)

{
  vec3 *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xf7) == '\0') {
    pvVar1 = *(vec3 **)(param_1 + 0xf0);
    iVar4 = pvVar1->x - *(int *)(param_1 + 0x34) >> 3;
    if (iVar4 < 0x2001) {
      if (iVar4 < -0x2000) {
        iVar4 = -0x2000;
      }
    }
    else {
      iVar4 = 0x2000;
    }
    iVar2 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0xa0) = iVar4;
    iVar4 = pvVar1->y - iVar2 >> 3;
    if (iVar4 < 0x2001) {
      if (iVar4 < -0x2000) {
        iVar4 = -0x2000;
      }
    }
    else {
      iVar4 = 0x2000;
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0xa4) = iVar4;
    iVar4 = pvVar1->z - iVar3 >> 3;
    if (iVar4 < 0x2001) {
      if (iVar4 < -0x2000) {
        iVar4 = -0x2000;
      }
    }
    else {
      iVar4 = 0x2000;
    }
    ((vec3 *)(param_1 + 0x34))->x = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa8) = iVar4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0xa4) + iVar2;
    *(int *)(param_1 + 0x3c) = iVar3 + iVar4;
    uVar5 = distance_between((vec3 *)(param_1 + 0x34),pvVar1);
    if (uVar5 < 0x1f4000) {
      Nav_ReachedWaypoint(param_1,param_1 + 0xdc);
    }
  }
  return;
}

