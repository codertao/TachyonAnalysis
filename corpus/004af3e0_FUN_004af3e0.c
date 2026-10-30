
void FUN_004af3e0(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004e046f(param_1);
  if (iVar1 != 0) {
    iVar1 = (int)(CONCAT44(((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10,param_2 << 0x10) /
                 (longlong)iVar1);
    *param_1 = *param_1 -
               ((uint)((longlong)*param_1 * (longlong)iVar1) >> 0x10 |
               (int)((ulonglong)((longlong)*param_1 * (longlong)iVar1) >> 0x20) << 0x10);
    param_1[1] = param_1[1] -
                 ((uint)((longlong)param_1[1] * (longlong)iVar1) >> 0x10 |
                 (int)((ulonglong)((longlong)param_1[1] * (longlong)iVar1) >> 0x20) << 0x10);
    param_1[2] = param_1[2] -
                 ((uint)((longlong)param_1[2] * (longlong)iVar1) >> 0x10 |
                 (int)((ulonglong)((longlong)param_1[2] * (longlong)iVar1) >> 0x20) << 0x10);
  }
  return;
}

