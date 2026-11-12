
/* zero slot, set connection id, copy player name */

void __cdecl NetSrv_InitPlayerSlot(TachConn *slot,uint connId)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  TachConn *pTVar5;
  char *pcVar6;
  
  uVar4 = DAT_006af78c;
  DAT_006af7e0 = slot;
  pTVar5 = slot;
  for (uVar3 = DAT_006af78c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pTVar5->active = 0;
    pTVar5 = (TachConn *)&pTVar5->hasRegName;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)&pTVar5->active = 0;
    pTVar5 = (TachConn *)((int)&pTVar5->active + 1);
  }
  slot->connId = connId;
  NetSrv_InitPlayerEvents(slot);
  slot->active = 1;
  *(undefined4 *)&slot->field_0xb4 = 1;
  *(int *)&slot->field_0xc = DAT_0055e404;
  if (DAT_0055e404 == 0) {
    slot->hasRegName = 0;
  }
  else {
    slot->hasRegName = 1;
  }
  pcVar2 = DAT_006af7e4;
  if ((slot->hasRegName != 0) &&
     (pcVar2 = (char *)NetDrv_GetPlayerName(*(undefined4 *)&slot->field_0xc), pcVar2 == (char *)0x0)
     ) {
    *(undefined4 *)slot->name = s_JAKE_LOGAN_0055f02c._0_4_;
    *(undefined4 *)(slot->name + 4) = s_JAKE_LOGAN_0055f02c._4_4_;
    *(undefined2 *)(slot->name + 8) = s_JAKE_LOGAN_0055f02c._8_2_;
    cVar1 = s_JAKE_LOGAN_0055f02c[10];
    slot->txSeq = 1;
    slot->rxAck = 0;
    slot->name[10] = cVar1;
    return;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar6 + -uVar4;
  pcVar6 = slot->name;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  slot->rxAck = 0;
  slot->txSeq = 1;
  return;
}

