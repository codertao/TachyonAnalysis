
int FUN_004429d0(void)

{
  if (GLBL_spacesav[0x11] != 0) {
    return CONCAT31((int3)((uint)GLBL_spacesav[0x11] >> 8),(char)GLBL_spacesav[9] == '\0') + 0x50;
  }
  return 0x3f;
}

