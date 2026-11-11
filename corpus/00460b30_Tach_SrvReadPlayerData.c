
void __cdecl Tach_SrvReadPlayerData(TachConn *conn,uint *pd)

{
  SpED_SrvPlayer *pSVar1;
  
  pSVar1 = conn->ship;
  g_SrvCurConn = conn;
  g_SrvCurShip = pSVar1;
  if ((*(byte *)((int)pd + 0x4b) & 1) != 0) {
    (pSVar1->vel).x = pd[0xf];
    (pSVar1->vel).y = pd[0x10];
    (pSVar1->vel).z = pd[0x11];
    (pSVar1->netPos).x = *pd;
    (pSVar1->netPos).y = pd[1];
    (pSVar1->netPos).z = pd[2];
    (pSVar1->netAng).x = (uint)(byte)pd[0x12] << 0x11;
    (pSVar1->netAng).y = (uint)*(byte *)((int)pd + 0x49) << 0x11;
    (pSVar1->netAng).z = (uint)*(byte *)((int)pd + 0x4a) << 0x11;
  }
  (conn->camera).x = pd[3];
  (conn->camera).y = pd[4];
  (conn->camera).z = pd[5];
  conn->clientFrame = pd[6];
  FUN_00455a50(pSVar1,pd);
  pSVar1->speed = (float)pd[9];
  (pSVar1->power).shieldFrontRate = pd[0xb];
  (pSVar1->power).shieldRearRate = pd[0xb];
  pSVar1->throttle = (byte)((int)pd[10] >> 3);
  if (pd[0xd] != 0) {
    FUN_00460af0(pd[0xd],pd[0xe],pSVar1->quadrant);
  }
  return;
}

