
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004415c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char local_23c [64];
  undefined1 local_1fc [64];
  byte local_1bc [4];
  int local_1b8;
  undefined4 local_1b4 [19];
  undefined4 local_168 [19];
  int local_11c;
  float local_118;
  uint local_114;
  int local_110;
  char local_108 [128];
  undefined1 local_88 [108];
  uint local_1c;
  undefined4 uStack_18;
  uint local_14;
  undefined4 uStack_10;
  uint local_c;
  float fStack_8;
  
  iVar1 = Cbin_LoadFile(param_2,local_88);
  if (iVar1 != 0) {
    DAT_005a4198 = 0;
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_VIEWPORT_ULX_005400a0,0,0,&DAT_005a4184,local_88);
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_VIEWPORT_ULY_00540088,0,0,&DAT_005a4188,local_88);
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_VIEWPORT_LRX_00540078,0,0,&DAT_005a418c,local_88);
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_VIEWPORT_LRY_00540068,0,0,&DAT_005a4190,local_88);
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_SCROLL_RATE_0054005c,0,0,&DAT_005a419c,local_88);
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_TICK_DELAY_00540050,0,0,&DAT_005a4198,local_88);
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_CR_SPACER_00540044,0,0,&DAT_005a41a0,local_88);
    Cbin_GetField_Ctx(s_GLOBAL_00540098,s_LINE_SPACER_00540038,0,0,&DAT_005a41a4,local_88);
    puVar5 = &DAT_005a67a0;
    puVar6 = &DAT_005a4120;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_004adda0(&DAT_005a4120,
                 (uint)((longlong)DAT_005a4184 * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_005a4184 * (longlong)DAT_005a67e4) >> 0x20) << 0x10
                 ,(uint)((longlong)DAT_005a4188 * (longlong)DAT_005a67e4) >> 0x10 |
                  (int)((ulonglong)((longlong)DAT_005a4188 * (longlong)DAT_005a67e4) >> 0x20) <<
                  0x10,(uint)((longlong)DAT_005a418c * (longlong)DAT_005a67e4) >> 0x10 |
                       (int)((ulonglong)((longlong)DAT_005a418c * (longlong)DAT_005a67e4) >> 0x20)
                       << 0x10,
                 (uint)((longlong)DAT_005a4190 * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_005a4190 * (longlong)DAT_005a67e4) >> 0x20) << 0x10
                );
    local_c = DAT_005a41a0;
    fStack_8 = (float)DAT_005a41a0 + (float)DAT_005a4190;
    iVar1 = Cbin_FindSection(&DAT_00536860,local_88);
    if (iVar1 != 0) {
      iVar1 = Cbin_FindParam(s_CREDIT_00540030,local_108,0x7f,0,4,1,local_88);
      while (iVar1 != 0) {
        pcVar3 = local_23c;
        for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 4;
        }
        iVar1 = str_cmp(local_108,&DAT_00540028);
        if (iVar1 == 0) {
          local_23c[0] = '\0';
        }
        else {
          piVar2 = (int *)FUN_0049e0d0(DAT_005a41c8,s_Credits_00540020,local_108);
          if ((piVar2 == (int *)0x0) || (pcVar3 = (char *)*piVar2, pcVar3 == (char *)0x0)) {
            pcVar3 = _strstr(local_108,&DAT_0053ebe0);
            while (pcVar3 != (char *)0x0) {
              *pcVar3 = ' ';
              pcVar3 = _strstr(local_108,&DAT_0053ebe0);
            }
            pcVar3 = local_108;
          }
          _strncpy(local_23c,pcVar3,0x3f);
        }
        Cbin_GetParamN_Ctx(s_CREDIT_00540030,local_1fc,0x3f,0,4,2,local_88);
        Cbin_GetParamN_Ctx(s_CREDIT_00540030,0,0,local_1bc,1,3,local_88);
        iVar1 = FUN_0043ba90(param_1,local_1fc);
        if (iVar1 != 0) {
          if ((local_1bc[0] & 8) != 0) {
            puVar5 = (undefined4 *)(iVar1 + 0x1a0);
            puVar6 = local_1b4;
            for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = (undefined4 *)(iVar1 + 0x1ec);
            puVar6 = local_168;
            for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          if ((local_1bc[0] & 0x10) == 0) {
            puVar5 = (undefined4 *)(iVar1 + 0x70);
            puVar6 = local_1b4;
            for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = (undefined4 *)(iVar1 + 0xbc);
          }
          else {
            puVar5 = (undefined4 *)(iVar1 + 0x108);
            puVar6 = local_1b4;
            for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = (undefined4 *)(iVar1 + 0x154);
          }
          puVar6 = local_168;
          for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_1b8 = iVar1;
          if (iVar1 + 0x50 != 0) {
            local_114 = (uint)*(byte *)(*(int *)(iVar1 + 0x54) + 0x20c);
            local_110 = FUN_004e668a(local_23c,iVar1 + 0x50);
            local_1c = DAT_005a41a4 + local_114;
            uStack_18 = 0;
            local_118 = (float)local_1c + fStack_8;
            fStack_8 = local_118;
            if ((local_1bc[0] & 4) != 0) {
              local_14 = DAT_005a41a0;
              uStack_10 = 0;
              fStack_8 = (float)DAT_005a41a0 + local_118;
            }
            if ((local_1bc[0] & 1) != 0) {
              local_11c = (DAT_005a418c - DAT_005a4184) - local_110;
            }
            if ((local_1bc[0] & 2) != 0) {
              local_11c = (DAT_005a418c - DAT_005a4184) - local_110 >> 1;
            }
            FUN_00441200(param_1,local_23c);
          }
        }
        iVar1 = Cbin_FindParam(s_CREDIT_00540030,local_108,0x7f,0,4,1,local_88);
      }
    }
    FUN_0049adb0(local_88);
    Cbin_LoadFile(param_2,local_88);
    FUN_00441510(local_88,&DAT_005a4120);
    FUN_0049adb0(local_88);
    _DAT_005a4154 = DAT_005a4138 - DAT_005a4130 >> 1;
    _DAT_005a4158 = DAT_005a413c - DAT_005a4134 >> 1;
  }
  return;
}

