
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Voice_HandleCommand(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (((((_g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0'))
     && (DAT_00565881 != '\0')) {
    switch(param_1) {
    case 0x1af:
      bVar1 = (byte)DAT_00565a34 + 1;
      DAT_00565a34._0_1_ = bVar1;
      if (2 < bVar1) {
        DAT_00565a34._0_1_ = 0;
      }
      GLBL_spacesav[0x48] = (uint)(byte)DAT_00565a34;
      return;
    case 0x1b0:
      DAT_00563e58 = 0;
      VonList_WalkB();
      DAT_00565a70 = 1;
      Voice_Notify(8);
      return;
    case 0x1b1:
      DAT_00563e58 = 0;
      VonList_WalkA();
      DAT_00565a70 = 0xffffffff;
      Voice_Notify(8);
      return;
    case 0x1b2:
      Voice_SetChannelTarget();
      DAT_00565a70 = 0;
      break;
    case 0x1b3:
      Voice_SetChannelAll();
      DAT_00565a70 = 0;
      Voice_Notify(8);
      return;
    case 0x1b4:
      Voice_GainUp();
      Voice_Notify(8);
      return;
    case 0x1b5:
      Voice_GainDown();
      Voice_Notify(8);
      return;
    case 0x1b6:
      if ((DAT_0056589c < 0) || (DAT_0056589c == DAT_00565890)) {
        Voice_Notify(0);
        Voice_Notify(8);
        return;
      }
      if ((DAT_0056589c < 0x80) && (DAT_0056589c < DAT_005b9014)) {
        if ((&DAT_005658b4)[DAT_0056589c] == '\0') {
          Voice_UnmuteByChannel(DAT_0056589c);
          Voice_Notify(8);
          return;
        }
        Voice_MuteByChannel();
        Voice_Notify(8);
        return;
      }
      break;
    case 0x1b7:
      Voice_Break();
      if (-1 < DAT_005658a4) {
        Voice_MuteByChannel(DAT_005658a4);
        Voice_Notify(8);
        return;
      }
      break;
    case 0x1b8:
      Voice_Break();
      Voice_Notify(8);
      return;
    case 0x1b9:
      Voice_MuteByChannel(0xffffffff);
      Voice_Notify(8);
      return;
    case 0x1ba:
      Voice_UnmuteByChannel(0xffffffff);
      Voice_Notify(8);
      return;
    default:
      goto switchD_0049113a_default;
    }
    Voice_Notify(8);
    return;
  }
  if ((_g_FlightStateFlags & 4) == 0) {
    uVar2 = Rtxt_GetText(DAT_005a6140,0xf6,DAT_005a6324._2_1_);
    TextBar_Add(uVar2);
    Voice_Notify(0);
  }
switchD_0049113a_default:
  return;
}

