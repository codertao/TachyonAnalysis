
/* sweep: guess */

void TachSrv_OnQuadrantEntered(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  Ent_EnterQuadrant((SpED *)g_SrvCurShip,g_SrvCurConn->ship->quadrant);
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_10 = 2;
  Mission_PostEvent(&local_18,g_SrvCurShip->quadrant);
  return;
}

