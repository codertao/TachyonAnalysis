
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498a20(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar8 = &DAT_005653a0;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_10 = 0;
  local_c = 0;
  local_20 = 0;
  local_8 = 0;
  local_1c = 0;
  local_4 = 0;
  local_18 = 0;
  puVar8 = &DAT_00565320;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_14 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  _DAT_00565340 = 10000000;
  DAT_00565358 = '\0';
  _DAT_0056535c = 0xffff;
  _DAT_0056535e = 0;
  _DAT_00565360 = 0;
  _DAT_00565368 = 0xffffffff;
  _DAT_0056536c = 0;
  _DAT_00565370 = 0;
  _DAT_00565374 = 0xffffffff;
  _DAT_00565378 = 0;
  _DAT_0056537c = 0xffffffff;
  _DAT_00565364 = 0xffffffff;
  _DAT_00565380 = 0xffffffff;
  _DAT_00565384 = 0xffffffff;
  _DAT_00565388 = 1;
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_WINGMAN_0054a954,&local_3c);
  if (local_3c != 0) {
    Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_WINGMAN_IS_BENCHED_00550284,&local_38);
    if (local_38 == 0) {
      DAT_005653a8 = local_3c;
      uVar2 = Var_GetTable(s_WINGMEN_0054adb0);
      iVar4 = Var_GetKeyByIndex(uVar2,local_3c);
      if (iVar4 != 0) {
        iVar3 = Cbin_Open(s_wngfiles_cfg_0055d68c);
        if (iVar3 != 0) {
          iVar4 = Cbin_GetParam(s_WNG_FILES_0055d680,iVar4,&local_20,0x10,0,4,1);
          if (iVar4 == 0) {
            local_20 = 0;
            local_1c = 0;
            local_18 = 0;
            local_14 = 0;
          }
          Cbin_Close();
          if ((char)local_20 != '\0') {
            iVar4 = Cbin_Open(&local_20);
            if (iVar4 != 0) {
              iVar4 = Cbin_GetParam(&DAT_0054adb8,s_DESFILE_0054adc0,&local_10,0x10,0,4,1);
              if (iVar4 == 0) {
                local_10 = 0;
                local_c = 0;
                local_8 = 0;
                local_4 = 0;
              }
              iVar4 = Cbin_GetParam(&DAT_0054adb8,s_SCRFILE_0055d678,&local_30,0x10,0,4,1);
              if (iVar4 == 0) {
                local_30 = iVar4;
                local_2c = iVar4;
                local_28 = iVar4;
                local_24 = iVar4;
              }
              uVar5 = 0xffffffff;
              piVar7 = &local_30;
              do {
                piVar9 = piVar7;
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                piVar9 = (int *)((int)piVar7 + 1);
                iVar4 = *piVar7;
                piVar7 = piVar9;
              } while ((char)iVar4 != '\0');
              uVar5 = ~uVar5;
              puVar8 = (undefined4 *)((int)piVar9 - uVar5);
              puVar10 = (undefined4 *)&DAT_005653b0;
              for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar10 = puVar10 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
              Cbin_Close();
              if ((char)local_10 != '\0') {
                iVar4 = Desc_CreateByType(&local_10,&local_34,0,0,0,0xffffffff);
                if (iVar4 == 0) {
                  cVar1 = FUN_00435930(s_PLAYER_MAIN_VARS_00534198,s_PLAYER_SIDE_0053f968);
                  DAT_00565358 = cVar1 + '\x01';
                  iVar4 = FUN_00435240(&DAT_00563e78,&DAT_00563e84);
                  if (iVar4 == 0) {
                    FUN_00432e00(s_No_Wingman_Start_Position_Found_0055d648,
                                 s_wingman_Init___0055d668);
                    puVar8 = &DAT_00563e78;
                    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar8 = 0;
                      puVar8 = puVar8 + 1;
                    }
                  }
                  Sped_ConstructEntity(&DAT_00565320,local_34,DAT_005a5548,&DAT_00563e78,0);
                  iVar4 = DAT_00565348;
                  DAT_005653a0 = DAT_00565348;
                  DAT_005653a4 = &DAT_00565320;
                  if ((char)local_30 != '\0') {
                    FUN_0041f590(&local_30,DAT_00565348,&DAT_005a5dd0);
                  }
                  DAT_005653ac = 0;
                  iVar3 = *(int *)(*(int *)(iVar4 + 0x8c) + 0x308);
                  if (iVar3 != 0) {
                    piVar7 = (int *)(iVar4 + 0x13c);
                    while ((*(byte *)(*piVar7 + 8) & 2) == 0) {
                      iVar3 = iVar3 + -1;
                      piVar7 = piVar7 + 0xe;
                      if (iVar3 == 0) {
                        return;
                      }
                    }
                    DAT_005653ac = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

