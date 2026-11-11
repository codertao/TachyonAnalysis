
/* (group, key) from g_PlayerVarStore */

undefined4 Player_GetVarInt(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0;
  Var_GetInt(g_PlayerVarStore,param_1,param_2,&local_4);
  return local_4;
}

