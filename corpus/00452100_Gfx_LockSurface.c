
/* sweep */

void Gfx_LockSurface(void)

{
  if (DAT_005a6814 == 0) {
    DAT_005a67a0 = Gfx_LockOTW(&DAT_005a67f0);
    DAT_005a67f4 = (uint)(DAT_00564ae4 != 0);
    DAT_005a680c = DAT_005a67a0;
    copy_str32_to_some_global(&DAT_005a67a0);
    DAT_005a6814 = 1;
  }
  return;
}

