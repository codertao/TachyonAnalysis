
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
  DPlay_RecreateInstance();
  Net_SelectTransport(1);
  NetDrv_Init();
  uVar1 = _atoi(&g_NwJoinPort,0xace);
  NetDrv_SetPorts(uVar1);
  NetDrv_SetDynamicPortUsage(1);
  local_4 = &g_NwJoinHost;
  iVar2 = NetDrv_ConnectTCPIP(&local_4);
  if (iVar2 != 0) {
    return 0;
  }
  NetDrv_GetRecvPort(&DAT_00591250);
  return 1;
}

