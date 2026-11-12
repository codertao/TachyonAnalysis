
/* on Play: open sav vars, seed INTRO_HAS_PLAYED/CREDITS/CURRENT_JOB, save */

void Profile_StartGame(void)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = Ui_GetButtonState(&g_UiManager,s_BtnLoginPlay_00541220);
  if (iVar1 != 8) {
    iVar1 = VarStore_Load(s_vars_cfg_005343c0,&g_CurrentSavPath,&g_PlayerVarStore,0xa010,1);
    if (iVar1 != 0) {
      if (DAT_005a674c != 0) {
        Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_INTRO_HAS_PLAYED_0054129c,1);
        Var_SetStr(g_PlayerVarStore,s_EARTH_REGION_00541278,s_LOAD_INTRO_00541288,s_FALSE_00541294);
      }
      Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_INTRO_HAS_PLAYED_0054129c,&local_4);
      if (local_4 == 0) {
        Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_INTRO_HAS_PLAYED_0054129c,1);
        Var_SetStr(g_PlayerVarStore,s_EARTH_REGION_00541278,s_LOAD_INTRO_00541288,&DAT_00541270);
        Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_JOB_005342b0,
                   s_LOAD_INTRO_00541288);
      }
      if (DAT_005a678c != 0) {
        Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CREDITS_005341ac,DAT_005a678c);
      }
      if (g_PlayerVarStore != 0) {
        VarStore_Save(&g_CurrentSavPath,g_PlayerVarStore);
        VarStore_Close();
        g_PlayerVarStore = 0;
      }
    }
    KeyCfg_Reload(&g_CurrentCfgPath);
    if (local_4 != 0) {
      Profile_EnterStarbase();
      return;
    }
    Profile_EnterFlight();
  }
  return;
}

