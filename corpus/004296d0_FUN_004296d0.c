
void FUN_004296d0(int *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1[2] < DAT_00666ae4) {
    param_1[2] = DAT_00666ae4;
  }
  iVar2 = (int)((longlong)((ulonglong)DAT_005b0740 << 0x20) / (longlong)param_1[2]);
  lVar1 = (longlong)*param_1 * (longlong)iVar2;
  *param_2 = DAT_005b0738 + ((uint)lVar1 >> 0x19 | (int)((ulonglong)lVar1 >> 0x20) << 7);
  lVar1 = (longlong)-param_1[1] * (longlong)iVar2;
  param_2[1] = DAT_005b073c + ((uint)lVar1 >> 0x19 | (int)((ulonglong)lVar1 >> 0x20) << 7);
  return;
}

