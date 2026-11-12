
/* sweep */

void Joy_FreeAll(void)

{
  while (DAT_005640c4 != 0) {
    Joy_FreeDevice(DAT_005640c4);
  }
  return;
}

