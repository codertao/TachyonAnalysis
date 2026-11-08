
/* pick cfg path by g_MpModeFlag, write via PlayerCfg_WriteActions */

void PlayerCfg_Save(void)

{
  undefined *puVar1;
  
  if (g_MpModeFlag == 0) {
    puVar1 = &g_DefaultCfgPath;
  }
  else {
    puVar1 = &g_CurrentCfgPath;
  }
  PlayerCfg_WriteActions(puVar1);
  OurFreeMem(DAT_00563d68);
  DAT_00563d68 = 0;
  OurFreeMem(DAT_00563d64);
  DAT_00563d64 = 0;
  return;
}

