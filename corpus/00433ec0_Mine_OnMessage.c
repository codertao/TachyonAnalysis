
/* mine message switch; 0x1f = faction level changed */

uint Mine_OnMessage(int param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_2) {
  case 1:
    Mine_SetArmed(param_1,param_3);
    return 0;
  case 3:
    Mine_Destroy(param_1);
    return 0;
  case 4:
    return (uint)*(byte *)(param_1 + 0xf6);
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0xd8) + 0x24) & 0x80) != 0) {
      return *(uint *)(*(int *)(param_1 + 0x8c) + 0x194);
    }
    break;
  case 6:
    return *(uint *)(*(int *)(param_1 + 0x8c) + 0x198);
  case 7:
    Ent_SetIdentified(param_1,param_1 + 0xdc,param_3);
    return 0;
  case 8:
    Ent_SetTeam(param_1,param_3);
    return 0;
  case 0x1f:
    Mine_OnFactionLevel(param_1,param_3);
  }
  return 0;
}

