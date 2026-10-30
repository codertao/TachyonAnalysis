
void FUN_00451100(void)

{
  int iVar1;
  
  if ((g_FlightStateFlags & 4) == 0) {
    if ((DAT_005b2c8c != 0) && (*(code **)(DAT_005b1dc4 + 0x98) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00451129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(DAT_005b1dc4 + 0x98))();
      return;
    }
  }
  else {
    if (DAT_005b2c8c == 0) {
      FUN_00450c00();
      FUN_00451070();
      return;
    }
    if (DAT_005b39ec != 0) {
      return;
    }
    if (DAT_005b2c8c == 1) {
      if (DAT_0058f488 != 0) goto LAB_0045117b;
      if (DAT_005b9044 == 0) {
        DAT_005b2c8c = 2;
        goto LAB_0045117b;
      }
      FUN_00450cc0();
      FUN_00450f40();
    }
    if ((DAT_005b2c8c == 2) || (DAT_0058f488 != 0)) {
LAB_0045117b:
      FUN_00450ca0();
      if (DAT_0058f48c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00451189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_0058f48c)();
        return;
      }
      if ((DAT_0058f488 != 0) && (iVar1 = FUN_00450bf0(), iVar1 == 0)) {
        if (DAT_005b3248 != 0) {
          FUN_00451020();
        }
        FUN_004510a0();
        return;
      }
      if (DAT_005b3248 == 0) {
        iVar1 = FUN_00450bf0();
        if (iVar1 == 0) {
          FUN_00450f90();
        }
      }
      else {
        FUN_00451020();
      }
      FUN_00450ec0();
      return;
    }
  }
  return;
}

