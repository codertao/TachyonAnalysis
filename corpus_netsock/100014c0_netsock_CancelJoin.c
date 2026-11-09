
void netsock_CancelJoin(void)

{
                    /* 0x14c0  1  netsock_CancelJoin */
  if (DAT_100199e4 != 0) {
    DAT_10019af0 = 1;
    DAT_100199e8 = 1;
    do {
      Sleep(10);
    } while (DAT_100199e4 != 0);
  }
  return;
}

