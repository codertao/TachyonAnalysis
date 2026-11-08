
/* bind g_Counters to vars.cfg COUNTERS section ('trigger_counters') */

void Counters_Init(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  g_CounterVarCat = FUN_004900a0(s_COUNTERS_00559cac);
  g_CounterCount = FUN_00490080(s_COUNTERS_00559cac);
  if (0 < g_CounterCount) {
    FUN_0048e3d0(&g_Counters,g_CounterCount << 3,4,s_trigger_counters_00559c98,0xbbbb);
    iVar2 = 0;
    if (0 < g_CounterCount) {
      puVar3 = (undefined4 *)(g_Counters + 4);
      do {
        puVar1 = (undefined4 *)FUN_004900f0(DAT_005a6148,s_COUNTERS_00559cac,iVar2);
        *puVar3 = puVar1;
        *puVar1 = 0;
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 2;
      } while (iVar2 < g_CounterCount);
    }
    return;
  }
  g_CounterCount = 0;
  return;
}

