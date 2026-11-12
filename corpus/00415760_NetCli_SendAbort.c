
/* sweep: 0x2024 */

void NetCli_SendAbort(void)

{
  int iVar1;
  
  iVar1 = NetCli_AllocEvent();
  if (iVar1 != 0) {
    NetCli_QueueEvent(iVar1,0x2024,2,0x800);
  }
  return;
}

