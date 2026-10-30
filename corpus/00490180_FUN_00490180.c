
void FUN_00490180(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005658ac = DAT_005b2cdc;
  puVar2 = (undefined4 *)&DAT_00565880;
  for (iVar1 = 0x7e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_005658b0 = DAT_005b2cd8;
  DAT_00565a34._0_1_ = DAT_005b2ce0;
  DAT_00565a34._1_1_ = DAT_005b2ce4;
  DAT_00565a34._2_1_ = DAT_005b2ce8;
  DAT_00565a3a = DAT_005b2cd0;
  DAT_00565a3b = DAT_005b2cd4;
  DAT_00565a3c = DAT_005b2cf0;
  DAT_00565a64._0_1_ = DAT_005b2cf8;
  DAT_005658a4 = 0xffffffff;
  DAT_005658a8 = 0xffffffff;
  DAT_0056589c = 0xffffffff;
  DAT_00565a68 = DAT_005b2d00;
  DAT_00565a38 = DAT_005a6648;
  DAT_00565880 = DAT_005b2cc0;
  DAT_00565a39 = DAT_005a6644;
  DAT_00565a34._3_1_ = DAT_005a664c;
  if (DAT_005b2cc0 != '\0') {
    DAT_00565881 = DAT_00563e9c != 0;
    return;
  }
  DAT_00565881 = 0;
  return;
}

