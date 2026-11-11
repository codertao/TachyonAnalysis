
/* alloc player slot, init (name / JAKE_LOGAN default), join callback 0x6af7b4 */

void NetSrv_OnPlayerJoin(void)

{
  TachConn *slot;
  uint local_4;
  
  DAT_006af664 = DAT_006af664 + 1;
  if (DAT_006af6f0 <= DAT_006af664) {
    DAT_006af6f0 = DAT_006af664;
  }
  slot = (TachConn *)NetSrv_FindFreeSlot(&local_4);
  NetSrv_InitPlayerSlot(slot,local_4);
  if (DAT_006af7b4 != (code *)0x0) {
    (*DAT_006af7b4)(slot,DAT_0055e42c,DAT_0055e430);
  }
  slot->kicked = 1;
  *(int *)&slot->field_0x8c = *(int *)&slot->field_0x8c + 1;
  return;
}

