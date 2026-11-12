
/* sweep: 0x2019 */

void NetCli_SendCargoDrop(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 1) = param_2;
    *(undefined2 *)((int)puVar1 + 6) = param_3;
    NetCli_QueueEvent(puVar1,0x2019,8,0x800);
  }
  return;
}

