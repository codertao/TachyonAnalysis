
/* sweep: 0x2011 (once) */

void NetCli_SendRespawn(void)

{
  undefined2 *puVar1;
  
  if (DAT_005b903c == 0) {
    DAT_005b903c = 1;
    puVar1 = (undefined2 *)NetCli_AllocEvent();
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
      NetCli_QueueEvent(puVar1,0x2011,2,0x800);
    }
  }
  return;
}

