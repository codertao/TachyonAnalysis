
/* sweep */

void Sys_CallShutdown(void)

{
  if (DAT_006039b8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049f799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006039b8)();
    return;
  }
  return;
}

