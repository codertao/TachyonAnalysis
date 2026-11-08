
/* drain loopback + transport, NetSrv_ProcessPacket each */

void NetSrv_ReceiveAll(void)

{
  int iVar1;
  int iVar2;
  
  FUN_004b81d0();
  do {
    while( true ) {
      iVar1 = NetBridge_Get(1);
      if (iVar1 != 0) {
        NetSrv_ProcessPacket(iVar1,DAT_006af568);
      }
      iVar2 = thunk_FUN_004aabb0();
      if (iVar2 == 0) break;
      NetSrv_ProcessPacket(iVar2,DAT_0055e420);
    }
  } while (iVar1 != 0);
  FUN_004b8210();
  return;
}

