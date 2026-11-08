
/* S->C 0x1124 handler */

void CliOn_Ammo(short *param_1)

{
  (&DAT_005b1f3c)[*param_1 * 0xe] = (int)param_1[1];
  return;
}

