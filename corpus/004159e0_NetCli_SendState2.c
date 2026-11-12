
/* sweep: 0x2010 */

void NetCli_SendState2(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)NetCli_AllocEvent();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
    NetCli_QueueEvent(puVar1,0x2010,2,0x800);
  }
  return;
}

