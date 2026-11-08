
void init_a_lotta_globals(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = GLBL_spacesav;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  GLBL_spacesav[0x56] = 200;
  GLBL_spacesav[0x53] = 200;
  GLBL_spacesav[0x54] = 200;
  GLBL_spacesav[0] = 0x10;
  GLBL_spacesav[0x2f] = 1;
  GLBL_spacesav[0x33] = 2;
  GLBL_spacesav[0x52] = 1;
  GLBL_spacesav[0x55] = 0xff;
  GLBL_spacesav[0x34] = 1;
  GLBL_spacesav[0x35] = 60000;
  GLBL_spacesav[0x36] = 0x9c4;
  GLBL_spacesav[0x3f] = 0xdac;
  GLBL_spacesav[0x58] = 0;
  GLBL_spacesav[0x37] = 0x80;
  GLBL_spacesav[0x38] = 0x80;
  GLBL_spacesav[0x2b] = 1;
  GLBL_spacesav[0x2d] = (uint)(DAT_005b2acc != 0);
  GLBL_spacesav[0x42] = 0x80;
  GLBL_spacesav[0x2e] = 1;
  GLBL_spacesav[0x2c] = 1;
  GLBL_spacesav[0x32] = 1;
  GLBL_spacesav[0x40] = 0;
  GLBL_spacesav[0x43] = 1;
  GLBL_spacesav[0x44] = 1;
  GLBL_spacesav[0x45] = 0;
  GLBL_spacesav[0x46] = 0;
  GLBL_spacesav[0x47] = 1;
  GLBL_spacesav[0x48] = 1;
  GLBL_spacesav[0x49] = 0;
  GLBL_spacesav[0x4a] = 1;
  GLBL_spacesav[0x4c] = 1;
  GLBL_spacesav[0x50] = 3;
  GLBL_spacesav[0x41] = 0x50;
  GLBL_spacesav[0x4e] = 1;
  GLBL_spacesav[0x4d] = 0;
  GLBL_spacesav[0x4b] = 0;
  GLBL_spacesav[0x59] = 1;
  GLBL_spacesav[0x5a] = 1;
  GLBL_spacesav[0x5b]._0_1_ = 0;
  GLBL_spacesav[0x5f] = 0x20;
  GLBL_spacesav[0x60] = 1;
  GLBL_spacesav[0x61] = 0x1e;
  GLBL_spacesav[0x62] = 0x14;
  GLBL_spacesav[99] = 1;
  GLBL_spacesav[100] = 1;
  GLBL_spacesav[0x65]._0_1_ = 0;
  GLBL_spacesav[0x69] = 0x20;
  GLBL_spacesav[0x6a] = 1;
  GLBL_spacesav[0x6b] = 1;
  GLBL_spacesav[0x6c] = 1;
  GLBL_spacesav[0x6d] = 1;
  GLBL_spacesav[0x6e] = 0x1e;
  GLBL_spacesav[0x6f] = 1;
  return;
}

