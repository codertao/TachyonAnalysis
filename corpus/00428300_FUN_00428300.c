
void FUN_00428300(int *param_1,int param_2,int param_3,byte param_4,int param_5,undefined4 param_6,
                 undefined4 param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11)

{
  longlong lVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if ((param_4 & 1) != 0) {
      param_2 = DAT_0060447c - ((uint)param_1[6] >> 1);
    }
    if ((param_4 & 2) != 0) {
      param_3 = DAT_00604480 - ((uint)param_1[7] >> 1);
    }
    if ((param_4 & 4) == 0) {
      lVar1 = (longlong)(DAT_005b0140 + param_2) * (longlong)DAT_005a67e4;
      DAT_005a62d8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      lVar1 = (longlong)(DAT_005b0144 + param_3) * (longlong)DAT_005a67e4;
      DAT_005a62dc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    }
    else {
      DAT_005a62d8 = DAT_005b0140 + param_2;
      DAT_005a62dc = DAT_005b0144 + param_3;
    }
    DAT_005a62e0 = (uint)((longlong)param_8 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)param_8 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    DAT_005a62e4 = (uint)((longlong)param_9 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)param_9 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    DAT_005a64c8 = param_1;
    DAT_005a64c0 = param_1[3];
    DAT_005a62d4 = param_7;
    DAT_005a62d0 = param_6;
    DAT_005a64cc = param_10;
    DAT_005a64d0 = param_11;
    if (param_5 != -1) {
      param_1[1] = param_5;
    }
    FUN_004ad9c0(param_1[8],0);
    FUN_004ace10();
  }
  return;
}

