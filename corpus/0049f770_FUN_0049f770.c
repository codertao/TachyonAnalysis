
void FUN_0049f770(void)

{
  DestroyWindow(DAT_0060395c);
  FUN_004bdc42(0xffffffff);
  if (DAT_006039b8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049f799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006039b8)();
    return;
  }
  return;
}

