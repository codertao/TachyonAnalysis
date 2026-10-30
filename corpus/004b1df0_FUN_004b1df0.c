
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1df0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int local_14;
  
  if (param_1[9] != 0) {
    iVar1 = param_1[10];
    iVar2 = *(int *)(iVar1 + 0x30);
    iVar3 = *(int *)(iVar1 + 0x34);
    iVar1 = *(int *)(iVar1 + 0x38);
    uVar6 = 0;
    if (*(char *)((int)param_1 + 0x1b) != '\0') {
      piVar4 = *(int **)(*param_1 + 0x4c);
      piVar5 = (int *)(*(int *)(param_1[9] + 0x28) + 0x34);
      do {
        local_14 = (int)(longlong)
                        ROUND((float)piVar4[1] * _DAT_0062c10c +
                              (float)*piVar4 * DAT_0062c100 + (float)piVar4[2] * _DAT_0062c118);
        piVar5[-1] = local_14 + iVar2;
        local_14 = (int)(longlong)
                        ROUND((float)piVar4[1] * _DAT_0062c110 +
                              (float)*piVar4 * DAT_0062c104 + (float)piVar4[2] * _DAT_0062c11c);
        *piVar5 = local_14 + iVar3;
        local_14 = (int)(longlong)
                        ROUND((float)piVar4[1] * _DAT_0062c114 +
                              (float)*piVar4 * _DAT_0062c108 + (float)piVar4[2] * _DAT_0062c120);
        piVar5[1] = local_14 + iVar1;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 3;
        piVar5 = piVar5 + 0xf;
      } while (uVar6 < *(byte *)((int)param_1 + 0x1b));
    }
  }
  return;
}

