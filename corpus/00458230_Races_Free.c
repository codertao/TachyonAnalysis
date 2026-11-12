
/* sweep */

void Races_Free(void)

{
  if (DAT_0058f2e4 != 0) {
    OurFreeMem(DAT_0058f2e4);
  }
  if (DAT_0058f2e8 != 0) {
    OurFreeMem(DAT_0058f2e8);
  }
  return;
}

