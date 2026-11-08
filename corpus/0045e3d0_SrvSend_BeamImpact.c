
/* S->C 0x1118 */

void SrvSend_BeamImpact(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                       undefined2 param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)maybe_take_some_mem();
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    *(undefined2 *)(puVar2 + 2) = param_3;
    *(undefined2 *)((int)puVar2 + 10) = param_4;
    *(undefined2 *)((int)puVar2 + 0x12) = param_5;
    uVar1 = f16_Encode(*param_6);
    *(undefined2 *)(puVar2 + 3) = uVar1;
    uVar1 = f16_Encode(param_6[1]);
    *(undefined2 *)((int)puVar2 + 0xe) = uVar1;
    uVar1 = f16_Encode(param_6[2]);
    *(undefined2 *)(puVar2 + 4) = uVar1;
    local_18 = 1;
    local_14 = 0x60;
    local_4 = param_7;
    NetSrv_QueueEvent(puVar2,0x1118,0x14,&local_18);
  }
  return;
}

