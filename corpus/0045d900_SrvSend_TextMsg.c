
/* S->C 0x1001 */

void SrvSend_TextMsg(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,
                    undefined4 param_5,int param_6,undefined4 param_7)

{
  char cVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_18;
  uint local_14;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  puVar2 = (undefined2 *)maybe_take_some_mem();
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = (short)param_2;
    puVar2[1] = (undefined2)param_7;
    FUN_0048eda0(puVar2 + 2,param_1,0xff);
    uVar4 = param_3 | 0x80;
    if (param_6 != 0) {
      uVar4 = param_3 | 0xa0;
    }
    local_8 = param_5;
    uVar3 = 0xffffffff;
    local_4 = param_6;
    local_c = param_4;
    local_18 = 0x800;
    pcVar5 = (char *)(puVar2 + 2);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_14 = uVar4;
    NetSrv_QueueEvent(puVar2,0x1001,~uVar3 + 6 & 0xfffffffe,&local_18);
    if ((((g_FlightStateFlags & 2) == 0) && (param_2 != 1)) && ((uVar4 & 2) == 0)) {
      FUN_0048ce30(param_1,param_7);
    }
  }
  return;
}

