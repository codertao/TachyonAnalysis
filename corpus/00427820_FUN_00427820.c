
void FUN_00427820(uint param_1,int *param_2)

{
  if ((param_1 != 0) && (*param_2 != 0)) {
    FUN_00452180(1);
    DAT_005a62d8 = 0;
    DAT_005a62dc = 0;
    DAT_005a62e0 = DAT_005a67a8;
    DAT_005a62e4 = DAT_005a67ac;
    DAT_005a64c8 = param_2;
    DAT_005a64c0 = param_2[3];
    DAT_005a62d0 = 0;
    DAT_005a62d4 = 0;
    DAT_005a64cc = param_2[6];
    DAT_005a64d0 = param_2[7];
    FUN_004ad9c0(param_2[8],0);
    if (0xff < param_1) {
      param_1 = 0xff;
    }
    DAT_005a64c8[1] = param_1 >> 1;
    if (((DAT_005b9084 != 0) && (*(int *)(DAT_005b9084 + 0xdc) != 0)) && (DAT_00564ae4 != 0)) {
      DAT_005a64c8[1] = param_1;
    }
    FUN_004ace10();
  }
  return;
}

