
/* sweep */

void Joy_Shutdown(void)

{
  if (DAT_005640d8 != 0) {
    Joy_FreeAll();
    if (DAT_005640d4 != (int *)0x0) {
      (**(code **)(*DAT_005640d4 + 8))(DAT_005640d4);
      DAT_005640d4 = (int *)0x0;
    }
    DAT_005640d8 = 0;
  }
  return;
}

