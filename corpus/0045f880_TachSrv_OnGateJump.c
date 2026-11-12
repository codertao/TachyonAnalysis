
/* sweep */

void TachSrv_OnGateJump(undefined4 *param_1)

{
  Quadrant *pQVar1;
  int iVar2;
  
  pQVar1 = g_SrvCurShip->quadrant;
  iVar2 = Quad_FindEntById(*param_1,pQVar1);
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(iVar2 + 0xf0) + 0x58) == 0) {
      Srv_HyperToQuadrant(iVar2,pQVar1);
    }
    else {
      Gate_JumpToSector();
    }
    Gate_SendJumpFx(iVar2 + 0x34,pQVar1,g_SrvCurConn);
  }
  return;
}

