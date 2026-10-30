
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004249c0(int param_1)

{
  if (DAT_005b1ee8 == 0) {
    if (DAT_005b1ef8 != 0) {
      FUN_00466710(DAT_005b1f0c + 0x278,param_1,0x10000);
    }
    DAT_005b1ef8 = 0;
  }
  else {
    DAT_005b1ef8 = DAT_005b1ef8 + 1;
    if (DAT_005b1ef8 < 0x32) {
      _DAT_005b1ed8 = _DAT_005b1ed8 + _DAT_0052e7a4;
    }
    if (DAT_005b1ef8 == 1) {
      FUN_00466710(DAT_005b1f0c + 0x260,param_1,0x10000);
      FUN_004a0760(0,0xffffec78,2000000,1);
      *(undefined4 *)(param_1 + 0x108) = 100;
      return;
    }
  }
  return;
}

