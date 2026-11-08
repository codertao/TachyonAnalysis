
/* S->C 0x1104 */

void SrvSend_DecoyDropped(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    local_18 = 0x800;
    local_14 = 0x61;
    local_4 = param_3;
    local_10 = 0x1388000;
    if (param_2 != 0) {
      local_14 = 99;
      local_c = param_2;
    }
    NetSrv_QueueEvent(puVar1,0x1104,0xc,&local_18);
  }
  return;
}

