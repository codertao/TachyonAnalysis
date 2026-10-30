
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e380(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint local_b4;
  char *local_b0;
  char *local_ac;
  float local_a4;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  str_sprintf(local_80,s__s___03d_00535678,param_2);
  uVar2 = FUN_0049c190(local_80);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s__s___s_____d_lines_found_0053565c,param_1 + 0x10,param_2,uVar2);
    FUN_0045d9d0(local_40,0);
  }
  uVar2 = FUN_0041e210(param_1);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_0048e3d0(param_1 + 0x4c,*(int *)(param_1 + 0x48) << 6,4,s_ACTOR_LINE_ARRAY_00535648,0xd000);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_0048e3d0(param_1 + 0x54,*(int *)(param_1 + 0x50) << 6,4,s_ACTOR_CMN_LINE_ARRAY_00535630,
                 0xd000);
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar8 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      str_sprintf(local_a0,local_80,uVar8);
      Cbin_GetScalar(local_a0,s_TEXT_ID_00535628,iVar6,0x10,0);
      Cbin_GetParam(local_a0,&PTR_DAT_00535624,iVar6 + 0x10,0x10,0,4,1);
      iVar3 = Cbin_GetParam(local_a0,&PTR_DAT_00535624,0,0,&local_a4,2,2);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar6 + 0x30) = 3;
      }
      else {
        local_ac = (char *)(longlong)ROUND(local_a4 * _DAT_0052e548);
        *(char **)(iVar6 + 0x30) = local_ac;
      }
      Cbin_GetParam(local_a0,s_VARIABLE_00535618,0,0,iVar6 + 0x34,1,1);
      Cbin_GetParam(local_a0,s_VARIABLE_00535618,0,0,iVar6 + 0x38,1,2);
      Cbin_GetParam(local_a0,s_INTERCEPTED_0053560c,0,0,iVar6 + 0x3c,1,1);
      iVar3 = Cbin_GetScalar(local_a0,&DAT_00535608,local_60,0x20,0);
      if (iVar3 != 0) {
        uVar2 = FUN_0041e250(param_1,local_60);
        *(undefined4 *)(iVar6 + 0x24) = uVar2;
      }
      FUN_0041e2a0(local_a0,iVar6,param_1);
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 0x40;
    } while (uVar8 < *(uint *)(param_1 + 0x48));
  }
  local_ac = *(char **)(param_1 + 0x54);
  local_b4 = 0;
  ppuVar5 = &PTR_s_HITBY_PLAYER_00535220;
  if (*(int *)(param_1 + 0x50) != 0) {
    local_b0 = local_ac + 0x10;
    do {
      iVar6 = FUN_0041e100(*ppuVar5,local_b0);
      if (iVar6 != 0) {
        uVar8 = 0xffffffff;
        pcVar7 = *ppuVar5;
        do {
          pcVar9 = pcVar7;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar9 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar7 = pcVar9 + -uVar8;
        pcVar9 = local_ac;
        for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        local_ac = local_ac + 0x40;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_b0 = local_b0 + 0x40;
        local_b4 = local_b4 + 1;
      }
      ppuVar5 = ppuVar5 + 1;
    } while (local_b4 < *(uint *)(param_1 + 0x50));
  }
  return;
}

