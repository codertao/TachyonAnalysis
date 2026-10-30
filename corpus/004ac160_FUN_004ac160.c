
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac160(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (DAT_00604488 == 0x20) {
    DAT_005a6310 = param_3;
  }
  if (DAT_00604494 != 0) {
    if ((DAT_006044a0 & 0x10) == 0) {
      uVar1 = *(uint *)(&DAT_005a6440 + param_3 * 4);
      _DAT_0060e7c4 = param_1 << 7;
      _DAT_0060e7c8 = param_2 << 7;
      _DAT_0060e7c0 = 0x100;
      _DAT_0060e7d4 = 0x7f7f7f;
      (*DAT_00604558)(&DAT_0060e7ac,&DAT_0060e7ac,
                      ((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8 |
                      uVar1 & 0xff000000,0x30000004,0);
    }
    else if (*(int *)(DAT_00604504 + 0x1c) != 0) goto LAB_004ac194;
    return;
  }
LAB_004ac194:
  FUN_004e9334(param_1,param_2,param_1,param_2,param_3);
  return;
}

