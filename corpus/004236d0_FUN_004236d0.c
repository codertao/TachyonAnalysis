
void FUN_004236d0(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = *param_1 - DAT_005b9600;
  local_c = param_1[1] - DAT_005b9604;
  local_8 = param_1[2] - DAT_005b9608;
  FUN_004e054e(&local_10);
  lVar1 = (longlong)local_10 * (longlong)(DAT_00666ae8 + -0x960000);
  lVar2 = (longlong)local_c * (longlong)(DAT_00666ae8 + -0x960000);
  lVar3 = (longlong)local_8 * (longlong)(DAT_00666ae8 + -0x960000);
  local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + DAT_005b9600;
  local_c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + DAT_005b9604;
  local_8 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) + DAT_005b9608;
  FUN_00423630(&local_10,DAT_005a7418);
  return;
}

