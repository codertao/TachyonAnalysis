
/* refine: callback slot 7 (0x6af7a4) = TachSrv_WorldTick */

void NetSrv_CallWorldTick(void)

{
  if (DAT_006af7a4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b7e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006af7a4)();
    return;
  }
  return;
}

