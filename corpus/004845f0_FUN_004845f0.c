
void FUN_004845f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  iVar1 = Var_GetTable(s_SHIP_TYPE_0053fbd0);
  if (iVar1 != 0) {
    iVar2 = Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_4
                      );
    if (iVar2 != 0) {
      iVar1 = Var_GetKeyByIndex(iVar1,local_4);
      if (iVar1 != 0) {
        uVar3 = FUN_00483970(iVar1);
        FUN_004842f0(uVar3);
      }
    }
  }
  return;
}

