
/* sweep: main HUD draw */

void Hud_Draw(void)

{
  int iVar1;
  
  Gfx_Lock(1);
  Hud_DrawCrosshair(DAT_005b1efc);
  Gfx_Lock(1);
  iVar1 = *(int *)(GLBL_SOME_CONTEXT + 0x110);
  if (iVar1 == 0) {
    iVar1 = *(int *)(GLBL_SOME_CONTEXT + 0x90);
  }
  Hud_DrawLockOn(&DAT_005b01e0,iVar1);
  Hud_DrawStaticImages(&DAT_005b01e0);
  Hud_DrawBeamLight(&DAT_005b01e0);
  Hud_DrawBurnerBar(&DAT_005b01e0);
  Hud_DrawLaserBar(&DAT_005b01e0);
  Hud_DrawPowerRates(&DAT_005b01e0);
  Hud_DrawShipStatusDefault();
  Hud_DrawTargetView(&DAT_005b01e0,*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
  Hud_DrawAmmoBar(&DAT_005b01e0);
  Hud_DrawWeaponLights(&DAT_005b01e0);
  Hud_DrawLeadIndicator(&DAT_005b01e0);
  Hud_DrawCompass(&DAT_005b01e0);
  Nop();
  ObjDisplay_Draw();
  Hud_HighlightNavTargets(&DAT_005b01e0);
  Hud_DrawOffscreenArrows(&DAT_005b01e0);
  Hud_DrawWarnings();
  Hud_BracketTarget(*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
  Hud_BracketEntity(&DAT_005b01e0,DAT_005b1864);
  Hud_BracketThreats(&DAT_005b01e0);
  Radar_DrawAll();
  Hud_RunWidgetCallbacks();
  Hud_ClearRect();
  HudString_DrawAll();
  Hud_DrawSpeed(&DAT_005b01e0);
  Hud_DrawWeaponPanelDefault();
  Hud_DrawMissileWarning();
  Hud_DrawTargetInfo(&DAT_005b01e0,*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
  Hud_DrawStaticText(&DAT_005b01e0);
  Hud_DrawEnergyBars(&DAT_005b01e0);
  Hud_DrawEntityLabel(&DAT_005b01e0,*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
  if (*(int *)(GLBL_SOME_CONTEXT + 0x110) != 0) {
    Hud_DrawEntityLabel(&DAT_005b01e0,*(int *)(GLBL_SOME_CONTEXT + 0x110));
  }
  if (DAT_005b1864 != *(int *)(GLBL_SOME_CONTEXT + 0x90)) {
    Hud_DrawEntityLabel(&DAT_005b01e0,DAT_005b1864);
  }
  Hud_LabelThreats(&DAT_005b01e0);
  Teletype_DrawAll();
  Gfx_Lock(1);
  return;
}

