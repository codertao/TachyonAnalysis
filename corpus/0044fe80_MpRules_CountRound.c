
/* sweep */

undefined4 MpRules_CountRound(void)

{
  DAT_00590d64 = DAT_00590d64 + 1;
  if ((DAT_00590d70 != 0) && (DAT_00590d70 <= DAT_00590d64)) {
    DAT_00590d64 = 0;
    return 1;
  }
  return 0;
}

