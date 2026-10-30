
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004910f0(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (((((_g_FlightStateFlags & 4) == 0) && (DAT_005b2c58 != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    switch(param_1) {
    case 0x1af:
      bVar1 = (byte)DAT_00565a34 + 1;
      DAT_00565a34._0_1_ = bVar1;
      if (2 < bVar1) {
        DAT_00565a34._0_1_ = 0;
      }
      _DAT_005b2ce0 = (uint)(byte)DAT_00565a34;
      return;
    case 0x1b0:
      DAT_00563e58 = 0;
      FUN_00491530();
      DAT_00565a70 = 1;
      FUN_00491330(8);
      return;
    case 0x1b1:
      DAT_00563e58 = 0;
      FUN_00491450();
      DAT_00565a70 = 0xffffffff;
      FUN_00491330(8);
      return;
    case 0x1b2:
      FUN_00490b70();
      DAT_00565a70 = 0;
      break;
    case 0x1b3:
      FUN_00490ae0();
      DAT_00565a70 = 0;
      FUN_00491330(8);
      return;
    case 0x1b4:
      FUN_00491630();
      FUN_00491330(8);
      return;
    case 0x1b5:
      FUN_00491610();
      FUN_00491330(8);
      return;
    case 0x1b6:
      if ((DAT_0056589c < 0) || (DAT_0056589c == DAT_00565890)) {
        FUN_00491330(0);
        FUN_00491330(8);
        return;
      }
      if ((DAT_0056589c < 0x80) && (DAT_0056589c < DAT_005b9014)) {
        if ((&DAT_005658b4)[DAT_0056589c] == '\0') {
          FUN_00490780(DAT_0056589c);
          FUN_00491330(8);
          return;
        }
        FUN_004905e0();
        FUN_00491330(8);
        return;
      }
      break;
    case 0x1b7:
      FUN_00490a80();
      if (-1 < DAT_005658a4) {
        FUN_004905e0(DAT_005658a4);
        FUN_00491330(8);
        return;
      }
      break;
    case 0x1b8:
      FUN_00490a80();
      FUN_00491330(8);
      return;
    case 0x1b9:
      FUN_004905e0(0xffffffff);
      FUN_00491330(8);
      return;
    case 0x1ba:
      FUN_00490780(0xffffffff);
      FUN_00491330(8);
      return;
    default:
      goto switchD_0049113a_default;
    }
    FUN_00491330(8);
    return;
  }
  if ((_g_FlightStateFlags & 4) == 0) {
    uVar2 = FUN_0048e800(DAT_005a6140,0xf6,DAT_005a6324._2_1_);
    FUN_0048ce30(uVar2);
    FUN_00491330(0);
  }
switchD_0049113a_default:
  return;
}

