
void FUN_0042a760(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_ec [20];
  undefined4 local_d8;
  undefined1 local_d4 [8];
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [20];
  undefined4 local_ac;
  undefined1 local_a8 [8];
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined1 local_94 [20];
  undefined4 local_80;
  undefined1 local_7c [8];
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [24];
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_44 [12];
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x628) != 0) && (param_2 != 0)) {
    local_38 = DAT_005b95e8;
    local_34 = DAT_005b95ec;
    local_30 = DAT_005b95f0;
    if (DAT_005b0744 != 0) {
      uVar1 = FUN_0048e350();
      local_38 = local_38 + ((int)(((uVar1 & 0x7fffff) - 0x400000) * DAT_005b0750) >> 8);
      uVar1 = FUN_0048e350();
      local_34 = local_34 + ((int)(((uVar1 & 0x7fffff) - 0x400000) * DAT_005b0750) >> 8);
    }
    FUN_0042a6b0(param_2,&local_50);
    FUN_004b1be0(local_68,&local_38);
    local_20 = local_50 - *(int *)(DAT_005b3300 + 0x34);
    local_1c = local_4c - *(int *)(DAT_005b3300 + 0x38);
    local_18 = local_48 - *(int *)(DAT_005b3300 + 0x3c);
    FUN_004b2410(&local_20,&local_20);
    uVar1 = local_18;
    local_18 = (local_18 ^ (int)local_18 >> 0x1f) - ((int)local_18 >> 0x1f);
    if ((int)local_18 < 0x2000) {
      local_18 = 0x2000;
    }
    FUN_004b2e00(&local_20,&local_c);
    local_14 = DAT_005a67d4;
    local_10 = DAT_005a67d8;
    uVar2 = (uint)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    if ((-1 < (int)uVar1) && (uVar1 = FUN_0048e480(&local_14,&local_c), uVar1 < uVar2 << 7)) {
      return;
    }
    local_2c = local_c - local_14;
    local_28 = local_8 - local_10;
    local_24 = 0;
    FUN_004e054e(&local_2c);
    FUN_0052db6a(local_68,0,0,0x800000);
    FUN_0052dbcd(local_68);
    FUN_0052dc76(&local_2c,local_44);
    local_c = (((uint)((longlong)local_2c * (longlong)(int)uVar2) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c * (longlong)(int)uVar2) >> 0x20) << 0x10) +
              DAT_005a67dc) * 0x80;
    local_8 = (((uint)((longlong)local_28 * (longlong)(int)uVar2) >> 0x10 |
               (int)((ulonglong)((longlong)local_28 * (longlong)(int)uVar2) >> 0x20) << 0x10) +
              DAT_005a67e0) * 0x80;
    uVar1 = (uint)((longlong)param_3 * 0x700) >> 0x10 |
            (int)((ulonglong)((longlong)param_3 * 0x700) >> 0x20) << 0x10;
    uVar2 = (uint)((longlong)param_3 * 0x700) >> 0x10 |
            (int)((ulonglong)((longlong)param_3 * 0x700) >> 0x20) << 0x10;
    FUN_0042a550(local_d4,&local_c,-uVar1,uVar2,local_44,&local_2c);
    local_c4 = 0xffff00;
    local_d8 = 0x10000;
    iVar4 = -uVar2;
    local_cc = *(int *)(param_1 + 0x634) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 8) & 0x1f);
    local_c8 = *(int *)(param_1 + 0x638) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 9) & 0x1f);
    FUN_0042a550(local_7c,&local_c,-uVar1,iVar4,local_44,&local_2c);
    local_6c = 0xffff00;
    local_80 = 0x10000;
    local_74 = *(int *)(param_1 + 0x634) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 8) & 0x1f);
    local_70 = *(int *)(param_1 + 0x640) + *(int *)(param_1 + 0x638) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 9) & 0x1f);
    FUN_0042a550(local_a8,&local_c,uVar1,iVar4,local_44,&local_2c);
    iVar4 = *(int *)(param_1 + 0x628);
    local_98 = 0xffff00;
    local_ac = 0x10000;
    local_a0 = *(int *)(param_1 + 0x634) + *(int *)(param_1 + 0x63c) <<
               (0x10U - *(char *)(iVar4 + 8) & 0x1f);
    local_9c = *(int *)(param_1 + 0x640) + *(int *)(param_1 + 0x638) <<
               (0x10U - *(char *)(iVar4 + 9) & 0x1f);
    if (param_6 == 0) {
      uVar3 = FUN_0042a620(param_2,param_5);
      *(undefined4 *)(*(int *)(param_1 + 0x628) + 4) = uVar3;
      param_6 = *(int *)(*(int *)(param_1 + 0x628) + 4);
    }
    else {
      *(int *)(iVar4 + 4) = param_6;
    }
    DAT_004e4a28 = *(undefined4 *)(*(int *)(param_1 + 0x628) + 0xc);
    DAT_004e4adc = (uint)*(byte *)(*(int *)(param_1 + 0x628) + 8);
    DAT_004e4ae0 = (uint)*(byte *)(*(int *)(param_1 + 0x628) + 9);
    DAT_004e4a2c = param_6;
    FUN_00452180(1);
    FUN_004ac2f0(local_ec,local_94,local_c0,DAT_005a680c,*(undefined4 *)(param_1 + 0x628),
                 DAT_004e4a28);
    FUN_0042a550(local_7c,&local_c,uVar1,uVar1,local_44,&local_2c);
    iVar4 = *(int *)(param_1 + 0x628);
    local_74 = *(int *)(param_1 + 0x634) + *(int *)(param_1 + 0x63c) <<
               (0x10U - *(char *)(iVar4 + 8) & 0x1f);
    local_70 = *(int *)(param_1 + 0x638) << (0x10U - *(char *)(iVar4 + 9) & 0x1f);
    FUN_004ac2f0(local_94,local_ec,local_c0,DAT_005a680c,iVar4,DAT_004e4a28);
  }
  return;
}

