
/* CRT */

void _fast_error_exit(undefined4 param_1)

{
  if (DAT_00564f74 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}

