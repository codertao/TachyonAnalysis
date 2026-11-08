
void FUN_00424dd0(void)

{
  uint uVar1;
  
  uVar1 = 3;
  if (GLBL_spacesav[0x31] != 0) {
    uVar1 = 7;
  }
  if (GLBL_spacesav[0x30] != 0) {
    uVar1 = uVar1 | 8;
  }
  FUN_004a0cb0(GLBL_spacesav[0x3d]);
  FUN_004a29b0(uVar1);
  return;
}

