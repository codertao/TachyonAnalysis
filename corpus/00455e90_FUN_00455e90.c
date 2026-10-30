
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455e90(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0x10000;
  iVar1 = FUN_00455e20(param_1,param_2);
  if (*param_1 < iVar1) {
    local_8 = 0x10000 - ((uint)((longlong)param_1[1] * 4000) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[1] * 4000) >> 0x20) << 0x10);
  }
  iVar1 = FUN_00455e40(param_1,param_2);
  if ((param_1[2] < iVar1) || (param_1[4] < iVar1)) {
    local_8 = local_8 - ((uint)((longlong)param_1[3] * 4000) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[3] * 4000) >> 0x20) << 0x10);
  }
  iVar1 = FUN_00455e00(param_1,param_2);
  if (param_1[6] < iVar1) {
    local_8 = local_8 - ((uint)((longlong)param_1[7] * 4000) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[7] * 4000) >> 0x20) << 0x10);
  }
  param_1[8] = (int)((float)local_8 * _DAT_0052e5d8);
  return;
}

