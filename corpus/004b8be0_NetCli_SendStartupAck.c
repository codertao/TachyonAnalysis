
/* queue 0x103 {u16 1, u32 stage} */

void NetCli_SendStartupAck(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)NetCli_AllocEvent();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 1) = DAT_006af630;
    NetCli_QueueEvent(puVar1,0x103,6,0x800);
  }
  return;
}

