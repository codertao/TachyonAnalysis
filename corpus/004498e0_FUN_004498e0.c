
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004498e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint local_294;
  uint local_290;
  int local_28c;
  int local_288;
  longlong local_284;
  int local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  undefined1 local_26c [108];
  undefined1 local_200 [128];
  undefined1 local_180 [128];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  local_290 = Var_GetTable(s_WEAPON_TYPES_0054763c);
  if (DAT_00598580 == 0) {
    FUN_004494c0();
    uVar2 = Ship_GetCurrentModel(local_26c);
    iVar3 = Cbin_LoadFile(uVar2);
    if (iVar3 != 0) {
      iVar3 = 0;
      do {
        iVar4 = Cbin_FindSection((int)&DAT_00592fe0 + iVar3,local_26c);
        if (iVar4 != 0) {
          Cbin_FindParam(s_MOUNT_ICON_005478dc,local_100,0x7f,0,4,1,local_26c);
          iVar4 = FUN_00469a30(local_100);
          if (iVar4 != 0) {
            local_294 = iVar4 + 0x40;
            str_sprintf(&DAT_00593118 + iVar3,local_294);
            piVar10 = (int *)((int)&DAT_00593130 + iVar3);
            local_284 = (longlong)ROUND(*(float *)(iVar4 + 0x6c) * _DAT_0052e548);
            *(int *)((int)&DAT_0059313c + iVar3) = (int)local_284;
            *(undefined4 *)((int)&DAT_00593138 + iVar3) = *(undefined4 *)(iVar4 + 0x68);
            *(undefined4 *)((int)&DAT_0059312c + iVar3) = *(undefined4 *)(iVar4 + 100);
            *(undefined4 *)((int)&DAT_00593128 + iVar3) = *(undefined4 *)(iVar4 + 0x60);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,piVar10,1,2,local_26c);
            piVar1 = (int *)((int)&DAT_00593134 + iVar3);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,piVar1,1,3,local_26c);
            *piVar10 = *piVar10 + -0x14;
            *piVar1 = *piVar1 + 0x19;
            *(int *)((int)&DAT_00593a84 + iVar3) = *piVar10;
            *(int *)((int)&DAT_00593a88 + iVar3) = *piVar1;
            *(int *)((int)&DAT_00593a8c + iVar3) =
                 *(int *)(iVar4 + 0x60) + *(int *)((int)&DAT_00593a84 + iVar3);
            uVar8 = *(uint *)((int)&DAT_00593138 + iVar3);
            if (uVar8 == 0) {
              uVar8 = 1;
            }
            *(uint *)((int)&DAT_00593a90 + iVar3) =
                 *(uint *)(iVar4 + 100) / uVar8 + *(int *)((int)&DAT_00593a88 + iVar3);
            FUN_0046d770(DAT_005879a0,&DAT_00593098 + iVar3,local_294,*(undefined4 *)(iVar4 + 0x68),
                         *(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),*piVar10,*piVar1
                         ,0);
            FUN_0043f500(&g_UiManager,&DAT_00593098 + iVar3,
                         *(undefined4 *)((int)&DAT_0059313c + iVar3));
            local_274 = *(int *)((int)&DAT_00593a8c + iVar3);
            local_270 = *(undefined4 *)((int)&DAT_00593a90 + iVar3);
            local_27c = local_274 + -0x10;
            local_278 = *(undefined4 *)((int)&DAT_00593a88 + iVar3);
            FUN_0043e5c0(&g_UiManager,&DAT_00593040 + iVar3,&local_27c);
          }
        }
        uVar8 = 0;
        local_294 = 0;
        Cbin_FindSection((int)&DAT_00592fe0 + iVar3,local_26c);
        if (local_290 != 0) {
          while ((iVar4 = Cbin_FindParam(s_WEAPON_CLASS_005478cc,local_80,0x7f,0,4,1,local_26c),
                 iVar4 != 0 && (uVar8 < 0x20))) {
            local_28c = -1;
            FUN_0048f670(s_WEAPON_CLASS_005478cc,local_80,&local_28c);
            if ((local_28c != -1) && (piVar10 = &DAT_0055a560, DAT_0055a560 != 0x1c)) {
              puVar9 = (undefined4 *)((int)&DAT_005931bc + uVar8 * 0x48 + iVar3);
              do {
                if (((piVar10[0x41] == local_28c) && (uVar8 < 0x20)) &&
                   (pcVar5 = (char *)Var_GetKeyByIndex(local_290,*piVar10 + 1), uVar8 = local_294,
                   pcVar5 != (char *)0x0)) {
                  _strncpy((char *)(puVar9 + -0x10),pcVar5,0x3f);
                  iVar4 = FUN_004690b0(pcVar5);
                  puVar9[1] = iVar4;
                  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x58) == 0)) {
                    *puVar9 = 1;
                  }
                  else {
                    *puVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x58) + 0x9c);
                  }
                  uVar8 = local_294;
                  if (puVar9[1] != 0) {
                    uVar8 = local_294 + 1;
                    puVar9 = puVar9 + 0x12;
                    local_294 = uVar8;
                  }
                }
                piVar1 = piVar10 + 0x44;
                piVar10 = piVar10 + 0x44;
              } while (*piVar1 != 0x1c);
            }
          }
        }
        if ((&DAT_00593118)[iVar3] != '\0') {
          *(undefined4 *)((int)&DAT_00593090 + iVar3) = 1;
          FUN_0043f840(&g_UiManager,&DAT_00593098 + iVar3,0x20000);
        }
        iVar3 = iVar3 + 0xab4;
      } while (iVar3 < 0x55a0);
      uVar2 = FUN_0046e900();
      str_sprintf(local_200,s_SHIP__02d_DATA_0053643c,uVar2);
      local_290 = 1;
      pcVar5 = &DAT_00593118;
      do {
        uVar8 = local_290;
        str_sprintf(local_180,s_MOUNT__d_0053fa18,local_290);
        str_sprintf(&DAT_005a41e0,s_STORE__d_0054786c,uVar8);
        iVar3 = Var_GetInt(g_PlayerVarStore,local_200,local_180,&local_288);
        if (iVar3 != 0) {
          uVar2 = Var_FindSection(local_200,local_180);
          iVar3 = Var_FindKey(uVar2);
          if (((local_288 != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 8) != 0)) {
            uVar2 = Var_GetKeyByIndex(*(int *)(iVar3 + 8),local_288);
            iVar3 = FUN_004690b0(uVar2);
            local_284 = CONCAT44(local_284._4_4_,iVar3);
            if (((iVar3 == 0) || (iVar4 = *(int *)(iVar3 + 0x58), iVar4 == 0)) ||
               (iVar6 = FUN_00449f20(iVar3,pcVar5 + -0x138), iVar6 == 0)) {
              FUN_0046bde0(local_200,local_180,0);
              FUN_0046bde0(local_200,&DAT_005a41e0,0);
            }
            else {
              if (*(uint *)(iVar4 + 0x9c) < 2) {
                pcVar5[0x968] = '\x01';
                pcVar5[0x969] = '\0';
                pcVar5[0x96a] = '\0';
                pcVar5[0x96b] = '\0';
                FUN_0046bde0(local_200,&DAT_005a41e0,0);
              }
              else {
                FUN_0048f670(s_WEAPON_TYPES_0054763c,iVar4,&local_294);
                if (((local_294 == 0) || (iVar6 = FUN_00493120(local_294 - 1), iVar6 == 0)) ||
                   ((*(byte *)(iVar6 + 0xd8) & 4) == 0)) {
                  uVar2 = FUN_0046be00(local_200,&DAT_005a41e0);
                  *(undefined4 *)(pcVar5 + 0x968) = uVar2;
                }
                else {
                  *(undefined4 *)(pcVar5 + 0x968) = *(undefined4 *)(iVar4 + 0x9c);
                }
              }
              if (*(int *)(pcVar5 + 0x968) != 0) {
                if (*pcVar5 != '\0') {
                  FUN_0046d770(DAT_005879a0,pcVar5 + -0x40,iVar4 + 0xb0,1,
                               *(undefined4 *)(iVar4 + 0xc0),*(undefined4 *)(iVar4 + 0xc4),
                               *(undefined4 *)(pcVar5 + 0x18),*(undefined4 *)(pcVar5 + 0x1c),0);
                  uVar2 = FUN_0043fa70(&g_UiManager,pcVar5 + -0x40);
                  str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar4 + 0xb0);
                  uVar7 = FUN_0043a7a0(&g_UiManager,&DAT_005a41e0,*(undefined4 *)(pcVar5 + 0x18),
                                       *(undefined4 *)(pcVar5 + 0x1c),*(undefined4 *)(pcVar5 + 0x10)
                                       ,*(undefined4 *)(pcVar5 + 0x14),
                                       *(undefined4 *)(pcVar5 + 0x20),2,2);
                  FUN_004482e0(uVar2,uVar7);
                  iVar3 = (int)local_284;
                  uVar8 = local_290;
                }
                FUN_0043f5d0(&g_UiManager,pcVar5 + -0x80,9);
                *(int *)(pcVar5 + 0x964) = iVar3;
                FUN_0043f840(&g_UiManager,pcVar5 + -0x40,0x20000);
                if (1 < *(uint *)(iVar4 + 0x9c)) {
                  str_sprintf(pcVar5 + -0x98,&DAT_00535eb8,*(undefined4 *)(pcVar5 + 0x968));
                  FUN_0043e670(&g_UiManager,pcVar5 + -0xd8,0x10000);
                }
              }
            }
          }
        }
        local_290 = uVar8 + 1;
        pcVar5 = pcVar5 + 0xab4;
      } while (uVar8 < 8);
      FUN_0049adb0(local_26c);
    }
  }
  return;
}

