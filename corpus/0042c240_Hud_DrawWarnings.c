
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: low-hull blink */

void Hud_DrawWarnings(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_005b1870 != 0) {
    Gfx_Lock(1);
    uVar1 = Power_GetHullMax(&g_PlayerPower,DAT_005b1f0c + 0xd0,DAT_005b9020);
    uVar2 = Credits_Format(g_PlayerPower.hull,uVar1);
    if (uVar2 < 0x19) {
      HudBlink_Draw(&DAT_005b1874);
    }
    else {
      _DAT_005b189c = 0;
      _DAT_005b1894 = 0;
    }
    if (DAT_005b1b74 != 0) {
      HudBlink_DrawColor(&DAT_005b18a8,DAT_005b18d4);
    }
    if ((DAT_005aeebc != 0) && (((byte)DAT_005b2154 & 4) == 0)) {
      HudBlink_Draw(&DAT_005b18dc);
    }
    if (DAT_005b1b68 != 0) {
      HudBlink_Draw(&DAT_005b1910);
    }
    HudIndicators_DrawAll();
    return;
  }
  return;
}

