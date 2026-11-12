
/* sweep */

void TachSrv_OnDecoyDropped(undefined4 param_1)

{
  Decoy_Spawn(param_1,0,g_SrvCurShip->quadrant);
  SrvSend_DecoyDropped(param_1,g_SrvCurConn,g_SrvCurShip->quadrant);
  return;
}

