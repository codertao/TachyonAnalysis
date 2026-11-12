
/* sweep: 0x2018 */

void NetCli_SendPickup(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)NetCli_AllocEvent();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    NetCli_QueueEvent(puVar1,0x2018,2,0x800);
  }
  return;
}

