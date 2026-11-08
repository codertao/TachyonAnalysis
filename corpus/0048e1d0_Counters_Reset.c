
void Counters_Reset(void)

{
  clr_bytes(&g_CounterCount,0x10);
  Counters_Init();
  return;
}

