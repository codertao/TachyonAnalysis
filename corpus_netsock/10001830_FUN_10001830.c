
void FUN_10001830(void)

{
  DAT_10019c14 = 0;
  DAT_10019c18 = 0x10000;
  DAT_10019c10 = 1;
  do {
    Sleep(10);
  } while (DAT_10019c14 == 0);
  DAT_10019b40 = 1;
  DAT_100198ac = 0;
  return;
}

