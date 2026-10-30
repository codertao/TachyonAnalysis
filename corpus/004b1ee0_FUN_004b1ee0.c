
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int local_8;
  
  iVar1 = *param_1;
  iVar2 = param_1[10];
  piVar4 = *(int **)(iVar1 + 0x50);
  uVar5 = 0;
  if (*(int *)(iVar1 + 0x38) != 0) {
    do {
      piVar3 = (int *)piVar4[3];
      local_8 = (int)(longlong)
                     ROUND((float)piVar4[2] * _DAT_0062c118 +
                           (float)*piVar4 * DAT_0062c100 + (float)piVar4[1] * _DAT_0062c10c);
      *piVar3 = local_8 + *(int *)(iVar2 + 0x30);
      local_8 = (int)(longlong)
                     ROUND((float)piVar4[2] * _DAT_0062c11c +
                           (float)*piVar4 * DAT_0062c104 + (float)piVar4[1] * _DAT_0062c110);
      piVar3[1] = local_8 + *(int *)(iVar2 + 0x34);
      local_8 = (int)(longlong)
                     ROUND((float)piVar4[2] * _DAT_0062c120 +
                           (float)*piVar4 * _DAT_0062c108 + (float)piVar4[1] * _DAT_0062c114);
      piVar3[2] = local_8 + *(int *)(iVar2 + 0x38);
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar5 < *(uint *)(iVar1 + 0x38));
  }
  return;
}

