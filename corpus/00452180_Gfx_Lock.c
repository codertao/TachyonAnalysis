
/* sweep: mask & DAT_005a6800 */

void Gfx_Lock(uint param_1)

{
  if ((param_1 & DAT_005a6800) == 0) {
    if (DAT_005a6814 != 0) {
      Gfx_UnlockSurface();
    }
  }
  else if (DAT_005a6814 == 0) {
    Gfx_LockSurface();
    DAT_005a6810 = param_1;
    return;
  }
  DAT_005a6810 = param_1;
  return;
}

