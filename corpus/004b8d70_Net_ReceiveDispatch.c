
/* receive loop: pull packets (0x4b9110) and dispatch via 0x4b8c90 handler table */

void Net_ReceiveDispatch(void)

{
  bool bVar1;
  int iVar2;
  
  do {
    while( true ) {
      bVar1 = false;
      if (((byte)GLBL_some_game_mode & 2) == 0) {
        iVar2 = thunk_FUN_004aabb0();
        if (iVar2 != 0) {
          NetCli_ProcessPacket(iVar2,DAT_0055e420);
          bVar1 = true;
        }
      }
      iVar2 = NetBridge_Get(2);
      if (iVar2 == 0) break;
      NetCli_ProcessPacket(iVar2,DAT_006af574);
    }
  } while (bVar1);
  return;
}

