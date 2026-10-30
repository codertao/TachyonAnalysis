
/* load slot into g_CurrentProfile; build sav/cfg paths; set g_CurrentProfileSlot */

void Profile_Select(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((-1 < param_1) && (param_1 < 10)) {
    puVar2 = (undefined4 *)&g_CurrentProfile;
    for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    iVar1 = File_Exists(&g_ProfileSlots + param_1 * 0x8c);
    if (iVar1 != 0) {
      File_ReadAll(&g_ProfileSlots + param_1 * 0x8c,&g_CurrentProfile);
    }
    str_sprintf(&g_CurrentProfile,&DAT_005a3990 + param_1 * 0x8c);
    str_sprintf(&g_CurrentSavPath,s_player_02d_sav_005411c8,param_1);
    str_sprintf(&g_CurrentCfgPath,s_player_02d_cfg_005412b0,param_1);
    g_CurrentProfileSlot = param_1;
  }
  return;
}

