
/* S->C 0x1122 */

void SrvSend_RankProgress
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_3;
    puVar1[3] = param_5;
    *puVar1 = param_2;
    puVar1[2] = param_4;
    local_18 = 0x800;
    local_14 = 4;
    local_c = param_1;
    NetSrv_QueueEvent(puVar1,0x1122,0x10,&local_18);
  }
  return;
}

