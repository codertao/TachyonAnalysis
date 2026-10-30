
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414a90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004250f0(4,1);
  if (iVar1 != 0) {
    if ((g_FlightStateFlags & 4) == 0) {
      DAT_005b9224 = s_TO_ALL_0053424c[0];
      DAT_005b9224_1._0_1_ = s_TO_ALL_0053424c[1];
      DAT_005b9224_1._1_1_ = s_TO_ALL_0053424c[2];
      DAT_005b9224_1._2_1_ = s_TO_ALL_0053424c[3];
      DAT_005b9228 = s_TO_ALL_0053424c[4];
      DAT_005b9228_1 = s_TO_ALL_0053424c[5];
      DAT_005b922a = s_TO_ALL_0053424c[6];
    }
    else {
      DAT_005b9224 = (char)DAT_00534254;
      DAT_005b9224_1._0_1_ = DAT_00534254._1_1_;
      DAT_005b9224_1._1_1_ = DAT_00534254._2_1_;
      DAT_005b9224_1._2_1_ = DAT_00534254._3_1_;
    }
    _DAT_005b9264 = 0;
    DAT_005b91cc = 0;
    FUN_00430150(&PTR_DAT_0053e8c0);
    puVar2 = &DAT_005b90c4;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_005b91c4 = 0;
    FUN_00466590(0x10,0,0,0xff);
  }
  return;
}

