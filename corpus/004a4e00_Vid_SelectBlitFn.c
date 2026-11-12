
/* sweep */

undefined4 Vid_SelectBlitFn(void)

{
  if (DAT_006022f4 != 0) {
    return 0xffffffff;
  }
  DAT_006022cc = Vid_BlitOTW_Copy;
  return 0;
}

