
/* seq/ack check, retire acked events, dispatch sub-msgs (3, 0x103, app) */

void NetSrv_ProcessPacket(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  puVar5 = param_1 + 2;
  iVar4 = NetSrv_FindPlayerByConnId(DAT_0055e404);
  DAT_006af7e0 = iVar4;
  if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0xc0) == 0 || (*(uint *)(iVar4 + 0xc0) < *param_1)))) {
    *(uint *)(iVar4 + 0xc0) = *param_1;
    uVar1 = param_1[1];
    iVar2 = *(int *)(iVar4 + 0x84);
    while (iVar3 = iVar2, iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      if ((*(uint *)(iVar3 + 0x1c) != 0) && (*(uint *)(iVar3 + 0x1c) <= uVar1)) {
        FUN_004b7930(iVar3,iVar4 + 0x84);
        FUN_004b78a0(iVar4 + 0x18,iVar3);
      }
    }
    for (; puVar5 < (uint *)((int)param_1 + param_2);
        puVar5 = (uint *)((int)puVar5 + (uint)*(ushort *)((int)puVar5 + 2))) {
      if ((short)*puVar5 == 3) {
        NetSrv_HandlePlayerData(puVar5);
      }
      else if ((short)*puVar5 == 0x103) {
        NetSrv_HandleStartupAck(puVar5,iVar4);
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

