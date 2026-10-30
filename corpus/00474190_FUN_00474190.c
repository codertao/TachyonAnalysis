
void FUN_00474190(int param_1)

{
  if (DAT_00598580 != param_1) {
    DAT_00598580 = param_1;
    if (param_1 < 0) {
      DAT_00598580 = 1;
    }
    else if (1 < param_1) {
      DAT_00598580 = 0;
    }
    FUN_00474490();
    FUN_004757e0();
    FUN_0046e980();
    FUN_00476c80();
    if (DAT_00598580 == 0) {
      DAT_0054f884 = DAT_00598580;
      DAT_0054f888 = 1;
      FUN_0043ce50(&DAT_00583420,s_BtnCFGModeWP_00547790,4);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGModeHW_00547780,1);
      FUN_00475be0();
      FUN_00475950();
    }
    else if (DAT_00598580 == 1) {
      DAT_0054f884 = DAT_00598580;
      DAT_0054f888 = 0;
      FUN_0043ce50(&DAT_00583420,s_BtnCFGModeHW_00547780,4);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGModeWP_00547790,1);
      FUN_004762b0();
    }
    FUN_00473500();
    FUN_00473190();
    return;
  }
  return;
}

