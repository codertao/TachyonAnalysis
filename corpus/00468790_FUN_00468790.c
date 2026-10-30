
void FUN_00468790(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 1;
  uVar1 = FUN_0048e350();
  *param_1 = uVar1 % param_2 - uVar2;
  uVar1 = FUN_0048e350();
  param_1[1] = uVar1 % param_2 - uVar2;
  uVar1 = FUN_0048e350();
  param_1[2] = uVar1 % param_2 - uVar2;
  FUN_004e054e(param_1);
  *param_1 = (uint)((longlong)(int)*param_1 * (longlong)(int)param_2) >> 0x10 |
             (int)((ulonglong)((longlong)(int)*param_1 * (longlong)(int)param_2) >> 0x20) << 0x10;
  param_1[1] = (uint)((longlong)(int)param_1[1] * (longlong)(int)param_2) >> 0x10 |
               (int)((ulonglong)((longlong)(int)param_1[1] * (longlong)(int)param_2) >> 0x20) <<
               0x10;
  param_1[2] = (uint)((longlong)(int)param_1[2] * (longlong)(int)param_2) >> 0x10 |
               (int)((ulonglong)((longlong)(int)param_1[2] * (longlong)(int)param_2) >> 0x20) <<
               0x10;
  return;
}

