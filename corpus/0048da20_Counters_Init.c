
/* bind g_Counters to vars.cfg COUNTERS section ('trigger_counters') */

void Counters_Init(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  g_CounterVarCat = Var_SectionIndex(s_COUNTERS_00559cac);
  g_CounterCount = Var_SectionExists(s_COUNTERS_00559cac);
  if (0 < g_CounterCount) {
    Mem_AllocZeroTagged(&g_Counters,g_CounterCount << 3,4,s_trigger_counters_00559c98,0xbbbb);
    iVar2 = 0;
    if (0 < g_CounterCount) {
      puVar3 = (undefined4 *)(g_Counters + 4);
      do {
        puVar1 = (undefined4 *)Var_GetEntryByIndex(DAT_005a6148,s_COUNTERS_00559cac,iVar2);
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

