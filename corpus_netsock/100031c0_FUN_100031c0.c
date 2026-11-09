
void FUN_100031c0(void)

{
  if (DAT_10019c54 != 0) {
    FUN_10002ea0(2);
    return;
  }
  if (0x32 < DAT_10019c00) {
    DAT_10019c00 = 0;
    FUN_10003130();
  }
  DAT_10019c00 = DAT_10019c00 + 1;
  DAT_10019c0c = DAT_10019c0c + 1;
  if (0x4b < DAT_10019c0c) {
    FUN_10002ea0(2);
  }
  return;
}

