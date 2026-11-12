
/* sweep: DEFINE */

void VarEq_LoadCategory(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_28;
  undefined4 *local_24;
  char local_20 [32];
  
  iVar2 = Cbin_CountEntries(param_1,s_DEFINE_00559d80);
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 != 0) {
    Mem_AllocZeroTagged((undefined4 *)(param_1 + 0x24),iVar2 * 8,4,s_VAR_EQUATE_BUFFER_00559d6c,
                        DAT_0056aa90);
    uVar3 = Cbin_GetStringArray_Global(param_1,s_DEFINE_00559d80,0x20,1);
    Mem_AllocZeroTagged((undefined4 *)(param_1 + 0x28),uVar3,4,s_EQUATE_STRING_BUFFER_00559d54,
                        DAT_0056aa90);
    Cbin_SelectGroup(param_1);
    puVar7 = *(undefined4 **)(param_1 + 0x24);
    pcVar6 = *(char **)(param_1 + 0x28);
    local_28 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      local_24 = puVar7 + 1;
      do {
        *puVar7 = pcVar6;
        Cbin_FindParam_Global(s_DEFINE_00559d80,local_20,0x20,0,0,1);
        uVar4 = 0xffffffff;
        pcVar8 = local_20;
        do {
          pcVar9 = pcVar8;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar8 = pcVar9 + -uVar4;
        pcVar9 = pcVar6;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        Cbin_GetParamN(s_DEFINE_00559d80,0,0,local_24,1,2);
        uVar4 = 0xffffffff;
        pcVar8 = (char *)*puVar7;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + ~uVar4;
        local_28 = local_28 + 1;
        puVar7 = puVar7 + 2;
        local_24 = local_24 + 2;
      } while (local_28 < *(uint *)(param_1 + 0x20));
    }
  }
  return;
}

