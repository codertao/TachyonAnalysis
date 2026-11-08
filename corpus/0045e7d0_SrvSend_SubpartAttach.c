
/* S->C 0x1125 */

void SrvSend_SubpartAttach
               (undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_3;
    *(undefined2 *)(puVar1 + 2) = param_2;
    local_18 = 0x800;
    local_14 = 0x20;
    local_4 = param_4;
    NetSrv_QueueEvent(puVar1,0x1125,10,&local_18);
  }
  return;
}

