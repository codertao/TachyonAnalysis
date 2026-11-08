
/* S->C 0x1121 */

void SrvSend_CampaignCheck(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 == 0xb) {
    iVar1 = maybe_take_some_mem();
    if (iVar1 != 0) {
      local_18 = 0x800;
      local_14 = 0;
      NetSrv_QueueEvent(iVar1,0x1121,4,&local_18);
    }
  }
  return;
}

