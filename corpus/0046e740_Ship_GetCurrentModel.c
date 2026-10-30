
/* CURRENT_SHIP var -> SHIP_TYPE table -> .des model (default claw.des) */

char * Ship_GetCurrentModel(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_4;
  
  iVar1 = Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_4);
  if (iVar1 != 0) {
    iVar1 = Var_GetTable(s_SHIP_TYPE_0053fbd0);
    if (iVar1 != 0) {
      uVar2 = Var_GetKeyByIndex(iVar1,local_4);
      pcVar3 = (char *)Spx_ResolveDesName(uVar2);
      return pcVar3;
    }
  }
  return s_claw_des_0054b088;
}

