
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00465d50(void)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_0052e598;
  if (DAT_005b2d10 != 0) {
    fVar1 = (float10)DAT_005897b0 / (float10)(int)DAT_005b2d10;
  }
  if ((float10)DAT_005b2d10 < fVar1) {
    fVar1 = (float10)DAT_005b2d10;
  }
  return fVar1;
}

