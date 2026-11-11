
/* run delivery filter 0x6af7cc per player, queue copies */

void NetSrv_DistributeEvents(void)

{
  SrvEvent *pSVar1;
  int iVar2;
  SrvEvent *node;
  uint uVar3;
  TachConn *conn;
  
  if (g_NetEventList != (SrvEvent *)0x0) {
    uVar3 = 0;
    node = g_NetEventList;
    conn = DAT_006af660;
    if (DAT_006af788 != 0) {
      do {
        pSVar1 = node;
        if (conn->active != 0) {
          for (; pSVar1 != (SrvEvent *)0x0; pSVar1 = pSVar1->next) {
            iVar2 = (*DAT_006af7cc)(conn,pSVar1);
            if (iVar2 != 0) {
              NetSrv_QueueEventForPlayer(conn,pSVar1);
            }
            node = g_NetEventList;
          }
        }
        conn = (TachConn *)(conn->name + DAT_006af78c + -0x3c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_006af788);
    }
    while (node != (SrvEvent *)0x0) {
      pSVar1 = node->next;
      Pool_Free(&g_NetEventPool,node);
      node = pSVar1;
    }
    g_NetEventList = (SrvEvent *)0x0;
  }
  return;
}

