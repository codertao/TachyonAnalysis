
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041ae00(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = global_bad_shift_rng();
  if ((_DAT_005b29c4 & 1) != 0) {
    if ((_DAT_005b29c4 < 2) || (_DAT_005b29c4 < uVar1 % 10)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  if ((((_DAT_005b29c4 & 1) == 0) && (iVar2 == 0)) && ((uVar1 & 0x1f) <= GLBL_iter_cnt)) {
    DAT_005b2a70 = DAT_005b2a70 + 1;
    return 2;
  }
  return iVar2;
}

