
/* S->C 0x1033 */

void SrvSend_SessionBump(void)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = DAT_006af6e0;
    local_18 = 0x800;
    local_14 = 0;
    NetSrv_QueueEvent(puVar1,0x1033,4,&local_18);
  }
  return;
}

