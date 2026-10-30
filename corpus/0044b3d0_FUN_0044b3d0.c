
void FUN_0044b3d0(int param_1)

{
  if ((param_1 < 0) || (9 < param_1)) {
    DAT_005a60c0 = 0xffffffff;
    FUN_0044ba60(0);
  }
  else {
    FUN_0044b180();
    FUN_0044b220(param_1);
    FUN_0044ba60(DAT_005a60c0);
    if (DAT_005a6080 == '\0') {
      FUN_0044b130(param_1);
    }
  }
  Ui_RefreshWindow(&g_UiManager,s_WndMPLogin_00547980,0,0);
  return;
}

