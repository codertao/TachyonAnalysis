
undefined4 FUN_00497860(undefined4 param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_2 < 0x19) {
      DAT_005b1b68 = 0;
      return 1;
    }
    if (0x31 < param_2) {
      DAT_005b1b68 = 0;
      FUN_00466590(0xe,6,0,0xff);
      return 2;
    }
  }
  else if (((param_3 == 1) && (0x31 < param_2)) && (DAT_005b1b68 = 1, param_2 == 0x32)) {
    FUN_00466590(0xe,0x11,0,0xff);
  }
  return 0;
}

