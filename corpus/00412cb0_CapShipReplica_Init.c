
/* sweep */

void CapShipReplica_Init(undefined4 param_1,undefined4 param_2,int param_3)

{
  CapPartReplica_Setup(param_1,param_2,param_3);
  CapShipReplica_SpawnParts(param_1,param_3 + 0x18,param_2);
  return;
}

