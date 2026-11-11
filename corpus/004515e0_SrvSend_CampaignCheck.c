
/* S->C 0x1121 */

void SrvSend_CampaignCheck(int param_1)

{
  void *payload;
  EventSpec local_18;
  
  if (param_1 == 0xb) {
    payload = (void *)NetSrv_AllocEvent();
    if (payload != (void *)0x0) {
      local_18.resend = 0x800;
      local_18._2_2_ = 0;
      local_18.flags = 0;
      local_18._6_2_ = 0;
      NetSrv_QueueEvent(payload,0x1121,4,&local_18);
    }
  }
  return;
}

