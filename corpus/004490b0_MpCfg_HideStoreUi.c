
/* disable Purchase/Sell and hide availability/qty labels (no economy in MP) */

void MpCfg_HideStoreUi(void)

{
  MpCfg_ClearItemInfo();
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGPurchase_00547764,0x80000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGSell_00547774,0x80000);
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGAvail_005477f0,0x10000);
  sbi_label_flags_11c(&g_UiManager,s_TxtInvQty1_005477e4,0x10000);
  sbi_label_flags_11c(&g_UiManager,s_TxtInvQty2_005477d8,0x10000);
  sbi_label_flags_11c(&g_UiManager,s_TxtInvQty3_005477cc,0x10000);
  sbi_label_flags_11c(&g_UiManager,s_TxtInvQty4_005477c0,0x10000);
  sbi_label_flags_11c(&g_UiManager,s_TxtInvQty5_005477b4,0x10000);
  return;
}

