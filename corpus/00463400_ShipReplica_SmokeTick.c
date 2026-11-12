
/* sweep: guess */

void ShipReplica_SmokeTick(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar1 = *(int *)(param_1 + 0xdc) + -1;
    *(int *)(param_1 + 0xdc) = iVar1;
    Ship_SpawnDamageSmoke
              (param_1,*(int *)(param_1 + 0x8c) + 0x598,*(undefined4 *)(param_1 + 0x104),iVar1);
  }
  return;
}

