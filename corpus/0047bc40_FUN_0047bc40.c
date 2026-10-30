
void FUN_0047bc40(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  float10 fVar14;
  longlong local_34;
  longlong local_2c;
  int local_24;
  longlong local_20;
  longlong local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  fVar14 = (float10)FUN_0047bc30();
  fVar1 = (float)fVar14;
  fVar14 = (float10)FUN_0047ba70();
  local_20 = (longlong)ROUND(fVar14);
  local_24 = (int)local_20;
  fVar14 = (float10)FUN_0047ba80();
  local_20 = (longlong)ROUND(fVar14);
  if ((param_1 == 0) || (DAT_0057128c == 0)) {
    DAT_00571b00 = 0;
  }
  else {
    str_sprintf(&DAT_005a41e0,&DAT_00536768,param_1 + 0x40);
    pcVar5 = _strstr((char *)&DAT_005a41e0,&DAT_0053fec0);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
    }
    uVar8 = 0xffffffff;
    pcVar5 = &DAT_0053f9e0;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8;
    iVar9 = -1;
    pcVar5 = (char *)&DAT_005a41e0;
    do {
      pcVar12 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar2 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = pcVar12 + -1;
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    iVar9 = FUN_004c67c0(&DAT_005a41e0,&DAT_00571b80);
    if (iVar9 != 0) {
      FUN_0049c6e0(0xa106);
      DAT_00563688 = 0;
      DAT_00571b80 = 0;
      DAT_00563688 = FUN_0049df00(&DAT_005a41e0,0xa106);
    }
    if (DAT_00563688 != 0) {
      str_sprintf(&DAT_00571b80,&DAT_005a41e0);
      puVar6 = (undefined4 *)FUN_0049e0d0(DAT_00563688,s_QUADRANT_NAMES_005526f0,param_1);
      if (puVar6 != (undefined4 *)0x0) {
        str_sprintf(&DAT_00571b00,&DAT_00536768,*puVar6);
        iVar7 = FUN_0047a830(param_1 + 0x60);
        FUN_0043b990(g_MapUiCtx,DAT_0057128c + 0x80,&DAT_00571b00,&local_34,&local_2c);
        local_34 = (longlong)ROUND((float)(int)local_34 / fVar1);
        local_2c = (longlong)ROUND((float)(int)local_2c / fVar1);
        local_18._0_4_ =
             (int)(longlong)ROUND((float)(*(int *)(iVar7 + 0x54) >> 1) * *(float *)(iVar7 + 0x5c));
        iVar11 = ((*(int *)(param_1 + 0x84) - (int)local_18) - (int)local_2c) - (int)local_20;
        local_18._0_4_ =
             (int)(longlong)
                  ROUND((float)((*(int *)(param_1 + 0x80) - ((int)local_34 >> 1)) - local_24) *
                        fVar1);
        iVar9 = (int)local_18;
        local_10 = (int)local_18;
        local_18._0_4_ = (int)(longlong)ROUND((float)iVar11 * fVar1);
        iVar3 = (int)local_18;
        local_c = (int)local_18;
        local_18._0_4_ =
             (int)(longlong)
                  ROUND((float)((*(int *)(param_1 + 0x80) - local_24) + (int)local_34) * fVar1);
        iVar4 = (int)local_18;
        local_8 = (int)local_18;
        local_18 = (longlong)ROUND((float)(iVar11 + 1) * fVar1);
        local_4 = (int)local_18;
        if (iVar9 <= DAT_00571fd0 + 4) {
          local_10 = DAT_00571fd0 + 4;
        }
        if (DAT_00571fd8 < iVar4) {
          local_8 = DAT_00571fd8;
          local_10 = (DAT_00571fd8 - (int)local_34) + -4;
        }
        if (iVar3 < DAT_00571fd4) {
          local_18 = (longlong)
                     ROUND((float)(*(int *)(iVar7 + 0x54) >> 1) * *(float *)(iVar7 + 0x5c));
          local_c = ((int)local_18 - (int)local_20) + *(int *)(param_1 + 0x84) + (int)local_2c;
          local_4 = local_c + 1;
        }
        FUN_0043e5c0(g_MapUiCtx,s_TxtMapFloating_005526e0,&local_10);
        return;
      }
    }
  }
  return;
}

