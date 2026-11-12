
/* sweep: guess */

void Wingman_OnKilled(void)

{
  int iVar1;
  
  g_Wingman = 0;
  iVar1 = Var_GetTable(s_WINGMEN_0054adb0);
  if (iVar1 != 0) {
    iVar1 = Var_GetKeyByIndex(iVar1,DAT_005653a8);
    if (iVar1 != 0) {
      Var_SetStr(DAT_005a6148,s_WINGMEN_STATUS_VARS_00552394,iVar1,&DAT_0055d6a8);
    }
  }
  Var_SetStr(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_WINGMAN_0054a954,
             s_NO_WINGMEN_0055d69c);
  Chatter_PlayRandom(2);
  return;
}

