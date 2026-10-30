
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047f9b0(int param_1)

{
  int *piVar1;
  
  if (DAT_005640d0 == (int *)0x0) {
    return 0;
  }
  piVar1 = DAT_005640d0;
  if (param_1 != 0) {
    if (param_1 == 1) {
      piVar1 = DAT_005640c4;
      if (DAT_005640c4 == (int *)0x0) {
        return 0;
      }
      while ((*(byte *)(piVar1 + 0xe) & 1) == 0) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
      }
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      piVar1 = (int *)*DAT_005640d0;
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      while ((*(byte *)(piVar1 + 0xe) & 1) == 0) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
      }
    }
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_0043c150(DAT_00571280,s_BtnOptP3Rudder_00556b5c,0x80000);
  FUN_0043c150(DAT_00571280,s_BtnOptP3Throttle_00556b48,0x80000);
  FUN_0043c150(DAT_00571280,s_BtnOptP3Feedback_00556b34,0x80000);
  FUN_0043f840(DAT_00571280,s_IAP3Opt2_00556b28,0x20000);
  FUN_0043f840(DAT_00571280,s_IAP3Opt3_00556b1c,0x20000);
  FUN_0043f840(DAT_00571280,s_IAP3Opt4_00556b10,0x20000);
  FUN_0043e670(DAT_00571280,s_TxtOptP3Opt1Banner_00556afc,0x10000);
  FUN_0043e670(DAT_00571280,s_TxtOptP3Opt2Banner_00556ae8,0x10000);
  FUN_0043e670(DAT_00571280,s_TxtOptP3Opt3Banner_00556ad4,0x10000);
  FUN_0043e670(DAT_00571280,s_TxtOptP3Opt1_00556ac4,0x10000);
  FUN_0043e670(DAT_00571280,s_TxtOptP3Opt2_00556ab4,0x10000);
  FUN_0043e670(DAT_00571280,s_TxtOptP3Opt3_00556aa4,0x10000);
  FUN_004a1d80(piVar1);
  FUN_004a05c0(piVar1 + 5);
  if (DAT_0056400a == '\0') {
    FUN_0043ce50(DAT_00571280,s_BtnOptP3Rudder_00556b5c,8);
    FUN_00480ea0(1,s_Rudder_Disabled_00556a84);
  }
  else {
    FUN_0043ce50(DAT_00571280,s_BtnOptP3Rudder_00556b5c,1);
    if (DAT_005b2c80 != 0) {
      FUN_00480ea0(1,s_Rudder_Enabled_00556a94);
    }
  }
  if (DAT_00564009 == '\0') {
    FUN_0043ce50(DAT_00571280,s_BtnOptP3Throttle_00556b48,8);
    FUN_00480ea0(2,s_Throttle_Disabled_00556a5c);
  }
  else {
    FUN_0043ce50(DAT_00571280,s_BtnOptP3Throttle_00556b48,1);
    if (DAT_005b2c84 != 0) {
      FUN_00480ea0(2,s_Throttle_Enabled_00556a70);
    }
  }
  if (DAT_0056400f == '\0') {
    FUN_0043ce50(DAT_00571280,s_BtnOptP3Feedback_00556b34,8);
    FUN_00480ea0(3,s_Feedback_Disabled_00556a34);
  }
  else {
    FUN_0043ce50(DAT_00571280,s_BtnOptP3Feedback_00556b34,1);
    if (DAT_005b2cb4 != 0) {
      FUN_00480ea0(3,s_Feedback_Enabled_00556a48);
    }
  }
  DAT_005b2ca4 = DAT_00564090;
  _DAT_005b2ca8 = DAT_00564094;
  _DAT_005b2cac = DAT_00564098;
  _DAT_005b2cb0 = DAT_0056409c;
  str_sprintf(&DAT_00571200,piVar1[3]);
  FUN_0043e6a0(DAT_00571280,s_TxtOptP3Opt0_00556a24,&DAT_00571200);
  return 1;
}

