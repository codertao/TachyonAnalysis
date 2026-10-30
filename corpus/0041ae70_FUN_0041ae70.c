
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0041ae70(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_30;
  char *local_2c;
  undefined *local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar7 = DAT_005b29ac;
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = DAT_005b29ac;
  local_30 = 0;
  param_1 = (undefined4 *)0x0;
  local_28 = &DAT_00640000;
  local_24 = 1;
  FUN_0041a2f0();
  DAT_005b29b8 = 0;
  DAT_005b29b4 = 0;
  DAT_005b2a70 = 0;
  iVar4 = DAT_005b29a4;
  if (DAT_005b29a4 < 0) {
    iVar4 = 0;
  }
  if (DAT_005b2984 < iVar4) {
    iVar4 = DAT_005b2984;
  }
  _DAT_005b29c4 = iVar4 / 5 + 1;
  local_20 = 0;
  do {
    if (local_24 == 0) {
      local_2c = pcVar7 + 0x3000;
      if (0x540000 < (int)local_2c) {
        local_2c = s_BLOCK_DELAY_0053fffc + 4;
      }
      pcVar7 = local_2c;
      iVar6 = (int)local_2c >> 1;
      uVar1 = FUN_0048e350();
      iVar4 = uVar1 % (uint)pcVar7 - iVar6;
      iVar5 = DAT_005b29b0;
      if (iVar4 < 0) {
        iVar5 = -DAT_005b29b0;
      }
      iVar4 = iVar4 + iVar5;
      uVar1 = FUN_0048e350();
      iVar6 = uVar1 % (uint)pcVar7 - iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 - DAT_005b29b0;
      }
      else {
        iVar6 = iVar6 + DAT_005b29b0;
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
    }
    if (local_20 == 0xe) {
      iVar4 = 0;
      local_30 = 0;
      param_1 = (undefined4 *)0x0;
      iVar6 = 0;
    }
    else {
      if (iVar4 < 0x800001) {
        if (iVar4 < -0x800000) {
          iVar4 = -0x800000;
        }
      }
      else {
        iVar4 = 0x800000;
      }
      if (iVar6 < 0x800001) {
        if (iVar6 < -0x800000) {
          iVar6 = -0x800000;
        }
      }
      else {
        iVar6 = 0x800000;
      }
    }
    iVar5 = 5;
    do {
      iVar2 = iVar4 - local_30;
      iVar3 = DAT_005b29c0;
      if ((iVar2 <= DAT_005b29c0) && (iVar3 = iVar2, iVar2 < -DAT_005b29c0)) {
        iVar3 = -DAT_005b29c0;
      }
      local_30 = local_30 + iVar3;
      iVar2 = iVar6 - (int)param_1;
      iVar3 = DAT_005b29c0;
      if ((DAT_005b29c0 < iVar2) || (iVar3 = -DAT_005b29c0, iVar2 < -DAT_005b29c0)) {
        iVar2 = iVar3;
      }
      param_1 = (undefined4 *)((int)param_1 + iVar2);
      iVar3 = FUN_0041ae00();
      if (iVar3 == 1) {
        if ((2 < _DAT_005b29c4) && (uVar1 = FUN_0048e350(), (uVar1 & 3) == 0)) {
          local_10 = 0x1000000;
        }
        if ((3 < _DAT_005b29c4) && (uVar1 = FUN_0048e350(), (uVar1 & 3) == 0)) {
          uVar1 = FUN_0048e350();
          local_10 = (uVar1 & 3) << 0x17;
        }
      }
      iVar3 = FUN_0041abc0(&local_c,&local_18,&local_30,&param_1,&local_28,iVar3);
      *(int *)(iVar3 + 0xf0) = DAT_005b29b4;
      DAT_005b29b4 = DAT_005b29b4 + 1;
      if (local_24 != 0) {
        local_24 = 0;
        DAT_005b29a0 = iVar3;
      }
      if (local_1c != 0) {
        *(int *)(local_1c + 200) = iVar3;
      }
      iVar5 = iVar5 + -1;
      local_1c = iVar3;
    } while (iVar5 != 0);
    local_20 = local_20 + 1;
    pcVar7 = local_2c;
  } while (local_20 < 0xf);
  local_28 = (undefined *)((int)local_28 * 5);
  FUN_0041a830(&local_c,&local_18,&local_30,&param_1,&local_28);
  FUN_00419d70(&local_c,&local_18);
  return local_2c;
}

