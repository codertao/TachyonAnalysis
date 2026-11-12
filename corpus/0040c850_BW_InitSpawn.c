
/* sweep */

void BW_InitSpawn(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  uVar2 = BW_FindHomeQuadrant(param_1);
  *(undefined4 *)(iVar1 + 100) = uVar2;
  BW_PickSpawnPos(param_1);
  return;
}

