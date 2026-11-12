
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: frame clear to fog colour (sw 32-bit or driver slot 0x604540) */

void Gfx_ClearToFogColor(void)

{
  if (DAT_00564ae4 == 0) {
    if (DAT_00604488 == 0x20) {
      Gfx_SwClearToFogColor();
      return;
    }
  }
  else if (*(int *)(DAT_00604504 + 0x1c) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004ad1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_00604540)();
    return;
  }
  return;
}

