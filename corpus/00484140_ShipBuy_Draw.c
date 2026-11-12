
/* sweep */

void ShipBuy_Draw(void)

{
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  ShipBuy_RenderPreview();
  MountLine_Draw(s_WndStarBaseShipBuy_00557938);
  Teletype_DrawAll();
  ShipBuy_UpdateSliders();
  ShipBuy_DrawStatBars();
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipBuy_00557938,&DAT_005577b0,1);
  return;
}

