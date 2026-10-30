
void FUN_00486cb0(int param_1)

{
  uint uVar1;
  
  if ((DAT_0056e000 < 300) || (param_1 < 1)) {
    uVar1 = FUN_004699a0();
    if ((99 < uVar1) && ((DAT_0056e000 != 0 || (-1 < param_1)))) {
      DAT_0056e000 = DAT_0056e000 + param_1 * 100;
      if (300 < DAT_0056e000) {
        DAT_0056e000 = 300;
      }
      FUN_004699d0(param_1 * -100);
      FUN_00486380();
      FUN_00486540();
      FUN_00486c60(&DAT_0056e2b8);
      FUN_00486c60(&DAT_0056e2d8);
      FUN_00486c60(&DAT_0056e2f8);
      if (99 < DAT_0056e000) {
        FUN_0043f840(&DAT_00583420,s_IAPay1_00557fa4,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayBar1_00557f88,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayLine1_00557f64,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayLine12_00557f40,0x20000);
        FUN_00486c70(&DAT_0056e2b8);
      }
      if (199 < DAT_0056e000) {
        FUN_0043f840(&DAT_00583420,s_IAPay2_00557f9c,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayBar2_00557f7c,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayLine2_00557f58,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayLine22_00557f34,0x20000);
        FUN_00486c70(&DAT_0056e2d8);
      }
      if (DAT_0056e000 == 300) {
        FUN_0043f840(&DAT_00583420,s_IAPay3_00557f94,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayBar3_00557f70,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayLine3_00557f4c,0x20000);
        FUN_0043f840(&DAT_00583420,s_IAPayLine32_00557f28,0x20000);
        FUN_00486c70(&DAT_0056e2f8);
      }
    }
  }
  return;
}

