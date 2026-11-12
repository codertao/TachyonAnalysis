
/* sweep: PLAYER_MOUNTED_HARDWARE */

void Systems_LoadMountedHardware(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  local_4c = 0xffffffff;
  local_50 = 0xffffffff;
  local_44 = Var_GetTable(s_CARD_TYPES_00536494);
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_48);
  str_sprintf(local_20,s_SHIP__02d_DATA_0053643c,local_48);
  Var_FindSection(local_20);
  Var_LookupEquate(s_CARD_STATE_00536480,s_MOUNTED_0053648c,&DAT_005b1ba0);
  Var_LookupEquate(s_CARD_STATE_00536480,s_INSTALLED_00536414,&DAT_005b1ba4);
  Var_LookupEquate(s_CARD_STATE_00536480,s_DISABLED_00536474,&DAT_005b1ba8);
  Var_ResetSection(DAT_005a6148,s_PLAYER_MOUNTED_HARDWARE_0053645c);
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    str_sprintf(local_40,s_SLOT__d_00536454,uVar1);
    iVar2 = Var_GetInt(DAT_005a6148,local_20,local_40,&local_50);
    if (iVar2 == 0) {
      return;
    }
    uVar3 = Var_GetKeyByIndex(local_44,local_50);
    str_sprintf(local_40,s_SLOT__d_STATE_00536420,uVar1);
    Var_GetInt(DAT_005a6148,local_20,local_40,&local_4c);
    Systems_MountCard(uVar4,local_4c,uVar3,param_1);
    Var_SetInt(DAT_005a6148,s_PLAYER_MOUNTED_HARDWARE_0053645c,uVar3,param_1 != 0);
    if (GLBL_SOME_CONTEXT != 0) {
      uVar3 = Var_KeyIndex(s_PLAYER_MOUNTED_HARDWARE_0053645c,uVar3,1,
                           *(undefined4 *)(GLBL_SOME_CONTEXT + 100));
      uVar3 = Var_SectionIndex(s_PLAYER_MOUNTED_HARDWARE_0053645c,uVar3);
      Mission_PostVarChange(uVar3);
    }
    uVar4 = uVar1;
  } while (uVar1 < 0x20);
  return;
}

