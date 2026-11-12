
/* sweep */

void Hud_DrawBeamLight(int param_1)

{
  if (DAT_005b1b58 != 0) {
    HudLight_DrawColor(param_1 + 0x7fc,DAT_005b1b5c,DAT_005b1b60,DAT_005b1b64);
    return;
  }
  HudLight_Draw(param_1 + 0x7fc);
  return;
}

