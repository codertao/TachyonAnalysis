
/* S->C 0x1020 */

void SrvSend_EntityFiredAt
               (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined2 param_8)

{
  undefined1 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar1 = (undefined1 *)maybe_take_some_mem();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 0x16) = param_8;
    *(undefined4 *)(puVar1 + 0xe) = param_4;
    puVar1[1] = param_7;
    *(undefined4 *)(puVar1 + 0x12) = param_5;
    FUN_0048e8f0(param_2,puVar1 + 2);
    FUN_0048e8f0(param_3,puVar1 + 8);
    local_18 = 0x800;
    local_14 = 0x20;
    local_4 = param_6;
    NetSrv_QueueEvent(puVar1,0x1020,0x18,&local_18);
  }
  return;
}

