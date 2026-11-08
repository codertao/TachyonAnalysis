
/* S->C 0x1015 */

void SrvSend_NavPrimary(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  undefined4 local_4;
  
  pcVar6 = DAT_005a5e24;
  if (param_1 != 0) {
    pcVar6 = *(char **)(param_1 + 0x154);
  }
  if ((pcVar6 != (char *)0x0) &&
     (puVar2 = (undefined4 *)maybe_take_some_mem(), puVar2 != (undefined4 *)0x0)) {
    uVar4 = 0xffffffff;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = (char *)(puVar2 + 2);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = FUN_00427310(param_3,param_4,param_2,puVar2 + 1);
    *puVar2 = uVar3;
    local_4 = param_2;
    local_18 = 0x800;
    local_14 = 0x20;
    if (param_1 != 0) {
      local_14 = 0x24;
      local_c = param_1;
    }
    NetSrv_QueueEvent(puVar2,0x1015,0x28,&local_18);
  }
  return;
}

