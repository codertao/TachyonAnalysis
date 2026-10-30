
void FUN_00446dc0(int param_1)

{
  DAT_00592fc0 = param_1;
  if (param_1 == 0) {
    FUN_0043e610();
    FUN_0043e610(&g_UiManager,s_TxtCFGShield_005475d4,0x10000);
    FUN_0043e610(&g_UiManager,s_TxtCFGInternal_005475c4,0x10000);
    FUN_0043e610(&g_UiManager,s_TxtCFGROF_005475b8,0x10000);
    return;
  }
  FUN_0043e670(&g_UiManager,s_TxtCFGHull_005475e4,0x10000);
  FUN_0043e670(&g_UiManager,s_TxtCFGShield_005475d4,0x10000);
  FUN_0043e670(&g_UiManager,s_TxtCFGInternal_005475c4,0x10000);
  FUN_0043e670(&g_UiManager,s_TxtCFGROF_005475b8,0x10000);
  return;
}

