
/* sweep */

void BW_RespawnPlayer(int param_1,undefined4 param_2)

{
  int iVar1;
  
  BW_PickSpawnPos(param_1);
  iVar1 = BW_FindHomeQuadrant(param_1);
  if (iVar1 != *(int *)(*(int *)(param_1 + 200) + 100)) {
    Srv_MovePlayerToQuadrant(param_1,iVar1,param_2);
  }
  return;
}

