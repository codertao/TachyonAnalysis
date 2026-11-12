
/* sweep: 0x2007 */

void NetCli_SendArrivedQuadrant(void)

{
  int iVar1;
  
  iVar1 = NetCli_AllocEvent();
  if (iVar1 != 0) {
    NetCli_QueueEvent(iVar1,0x2007,2,0x800);
  }
  return;
}

