
/* sweep: guess */

void TachSrv_OnMineHit(undefined2 *param_1)

{
  Mine_FindByOwnerId(g_SrvCurShip->quadrant,*param_1,g_SrvCurShip);
  return;
}

