
/* receive, per-player tick, world tick callback, send round */

void NetSrv_Tick(void)

{
  NetSrv_ReceiveAll();
  FUN_004b7db0();
  FUN_004b7e00();
  NetSrv_SendRound();
  DAT_006af674 = DAT_006af674 + 1;
  return;
}

