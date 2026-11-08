
void FUN_00415940(undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 1) = param_2;
    NetCli_QueueEvent(puVar1,0x2016,6,0x800);
  }
  return;
}

