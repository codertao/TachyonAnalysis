
/* S->C 0x1127 */

void SrvSend_RankChange(int param_1)

{
  undefined2 *payload;
  EventSpec local_18;
  
  payload = (undefined2 *)NetSrv_AllocEvent();
  if (payload != (undefined2 *)0x0) {
    *payload = *(undefined2 *)(param_1 + 8);
    *(undefined1 *)(payload + 1) = *(undefined1 *)(*(int *)(param_1 + 200) + 0xfc);
    *(undefined1 *)((int)payload + 3) = *(undefined1 *)(param_1 + 0x10c);
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1127,4,&local_18);
  }
  return;
}

