
/* sweep */

void Base_InitClientParts(undefined4 param_1,undefined4 param_2,int param_3)

{
  CapPart_InitReplica(param_1,param_2,param_3);
  Base_SpawnReplicaParts(param_1,param_3 + 0xc,param_2);
  return;
}

