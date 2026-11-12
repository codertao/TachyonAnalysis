
/* sweep */

void Snd_StartTimer(void)

{
  UINT UVar1;
  timecaps_tag local_8;
  
  timeGetDevCaps(&local_8,8);
  UVar1 = local_8.wPeriodMin;
  if (local_8.wPeriodMin < 2) {
    UVar1 = 1;
  }
  DAT_005f9d44 = local_8.wPeriodMax;
  if ((UVar1 < local_8.wPeriodMax) && (DAT_005f9d44 = local_8.wPeriodMin, local_8.wPeriodMin < 2)) {
    DAT_005f9d44 = 1;
  }
  timeBeginPeriod(DAT_005f9d44);
  DAT_005b9d20 = timeSetEvent(100,0,&LAB_004a8a00,DAT_00603a00,1);
  return;
}

