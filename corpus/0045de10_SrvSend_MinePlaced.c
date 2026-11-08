
/* S->C 0x1008 */

void SrvSend_MinePlaced(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    *(undefined2 *)(puVar1 + 3) = param_2;
    local_10 = param_3;
    local_18 = 4;
    local_14 = 0x61;
    local_4 = param_4;
    NetSrv_QueueEvent(puVar1,0x1008,0xe,&local_18);
  }
  return;
}

