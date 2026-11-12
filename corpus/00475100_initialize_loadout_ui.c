
void initialize_loadout_ui(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = some_iter_over_list();
  if ((((uVar2 != 0) && (cVar1 = (char)uVar2, cVar1 != '\x10')) && (cVar1 != '\0')) &&
     ((cVar1 != '\x11' && (uVar2 = uVar2 & 0xff, uVar2 != 0)))) {
    if ((uVar2 == 0x1b) || (uVar2 == GLBL_init_to_110)) {
      if (*(int *)(DAT_005635fc + 0x54) != 0) {
        Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_TEXTCLICK_0054ffa8);
        Player_AddVarInt(DAT_005635fc + 0x20,DAT_005635fc,*(undefined4 *)(DAT_005635fc + 0x54));
        Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,0x80000);
        set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,1);
        Loadout_RefreshInventoryList();
      }
    }
    else {
      if (uVar2 != GLBL_init_to_127) {
        return;
      }
      Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_LOADOUT_TAKE_00547688);
      Loadout_SellConfirmed();
    }
    DAT_00562bd0 = 0;
    DAT_00563614 = 0;
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGLaunch_005501c4,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGShipBay_005501b4,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGLobby_005501a8,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGAvailUp_00550198,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGAvailDn_00550188,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGInvUp_00547918,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGInvDn_0054790c,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeWP_00547790,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeHW_00547780,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGShipLeft_00550178,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGShipRight_00550168,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy1_0055015c,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy2_00550150,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy3_00550144,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGBuy4_00550138,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell1_0055012c,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell2_00550120,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell3_00550114,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell4_00550108,1);
    clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGItemCost_0054780c,0x10000);
    clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGItemLabel_005477fc,0x10000);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGCaution_00550014,0x20000);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGCaution2_00550004,0x20000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGItemQuery_00550024,0x10000);
  }
  return;
}

