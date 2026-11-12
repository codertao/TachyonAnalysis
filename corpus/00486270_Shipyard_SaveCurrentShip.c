
/* sweep */

void Shipyard_SaveCurrentShip(void)

{
  if (DAT_0056e3a8 != 0) {
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,
               DAT_0056e3a8 + 0x28);
  }
  return;
}

