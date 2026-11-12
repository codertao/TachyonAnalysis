
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Timer_Start(void)

{
  uint uVar1;
  UINT UVar2;
  timecaps_tag local_c;
  
  timeGetDevCaps(&local_c,8);
  UVar2 = local_c.wPeriodMin;
  if (local_c.wPeriodMin < 2) {
    UVar2 = 1;
  }
  DAT_006039e4 = local_c.wPeriodMax;
  if ((UVar2 < local_c.wPeriodMax) && (DAT_006039e4 = local_c.wPeriodMin, local_c.wPeriodMin < 2)) {
    DAT_006039e4 = 1;
  }
  timeBeginPeriod(DAT_006039e4);
  if (DAT_00603948 == 0) {
    DAT_006039e0 = timeSetEvent(0x19,0,&LAB_0049f560,DAT_00603a00,1);
    DAT_00603a04 = 1;
    return;
  }
  DAT_006039e0 = timeSetEvent(DAT_00603948,0,&LAB_0049f560,DAT_00603a00,1);
  uVar1 = (uint)(((longlong)(int)DAT_00603948 * 0x78000000) / 1000);
  _DAT_006039fc = uVar1 << 8;
  _DAT_006039f8 = uVar1 >> 0x18;
  DAT_006039f0 = 0;
  DAT_006039f4 = 0;
  DAT_00603a04 = 1;
  return;
}

