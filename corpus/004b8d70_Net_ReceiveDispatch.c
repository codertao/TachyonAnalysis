
/* receive loop: pull packets (0x4b9110) and dispatch via 0x4b8c90 handler table */

void Net_ReceiveDispatch(void)

{
  bool bVar1;
  int iVar2;
  
  do {
    while( true ) {
      bVar1 = false;
      if (((byte)DAT_006af658 & 2) == 0) {
        iVar2 = thunk_FUN_004aabb0();
        if (iVar2 != 0) {
          FUN_004b8c90(iVar2,DAT_0055e420);
          bVar1 = true;
        }
      }
      iVar2 = FUN_004b9110(2);
      if (iVar2 == 0) break;
      FUN_004b8c90(iVar2,DAT_006af574);
    }
  } while (bVar1);
  return;
}

