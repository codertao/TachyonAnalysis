
/* S->C 0x1127 handler */

void CliOn_RankChange(short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  *(int *)(&DAT_005b3a64 + sVar1 * 0x44) = (int)(char)param_1[1];
  *(int *)(&DAT_005b3a5c + sVar1 * 0x44) = (int)*(char *)((int)param_1 + 3);
  return;
}

