
/* sweep */

bool Net_InitAdvertTransport(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_NwAdvert;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Net_SelectTransport(0);
  NetDrv_Init();
  iVar1 = DPlay_InitIPX();
  return iVar1 == 0;
}

