
/* sweep: guess */

void Map_ResetScratch(void)

{
  Cfg_ClearScratch();
  DAT_00571720 = DAT_00571fd8;
  DAT_00571724 = DAT_00571fdc;
  DAT_005524e8 = 0;
  DAT_005524dc = 0;
  DAT_005524e4 = 0;
  return;
}

