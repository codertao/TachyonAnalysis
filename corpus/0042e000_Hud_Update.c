
/* sweep */

void Hud_Update(void)

{
  Hud_UpdateJamNoise();
  Teletype_Update();
  Teletype_UpdateAll();
  Hud_UpdateScrollers();
  return;
}

