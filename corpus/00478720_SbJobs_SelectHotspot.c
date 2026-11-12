
/* sweep */

void SbJobs_SelectHotspot(void)

{
  if (DAT_00563644 != 0) {
    SbHotspot_Select(*(undefined4 *)(DAT_00563644 + 0x17c),DAT_00563644 + 0x180,DAT_00563644 + 0x184
                     ,*(undefined4 *)(DAT_00563644 + 0x178),s_WndStarBaseJobs_00552160);
  }
  return;
}

