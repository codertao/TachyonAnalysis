
/* sweep */

void ShipBuy_SelectShip(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  ShipBuy_ClearSelection();
  if (param_1 < 0) {
    return;
  }
  if (4 < param_1) {
    return;
  }
  DAT_0056f3e4 = &DAT_0056f440 + param_1 * 0x52;
  iVar1 = Ui_FindButton(&GLBL_UI_ELEM_LIST,&DAT_0056f464 + param_1 * 0x148);
  if (iVar1 == 0) {
    ShipBuy_ClearSelection();
    return;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,DAT_0056f3e4 + 9,0x10);
  iVar1 = ShipBuy_FindShip(DAT_0056f3e4 + 1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0xf0) == 0) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,1);
    Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPConfig_00557974,8);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPLaunch_005579e8,8);
    iVar2 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_SHIP_BUY_FOR_005579b4);
    pcVar3 = *(char **)(iVar2 + 0x40);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = s__Buy_for__d_CR__005579a4;
    }
    str_sprintf(&DAT_0056f400,pcVar3,*(undefined4 *)(iVar1 + 0xe8));
    Ui_SetButtonLabelText(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,&DAT_0056f400);
    uVar4 = Player_GetCredits();
    if (*(uint *)(iVar1 + 0xe8) <= uVar4) goto LAB_0048453e;
    pcVar3 = s_BtnSPPurchase_00557958;
  }
  else {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,1);
    Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPConfig_00557974,1);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPLaunch_005579e8,1);
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,DAT_0056f3e4 + 1
              );
    iVar2 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_SHIP_SELL_FOR_005579d8);
    pcVar3 = *(char **)(iVar2 + 0x40);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = s__Sell_for__d_CR__005579c4;
    }
    str_sprintf(&DAT_0056f400,pcVar3,*(undefined4 *)(iVar1 + 0xec));
    Ui_SetButtonLabelText(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,&DAT_0056f400);
    uVar4 = ShipBuy_FindOwned();
    if (1 < uVar4) goto LAB_0048453e;
    pcVar3 = s_BtnSPSell_00557968;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,pcVar3,8);
LAB_0048453e:
  iVar2 = ShipDef_FindIndex(iVar1);
  if ((iVar2 != 0) && (iVar2 = Starbase_FindMaterial(iVar2 + 0x48), iVar2 != 0)) {
    ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IALineArt_0055794c,0x20000);
    str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar2 + 0x40);
    ImageArea_SetImage(&GLBL_UI_ELEM_LIST,s_IALineArt_0055794c,&DAT_005a41e0);
    ImageArea_StepFrame(&GLBL_UI_ELEM_LIST,s_IALineArt_0055794c,0x18,0xa5);
  }
  if (*(undefined4 **)(iVar1 + 0x80) == (undefined4 *)0x0) {
    pcVar3 = s__No_Description_set_in_shiptext__00557980;
  }
  else {
    pcVar3 = (char *)**(undefined4 **)(iVar1 + 0x80);
  }
  ShipBuy_ShowDescription(pcVar3);
  ShipBuy_LoadCallouts(iVar1);
  ShipBuy_ResetHover();
  ShipBuy_SetStatLabels(1);
  ShipBuyStat_LoadAll(iVar1 + 0x60);
  return;
}

