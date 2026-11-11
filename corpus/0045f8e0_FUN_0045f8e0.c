
void FUN_0045f8e0(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  g_SrvCurConn->state = 0;
  Ent_EnterQuadrant((SpED *)g_SrvCurShip,g_SrvCurShip->quadrant);
  if (g_Wingman != 0) {
    *(Quadrant **)(g_Wingman + 100) = g_SrvCurShip->quadrant;
    FUN_00457a70(g_Wingman,*(undefined4 *)(g_Wingman + 100));
  }
  if (g_SrvCurConn->jumpGate != (SpED *)0x0) {
    FUN_004269b0(&g_SrvCurConn->jumpGate->pos,g_SrvCurShip->quadrant,g_SrvCurConn);
  }
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 2;
  local_c = 0;
  Mission_PostEvent(&local_18,g_SrvCurShip->quadrant);
  return;
}

