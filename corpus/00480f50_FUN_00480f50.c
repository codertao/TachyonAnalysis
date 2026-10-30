
void FUN_00480f50(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_00481530();
  switch(param_1) {
  case 0:
    DAT_00563d74 = &PTR_DAT_00553de8;
    break;
  case 1:
    DAT_00563d74 = &PTR_DAT_00554428;
    break;
  case 2:
    DAT_00563d74 = &PTR_DAT_00554d88;
    break;
  case 3:
    DAT_00563d74 = &PTR_DAT_005550a8;
    break;
  case 4:
    DAT_00563d74 = (undefined **)&DAT_00555a08;
    break;
  case 5:
    DAT_00563d74 = &PTR_DAT_00555b98;
    break;
  case 6:
    DAT_00563d74 = (undefined **)&DAT_00556368;
  }
  str_sprintf(&DAT_005a41e0,s_OPT_OPT_d_00556d30,param_1);
  FUN_0043e770(DAT_00571280,s_TxtOptionSubBanner_00556d1c,&DAT_005a41e0);
  FUN_00480f20();
  str_sprintf(&DAT_005a41e0,s_WndStarBaseOptionP_d_00556c8c,param_1);
  FUN_0043a8d0(DAT_00571280,&DAT_005a41e0);
  FUN_00480c00(DAT_00563d74);
  Ui_ShowWindow(DAT_00571280,&DAT_005a41e0,0);
  DAT_00563d78 = 0;
  switch(param_1) {
  case 2:
    FUN_00480290(s_IAP2Tab1_00556d10,DAT_005b2d0c);
    FUN_00480290(s_IAP2Tab2_00556d04,DAT_005b2d10);
    FUN_00480290(s_IAP2Tab3_00556cf8,DAT_005b2d14);
    pcVar2 = s_IAP2Tab4_00556cec;
    uVar3 = DAT_005b2d18;
    goto LAB_00481417;
  case 3:
    if (DAT_005b2cb8 == 0) {
      iVar1 = FUN_0047f9b0(0);
      if (iVar1 == 0) {
        FUN_0047fc90();
      }
    }
    else {
      Ui_SetButtonFlag(DAT_00571280,s_BtnOptP3Rudder_00556b5c,0x80000);
      Ui_SetButtonFlag(DAT_00571280,s_BtnOptP3Throttle_00556b48,0x80000);
      Ui_SetButtonFlag(DAT_00571280,s_BtnOptP3Feedback_00556b34,0x80000);
      FUN_0043ce50(DAT_00571280,s_BtnOptP3Rudder_00556b5c,8);
      FUN_0043ce50(DAT_00571280,s_BtnOptP3Throttle_00556b48,8);
      FUN_0043ce50(DAT_00571280,s_BtnOptP3Feedback_00556b34,8);
      FUN_0043f620(DAT_00571280,s_IAP3Opt2_00556b28,0x20000);
      FUN_0043f620(DAT_00571280,s_IAP3Opt3_00556b1c,0x20000);
      FUN_0043f620(DAT_00571280,s_IAP3Opt4_00556b10,0x20000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt1Banner_00556afc,0x10000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt2Banner_00556ae8,0x10000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt3Banner_00556ad4,0x10000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt1_00556ac4,0x10000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt2_00556ab4,0x10000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt3_00556aa4,0x10000);
    }
    FUN_00480290(s_IAP3Tab5_00556ba0,DAT_005b2cbc);
    if (DAT_005b2cb8 == 1) {
      FUN_0043e670(DAT_00571280,s_TxtOptP3Opt4Banner_00556bdc,0x10000);
      FUN_0043f840(DAT_00571280,s_IAP3Slide5_1_00556bbc,0x20000);
      FUN_0043f840(DAT_00571280,s_IAP3Slide5_2_00556bac,0x20000);
      FUN_0043f840(DAT_00571280,s_IAP3Tab5_00556ba0,0x20000);
      FUN_0043e670(DAT_00571280,s_TxtOptP3Opt5Banner_00556b8c,0x10000);
      FUN_0043e670(DAT_00571280,s_TxtOptP3Opt5_00556bcc,0x10000);
      FUN_0043f840(DAT_00571280,s_IAP3Opt6_00556b80,0x20000);
      FUN_0043c150(DAT_00571280,s_BtnOptP3PitchMouse_00556b6c,0x80000);
      FUN_0043ce50(DAT_00571280,s_BtnOptP3PitchMouse_00556b6c,1);
    }
    else {
      DAT_00563d78 = 1;
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt4Banner_00556bdc,0x10000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt5_00556bcc,0x10000);
      FUN_0043f620(DAT_00571280,s_IAP3Slide5_1_00556bbc,0x20000);
      FUN_0043f620(DAT_00571280,s_IAP3Slide5_2_00556bac,0x20000);
      FUN_0043f620(DAT_00571280,s_IAP3Tab5_00556ba0,0x20000);
      FUN_0043e610(DAT_00571280,s_TxtOptP3Opt5Banner_00556b8c,0x10000);
      FUN_0043f620(DAT_00571280,s_IAP3Opt6_00556b80,0x20000);
      Ui_SetButtonFlag(DAT_00571280,s_BtnOptP3PitchMouse_00556b6c,0x80000);
      FUN_0043ce50(DAT_00571280,s_BtnOptP3PitchMouse_00556b6c,8);
    }
    break;
  case 4:
    FUN_00481b90();
    break;
  case 5:
    FUN_00480290(s_IAP5Tab1_00556ce0,DAT_005b2cc8);
    FUN_00480290(s_IAP5Tab2_00556cd4,DAT_005b2cc4);
    break;
  case 6:
    FUN_00480290(s_IAP6Tab1_00556cc8,DAT_005b2c94);
    FUN_00480290(s_IAP6Tab2_00556cbc,DAT_005b2c98);
    FUN_00480290(s_IAP6Tab3_00556cb0,DAT_005b2c9c);
    pcVar2 = s_IAP6Tab4_00556ca4;
    uVar3 = DAT_005b2ca0;
LAB_00481417:
    FUN_00480290(pcVar2,uVar3);
  }
  Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0,0);
  return;
}

