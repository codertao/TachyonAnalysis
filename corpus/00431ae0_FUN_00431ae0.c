
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431ae0(void)

{
  FUN_004ad4c0();
  FUN_004af2e0();
  FUN_004b1c80(0xcf01,0xcf00);
  FUN_004b1860((g_FlightStateFlags & 2) != 0);
  FUN_004b07b0(s_weapmisc_pal_0053ef9c);
  FUN_0041df00();
  FUN_00465850();
  if ((g_FlightStateFlags & 2) != 0) {
    FUN_00431a10(&PTR_s_explode_pak_0053ec10,&DAT_005ac548);
  }
  FUN_00493a50();
  FUN_00493aa0();
  FUN_00420ee0();
  FUN_00408290();
  _DAT_005a753c = 0x30;
  return;
}

