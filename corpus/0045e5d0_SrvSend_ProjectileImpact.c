
/* S->C 0x1004 */

void SrvSend_ProjectileImpact
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4,
               int param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_4;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)maybe_take_some_mem();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_5 != 0) {
      uVar2 = 2;
    }
    puVar1[3] = param_2;
    puVar1[4] = param_6;
    *(short *)((int)puVar1 + 0x16) = (short)((uint)*param_3 >> 0x10);
    *(short *)(puVar1 + 6) = (short)((uint)param_3[1] >> 0x10);
    *(short *)((int)puVar1 + 0x1a) = (short)((uint)param_3[2] >> 0x10);
    *(undefined2 *)(puVar1 + 5) = param_4;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    local_c = param_5;
    local_14 = uVar2 | 0x61;
    local_18 = 4;
    local_10 = 0x1770000;
    local_4 = param_7;
    NetSrv_QueueEvent(puVar1,0x1004,0x1c,&local_18);
  }
  return;
}

