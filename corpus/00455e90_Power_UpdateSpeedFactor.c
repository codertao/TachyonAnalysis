
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [8] = 1.0 - rate*4000/65536 for each system still recharging (laser, shields, burner); scales max
   speed */

void Power_UpdateSpeedFactor(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0x10000;
  iVar1 = Power_GetLaserMax(param_1,param_2);
  if (*param_1 < iVar1) {
    local_8 = 0x10000 - ((uint)((longlong)param_1[1] * 4000) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[1] * 4000) >> 0x20) << 0x10);
  }
  iVar1 = Shield_GetMax(param_1,param_2);
  if ((param_1[2] < iVar1) || (param_1[4] < iVar1)) {
    local_8 = local_8 - ((uint)((longlong)param_1[3] * 4000) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[3] * 4000) >> 0x20) << 0x10);
  }
  iVar1 = Power_GetBurnerMax(param_1,param_2);
  if (param_1[6] < iVar1) {
    local_8 = local_8 - ((uint)((longlong)param_1[7] * 4000) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[7] * 4000) >> 0x20) << 0x10);
  }
  param_1[8] = (int)((float)local_8 * _DAT_0052e5d8);
  return;
}

