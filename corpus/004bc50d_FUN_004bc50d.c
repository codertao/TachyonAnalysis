
void FUN_004bc50d(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_00564f58._2_2_) {
    if (local_24.wHour == (WORD)DAT_00564f58) {
      if (local_24.wDay == DAT_00564f54._2_2_) {
        if (local_24.wMonth == DAT_00564f50._2_2_) {
          if (local_24.wYear == (WORD)DAT_00564f50) goto LAB_004bc5b7;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_00564f48 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_00564f48 = 1;
  }
  else {
    DAT_00564f48 = 0;
  }
  DAT_00564f50._0_2_ = local_24.wYear;
  DAT_00564f50._2_2_ = local_24.wMonth;
  DAT_00564f54._0_2_ = local_24.wDayOfWeek;
  DAT_00564f54._2_2_ = local_24.wDay;
  DAT_00564f58._0_2_ = local_24.wHour;
  DAT_00564f58._2_2_ = local_24.wMinute;
  DAT_00564f5c._0_2_ = local_24.wSecond;
  DAT_00564f5c._2_2_ = local_24.wMilliseconds;
LAB_004bc5b7:
  uVar2 = FUN_004c04dc(local_14.wYear,local_14.wMonth,local_14.wDay,local_14.wHour,local_14.wMinute,
                       local_14.wSecond,DAT_00564f48);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}

