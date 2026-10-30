
void FUN_0044b220(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (-1 < DAT_005a60c0) {
    FUN_0044b350();
  }
  if ((-1 < param_1) && (param_1 < 10)) {
    if (g_PlayerVarStore != 0) {
      VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
      VarStore_Close();
      g_PlayerVarStore = 0;
    }
    puVar3 = (undefined4 *)&DAT_005a6080;
    for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar2 = param_1 * 0x8c;
    iVar1 = File_Exists(&DAT_005928e0 + iVar2);
    if (iVar1 != 0) {
      File_ReadAll(&DAT_005928e0 + iVar2,&DAT_005a6080);
    }
    DAT_005a60c0 = param_1;
    str_sprintf(&DAT_005a6080,&DAT_005928f0 + iVar2);
    str_sprintf(&DAT_005a60a0,s_mpplay_02d_sav_005479d8,param_1);
    str_sprintf(&g_DefaultCfgPath,s_mpplay_02d_cfg_005479c8,param_1);
    DAT_005a6134 = (&DAT_00592968)[param_1 * 0x23];
    FUN_0042f320(&g_DefaultCfgPath);
    if (((&DAT_00592950)[iVar2] == '\0') && (DAT_00592e58 != (char *)0x0)) {
      _strncpy(&DAT_00592950 + iVar2,DAT_00592e58,0xf);
    }
    str_sprintf(&DAT_005a60c4,&DAT_00592950 + iVar2);
    VarStore_Load(s_vars_cfg_005343c0,&DAT_005a60a0,&g_PlayerVarStore,0xa010,1);
  }
  return;
}

