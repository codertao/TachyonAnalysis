
/* sweep */

void Shipyard_GoShipBuy(void)

{
  if (DAT_0056e3a8 != 0) {
    ShipBuy_SetVar6e6c(*(undefined4 *)(DAT_0056e3a8 + 0x48));
    g_StarbaseScreen = &PTR_ShipBuy_Enter_00556e58;
    g_TitleMenu_ExitFlag = 1;
  }
  return;
}

