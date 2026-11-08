
/* S->C 0x1011 */

void SrvSend_Despawn(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x78);
    local_4 = *(undefined4 *)(param_1 + 100);
    local_18 = 0x800;
    local_14 = 0x20;
    NetSrv_QueueEvent(puVar1,0x1011,4,&local_18);
  }
  return;
}

