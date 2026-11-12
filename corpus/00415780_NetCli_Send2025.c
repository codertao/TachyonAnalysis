
/* sweep: 0x2025 */

void NetCli_Send2025(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)NetCli_AllocEvent();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    NetCli_QueueEvent(puVar1,0x2025,2,0x800);
  }
  return;
}

