
/* sweep */

void MpCfg_DisableBuySell(void)

{
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGPurchase_00547764,0x80000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGSell_00547774,0x80000);
  return;
}

