
uint FUN_00493000(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int local_8;
  uint local_4;
  
  piVar4 = (int *)param_1[7];
  uVar3 = 0xffffffff;
  uVar5 = 0;
  local_8 = -1;
  local_4 = 0xffffffff;
  if (*(uint *)(param_1[6] + 0x308) != 0) {
    do {
      iVar1 = *piVar4;
      if ((((((*(uint *)(iVar1 + 4) & *param_1) != 0) &&
            ((param_1[1] & *(uint *)(iVar1 + 0x5c)) != 0)) &&
           ((param_1[5] & *(uint *)(iVar1 + 8)) != 0)) &&
          (((int)param_1[2] <= *(int *)(iVar1 + 0x60) && ((int)param_1[3] <= *(int *)(iVar1 + 0xc)))
          )) && (iVar2 = *(int *)(iVar1 + 0x34), local_8 < iVar2)) {
        if (*(int *)(iVar1 + 0x50) == 0) {
          uVar3 = local_4;
          if ((*(int *)(iVar1 + 0x58) <= *(int *)param_1[8]) &&
             (*(int *)(iVar1 + 0x44) + piVar4[8] < *(int *)piVar4[7])) {
            uVar3 = uVar5;
            local_8 = iVar2;
            local_4 = uVar5;
          }
        }
        else if (piVar4[0xb] != 0) {
          uVar3 = uVar5;
          local_8 = iVar2;
          local_4 = uVar5;
        }
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0xe;
    } while (uVar5 < *(uint *)(param_1[6] + 0x308));
  }
  return uVar3;
}

