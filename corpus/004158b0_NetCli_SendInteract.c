
/* sweep: 0x2014 */

void NetCli_SendInteract(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0xe8);
    NetCli_QueueEvent(puVar1,0x2014,4,0x800);
  }
  return;
}

