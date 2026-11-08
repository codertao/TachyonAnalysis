
void FUN_00484650(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int local_108;
  int local_104;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  iVar1 = Var_GetTable(s_WEAPON_TYPES_0054763c);
  local_104 = Var_GetTable(s_CARD_TYPES_00536494);
  if (((DAT_0056f3e4 != 0) && (iVar1 != 0)) && (local_104 != 0)) {
    iVar2 = FUN_00483900(DAT_0056f3e4 + 4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xf0) != 0)) {
      uVar3 = FUN_0046e900();
      str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar3);
      uVar6 = 1;
      do {
        str_sprintf(local_100,s_MOUNT__d_0053fa18,uVar6);
        iVar4 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_108);
        if ((iVar4 != 0) && (local_108 != 0)) {
          Var_SetInt(g_PlayerVarStore,local_80,local_100,0);
          uVar3 = Var_GetKeyByIndex(iVar1,local_108);
          iVar4 = FUN_004690b0(uVar3);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) != 0)) {
            if (*(int *)(*(int *)(iVar4 + 0x58) + 0x9c) == 1) {
              FUN_0046be30(iVar4 + 0x20,iVar4,1);
            }
            else {
              str_sprintf(local_100,s_STORE__d_0054786c,uVar6);
              iVar5 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_108);
              if (iVar5 != 0) {
                Var_SetInt(g_PlayerVarStore,local_80,local_100,0);
                FUN_0046be30(iVar4 + 0x20,iVar4,local_108);
              }
            }
          }
        }
        str_sprintf(local_100,s_SLOT__d_STATE_00536420,uVar6);
        iVar4 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_108);
        if (iVar4 != 0) {
          Var_SetInt(g_PlayerVarStore,local_80,local_100,0);
          if (local_108 != 0) {
            str_sprintf(local_100,s_SLOT__d_00536454,uVar6);
            iVar4 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_108);
            if (iVar4 != 0) {
              Var_SetInt(g_PlayerVarStore,local_80,local_100,0);
              uVar3 = Var_GetKeyByIndex(local_104,local_108);
              iVar4 = FUN_004690b0(uVar3);
              if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) != 0)) {
                FUN_0046be30(iVar4 + 0x20,iVar4,1);
              }
            }
          }
        }
        bVar7 = uVar6 < 8;
        uVar6 = uVar6 + 1;
      } while (bVar7);
      Var_SetInt(g_PlayerVarStore,s_PLAYER_SHIPS_00548b00,DAT_0056f3e4 + 4,0);
      Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&DAT_00562b14)
      ;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      FUN_004699d0(*(undefined4 *)(iVar2 + 0xec));
      FUN_00484230();
      FUN_00484b20(&DAT_00562b14);
      FUN_00484a40();
      FUN_004835c0();
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,0x80000);
    }
  }
  return;
}

