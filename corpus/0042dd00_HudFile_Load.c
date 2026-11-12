
/* sweep */

undefined4 HudFile_Load(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Cbin_Open(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  HudFile_LoadImages(&DAT_005b01e0);
  HudFile_LoadFonts(&DAT_005b01e0);
  HudFile_LoadFontColors(&DAT_005b01e0);
  HudFile_LoadStaticText(&DAT_005b01e0);
  HudFile_LoadPanels(&DAT_005b01e0);
  HudFile_LoadEnergyBars(&DAT_005b01e0);
  HudFile_LoadGameText(&DAT_005b01e0);
  Hud_LoadRadar(&DAT_005b01e0);
  HudCfg_ReadShieldStatus(&DAT_005b01e0);
  Hud_LoadTargetBox(&DAT_005b01e0);
  HudFile_LoadIndicators(&DAT_005b01e0);
  HudFile_LoadTeletype(&DAT_005b01e0);
  HudFile_LoadWarnings(&DAT_005b01e0);
  Cbin_Close();
  return 1;
}

