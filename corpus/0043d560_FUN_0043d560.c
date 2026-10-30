
void FUN_0043d560(undefined4 param_1,char *param_2,int param_3,int param_4,int *param_5,uint param_6
                 ,uint param_7,uint param_8,undefined4 param_9,char param_10,undefined4 param_11,
                 undefined4 param_12)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 local_c4 [16];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = param_3;
  if (param_5 == (int *)0x0) {
    return;
  }
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*param_2 == '\0') && ((param_8 & 2) == 0)) {
    return;
  }
  param_6 = (uint)((longlong)(int)param_6 * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)(int)param_6 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  param_7 = (uint)((longlong)(int)param_7 * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)(int)param_7 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  local_2c = (uint)((longlong)*param_5 * (longlong)DAT_005a67e4) >> 0x10 |
             (int)((ulonglong)((longlong)*param_5 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  local_28 = (uint)((longlong)param_5[1] * (longlong)DAT_005a67e4) >> 0x10 |
             (int)((ulonglong)((longlong)param_5[1] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  local_24 = (uint)((longlong)param_5[2] * (longlong)DAT_005a67e4) >> 0x10 |
             (int)((ulonglong)((longlong)param_5[2] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  local_10 = param_5[3];
  local_14 = local_24 - local_2c;
  local_18 = ((uint)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
             (int)((ulonglong)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x20) << 0x10) -
             local_28;
  local_10 = FUN_0043ba90(param_1,param_3);
  if (((local_10 == 0) || (param_3 = local_10 + 0x50, param_3 == 0)) &&
     (param_3 = param_4, param_4 == 0)) {
    return;
  }
  local_1c = param_8 & 2;
  if (local_1c != 0) {
    uVar5 = 0xffffffff;
    pcVar4 = &DAT_0053fec0;
    do {
      pcVar12 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar4 = param_2;
    do {
      pcVar11 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar11;
    } while (cVar1 != '\0');
    pcVar4 = pcVar12 + -uVar5;
    pcVar12 = pcVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar12 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  FUN_0043b990(param_1,uVar2,param_2,&local_8,&local_c);
  iVar6 = local_10;
  uVar5 = param_8 & 0x400;
  if (uVar5 == 0) {
    iVar9 = 0;
    if (local_18 - local_c < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_18 - local_c >> 1;
    }
  }
  else {
    iVar9 = 4;
    iVar3 = 4;
  }
  if ((param_8 & 0x100) != 0) {
    iVar9 = local_14 - local_8;
  }
  if ((param_8 & 0x200) != 0) {
    iVar9 = local_14 - local_8 >> 1;
  }
  if ((param_8 & 0x4000) != 0) {
    iVar9 = -local_8;
    iVar3 = local_18 - local_c;
  }
  if ((param_8 & 0x8000) != 0) {
    iVar9 = local_24 - local_2c;
    iVar3 = local_18 - local_c;
  }
  if (local_10 != 0) {
    puVar10 = (undefined4 *)(local_10 + 0x70);
    puVar13 = local_c4;
    for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar10 = (undefined4 *)(iVar6 + 0xbc);
    puVar13 = local_78;
    for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    switch(param_9) {
    case 2:
    case 4:
    case 0x10:
      puVar10 = (undefined4 *)(iVar6 + 0x108);
      puVar13 = local_c4;
      for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar10 = (undefined4 *)(iVar6 + 0x154);
      break;
    default:
      goto switchD_0043d742_caseD_3;
    case 8:
      puVar10 = (undefined4 *)(iVar6 + 0x1a0);
      puVar13 = local_c4;
      for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar10 = (undefined4 *)(iVar6 + 0x1ec);
    }
    puVar13 = local_78;
    for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
  }
switchD_0043d742_caseD_3:
  iVar8 = iVar9 + local_2c + param_6;
  iVar6 = iVar3 + local_28 + param_7;
  param_7 = iVar6;
  FUN_004e7194(local_84,local_80,local_7c,local_38,local_34,local_30);
  if ((param_8 & 0x20000) == 0) {
    if (uVar5 == 0) {
      FUN_004e68ae(param_2,param_3,iVar8,iVar6,0,0,0);
    }
    else {
      FUN_0043d160(param_2,param_3,iVar8,iVar6,local_14,local_18,param_11,param_12);
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_0043d3c0(param_1,param_2,local_10,iVar8,param_7,~uVar5 - 1);
    iVar6 = param_7;
  }
  if (local_1c != 0) {
    uVar5 = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    param_2[~uVar5 - 2] = '\0';
    iVar6 = param_7;
  }
  if (param_10 != '\0') {
    str_sprintf(&DAT_005a41e0,&DAT_00536768,param_2);
    str_sprintf((int)&param_5 + 2,&DAT_0053ebdc,(int)param_10);
    pcVar4 = _strstr((char *)&DAT_005a41e0,(char *)((int)&param_5 + 2));
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      local_8 = FUN_004e668a(&DAT_005a41e0,param_3);
      FUN_004e68ae(&DAT_0053fec0,param_3,iVar9 + local_8 + local_2c + param_6,iVar6,0,0,0);
    }
  }
  return;
}

