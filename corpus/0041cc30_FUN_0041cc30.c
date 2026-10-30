
void FUN_0041cc30(int param_1)

{
  DAT_005b2764 = DAT_005b2764 + param_1;
  if (DAT_005b2764 < 0) {
    DAT_005b2764 = DAT_0056aa88 + -1;
    FUN_0041cbd0(DAT_005b2764);
    return;
  }
  if (DAT_0056aa88 <= DAT_005b2764) {
    DAT_005b2764 = 0;
  }
  FUN_0041cbd0(DAT_005b2764);
  return;
}

