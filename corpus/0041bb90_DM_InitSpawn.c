
/* sweep */

void DM_InitSpawn(int param_1)

{
  *(Quadrant **)(*(int *)(param_1 + 200) + 100) = g_SectorTable[0].quadrant;
  DM_PickSpawnPos(param_1);
  return;
}

