
/* sweep */

void Scoreboard_DrawRoundOver(void)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_ROUND_OVER_005484fc);
  Text_DrawAligned(local_80,DAT_00590d44,0x140,0x28,&DAT_006060ff,0xffff,0x10000,6);
  Scoreboard_DrawAll();
  return;
}

