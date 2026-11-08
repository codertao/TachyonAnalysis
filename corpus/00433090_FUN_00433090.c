
void FUN_00433090(void)

{
  int *piVar1;
  
  FUN_004a2900(DAT_00603960,GLBL_WindowHandle_);
  if ((((GLBL_spacesav[0x39] == 0) && ((short)GLBL_spacesav[0x3a] == 0)) &&
      (GLBL_spacesav[0x3a]._2_2_ == 0)) && ((char)GLBL_spacesav[0x3b] == '\0')) {
    piVar1 = DAT_005640c4;
    if (DAT_005640c4 == (int *)0x0) {
      GLBL_spacesav[0x3e] = 1;
      return;
    }
    while ((*(byte *)(piVar1 + 0xe) & 1) == 0) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        GLBL_spacesav[0x3e] = 1;
        return;
      }
    }
  }
  else {
    piVar1 = (int *)FUN_004a28c0(0x5b2ca4);
  }
  if (piVar1 != (int *)0x0) {
    FUN_004a1d80(piVar1);
    if ((*(byte *)(DAT_005640d0 + 0x38) & 1) != 0) {
      return;
    }
    if (GLBL_spacesav[0x3e] != 0) {
      return;
    }
  }
  GLBL_spacesav[0x3e] = 1;
  return;
}

