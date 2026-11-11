
/* seq/ack check, retire acked events, dispatch sub-msgs (3, 0x103, app) */

void NetSrv_ProcessPacket(uint *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  void *node;
  int iVar3;
  uint *puVar4;
  
  puVar4 = param_1 + 2;
  iVar3 = NetSrv_FindPlayerByConnId(DAT_0055e404);
  DAT_006af7e0 = iVar3;
  if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0xc0) == 0 || (*(uint *)(iVar3 + 0xc0) < *param_1)))) {
    *(uint *)(iVar3 + 0xc0) = *param_1;
    uVar1 = param_1[1];
    pvVar2 = *(void **)(iVar3 + 0x84);
    while (node = pvVar2, node != (void *)0x0) {
      pvVar2 = *(void **)((int)node + 8);
      if ((*(uint *)((int)node + 0x1c) != 0) && (*(uint *)((int)node + 0x1c) <= uVar1)) {
        List_Remove(node,(void **)(iVar3 + 0x84));
        Pool_Free((Pool *)(iVar3 + 0x18),node);
      }
    }
    for (; puVar4 < (uint *)((int)param_1 + param_2);
        puVar4 = (uint *)((int)puVar4 + (uint)*(ushort *)((int)puVar4 + 2))) {
      if ((short)*puVar4 == 3) {
        NetSrv_HandlePlayerData(puVar4);
      }
      else if ((short)*puVar4 == 0x103) {
        NetSrv_HandleStartupAck(puVar4,iVar3);
      }
      else {
        NetSrv_HandleAppEvent();
      }
    }
    if (DAT_006af7d8 != (code *)0x0) {
      (*DAT_006af7d8)();
    }
  }
  return;
}

