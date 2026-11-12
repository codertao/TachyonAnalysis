
/* sweep */

void DM_RespawnPlayer(int param_1,undefined4 param_2)

{
  DM_PickSpawnPos(param_1);
  if (*(Quadrant **)(*(int *)(param_1 + 200) + 100) != g_SectorTable[0].quadrant) {
    Srv_MovePlayerToQuadrant(param_1,g_SectorTable[0].quadrant,param_2);
  }
  return;
}

