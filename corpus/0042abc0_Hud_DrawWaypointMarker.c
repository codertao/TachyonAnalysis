
/* sweep */

void Hud_DrawWaypointMarker(void)

{
  int local_8;
  int local_4;
  
  View_ProjectPointFixed(&DAT_005b1b7c,&local_8);
  TargetBox_DrawA(local_8 >> 7,local_4 >> 7,0x10,0,DAT_005a6324 & 0xff,0x10000,1,0x7fa6);
  return;
}

