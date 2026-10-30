
void FUN_0046f3f0(int param_1)

{
  DAT_00587944 = DAT_00587944 + param_1;
  if (DAT_00587944 < 0) {
    DAT_00587944 = DAT_0056aa88 + -1;
    FUN_0046f390(DAT_00587944);
    return;
  }
  if (DAT_0056aa88 <= DAT_00587944) {
    DAT_00587944 = 0;
  }
  FUN_0046f390(DAT_00587944);
  return;
}

