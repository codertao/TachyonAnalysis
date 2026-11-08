
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466dc0(void)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  int *piVar4;
  int local_20;
  vec3 local_18;
  vec3 local_c;
  
  iVar1 = DAT_005897a4;
  local_18.x = 0;
  local_18.y = 0;
  local_18.z = 0;
  piVar4 = &DAT_006240e8;
  DAT_0062c0e8 = 0;
  DVar2 = timeGetTime();
  if (((DAT_005897a8 <= DVar2) && (DAT_005897ac == 0)) && (DAT_005b3394 != 0)) {
    DAT_005897a8 = DVar2 + 0x32;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if ((((*(byte *)(iVar1 + 0x50) & 1) == 0) && (*(int *)(iVar1 + 0x1c) != 0)) &&
         (*(int *)(iVar1 + 0x18) != 0)) {
        local_20 = (int)(longlong)ROUND(*(float *)(iVar1 + 0x30) * _DAT_0052e544);
        local_c.x = local_20;
        local_20 = (int)(longlong)ROUND(*(float *)(iVar1 + 0x34) * _DAT_0052e544);
        local_c.y = local_20;
        local_20 = (int)(longlong)ROUND(*(float *)(iVar1 + 0x38) * _DAT_0052e544);
        local_c.z = local_20;
        uVar3 = distance_between(&local_c,&local_18);
        if ((float)uVar3 * _DAT_0052e5d8 <= *(float *)(iVar1 + 0x2c)) {
          *piVar4 = iVar1;
          piVar4[1] = uVar3;
          piVar4 = piVar4 + 2;
          DAT_0062c0e8 = DAT_0062c0e8 + 1;
        }
      }
    }
    FUN_0052def7();
    FUN_00466c60();
  }
  return;
}

