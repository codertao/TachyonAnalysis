
/* sweep */

void Sys_FatalExit(void)

{
  DestroyWindow(GLBL_WindowHandle_);
  _exit(0xffffffff);
  if (DAT_006039b8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049f799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006039b8)();
    return;
  }
  return;
}

