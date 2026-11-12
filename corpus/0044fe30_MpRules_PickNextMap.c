
/* sweep */

void MpRules_PickNextMap(void)

{
  if (DAT_00590d74 == 0) {
    DAT_00590d68 = Cycle_RandomOther(DAT_00590d68);
    MpRegion_Clamp(DAT_00590d68);
    return;
  }
  DAT_00590d68 = Cycle_Next(DAT_00590d68,&DAT_0058f4e0);
  MpRegion_Clamp(DAT_00590d68);
  return;
}

