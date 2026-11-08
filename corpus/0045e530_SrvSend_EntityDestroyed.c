
/* S->C 0x1003 */

void SrvSend_EntityDestroyed
               (undefined4 *param_1,undefined4 param_2,undefined1 param_3,int param_4,int param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_4;
  
  uVar2 = 0x61;
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_6;
    *(char *)(puVar1 + 5) = (char)param_2;
    *(undefined1 *)((int)puVar1 + 0x15) = param_3;
    if (param_5 != 0) {
      uVar2 = 99;
    }
    local_c = param_5;
    local_18 = 4;
    local_4 = param_8;
    local_14 = uVar2;
    if (param_4 == 0) {
      param_4 = FUN_00423250(param_2);
    }
    local_10 = param_4;
    NetSrv_QueueEvent(puVar1,0x1003,0x16,&local_18);
  }
  return;
}

