
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: weapmisc.pal, fx models */

void Flight_LoadCommonAssets(void)

{
  Pal_FreeAllRefs();
  Rend_ResetScene();
  Pak_SetMemPools(0xcf01,0xcf00);
  Pak_SetTexturesEnabled((g_FlightStateFlags & 2) != 0);
  Pal_LoadDefault(s_weapmisc_pal_0053ef9c);
  DescReg_Clear();
  ShipText_Load();
  if ((g_FlightStateFlags & 2) != 0) {
    ModelPool_LoadListDefault(&PTR_s_explode_pak_0053ec10,&g_FxModelPool);
  }
  Weapons_Init();
  Weapons_LoadModels();
  FireFx_LoadModels();
  Debris_LoadModels();
  _DAT_005a753c = 0x30;
  return;
}

