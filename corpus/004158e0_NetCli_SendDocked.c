
/* sweep: 0x2013 */

void NetCli_SendDocked(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    NetCli_QueueEvent(puVar1,0x2013,4,0x800);
  }
  return;
}

