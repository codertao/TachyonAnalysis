
/* sweep */

void Hud_UpdateScrollers(void)

{
  DAT_005b1b24 = DAT_005b8f64;
  HudScroll_UpdateA(&DAT_005b1874);
  HudScroll_UpdateB(&DAT_005b18a8);
  return;
}

