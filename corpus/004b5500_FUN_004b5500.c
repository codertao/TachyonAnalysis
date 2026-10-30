
void FUN_004b5500(void)

{
  if (DAT_006af540 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b5509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006af540)();
    return;
  }
  FUN_004b53b0();
  return;
}

