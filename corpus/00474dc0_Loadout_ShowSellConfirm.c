
/* CFG_SELL_QUERY caution dialog ("Sell item for %d credits") */

void Loadout_ShowSellConfirm(void)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulonglong local_8;
  
  iVar6 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_CFG_SELL_QUERY_005501d4);
  if ((DAT_005635fc != 0) && (iVar1 = *(int *)(DAT_005635fc + 0x58), iVar1 != 0)) {
    Loadout_ResetStoreScroll(DAT_005635fc);
    iVar8 = *(int *)(DAT_005635fc + 0x54);
    if (iVar8 == 0) {
      uVar2 = *(uint *)(iVar1 + 0x9c);
      uVar7 = Player_GetVarInt(DAT_005635fc + 0x20,DAT_005635fc);
      if (uVar7 < uVar2) {
        iVar8 = Player_GetVarInt(DAT_005635fc + 0x20,DAT_005635fc);
      }
      else {
        iVar8 = Ammo_ApplyHoldBonus(uVar2,g_HasAmmoHold);
      }
    }
    if (iVar8 != 0) {
      fVar3 = (float)iVar8 / (float)*(int *)(iVar1 + 0x9c);
      local_8 = (ulonglong)*(uint *)(iVar1 + 0x98);
      fVar4 = (float)*(uint *)(iVar1 + 0x94) * fVar3;
      sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGItemCost_0054780c,0x10000);
      sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGItemLabel_005477fc,0x10000);
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,0x80000);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGLaunch_005501c4,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGShipBay_005501b4,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGLobby_005501a8,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGAvailUp_00550198,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGAvailDn_00550188,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGInvUp_00547918,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGInvDn_0054790c,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeWP_00547790,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeHW_00547780,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGShipLeft_00550178,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGShipRight_00550168,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy1_0055015c,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy2_00550150,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy3_00550144,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy4_00550138,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell1_0055012c,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell2_00550120,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell3_00550114,8);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell4_00550108,8);
      ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IACFGCaution_00550014,0x20000);
      ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IACFGCaution2_00550004,0x20000);
      if (iVar6 == 0) {
        pcVar9 = s__Sell_item_for__d_credits__loss_o_005500d8;
      }
      else {
        pcVar9 = *(char **)(iVar6 + 0x40);
      }
      local_8._0_4_ = (undefined4)(longlong)ROUND((float)local_8 * fVar3 - fVar4);
      uVar5 = (undefined4)local_8;
      local_8._0_4_ = (undefined4)(longlong)ROUND(fVar4);
      str_sprintf(0x582ac0,pcVar9,(undefined4)local_8,uVar5);
      Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtCFGItemQuery_00550024,0x582ac0);
      clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGItemQuery_00550024,0x10000);
      Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
      DAT_00562bd0 = 1;
      DAT_00563614 = 1;
    }
  }
  return;
}

