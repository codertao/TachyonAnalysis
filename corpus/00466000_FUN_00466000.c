
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  ulonglong local_50;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_8;
  uint local_4;
  
  FUN_0048e380(&local_3c,0x3c);
  local_3c = param_4;
  FUN_004104a0(param_1,&local_48);
  local_24 = (float)local_48 * _DAT_0052e5d8;
  local_20 = (float)local_44 * _DAT_0052e5d8;
  local_1c = (float)local_40 * _DAT_0052e5d8;
  FUN_004b2410(param_2,&local_48);
  if ((param_6 & 2) != 0) {
    local_18 = (float)local_48 * _DAT_0052eb90;
    local_14 = (float)local_44 * _DAT_0052eb90;
    local_10 = (float)local_40 * _DAT_0052eb90;
  }
  local_50 = (ulonglong)DAT_005b2d10;
  local_34 = param_8;
  local_30 = param_5;
  local_50._0_4_ = (undefined4)(longlong)ROUND((float)local_50 * _DAT_0052eb8c * (float)param_8);
  local_38 = (undefined4)local_50;
  local_50 = (ulonglong)(uint)(param_7 << 0xd);
  local_28 = (float)local_50 * _DAT_0052e5d8;
  if (param_9 == 0) {
    uVar1 = (uint)(param_7 << 0xd) / 0x19;
  }
  else {
    uVar1 = param_9 << 0xd;
  }
  local_50 = (ulonglong)uVar1;
  local_2c = (float)local_50 * _DAT_0052e5d8;
  local_8 = param_3;
  local_4 = param_6;
  FUN_00466b00(&local_3c);
  return;
}

