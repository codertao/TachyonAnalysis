
/* cycle owned PLAYER_SHIPS, set CURRENT_SHIP, read SHIP_%02d_DATA/SLOT_%d */

void Shipyard_SelectShip(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  iVar1 = Player_GetCurrentShip();
  iVar2 = Var_SectionExists(s_PLAYER_SHIPS_00548b00);
  local_10c = 1;
  iVar3 = Var_GetTable(s_SHIP_TYPE_0053fbd0);
  Var_LookupEquate(s_POSESS_STATE_005501e4,&PTR_s_W_AVAILABLE_0053413c_0xc_00532ac0,&local_10c);
  if ((iVar3 != 0) && (local_10c != 0)) {
    iVar7 = iVar1;
    do {
      iVar6 = iVar7 + param_1;
      iVar7 = iVar2 + -1;
      if ((-1 < iVar6) && (iVar7 = iVar6, iVar2 + -1 < iVar6)) {
        iVar7 = 0;
      }
      if (iVar1 == iVar7) goto LAB_004756a4;
      iVar6 = Var_GetKeyByIndex(iVar3,iVar7);
    } while ((iVar6 == 0) ||
            (Var_GetInt(g_PlayerVarStore,s_PLAYER_SHIPS_00548b00,iVar6,&local_104),
            local_104 != local_10c));
    Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,iVar7);
LAB_004756a4:
    Loadout_LoadShipView();
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
    g_HasAmmoHold = 0;
    uVar4 = Player_GetCurrentShip();
    str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar4);
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      str_sprintf(local_100,s_SLOT__d_00536454,uVar5);
      iVar1 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_108);
      if (iVar1 != 0) {
        uVar4 = Var_FindSection(local_80,local_100);
        iVar1 = Var_FindKey(uVar4);
        if (((local_108 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 8) != 0)) {
          uVar4 = Var_GetKeyByIndex(*(int *)(iVar1 + 8),local_108);
          iVar1 = Item_FindByName(uVar4);
          if ((iVar1 != 0) && (iVar1 = __stricmp(iVar1,s_AMMO_HOLD_005362c0), iVar1 == 0)) {
            g_HasAmmoHold = 1;
          }
        }
      }
    } while (uVar5 < 0x10);
    Loadout_ResetMountHighlights();
    if (DAT_005635f8 != 0) {
      Loadout_HighlightMounts(DAT_005635f8);
    }
    if (DAT_005635fc != 0) {
      Loadout_HighlightMounts(DAT_005635fc);
    }
    DAT_0054f88c = 0;
    DAT_0054f890 = 0;
    Teletype_ResetSlot(1);
    Teletype_ResetSlot(2);
  }
  return;
}

