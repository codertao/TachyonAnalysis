
/* alloc player slot, init (name / JAKE_LOGAN default), join callback 0x6af7b4 */

void NetSrv_OnPlayerJoin(void)

{
  int iVar1;
  undefined4 local_4;
  
  DAT_006af664 = DAT_006af664 + 1;
  if (DAT_006af6f0 <= DAT_006af664) {
    DAT_006af6f0 = DAT_006af664;
  }
  iVar1 = NetSrv_FindFreeSlot(&local_4);
  NetSrv_InitPlayerSlot(iVar1,local_4);
  if (DAT_006af7b4 != (code *)0x0) {
    (*DAT_006af7b4)(iVar1,DAT_0055e42c,DAT_0055e430);
  }
  *(undefined1 *)(iVar1 + 0x88) = 1;
  *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + 1;
  return;
}

