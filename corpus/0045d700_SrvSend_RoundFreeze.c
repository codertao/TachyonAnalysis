
/* S->C 0x1119 */

void SrvSend_RoundFreeze(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = maybe_take_some_mem();
  if (iVar1 != 0) {
    local_18 = 0x800;
    local_14 = 0;
    NetSrv_QueueEvent(iVar1,0x1119,2,&local_18);
    FUN_0045d6c0();
  }
  return;
}

