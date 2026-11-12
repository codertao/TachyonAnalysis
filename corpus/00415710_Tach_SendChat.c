
/* 0x2022 {u16 mode, u16 target, char[0xff]} */

void Tach_SendChat(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)NetCli_AllocEvent();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    Str_CountLines(puVar1 + 2,param_3,0xff);
    NetCli_QueueEvent(puVar1,0x2022,0x104,0x800);
  }
  return;
}

