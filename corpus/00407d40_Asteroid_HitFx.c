
/* sweep */

void Asteroid_HitFx(void)

{
  int local_c;
  int local_8;
  int local_4;
  
  local_c = DAT_005653cc - DAT_005653c0;
  local_8 = DAT_005653d0 - DAT_005653c4;
  local_4 = DAT_005653d4 - DAT_005653c8;
  Sparks_Burst(DAT_00565638,&DAT_005653cc,&local_c,0x10,0x10000);
  Debris_SpawnBurst(&PTR_DAT_00532aa0,&DAT_005653cc,&local_c,1,4,2,0x10000,0x30000,1,0,100);
  Snd_PlayAtPos(2,2,1,&DAT_005653cc,0x10000);
  return;
}

