
void FUN_00486180(void)

{
  if (g_TitleMenu_ExitFlag != 0) {
    return;
  }
  if ((DAT_00564ae4 != 0) || (DAT_005635dc != 0)) {
    FUN_004455f0();
    if (DAT_00564ae4 != 0) goto LAB_004861ae;
  }
  Sw_ClearZBuffer();
LAB_004861ae:
  FUN_00486140();
  if (DAT_00564ae4 != 0) {
    FUN_0043e980(DAT_006022e0,DAT_006022e4);
  }
  FUN_004521c0();
  return;
}

