
/* S->C 0x1006 */

void SrvSend_YouDied(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  iVar1 = maybe_take_some_mem();
  if (iVar1 != 0) {
    local_18 = 0x800;
    local_14 = 4;
    local_c = param_1;
    NetSrv_QueueEvent(iVar1,0x1006,2,&local_18);
  }
  return;
}

