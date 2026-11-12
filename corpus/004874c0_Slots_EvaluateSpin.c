
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Slots_EvaluateSpin(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = DAT_0056e308 + DAT_0056e2e8 + DAT_0056e2c8;
  DAT_0056e008 = 0;
  DAT_0056e004 = iVar1;
  if (iVar1 != 0) {
    DAT_0056e31c = DAT_0056e31c + iVar1;
    DAT_0056e2cc = DAT_0056e2c8;
    _DAT_0056e2d0 = -(uint)(DAT_0056e2c8 != 0) & 0x96;
    DAT_0056e2ec = DAT_0056e2e8;
    DAT_0056e30c = DAT_0056e308;
    _DAT_0056e2f0 = -(uint)(DAT_0056e2e8 != 0) & 0x96;
    _DAT_0056e310 = -(uint)(DAT_0056e308 != 0) & 0x96;
    DAT_0056e004 = 0;
    DAT_0056e2c8 = 0;
    DAT_0056e2e8 = 0;
    DAT_0056e308 = 0;
    DAT_0056e008 = iVar1;
  }
  DAT_0056e0d8 = DAT_0056e0d8 & 0xfffffffc;
  DAT_0056e1bc = DAT_0056e1bc & 0xfffffffc;
  DAT_0056e2a0 = DAT_0056e2a0 & 0xfffffffc;
  DAT_0056e0ec = 0;
  DAT_0056e1d0 = 0;
  DAT_0056e2b4 = 0;
  DAT_0056e0e8 = 0;
  DAT_0056e1cc = 0;
  DAT_0056e2b0 = 0;
  SndTrig_StopByName(s_SLOTS_SPIN_005580ac,&DAT_00583498);
  if (DAT_0056e008 == 0) {
    pcVar2 = s_SLOTS_LOSE_00558094;
  }
  else {
    pcVar2 = s_SLOTS_WIN_005580a0;
  }
  SndTrig_PostEvent(pcVar2,&DAT_005833e0,&DAT_00583498);
  Slots_UpdateCredits();
  return;
}

