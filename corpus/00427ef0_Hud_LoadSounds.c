
/* sweep: TRACTOR_WAVE, TARGET_LOCKED... */

void Hud_LoadSounds(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  DAT_005b1b3c = SndTrig_Preload(s_TRACTOR_WAVE_00536734,&DAT_005a61e0);
  DAT_005b1b40 = SndTrig_Preload(s_TRACTOR_WAVE_LOCKED_00536720,&DAT_005a61e0);
  DAT_005b1b38 = SndTrig_Preload(s_TARGET_LOCKED_00536710,&DAT_005a61e0);
  DAT_005b1b34 = SndTrig_Preload(s_TARGET_LOCKING_00536700,&DAT_005a61e0);
  DAT_005b1b4c = SndTrig_Preload(s_FORTIS_CHARGING_005366f0,&DAT_005a61e0);
  DAT_005b1b2c = Snd3D_Create(&local_c,&local_18,0,0,0x10000,0,100,0xff,0);
  DAT_005b1b30 = Snd3D_Create(&local_c,&local_18,0,0,0x10000,0,100,0xff,0);
  DAT_005b1b50 = Snd3D_Create(&local_c,&local_18,0,0,0x10000,0,100,0xff,0);
  return;
}

