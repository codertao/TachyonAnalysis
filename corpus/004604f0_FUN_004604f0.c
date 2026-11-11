
void FUN_004604f0(undefined4 param_1)

{
  FUN_00498710(param_1,0,g_SrvCurShip->quadrant);
  SrvSend_DecoyDropped(param_1,g_SrvCurConn,g_SrvCurShip->quadrant);
  return;
}

