
/* S->C 0x1014 */

void SrvSend_EntityStateOp
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,int param_4,
               undefined4 param_5,int param_6)

{
  undefined2 *puVar1;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_4;
  
  puVar1 = (undefined2 *)maybe_take_some_mem();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_3;
    *(undefined4 *)(puVar1 + 2) = param_2;
    local_18 = 0x800;
    local_14 = 0x20;
    local_10 = param_4;
    local_4 = param_5;
    if (param_4 != 0) {
      local_14 = 0x21;
    }
    if (param_6 != 0) {
      local_c = param_6;
      local_14 = local_14 | 2;
    }
    NetSrv_QueueEvent(puVar1,0x1014,8,&local_18);
  }
  return;
}

