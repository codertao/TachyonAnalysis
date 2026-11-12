
/* receive, per-player tick, world tick callback, send round */

void NetSrv_Tick(void)

{
  NetSrv_ReceiveAll();
  NetSrv_TickTimeouts();
  NetSrv_CallWorldTick();
  NetSrv_SendRound();
  DAT_006af674 = DAT_006af674 + 1;
  return;
}

