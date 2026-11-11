
void FUN_00480880(void)

{
  if ((g_MpModeFlag != 0) && (DAT_005a4b4c != 0)) {
    FUN_00440bd0();
    return;
  }
  FUN_0043ac90(DAT_00571280);
  FUN_00481770();
  if (DAT_00563d74 == &DAT_00555a08) {
    FUN_00482240();
    return;
  }
  if (DAT_00563d74 == &DAT_00556368) {
    if (DAT_00564ae4 == 0) {
      Sw_ClearZBuffer();
    }
    FUN_00482440();
    return;
  }
  return;
}

