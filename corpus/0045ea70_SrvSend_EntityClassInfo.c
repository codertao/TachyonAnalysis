
/* S->C 0x1100 */

void SrvSend_EntityClassInfo(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *payload;
  undefined4 local_1c;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    local_1c = 6;
    *payload = *(undefined4 *)(param_1 + 0x78);
    *(undefined2 *)(payload + 1) = *(undefined2 *)(iVar1 + 0x14);
    pcVar2 = *(code **)(iVar1 + 0x24);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1,payload,&local_1c);
    }
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    local_18.target = g_SrvCurConn;
    NetSrv_QueueEvent(payload,0x1100,(short)local_1c,&local_18);
  }
  return;
}

