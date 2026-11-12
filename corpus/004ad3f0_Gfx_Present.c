
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Gfx_Present(void)

{
  if (DAT_00564ae4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004ad3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_00604544)();
    return;
  }
  Vid_Present();
  return;
}

