
/* S->C 0x1123 */

void SrvSend_FactionProgress
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[2] = param_4;
    puVar1[1] = param_3;
    local_18 = 0x800;
    if (param_5 == 0) {
      local_14 = 0x10;
      local_8 = param_1;
    }
    else {
      local_14 = 4;
      local_c = param_5;
    }
    NetSrv_QueueEvent(puVar1,0x1123,0xc,&local_18);
  }
  return;
}

