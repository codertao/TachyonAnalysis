
/* sweep: 300 streaks */

void HyperStars_SpawnAll(void)

{
  int iVar1;
  
  iVar1 = 300;
  do {
    HyperStar_Spawn();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

