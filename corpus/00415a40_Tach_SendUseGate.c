
/* 0x2006 */

void Tach_SendUseGate(int param_1)

{
  undefined4 *puVar1;
  
  if (DAT_005b330c != DAT_005b3308) {
    DAT_005b330c = DAT_005b3308;
    puVar1 = (undefined4 *)NetCli_AllocEvent();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(param_1 + 0xe8);
      NetCli_QueueEvent(puVar1,0x2006,4,0x800);
    }
  }
  return;
}

