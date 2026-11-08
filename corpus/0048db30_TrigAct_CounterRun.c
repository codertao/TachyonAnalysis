
/* action 4: start(1)/stop(0) a COUNTERS var */

void TrigAct_CounterRun(uint param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 >> 0x10 == g_CounterVarCat) && ((int)(param_1 & 0xffff) < g_CounterCount)) {
    *(undefined4 *)(g_Counters + (param_1 & 0xffff) * 8) = param_3;
  }
  return;
}

