
void FUN_004b7a40(void)

{
  if (DAT_006af7bc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b7a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006af7bc)();
    return;
  }
  return;
}

