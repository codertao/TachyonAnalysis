
void FUN_00433090(void)

{
  int *piVar1;
  
  FUN_004a2900(DAT_00603960,DAT_0060395c);
  if ((((DAT_005b2ca4 == 0) && (DAT_005b2ca8 == 0)) && (DAT_005b2caa == 0)) &&
     (DAT_005b2cac == '\0')) {
    piVar1 = DAT_005640c4;
    if (DAT_005640c4 == (int *)0x0) {
      DAT_005b2cb8 = 1;
      return;
    }
    while ((*(byte *)(piVar1 + 0xe) & 1) == 0) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        DAT_005b2cb8 = 1;
        return;
      }
    }
  }
  else {
    piVar1 = (int *)FUN_004a28c0(&DAT_005b2ca4);
  }
  if (piVar1 != (int *)0x0) {
    FUN_004a1d80(piVar1);
    if ((*(byte *)(DAT_005640d0 + 0x38) & 1) != 0) {
      return;
    }
    if (DAT_005b2cb8 != 0) {
      return;
    }
  }
  DAT_005b2cb8 = 1;
  return;
}

