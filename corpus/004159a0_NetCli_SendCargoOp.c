
/* sweep: 0x2020 */

void NetCli_SendCargoOp(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    NetCli_QueueEvent(puVar1,0x2020,0xc,0x800);
  }
  return;
}

