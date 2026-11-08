
/* S->C 0x1032 */

void SrvSend_RoundResult(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = maybe_take_some_mem();
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x20) = (undefined2)DAT_005b97b8;
    FUN_0040d990(iVar1,&DAT_00533540);
    FUN_0040d990(iVar1 + 0x10,s_GALSPAN_00533548);
    local_18 = 0x800;
    local_14 = 0;
    NetSrv_QueueEvent(iVar1,0x1032,0x24,&local_18);
  }
  return;
}

