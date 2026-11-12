
/* sweep */

void Gfx_UnlockSurface(void)

{
  if (DAT_005a6814 != 0) {
    Gfx_UnlockOTW();
    DAT_005a680c = 0;
    DAT_005a67a0 = 0;
    DAT_005a6814 = 0;
  }
  return;
}

