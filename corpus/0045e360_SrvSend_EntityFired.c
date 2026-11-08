
/* S->C 0x1103 */

void SrvSend_EntityFired(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4
                        ,int param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 2) = param_3;
    puVar1[1] = param_2;
    local_18 = 4;
    local_14 = 0x20;
    local_4 = param_6;
    if (param_5 != 0) {
      local_14 = 0x22;
      local_c = param_5;
    }
    NetSrv_QueueEvent(puVar1,0x1103,0xc,&local_18);
  }
  return;
}

