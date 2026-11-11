
void FUN_00488d90(void)

{
  if (DAT_005a4b4c != 0) {
    FUN_00440bd0();
    return;
  }
  FUN_0043ac90(&GLBL_UI_ELEM_LIST);
  if ((DAT_0056c520 == 0) && (DAT_0056c490 == 0)) {
    FUN_0048bf30();
    if (DAT_00564ae4 == 0) {
      Sw_ClearZBuffer();
    }
    FUN_00488c90();
    return;
  }
  return;
}

