
void FUN_0042a550(int *param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  uVar4 = (uint)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  lVar1 = (longlong)*param_5 * (longlong)(int)uVar3;
  lVar2 = (longlong)*param_6 * (longlong)(int)uVar4;
  *param_1 = *param_2 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)param_5[1] * (longlong)(int)uVar3;
  lVar2 = (longlong)param_6[1] * (longlong)(int)uVar4;
  param_1[1] = param_2[1] + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}

