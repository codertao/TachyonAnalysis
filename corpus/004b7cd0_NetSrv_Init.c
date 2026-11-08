
/* copy server config (0x16 dwords -> 0x6af788), alloc mpPlayerBuffer / Server send buffer / Server
   Event Buffer */

void NetSrv_Init(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  FUN_004a6e10(NetSrv_OnPlayerJoin);
  FUN_004a6e40(&LAB_004b7c80);
  puVar2 = &DAT_006af660;
  for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_006af7e8 = param_2;
  piVar5 = param_1;
  piVar6 = &DAT_006af788;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  DAT_006af79c = DAT_006af79c + 0x3c;
  puVar2 = (undefined4 *)param_1[0x15];
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_0049c500(param_1[1] * *param_1,4,0,s_mpPlayerBuffer_0055f060,param_2)
    ;
  }
  iVar3 = param_1[1];
  iVar1 = *param_1;
  DAT_006af660 = puVar2;
  for (uVar4 = (uint)(iVar3 * iVar1) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = iVar3 * iVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  DAT_006af668 = FUN_0049c500(param_1[2],4,0,s_Server_send_buffer_0055f04c,DAT_006af7e8);
  FUN_004b7840(&GLBL_maybe_mem_pool_of_size,param_1[3],DAT_006af79c,s_Server_Event_Buffer_0055f038);
  DAT_006af674 = 100;
  NetBridge_Init(1);
  return;
}

