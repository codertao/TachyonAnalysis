
void FUN_00460480(undefined4 *param_1)

{
  if (*(short *)((int)param_1 + 6) == 1) {
    SrvSend_EntityFired(g_SrvCurShip->netId,*param_1,*(undefined2 *)(param_1 + 1),0,g_SrvCurConn,
                        g_SrvCurShip->quadrant,1);
    return;
  }
  FUN_004985f0(g_SrvCurShip->quadrant,*param_1);
  SrvSend_MineRemoved(*param_1,g_SrvCurShip->quadrant);
  return;
}

