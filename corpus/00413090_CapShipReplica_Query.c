
/* sweep: desc query method */

undefined4 CapShipReplica_Query(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 2:
    Part_GetAttachWorldPos(param_1,*(undefined4 *)(param_1 + 0xe0),param_3);
    break;
  case 8:
    if (*(int *)(param_1 + 0xd4) == 0) {
      return *(undefined4 *)(param_1 + 0xe8);
    }
    return *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0xe8);
  case 10:
  case 0x10:
  case 0x15:
    return 1;
  case 0xd:
    uVar1 = ReplicaChain_Next(param_1,param_3);
    return uVar1;
  case 0xe:
    uVar1 = ReplicaChain_Prev(param_1,param_3);
    return uVar1;
  case 0x14:
    if (*(int *)(param_1 + 0xd4) == 0) {
      return 1;
    }
    return 1;
  case 0x18:
    if (*(char *)(param_1 + 0xc2) == '\x02') {
      return 1;
    }
  }
  return 0;
}

