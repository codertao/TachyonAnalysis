
/* S->C 0x1001 */

void SrvSend_TextMsg(undefined4 param_1,int param_2,uint param_3,TachConn *param_4,
                    undefined4 param_5,Quadrant *param_6,undefined4 param_7)

{
  char cVar1;
  undefined2 *payload;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  EventSpec local_18;
  
  payload = (undefined2 *)NetSrv_AllocEvent();
  if (payload != (undefined2 *)0x0) {
    *payload = (short)param_2;
    payload[1] = (undefined2)param_7;
    Str_CountLines(payload + 2,param_1,0xff);
    uVar3 = param_3 | 0x80;
    if (param_6 != (Quadrant *)0x0) {
      uVar3 = param_3 | 0xa0;
    }
    local_18._16_4_ = param_5;
    iVar2 = -1;
    local_18.quadrant = param_6;
    local_18.target = param_4;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    pcVar4 = (char *)(payload + 2);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_18._4_4_ = uVar3;
    NetSrv_QueueEvent(payload,0x1001,~(ushort)iVar2 + 6 & 0xfffe,&local_18);
    if ((((g_FlightStateFlags & 2) == 0) && (param_2 != 1)) && ((uVar3 & 2) == 0)) {
      TextBar_Add(param_1,param_7);
    }
  }
  return;
}

