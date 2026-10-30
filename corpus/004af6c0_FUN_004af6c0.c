
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004af6c0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_28 [32];
  int local_8;
  
  pcVar8 = param_1;
  if (DAT_006128a0 == 0) {
    uVar6 = 0xffffffff;
    pcVar5 = param_1;
    do {
      pcVar9 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar5 = pcVar9 + -uVar6;
    pcVar9 = local_28;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    str_sprintf(local_28,s__s__s_0055eba8,param_1,DAT_006128a0);
  }
  iVar3 = FUN_004af1d0(local_28);
  DAT_0062c0f0 = iVar3;
  if (iVar3 != 0) {
    _DAT_00603100 = (uint)*(ushort *)(iVar3 + 0x20);
    DAT_00603104 = (uint)*(ushort *)(iVar3 + 0x22);
    *(int *)(param_2 + 0x10) = iVar3;
    iVar2 = 0x1f;
    if (_DAT_00603100 != 0) {
      for (; _DAT_00603100 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    local_8 = 0x1f;
    if (DAT_00603104 != 0) {
      for (; DAT_00603104 >> local_8 == 0; local_8 = local_8 + -1) {
      }
    }
    param_1._0_1_ = (char)iVar2;
    *(char *)(param_2 + 0xd) = (char)param_1;
    *(char *)(param_2 + 0xe) = (char)local_8;
    if (*(int *)(iVar3 + 0x24) == -1) {
      *(undefined4 *)(iVar3 + 0x24) = 1;
    }
    else {
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
    }
    uVar4 = FUN_004af640(param_2,*(undefined4 *)(iVar3 + 0x34));
    *(undefined4 *)(iVar3 + 0x34) = uVar4;
    return *(undefined4 *)(iVar3 + 0x28);
  }
  pcVar5 = (char *)FUN_004af180();
  uVar4 = FUN_004a2eb0(param_1);
  *(undefined4 *)(pcVar5 + 0x28) = uVar4;
  *(char **)(param_2 + 0x10) = pcVar5;
  *(undefined4 *)(pcVar5 + 0x44) = DAT_00668f90;
  if (DAT_00668f58 != -1) {
    FUN_0049c670(*(undefined4 *)(pcVar5 + 0x28),DAT_00668f5c);
  }
  if (*(int *)(pcVar5 + 0x28) == 0) {
    FUN_004af0d0(param_1);
    *(undefined4 *)(pcVar5 + 0x28) = DAT_0062c0ec;
    _DAT_00603100 = 0x10;
    DAT_00603104 = 0x10;
  }
  iVar3 = 0x1f;
  if (_DAT_00603100 != 0) {
    for (; _DAT_00603100 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  local_8 = 0x1f;
  if (DAT_00603104 != 0) {
    for (; DAT_00603104 >> local_8 == 0; local_8 = local_8 + -1) {
    }
  }
  param_1._0_1_ = (char)iVar3;
  *(char *)(param_2 + 0xe) = (char)local_8;
  *(char *)(param_2 + 0xd) = (char)param_1;
  pcVar5[0x31] = (char)local_8;
  pcVar5[0x30] = (char)param_1;
  *(undefined2 *)(pcVar5 + 0x20) = DAT_00603100;
  *(undefined2 *)(pcVar5 + 0x22) = (undefined2)DAT_00603104;
  uVar6 = 0xffffffff;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = pcVar5;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (DAT_00668f7c == 0) {
    if ((*(ushort *)(param_2 + 0x16) & 0x8000) != 0) {
      FUN_004a2e60(3);
      FUN_004a2dc0(*(undefined4 *)(pcVar5 + 0x28),DAT_00603104 * _DAT_00603100);
      FUN_004a2e60(2);
      return *(undefined4 *)(pcVar5 + 0x28);
    }
    FUN_004a2dc0(*(undefined4 *)(pcVar5 + 0x28),DAT_00603104 * _DAT_00603100);
  }
  return *(undefined4 *)(pcVar5 + 0x28);
}

