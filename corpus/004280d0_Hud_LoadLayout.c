
/* sweep: GALSPAN.HUD fallback */

void Hud_LoadLayout(int param_1)

{
  int iVar1;
  
  if (DAT_005b00c0 == 0) {
    iVar1 = HudFile_Load(param_1);
    if ((iVar1 == 0) || (param_1 == 0)) {
      HudFile_Load(s_GALSPAN_HUD_00536744);
    }
    HudLabels_Init();
    Teletype_Reset(&DAT_005b01e0);
    Systems_Reload(1);
    Hud_LoadSounds();
    ObjDisplay_Init();
    DAT_005b00c0 = 1;
  }
  return;
}

