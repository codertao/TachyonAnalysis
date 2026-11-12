
/* CRT */

void ___initmbctable(void)

{
  if (DAT_006caec8 == 0) {
    __setmbcp(0xfffffffd);
    DAT_006caec8 = 1;
  }
  return;
}

