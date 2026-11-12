
/* sweep */

void HudBar_DrawLeftToRight
               (int *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    DAT_005a64cc = (param_1[5] * param_2) / param_3;
    lVar2 = (longlong)(param_1[1] + DAT_005b0140) * (longlong)DAT_005a67e4;
    DAT_005a62d8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)(param_1[2] + DAT_005b0144) * (longlong)DAT_005a67e4;
    DAT_005a62dc = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    DAT_005a62e0 = (uint)((longlong)DAT_005a64cc * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)DAT_005a64cc * (longlong)DAT_005a67e4) >> 0x20) <<
                   0x10;
    DAT_005a62e4 = (uint)((longlong)param_1[6] * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)param_1[6] * (longlong)DAT_005a67e4) >> 0x20) << 0x10
    ;
    DAT_005a64c0 = piVar1[3];
    DAT_005a62d0 = param_1[3];
    DAT_005a62d4 = param_1[4];
    DAT_005a64d0 = param_1[6];
    DAT_005a64c8 = piVar1;
    piVar1[1] = (param_4 << 8 | param_5) << 8 | param_6;
    Gfx_DrawImage();
  }
  return;
}

