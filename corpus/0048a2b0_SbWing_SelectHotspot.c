
/* sweep */

void SbWing_SelectHotspot(void)

{
  if (DAT_0056c488 != 0) {
    SbHotspot_Select(*(undefined4 *)(DAT_0056c488 + 0xd4),DAT_0056c488 + 0xd8,DAT_0056c488 + 0xdc,
                     *(undefined4 *)(DAT_0056c488 + 0xd0),s_WndStarBaseWingMan_00559700);
  }
  return;
}

