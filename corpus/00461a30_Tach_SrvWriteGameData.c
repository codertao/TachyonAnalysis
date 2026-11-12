
/* 24-byte status header + entity snapshot */

void __cdecl Tach_SrvWriteGameData(TachConn *conn,uint *out)

{
  SpED_SrvPlayer *pSVar1;
  SpED *pSVar2;
  code *pcVar3;
  undefined1 uVar4;
  
  pSVar1 = conn->ship;
  g_SrvCurConn = conn;
  g_SrvCurShip = conn->ship;
  *(short *)(out + 2) = (short)(pSVar1->power).shieldFront;
  *(short *)((int)out + 10) = (short)(pSVar1->power).shieldRear;
  *(short *)(out + 3) = (short)(pSVar1->power).hull;
  *(undefined2 *)((int)out + 0x12) = *(undefined2 *)&pSVar1->field_0x14c;
  out[5] = conn->oneShotFlags;
  conn->oneShotFlags = 0;
  pSVar2 = pSVar1->target;
  if (pSVar2 == (SpED *)0x0) {
    *out = 0;
    *(undefined1 *)(out + 1) = 0xff;
    *(undefined1 *)((int)out + 5) = 0xff;
    *(undefined1 *)((int)out + 6) = 0xff;
  }
  else {
    *out = (uint)pSVar2[1].pool;
    if (pSVar2->poolType == 1) {
      uVar4 = Srv_WriteCredits(pSVar2);
      *(undefined1 *)((int)out + 6) = uVar4;
    }
    *(undefined1 *)(out + 1) = 100;
    *(undefined1 *)((int)out + 5) = 100;
    if ((pSVar2->desc != (Desc *)0x0) && (pcVar3 = pSVar2->desc->query, pcVar3 != (code *)0x0)) {
      uVar4 = (*pcVar3)(pSVar2,6,0);
      *(undefined1 *)(out + 1) = uVar4;
      uVar4 = (*pcVar3)(pSVar2,7,0);
      *(undefined1 *)((int)out + 5) = uVar4;
      Tach_SrvWriteSnapshot(conn,(short *)(out + 6));
      return;
    }
  }
  Tach_SrvWriteSnapshot(conn,(short *)(out + 6));
  return;
}

