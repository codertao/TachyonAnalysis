
void FUN_00431ea0(int param_1)

{
  GLBL_spacesav[0x38] = GLBL_spacesav[0x38] + param_1 * 8;
  if (GLBL_spacesav[0x38] < 1) {
    GLBL_spacesav[0x38] = 1;
  }
  else if (0xff < GLBL_spacesav[0x38]) {
    GLBL_spacesav[0x38] = 0xff;
  }
  FUN_004af260(GLBL_spacesav[0x38],0x80,0x80);
  return;
}

