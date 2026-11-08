
/* S->C 0x1117 */

void SrvSend_ResupplyNotice(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  puVar1 = (undefined2 *)maybe_take_some_mem();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = param_2;
    local_18 = 0x800;
    local_14 = 4;
    local_c = param_3;
    NetSrv_QueueEvent(puVar1,0x1117,6,&local_18);
  }
  return;
}

