
/* sweep */

void Slots_Exit(void)

{
  g_NextMode = g_StarbaseScreen;
  Ticker_Free();
  return;
}

