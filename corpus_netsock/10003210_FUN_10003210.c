
void FUN_10003210(void)

{
  if (DAT_10019c54 != 0) {
    FUN_10002ee0(2);
    return;
  }
  if (0x19 < DAT_10019c18) {
    DAT_10019c18 = 0;
    FUN_10003170();
  }
  DAT_10019c18 = DAT_10019c18 + 1;
  DAT_10019c20 = DAT_10019c20 + 1;
  if (0x4b < DAT_10019c20) {
    FUN_10002ee0(2);
  }
  return;
}

