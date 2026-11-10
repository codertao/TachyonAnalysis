
/* C->S 0x2005 {u16 op, u16 amount} */

void NetCli_SendPowerOp(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)NetCli_AllocEvent();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    NetCli_QueueEvent(puVar1,0x2005,4,0x800);
  }
  return;
}

