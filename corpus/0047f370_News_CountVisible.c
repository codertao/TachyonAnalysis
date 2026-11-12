
/* sweep: guess */

void News_CountVisible(void)

{
  int *piVar1;
  
  DAT_005636ac = 0;
  if (0 < DAT_00589734) {
    piVar1 = (int *)(DAT_00589738 + 0xfc);
    do {
      if (*piVar1 != 0) {
        DAT_005636b0 = 0;
        return;
      }
      DAT_005636ac = DAT_005636ac + 1;
      piVar1 = piVar1 + 0x40;
    } while (DAT_005636ac < DAT_00589734);
  }
  DAT_005636b0 = 0;
  return;
}

