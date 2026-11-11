
/* PLAYER_MAIN_VARS/CURRENT_SHIP (SHIP_%02d_DATA) */

uint Player_GetCurrentShip(void)

{
  int iVar1;
  uint local_4;
  
  iVar1 = Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_4);
  return -(uint)(iVar1 != 0) & local_4;
}

