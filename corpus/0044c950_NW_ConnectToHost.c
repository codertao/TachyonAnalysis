
/* select Netsock, ports from g_NwJoinPort (default 2766), netsock_InitTCPIP(g_NwJoinHost) */

undefined4 NW_ConnectToHost(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *local_4;
  
  puVar3 = &g_NwAdvert;
  for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_004aa330();
  Net_SelectTransport(1);
  FUN_004a6de0();
  uVar1 = FUN_004bd32f(&g_NwJoinPort,0xace);
  FUN_004a70d0(uVar1);
  FUN_004a70f0(1);
  local_4 = &g_NwJoinHost;
  iVar2 = FUN_004a6e50(&local_4);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_004a7110(&DAT_00591250);
  return 1;
}

