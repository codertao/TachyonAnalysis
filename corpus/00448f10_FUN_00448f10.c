
void FUN_00448f10(int param_1)

{
  if (DAT_00598580 != param_1) {
    DAT_00598580 = param_1;
    if (param_1 < 0) {
      DAT_00598580 = 0;
    }
    else if (1 < param_1) {
      DAT_00598580 = 1;
    }
    FUN_004490b0();
    FUN_004494c0();
    FUN_0046e980();
    FUN_0044a930();
    if (DAT_00598580 == 0) {
      DAT_00546620 = DAT_00598580;
      DAT_00546624 = 1;
      set_button_state(&g_UiManager,s_BtnCFGModeWP_00547790,4);
      set_button_state(&g_UiManager,s_BtnCFGModeHW_00547780,1);
      FUN_004498e0();
      FUN_00449630();
    }
    else if (DAT_00598580 == 1) {
      DAT_00546620 = DAT_00598580;
      DAT_00546624 = 0;
      set_button_state(&g_UiManager,s_BtnCFGModeHW_00547780,4);
      set_button_state(&g_UiManager,s_BtnCFGModeWP_00547790,1);
      FUN_00449fc0();
    }
    FUN_00448360();
    return;
  }
  return;
}

