
/* S->C 0x1029 */

void SrvSend_RosterClear(int param_1)

{
  undefined2 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined2 *)maybe_take_some_mem();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *(undefined2 *)(param_1 + 8);
    local_18 = 0x800;
    local_14 = 0;
    NetSrv_QueueEvent(puVar1,0x1029,2,&local_18);
  }
  return;
}

