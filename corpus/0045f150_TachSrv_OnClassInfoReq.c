
/* sweep */

void TachSrv_OnClassInfoReq(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Quad_FindEntById(*param_1,g_SrvCurShip->quadrant);
  if (iVar1 != 0) {
    SrvSend_EntityClassInfo(iVar1);
  }
  return;
}

