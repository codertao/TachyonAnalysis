
void FUN_004b8a60(void)

{
  if (DAT_006af58c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b8a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006af58c)();
    return;
  }
  return;
}

