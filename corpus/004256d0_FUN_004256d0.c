
void FUN_004256d0(void)

{
  GLBL_spacesav[0x33] = GLBL_spacesav[0x33] + 1;
  if (2 < GLBL_spacesav[0x33]) {
    GLBL_spacesav[0x33] = 0;
  }
  return;
}

