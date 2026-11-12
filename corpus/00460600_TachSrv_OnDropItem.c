
/* sweep: guess */

void TachSrv_OnDropItem(undefined2 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)&g_SrvCurConn->field_0x204;
  if (0 < iVar2) {
    *(int *)&g_SrvCurConn->field_0x204 = iVar2 + 0x32;
    return;
  }
  *(int *)&g_SrvCurConn->field_0x204 = iVar2 + 0x32;
  switch(*param_1) {
  case 0:
    Srv_SpawnDroppedItem(g_SrvCurConn,param_1 + 2,0,0xffffffff,DAT_005a6320 & 0xff,0x14,0x19,0);
    return;
  case 1:
    piVar1 = (int *)(DAT_006af660 + (short)param_1[1] * 0x208);
    if (*piVar1 != 0) {
      SrvSend_TextMsg(param_1 + 2,0,4,piVar1,0xffffffff,0,DAT_005a632b);
      return;
    }
    break;
  case 4:
    SrvSend_TextMsg(param_1 + 2,0,8,0,(int)(short)param_1[1],0,DAT_005a632c & 0xff);
    break;
  case 8:
    Srv_SpawnDroppedItem
              (g_SrvCurConn,param_1 + 2,0x10,(int)(short)param_1[1],DAT_005a6329,0x14,0x1a,0);
    return;
  }
  return;
}

