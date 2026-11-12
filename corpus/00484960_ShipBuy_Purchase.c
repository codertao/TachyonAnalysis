
/* sweep */

void ShipBuy_Purchase(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_0056f3e4 != 0) {
    iVar1 = ShipBuy_FindShip(DAT_0056f3e4 + 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xf0) == 0)) {
      uVar2 = Player_GetCredits();
      if (*(uint *)(iVar1 + 0xe8) <= uVar2) {
        Var_SetInt(g_PlayerVarStore,s_PLAYER_SHIPS_00548b00,DAT_0056f3e4 + 4,1);
        Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,
                   DAT_0056f3e4 + 4);
        *(undefined4 *)(iVar1 + 0xf0) = 1;
        Player_AddCredits(-*(int *)(iVar1 + 0xe8));
        set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,8);
        set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPConfig_00557974,1);
        set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPLaunch_005579e8,1);
        ShipBuy_UpdateCredits();
        ShipBuy_RefreshList();
      }
    }
  }
  return;
}

