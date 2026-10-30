
/* region/sector nav; walks region table; sets OVERRIDE_REGION/SECTOR */

void Nav_SetOverrideSector(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_REGION_00548d14,&local_c);
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_REGION_0053fc08,local_8);
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_SECTOR_0053fbf4,local_4);
  if (local_c != param_1) {
    uVar4 = 0;
    piVar2 = &DAT_005713e4;
    piVar5 = (int *)0x0;
    if (DAT_005714e0 != 0) {
      do {
        piVar3 = piVar2;
        if ((*piVar3 != 0) && (*(int *)(*piVar3 + 0x8c) != local_c)) {
          if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, iVar1 != 0)) {
            param_1 = *(int *)(iVar1 + 0x8c);
            param_2 = *(undefined4 *)(iVar1 + 0x88);
          }
          break;
        }
        uVar4 = uVar4 + 1;
        piVar2 = piVar3 + 1;
        piVar5 = piVar3;
      } while (uVar4 < DAT_005714e0);
    }
  }
  if (DAT_00571340 != 0) {
    FUN_004376f0(param_1,param_2,*(undefined4 *)(DAT_0058b064 + 100));
  }
  Var_SetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_REGION_00552710,param_1);
  Var_SetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_SECTOR_00552700,param_2);
  return;
}

