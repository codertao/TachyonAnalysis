
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00465d50(void)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_0052e598;
  if (GLBL_spacesav[0x54] != 0) {
    fVar1 = (float10)DAT_005897b0 / (float10)(int)GLBL_spacesav[0x54];
  }
  if ((float10)GLBL_spacesav[0x54] < fVar1) {
    fVar1 = (float10)GLBL_spacesav[0x54];
  }
  return fVar1;
}

