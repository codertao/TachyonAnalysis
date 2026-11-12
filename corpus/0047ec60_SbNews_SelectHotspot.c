
/* sweep */

void SbNews_SelectHotspot(void)

{
  if (DAT_005636b4 != 0) {
    SbHotspot_Select(*(undefined4 *)(DAT_005636b4 + 0xec),DAT_005636b4 + 0xf0,DAT_005636b4 + 0xf4,
                     *(undefined4 *)(DAT_005636b4 + 0xe8),s_WndStarBaseNews_00552c88);
  }
  return;
}

