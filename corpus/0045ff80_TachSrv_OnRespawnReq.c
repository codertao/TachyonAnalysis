
/* sweep */

void TachSrv_OnRespawnReq(void)

{
  Srv_RespawnPlayer(g_SrvCurConn,1);
  return;
}

