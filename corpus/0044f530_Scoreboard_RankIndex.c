
/* sweep: guess */

int Scoreboard_RankIndex(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return 0xf0 - ((uint)(iVar1 * 0x10 + param_1 * 0x30) >> 1);
}

