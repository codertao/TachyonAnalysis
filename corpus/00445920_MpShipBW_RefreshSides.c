
/* sweep: GALSPAN */

void MpShipBW_RefreshSides(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = Race_FindByName(s_GALSPAN_00533548);
  }
  DAT_00545bd0 = param_1;
  iVar1 = Race_FindByName(s_GALSPAN_00533548);
  if (DAT_00545bd0 == iVar1) {
    Ui_SetLabelTextById(&g_UiManager,s_BtnMPBWSide1_00545bf4,s_MPCFG_PRIMARY_00545c04);
    Ui_SetLabelTextById(&g_UiManager,s_BtnMPBWSide2_00545bd4,s_MPCFG_SECONDARY_00545be4);
    set_button_state(&g_UiManager,s_BtnMPBWSide1_00545bf4,0x10);
    set_button_state(&g_UiManager,s_BtnMPBWSide2_00545bd4,1);
    return;
  }
  Ui_SetLabelTextById(&g_UiManager,s_BtnMPBWSide2_00545bd4,s_MPCFG_PRIMARY_00545c04);
  Ui_SetLabelTextById(&g_UiManager,s_BtnMPBWSide1_00545bf4,s_MPCFG_SECONDARY_00545be4);
  set_button_state(&g_UiManager,s_BtnMPBWSide2_00545bd4,0x10);
  set_button_state(&g_UiManager,s_BtnMPBWSide1_00545bf4,1);
  return;
}

