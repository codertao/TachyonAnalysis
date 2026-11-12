
/* sweep */

void SbInventory_Exit(void)

{
  Teletype_ResetSlot(0);
  OurFreeMem(DAT_0056363c);
  DAT_0056363c = 0;
  SbInventory_FreeList();
  g_NextMode = g_StarbaseScreen;
  return;
}

