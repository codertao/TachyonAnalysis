
void FUN_00418550(void)

{
  undefined1 local_34 [52];
  
  FUN_0048e380(&DAT_005b31c0,0x5ea0);
  FUN_0048e380(local_34,0x34);
  FUN_0048e380(&g_MissionEndFlag,0xc);
  FUN_004ad380(1);
  g_MissionEndReason = 0;
  DAT_005b8f48 = 1;
  FUN_00466830();
  FUN_00418150(local_34);
  FUN_00458290();
  FUN_004184d0();
  FUN_0042ffb0();
  FUN_004676a0(0xcccc);
  if ((g_FlightStateFlags & 1) == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&g_CurrentSavPath,&DAT_005a6148,0xcccc,1);
    FUN_00425760();
    FUN_00458200();
  }
  FUN_00431bb0();
  FUN_0041d930(0x10,0xcccc,&DAT_005a61e0);
  FUN_00418540();
  FUN_0045c000();
  FUN_0049c630(0xffff,0xcccc);
  if ((g_FlightStateFlags & 1) != 0) {
    FUN_004903c0();
    FUN_004b8780(&DAT_005b2c18,DAT_005a64f4,DAT_005a64f8);
  }
  FUN_00414850(&DAT_005b2c18);
  FUN_0041ce20();
  FUN_004280a0();
  FUN_00425030();
  g_NextMode = &g_Mode_StarbaseHub;
  FUN_0042e910();
  FUN_0041c3f0();
  FUN_00424fd0();
  FUN_004e4b65(1);
  DAT_005a6820 = 1;
  FUN_0049e7d0(0);
  FUN_004524a0(0xf1);
  FUN_00410760(0xf1);
  FUN_0047e8e0();
  return;
}

