
void FUN_00427600(int param_1)

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
  FUN_0048f670(s_CARD_STATE_00536480,s_MOUNTED_0053648c,&DAT_005b1ba0);
  FUN_0048f670(s_CARD_STATE_00536480,s_INSTALLED_00536414,&DAT_005b1ba4);
  FUN_0048f670(s_CARD_STATE_00536480,s_DISABLED_00536474,&DAT_005b1ba8);
  FUN_00490130(DAT_005a6148,s_PLAYER_MOUNTED_HARDWARE_0053645c);
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
    FUN_00427590(uVar4,local_4c,uVar3,param_1);
    Var_SetInt(DAT_005a6148,s_PLAYER_MOUNTED_HARDWARE_0053645c,uVar3,param_1 != 0);
    if (DAT_005b3300 != 0) {
      uVar3 = FUN_004900c0(s_PLAYER_MOUNTED_HARDWARE_0053645c,uVar3,1,
                           *(undefined4 *)(DAT_005b3300 + 100));
      uVar3 = FUN_004900a0(s_PLAYER_MOUNTED_HARDWARE_0053645c,uVar3);
      FUN_0048e0c0(uVar3);
    }
    uVar4 = uVar1;
  } while (uVar1 < 0x20);
  return;
}

