
void FUN_00430740(undefined4 param_1,int param_2)

{
  if (DAT_005b2b38 != 0) {
    if (((DAT_005aeed0 != 0) || ((param_2 != 0 && (FUN_0049e570(), DAT_005aeed0 != 0)))) &&
       (param_2 == 0)) {
      FUN_0042fee0();
    }
    DAT_005aeed0 = param_2;
    return;
  }
  if (param_2 == 0) {
    DAT_005aeecc = 0;
    return;
  }
  if (DAT_005aeecc != 0) {
    return;
  }
  if (DAT_005aeed0 == 0) {
    DAT_005aeed0 = 1;
    FUN_0049e570();
    DAT_005aeecc = 1;
    return;
  }
  DAT_005aeed0 = 0;
  FUN_0042fee0();
  DAT_005aeecc = 1;
  return;
}

