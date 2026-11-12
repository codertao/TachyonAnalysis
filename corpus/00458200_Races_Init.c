
/* sweep: race.cfg */

void Races_Init(void)

{
  int iVar1;
  
  clr_bytes(&DAT_0058f2e0,0xc);
  iVar1 = Cbin_Open(s_race_cfg_00548db8);
  if (iVar1 != 0) {
    Races_Load();
    Races_LoadAllRelations();
    return;
  }
  return;
}

