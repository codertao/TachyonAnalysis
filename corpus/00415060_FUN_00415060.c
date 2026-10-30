
void FUN_00415060(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char local_80 [64];
  undefined1 local_40 [64];
  
  if ((g_FlightStateFlags & 4) == 0) {
    return;
  }
  if (DAT_005b1f0c == 0) {
    return;
  }
  FUN_004507d0(6,DAT_005b39b0 + DAT_005b39ac * 1000);
  FUN_004507d0(0,DAT_005b39a8);
  FUN_004507d0(5,DAT_005b22fc);
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_JOB_005342b0,&local_88);
  FUN_004507d0(7,local_88);
  FUN_004507d0(2,0);
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_JOB_REGION_005342a4,&local_84);
  local_80[0] = '\0';
  iVar1 = Var_GetTable(s_REGION_NAMES_00534294);
  if ((iVar1 != 0) && (iVar1 = Var_GetKeyByIndex(iVar1,local_84), iVar1 != 0)) {
    str_sprintf(local_80,s__s_REGION_00534288,iVar1);
  }
  if (((local_80[0] != '\0') && (iVar1 = Var_GetTable(&DAT_00534280), iVar1 != 0)) &&
     (iVar1 = Var_GetKeyByIndex(iVar1,local_88), iVar1 != 0)) {
    str_sprintf(local_40,s__s_STATUS_00534274,iVar1);
    Var_GetInt(DAT_005a6148,local_80,local_40,&local_8c);
    FUN_004507d0(2,local_8c);
  }
  if (DAT_005b3300 != 0) {
    FUN_0048b1b0(DAT_005b3300,2,&local_8c);
    FUN_004507d0(4,local_8c >> 0x10);
  }
  uVar2 = FUN_00455e60(&DAT_005b20e0,DAT_005b1f0c + 0xd0,DAT_005b9020);
  uVar3 = FUN_0048ec30(DAT_005b2104,uVar2);
  if (uVar3 < 0x19) {
    local_8c = 2;
  }
  else {
    uVar2 = FUN_00455e40(&DAT_005b20e0,DAT_005b1f0c + 0xd0);
    uVar3 = FUN_0048ec30(DAT_005b20e8,uVar2);
    if (uVar3 < 0x19) {
      uVar2 = FUN_00455e40(&DAT_005b20e0,DAT_005b1f0c + 0xd0);
      uVar3 = FUN_0048ec30(DAT_005b20f0,uVar2);
      if (uVar3 < 0x19) {
        local_8c = 1;
        goto LAB_00415265;
      }
    }
    local_8c = 0;
  }
LAB_00415265:
  FUN_004507d0(3,local_8c);
  return;
}

