
void FUN_00415af0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    NetCli_QueueEvent(puVar1,0x2002,4,0x800);
  }
  return;
}

