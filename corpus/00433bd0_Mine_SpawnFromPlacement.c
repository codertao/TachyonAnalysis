
/* sweep */

void Mine_SpawnFromPlacement(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  Spx_RemapPlacementNames(param_1,param_3);
  iVar1 = Spx_TestVar(param_1 + 0x3c);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x24) & 8) == 0)) {
    Mine_Spawn(param_1,param_2,param_3,0);
  }
  return;
}

