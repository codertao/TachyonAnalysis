
/* sweep */

void Label_MeasureFormatted
               (undefined4 param_1,char *param_2,int param_3,int param_4,int *param_5,uint param_6,
               uint param_7,uint param_8,undefined4 param_9,char param_10,undefined4 param_11,
               undefined4 param_12,undefined4 param_13)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 local_c4 [16];
  int local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78 [16];
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
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
  local_28 = (uint)((longlong)*param_5 * (longlong)DAT_005a67e4) >> 0x10 |
             (int)((ulonglong)((longlong)*param_5 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  local_24 = (uint)((longlong)param_5[1] * (longlong)DAT_005a67e4) >> 0x10 |
             (int)((ulonglong)((longlong)param_5[1] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  uVar2 = (uint)((longlong)param_5[2] * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)param_5[2] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  local_10 = param_5[3];
  local_18 = ((uint)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
             (int)((ulonglong)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x20) << 0x10) -
             local_24;
  iVar9 = uVar2 - local_28;
  local_20 = uVar2;
  local_14 = iVar9;
  iVar3 = Mnu_FindFont(param_1,param_3);
  if (((iVar3 == 0) || (local_10 = *(int *)(iVar3 + 0x238), local_10 == 0)) &&
     (local_10 = param_4, param_4 == 0)) {
    return;
  }
  local_2c = param_8 & 2;
  if (local_2c != 0) {
    uVar6 = 0xffffffff;
    pcVar5 = &DAT_0053fec0;
    do {
      pcVar11 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar5 = param_2;
    do {
      pcVar10 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    pcVar5 = pcVar11 + -uVar6;
    pcVar11 = pcVar10 + -1;
    for (uVar2 = uVar6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar2 = local_20, iVar9 = local_14, uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  Mnu_MeasureText(param_1,param_3,param_2,&local_c,&local_8);
  if ((param_8 & 0x400) == 0) {
    if (local_18 - local_8 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = local_18 - local_8 >> 1;
    }
  }
  else {
    iVar4 = 0;
  }
  param_3 = 0;
  if ((param_8 & 0x100) != 0) {
    param_3 = iVar9 - local_c;
  }
  if ((param_8 & 0x200) != 0) {
    param_3 = iVar9 - local_c >> 1;
  }
  if ((param_8 & 0x4000) != 0) {
    param_3 = -local_c;
    iVar4 = local_18 - local_8;
  }
  if ((param_8 & 0x8000) != 0) {
    param_3 = uVar2 - local_28;
    iVar4 = local_18 - local_8;
  }
  if (iVar3 == 0) goto LAB_0043df70;
  puVar8 = (undefined4 *)(iVar3 + 0x70);
  puVar12 = local_78;
  for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar8 = (undefined4 *)(iVar3 + 0xbc);
  puVar12 = local_c4;
  for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  switch(param_9) {
  case 2:
  case 4:
  case 0x10:
    puVar8 = (undefined4 *)(iVar3 + 0x108);
    puVar12 = local_78;
    for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar8 = (undefined4 *)(iVar3 + 0x154);
    break;
  default:
    goto switchD_0043df2b_caseD_3;
  case 8:
    puVar8 = (undefined4 *)(iVar3 + 0x1a0);
    puVar12 = local_78;
    for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar8 = (undefined4 *)(iVar3 + 0x1ec);
  }
  puVar12 = local_c4;
  for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
switchD_0043df2b_caseD_3:
  iVar9 = local_14;
LAB_0043df70:
  iVar7 = param_3 + local_28 + param_6;
  param_7 = iVar4 + local_24 + param_7;
  *(uint *)(iVar3 + 600) = (local_84 << 8 | local_80) << 8 | local_7c;
  *(undefined4 *)(iVar3 + 0x248) = param_13;
  if ((param_8 & 0x20000) == 0) {
    if ((param_8 & 0x400) == 0) {
      Text_Draw(param_2,local_10,iVar7,param_7,(local_38 << 8 | local_34) << 8 | local_30,0,
                iVar3 + 0x23c);
    }
    else {
      Label_DrawWrapped(param_2,local_10,iVar7,param_7,iVar9,local_18,param_11,param_12,
                        iVar3 + 0x23c,(local_38 << 8 | local_34) << 8 | local_30);
    }
  }
  else {
    uVar2 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    Label_MeasureLine(param_1,param_2,iVar3,iVar7,param_7,~uVar2 - 1,param_13);
  }
  if (local_2c != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_2[~uVar2 - 2] = '\0';
  }
  if (param_10 != '\0') {
    str_sprintf(&DAT_005a41e0,&DAT_00536768,param_2);
    str_sprintf((int)&param_5 + 2,&DAT_0053ebdc,(int)param_10);
    pcVar5 = _strstr((char *)&DAT_005a41e0,(char *)((int)&param_5 + 2));
    iVar9 = local_10;
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
      local_c = Text_MeasureWidth(&DAT_005a41e0,local_10,0,iVar3 + 0x23c);
      Text_Draw(&DAT_0053fec0,iVar9,param_3 + local_c + local_28 + param_6,param_7,
                (local_38 << 8 | local_34) << 8 | local_30,0,iVar3 + 0x23c);
    }
  }
  return;
}

