
/* S->C 0x1012 handler */

void CliOn_Respawn(int param_1)

{
  DAT_005b903c = 0;
  Player_Respawn(param_1,param_1 + 0xc);
  return;
}

