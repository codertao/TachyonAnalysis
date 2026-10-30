
undefined4 FUN_00452690(int param_1,undefined4 param_2,uint param_3)

{
  switch(param_2) {
  case 0x11:
    if ((param_3 & 4) != 0) {
      FUN_00456140(param_1 + 0x11c,4,0x50);
    }
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | param_3;
    return 0;
  case 0x12:
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & ~param_3;
    return 0;
  case 0x15:
    FUN_00452630(param_1,param_3);
    return 0;
  case 0x1b:
    if (param_3 == 0xffffffff) {
      DAT_005b1ee0 = 0x400;
      DAT_005b1ee8 = 1;
      return 0;
    }
    if ((int)param_3 < 0) {
      param_3 = 0;
    }
    else if (0xff < (int)param_3) {
      param_3 = 0xff;
    }
    DAT_005b1ee0 = param_3 * 4;
    DAT_005b1ee8 = 0;
  }
  return 0;
}

