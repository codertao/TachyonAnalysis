
bool FUN_004851c0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = param_1;
  if (GLBL_cheat_related_all_ships_maybe != 0) {
    Var_SetStr(g_PlayerVarStore,s_PLAYER_SHIPS_00548b00,param_1,
               &PTR_s_W_AVAILABLE_0053413c_0xc_00532ac0);
  }
  iVar1 = FUN_0048f670(s_POSESS_STATE_005501e4,&PTR_s_W_AVAILABLE_0053413c_0xc_00532ac0,&local_4);
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = Var_GetInt(g_PlayerVarStore,s_PLAYER_SHIPS_00548b00,iVar2,&param_1);
  if (iVar2 == 0) {
    return false;
  }
  return param_1 == local_4;
}

