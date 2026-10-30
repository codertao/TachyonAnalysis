
void FUN_0044f2d0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    DAT_005a62d8 = (uint)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    DAT_005a62dc = (uint)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    DAT_005a62e0 = (uint)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    DAT_005a62e4 = (uint)((longlong)param_5 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)param_5 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    DAT_005a64c8 = param_1;
    DAT_005a64c0 = param_1[3];
    DAT_005a62d0 = 0;
    DAT_005a62d4 = 0;
    DAT_005a64cc = 1 << (*(byte *)(param_1 + 2) & 0x1f);
    DAT_005a64d0 = 1 << (*(byte *)((int)param_1 + 9) & 0x1f);
    if (DAT_00590d3c != 0) {
      FUN_004ad9c0(DAT_00590d3c,0);
    }
    FUN_004ace10();
  }
  return;
}

