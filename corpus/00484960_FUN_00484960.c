
void FUN_00484960(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_0056f3e4 != 0) {
    iVar1 = FUN_00483900(DAT_0056f3e4 + 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xf0) == 0)) {
      uVar2 = FUN_004699a0();
      if (*(uint *)(iVar1 + 0xe8) <= uVar2) {
        Var_SetInt(g_PlayerVarStore,s_PLAYER_SHIPS_00548b00,DAT_0056f3e4 + 4,1);
        Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,
                   DAT_0056f3e4 + 4);
        *(undefined4 *)(iVar1 + 0xf0) = 1;
        FUN_004699d0(-*(int *)(iVar1 + 0xe8));
        FUN_0043ce50(&DAT_00583420,s_BtnSPPurchase_00557958,8);
        FUN_0043ce50(&DAT_00583420,s_BtnSPConfig_00557974,1);
        FUN_0043ce50(&DAT_00583420,s_BtnSPLaunch_005579e8,1);
        FUN_00484a40();
        FUN_004835c0();
      }
    }
  }
  return;
}

