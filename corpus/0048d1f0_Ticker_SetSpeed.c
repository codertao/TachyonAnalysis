
/* sweep: guess */

void Ticker_SetSpeed(int param_1,undefined4 param_2)

{
  DAT_0056aad4 = param_1;
  DAT_0056aad8 = param_2;
  if (param_1 == 0) {
    DAT_0056aad4 = 1;
  }
  else if (param_1 < 0) {
    Ticker_SetOffset(DAT_0056aacc);
    return;
  }
  Ticker_SetOffset(DAT_0056aac4);
  return;
}

