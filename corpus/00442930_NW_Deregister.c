
/* 3 heartbeats with Players=-1, 200 ms apart, then clear advert state */

void NW_Deregister(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005a4044 = 0;
  NW_Heartbeat(0xffffffff);
  Sleep(200);
  NW_Heartbeat(0xffffffff);
  Sleep(200);
  NW_Heartbeat(0xffffffff);
  puVar2 = &g_NwAdvert;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

