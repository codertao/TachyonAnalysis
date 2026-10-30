
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3eb0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int local_8;
  
  if (param_1[9] != 0) {
    uVar3 = 0;
    if (*(char *)((int)param_1 + 0x1b) != '\0') {
      piVar1 = *(int **)(*param_1 + 0x4c);
      piVar2 = (int *)(*(int *)(param_1[9] + 0x28) + 0x34);
      do {
        local_8 = (int)(longlong)
                       ROUND((float)piVar1[2] * _DAT_0062c118 +
                             (float)*piVar1 * DAT_0062c100 + (float)piVar1[1] * _DAT_0062c10c);
        piVar2[-1] = local_8 + *param_2;
        local_8 = (int)(longlong)
                       ROUND((float)piVar1[2] * _DAT_0062c11c +
                             (float)*piVar1 * DAT_0062c104 + (float)piVar1[1] * _DAT_0062c110);
        *piVar2 = local_8 + param_2[1];
        local_8 = (int)(longlong)
                       ROUND((float)piVar1[2] * _DAT_0062c120 +
                             (float)*piVar1 * _DAT_0062c108 + (float)piVar1[1] * _DAT_0062c114);
        piVar2[1] = local_8 + param_2[2];
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 3;
        piVar2 = piVar2 + 0xf;
      } while (uVar3 < *(byte *)((int)param_1 + 0x1b));
    }
  }
  return;
}

