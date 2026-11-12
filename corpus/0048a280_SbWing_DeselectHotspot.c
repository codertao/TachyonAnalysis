
/* sweep */

void SbWing_DeselectHotspot(void)

{
  if (DAT_0056c488 != 0) {
    SbHotspot_Deselect(*(undefined4 *)(DAT_0056c488 + 0xd4),DAT_0056c488 + 0xd8,DAT_0056c488 + 0xdc,
                       s_WndStarBaseWingMan_00559700);
  }
  return;
}

