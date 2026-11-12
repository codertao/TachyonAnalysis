
/* sweep */

void Dialog_LoadDependants(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar3 = (int)param_1;
  iVar4 = Cbin_CountEntries(s_DEPENDANTS_005356b4,s_ACTOR_005356c0);
  *(int *)((int)param_1 + 0x5c) = iVar4;
  if (iVar4 != 0) {
    Mem_AllocZeroTagged((undefined4 *)((int)param_1 + 0x60),iVar4 << 3,4,
                        s_ACTOR_DEPENDANT_ARRAY_0053569c,0xd000);
    uVar5 = Cbin_GetStringArray_Global(s_DEPENDANTS_005356b4,s_ACTOR_005356c0,0x20,1);
    Mem_AllocZeroTagged((undefined4 *)((int)param_1 + 100),uVar5,4,s_DEPENDANT_NAME_ARRAY_00535684,
                        0xd000);
    Cbin_SelectGroup(s_DEPENDANTS_005356b4);
    piVar1 = (int *)((int)param_1 + 0x5c);
    pcVar8 = *(char **)((int)param_1 + 100);
    uVar7 = 0;
    param_1 = *(undefined4 **)((int)param_1 + 0x60);
    if (*piVar1 != 0) {
      do {
        *param_1 = pcVar8;
        Cbin_IterField_Global(s_ACTOR_005356c0,pcVar8,0x20,0);
        uVar6 = 0xffffffff;
        pcVar9 = pcVar8;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        pcVar8 = pcVar8 + ~uVar6;
        uVar7 = uVar7 + 1;
        param_1 = param_1 + 2;
      } while (uVar7 < *(uint *)(iVar3 + 0x5c));
    }
  }
  return;
}

