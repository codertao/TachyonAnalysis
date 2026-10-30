
void FUN_00471000(void)

{
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_00564ae4 != 0) {
      FUN_004455f0();
    }
    FUN_00470f10();
    if (DAT_005635dc == 0) {
      if (DAT_005a4b4c == 0) {
        FUN_0048bf30();
      }
      else {
        FUN_00440bd0();
      }
    }
    if (DAT_00564ae4 != 0) {
      FUN_0043e980(DAT_006022e0,DAT_006022e4);
    }
    FUN_004521c0();
    return;
  }
  return;
}

