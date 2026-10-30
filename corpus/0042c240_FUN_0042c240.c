
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c240(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_005b1870 != 0) {
    FUN_00452180(1);
    uVar1 = FUN_00455e60(&DAT_005b20e0,DAT_005b1f0c + 0xd0,DAT_005b9020);
    uVar2 = FUN_0048ec30(DAT_005b2104,uVar1);
    if (uVar2 < 0x19) {
      FUN_0042c0e0(&DAT_005b1874);
    }
    else {
      _DAT_005b189c = 0;
      _DAT_005b1894 = 0;
    }
    if (DAT_005b1b74 != 0) {
      FUN_0042c130(&DAT_005b18a8,DAT_005b18d4);
    }
    if ((DAT_005aeebc != 0) && (((byte)DAT_005b2154 & 4) == 0)) {
      FUN_0042c0e0(&DAT_005b18dc);
    }
    if (DAT_005b1b68 != 0) {
      FUN_0042c0e0(&DAT_005b1910);
    }
    FUN_0042c210();
    return;
  }
  return;
}

