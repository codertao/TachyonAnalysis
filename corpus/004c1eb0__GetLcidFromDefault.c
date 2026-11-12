
/* CRT: getqloc */

void _GetLcidFromDefault(void)

{
  DAT_0056518c._0_2_ = (ushort)DAT_0056518c | 0x104;
  DAT_00565190 = GetUserDefaultLCID();
  DAT_00565174 = DAT_00565190;
  return;
}

