
/* copy pending reliable events into packet, decrement resend budget */

void __cdecl NetSrv_WriteQueuedEvents(TachConn *conn)

{
  ushort uVar1;
  ConnEvent *pCVar2;
  ConnEvent *node;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  
  pCVar2 = conn->eventQueue;
  while (node = pCVar2, node != (ConnEvent *)0x0) {
    pCVar2 = node->next;
    if (node->sendSeq == 0) {
      node->sendSeq = conn->txSeq;
    }
    uVar1 = node->size;
    puVar5 = &node->type;
    puVar6 = DAT_006af670;
    for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *(undefined4 *)puVar5;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar6 = (char)*puVar5;
      puVar5 = (ushort *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    DAT_006af670 = (undefined4 *)((int)DAT_006af670 + (uint)node->size);
    iVar4 = node->resend + -1;
    node->resend = iVar4;
    if (iVar4 < 1) {
      List_Remove(node,&conn->eventQueue);
      Pool_Free(&conn->eventPool,node);
    }
  }
  return;
}

