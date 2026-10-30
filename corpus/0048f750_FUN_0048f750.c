
void FUN_0048f750(int param_1)

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
  int *local_24;
  char local_20 [32];
  
  iVar2 = Cbin_CountEntries(param_1,&DAT_00559de0);
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 != 0) {
    FUN_0048e3d0((undefined4 *)(param_1 + 0x28),iVar2 * 0xc,4,s_VAR_VAR_BUFFER_00559dd0,DAT_0056aa90
                );
    uVar3 = FUN_0049c0f0(param_1,&DAT_00559de0,0x20,1);
    FUN_0048e3d0((undefined4 *)(param_1 + 0x2c),uVar3,4,s_VAR_STRING_BUFFER_00559dbc,DAT_0056aa90);
    Cbin_SelectGroup(param_1);
    puVar7 = *(undefined4 **)(param_1 + 0x28);
    pcVar6 = *(char **)(param_1 + 0x2c);
    local_28 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      local_24 = puVar7 + 1;
      do {
        *puVar7 = pcVar6;
        FUN_0049bdb0(&DAT_00559de0,local_20,0x20,0,0,1);
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
        FUN_0049b930(&DAT_00559de0,0,0,local_24,1,2);
        if (DAT_0056aa94 != 0) {
          FUN_0049b930(&DAT_00559de0,local_20,0x20,0,0,3);
          iVar2 = Var_GetTable(local_20);
          local_24[1] = iVar2;
        }
        uVar4 = 0xffffffff;
        pcVar8 = (char *)*puVar7;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + ~uVar4;
        if (*(uint *)(param_1 + 0x24) < *local_24 + 1U) {
          *(uint *)(param_1 + 0x24) = *local_24 + 1U;
        }
        local_28 = local_28 + 1;
        puVar7 = puVar7 + 3;
        local_24 = local_24 + 3;
      } while (local_28 < *(uint *)(param_1 + 0x20));
    }
  }
  return;
}

