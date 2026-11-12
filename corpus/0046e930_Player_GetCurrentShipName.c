
/* sweep */

undefined4 Player_GetCurrentShipName(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  iVar1 = Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_4);
  if (iVar1 != 0) {
    iVar1 = Var_GetTable(s_SHIP_TYPE_0053fbd0);
    if (iVar1 != 0) {
      uVar2 = Var_GetKeyByIndex(iVar1,local_4);
      return uVar2;
    }
  }
  return 0;
}

