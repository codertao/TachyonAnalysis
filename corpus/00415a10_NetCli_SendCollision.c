
/* client->server event 0x2009 {impact speed, other entity server id} */

void NetCli_SendCollision(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    NetCli_QueueEvent(puVar1,0x2009,8,0x800);
  }
  return;
}

