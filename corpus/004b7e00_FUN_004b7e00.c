
void FUN_004b7e00(void)

{
  if (DAT_006af7a4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b7e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006af7a4)();
    return;
  }
  return;
}

