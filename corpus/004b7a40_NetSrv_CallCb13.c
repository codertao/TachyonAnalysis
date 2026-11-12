
/* refine: server callback slot 13 (0x6af7bc); Tachyon registers Nop */

void NetSrv_CallCb13(void)

{
  if (DAT_006af7bc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b7a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006af7bc)();
    return;
  }
  return;
}

