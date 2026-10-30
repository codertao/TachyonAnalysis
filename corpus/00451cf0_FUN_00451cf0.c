
void FUN_00451cf0(void)

{
  int *piVar1;
  void *pvVar2;
  
  if (2 < DAT_005b2ad8) {
    DAT_005b2ad8 = 2;
  }
  DAT_005a6818 = 0xb4;
  DAT_005a681c = 0;
  if (DAT_005b2acc == 0) {
    DAT_00564ae4 = 0;
    piVar1 = &DAT_00548730;
  }
  else {
    piVar1 = (int *)FUN_00451ba0(DAT_005b2ad8 * 0x18 + 0x54873c);
    if (piVar1 == (int *)0x0) {
      piVar1 = &DAT_00548730;
    }
    if (DAT_00564ae4 != 0) {
      DAT_005a6800 = DAT_0058f418;
      DAT_005a67f4 = 1;
      goto LAB_00451d82;
    }
  }
  DAT_005a6800 = 0x10f;
  DAT_005a67f4 = 0;
LAB_00451d82:
  if ((piVar1[2] == 0x20) || (DAT_00564ae4 == 0)) {
    DAT_005a6824 = 4;
  }
  else {
    DAT_00602338 = FUN_004ad3c0(8);
    DAT_0060233c = FUN_004ad3c0(9);
    DAT_00602340 = FUN_004ad3c0(10);
    FUN_004e7b40();
    DAT_005a6824 = 2;
  }
  FUN_00451af0(piVar1);
  FUN_00451ab0(*piVar1,piVar1[1]);
  if (DAT_00564ae4 == 0) {
    pvVar2 = _malloc(piVar1[1] * *piVar1 * 4);
    FUN_004e4b56(pvVar2);
  }
  FUN_00458660();
  return;
}

