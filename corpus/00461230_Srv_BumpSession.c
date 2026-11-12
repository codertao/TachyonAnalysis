
/* sweep */

void Srv_BumpSession(void)

{
  NetSrv_BumpSession();
  SrvSend_SessionBump();
  return;
}

