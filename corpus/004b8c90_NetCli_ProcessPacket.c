
/* seq/ack check, retire acked events, dispatch sub-msgs 2/4/6/7/app */

void NetCli_ProcessPacket(uint *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  void *node;
  uint *puVar3;
  
  puVar3 = param_1 + 2;
  if ((DAT_006af64c == 0) || (DAT_006af64c < *param_1)) {
    DAT_006af64c = *param_1;
    uVar1 = param_1[1];
    pvVar2 = DAT_006af62c;
    while (node = pvVar2, node != (void *)0x0) {
      pvVar2 = *(void **)((int)node + 8);
      if ((*(uint *)((int)node + 0x1c) != 0) && (*(uint *)((int)node + 0x1c) <= uVar1)) {
        List_Remove(node,&DAT_006af62c);
        Pool_Free((Pool *)&DAT_006af5e4,node);
      }
    }
    for (; puVar3 < (uint *)((int)param_1 + param_2);
        puVar3 = (uint *)((int)puVar3 + (uint)*(ushort *)((int)puVar3 + 2))) {
      switch((short)*puVar3) {
      case 2:
        NetCli_HandleGameData(puVar3);
        break;
      default:
        NetCli_HandleAppEvent(puVar3);
        break;
      case 4:
        NetCli_HandleStartupData(puVar3);
        break;
      case 6:
        NetCli_HandlePlayerInfo(puVar3);
        break;
      case 7:
        NetCli_HandleKick(puVar3);
      }
    }
  }
  return;
}

