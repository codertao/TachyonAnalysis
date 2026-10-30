
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475be0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
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
    FUN_004757e0();
    uVar3 = Ship_GetCurrentModel(local_26c);
    iVar4 = Cbin_LoadFile(uVar3);
    if (iVar4 != 0) {
      iVar4 = 0;
      do {
        iVar5 = Cbin_FindSection((int)&DAT_00572160 + iVar4,local_26c);
        if (iVar5 != 0) {
          Cbin_FindParam(s_MOUNT_ICON_005478dc,local_100,0x7f,0,4,1,local_26c);
          iVar5 = FUN_00469a30(local_100);
          if (iVar5 != 0) {
            local_294 = iVar5 + 0x40;
            str_sprintf(&DAT_00572298 + iVar4,local_294);
            puVar11 = (undefined4 *)((int)&DAT_005722b0 + iVar4);
            local_284 = (longlong)ROUND(*(float *)(iVar5 + 0x6c) * _DAT_0052e548);
            *(int *)((int)&DAT_005722bc + iVar4) = (int)local_284;
            *(undefined4 *)((int)&DAT_005722b8 + iVar4) = *(undefined4 *)(iVar5 + 0x68);
            *(undefined4 *)((int)&DAT_005722ac + iVar4) = *(undefined4 *)(iVar5 + 100);
            *(undefined4 *)((int)&DAT_005722a8 + iVar4) = *(undefined4 *)(iVar5 + 0x60);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,puVar11,1,2,local_26c);
            puVar1 = (undefined4 *)((int)&DAT_005722b4 + iVar4);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,puVar1,1,3,local_26c);
            *(undefined4 *)((int)&DAT_00572c04 + iVar4) = *puVar11;
            *(undefined4 *)((int)&DAT_00572c08 + iVar4) = *puVar1;
            *(int *)((int)&DAT_00572c0c + iVar4) =
                 *(int *)((int)&DAT_00572c04 + iVar4) + *(int *)(iVar5 + 0x60);
            uVar9 = *(uint *)((int)&DAT_005722b8 + iVar4);
            if (uVar9 == 0) {
              uVar9 = 1;
            }
            *(uint *)((int)&DAT_00572c10 + iVar4) =
                 *(uint *)(iVar5 + 100) / uVar9 + *(int *)((int)&DAT_00572c08 + iVar4);
            FUN_0046d770(&DAT_00583420,&DAT_00572218 + iVar4,local_294,*(undefined4 *)(iVar5 + 0x68)
                         ,*(undefined4 *)(iVar5 + 0x60),*(undefined4 *)(iVar5 + 100),*puVar11,
                         *puVar1,0);
            FUN_0043f500(&DAT_00583420,&DAT_00572218 + iVar4,
                         *(undefined4 *)((int)&DAT_005722bc + iVar4));
            local_274 = *(int *)((int)&DAT_00572c0c + iVar4);
            local_278 = *(undefined4 *)((int)&DAT_00572c08 + iVar4);
            local_27c = local_274 + -0x1c;
            local_270 = *(undefined4 *)((int)&DAT_00572c10 + iVar4);
            FUN_0043e5c0(&DAT_00583420,&DAT_005721c0 + iVar4,&local_27c);
          }
        }
        uVar9 = 0;
        local_294 = 0;
        Cbin_FindSection((int)&DAT_00572160 + iVar4,local_26c);
        if (local_290 != 0) {
          while ((iVar5 = Cbin_FindParam(s_WEAPON_CLASS_005478cc,local_80,0x7f,0,4,1,local_26c),
                 iVar5 != 0 && (uVar9 < 0x20))) {
            local_28c = -1;
            FUN_0048f670(s_WEAPON_CLASS_005478cc,local_80,&local_28c);
            if ((local_28c != -1) && (piVar10 = &DAT_0055a560, DAT_0055a560 != 0x1c)) {
              puVar11 = (undefined4 *)((int)&DAT_0057233c + uVar9 * 0x48 + iVar4);
              do {
                if (((piVar10[0x41] == local_28c) && (uVar9 < 0x20)) &&
                   (pcVar6 = (char *)Var_GetKeyByIndex(local_290,*piVar10 + 1), uVar9 = local_294,
                   pcVar6 != (char *)0x0)) {
                  _strncpy((char *)(puVar11 + -0x10),pcVar6,0x3f);
                  iVar5 = FUN_004690b0(pcVar6);
                  puVar11[1] = iVar5;
                  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x58) == 0)) {
                    *puVar11 = 1;
                  }
                  else {
                    uVar3 = FUN_00477550(*(undefined4 *)(*(int *)(iVar5 + 0x58) + 0x9c),DAT_00563610
                                        );
                    *puVar11 = uVar3;
                  }
                  uVar9 = local_294;
                  if (puVar11[1] != 0) {
                    uVar9 = local_294 + 1;
                    puVar11 = puVar11 + 0x12;
                    local_294 = uVar9;
                  }
                }
                piVar2 = piVar10 + 0x44;
                piVar10 = piVar10 + 0x44;
              } while (*piVar2 != 0x1c);
            }
          }
        }
        if ((&DAT_00572298)[iVar4] != '\0') {
          *(undefined4 *)((int)&DAT_00572210 + iVar4) = 1;
          FUN_0043f840(&DAT_00583420,&DAT_00572218 + iVar4,0x20000);
        }
        iVar4 = iVar4 + 0xab4;
      } while (iVar4 < 0x55a0);
      uVar3 = FUN_0046e900();
      str_sprintf(local_200,s_SHIP__02d_DATA_0053643c,uVar3);
      local_290 = 1;
      pcVar6 = &DAT_00572298;
      do {
        uVar9 = local_290;
        str_sprintf(local_180,s_MOUNT__d_0053fa18,local_290);
        str_sprintf(&DAT_005a41e0,s_STORE__d_0054786c,uVar9);
        iVar4 = Var_GetInt(g_PlayerVarStore,local_200,local_180,&local_288);
        if (iVar4 != 0) {
          uVar3 = Var_FindSection(local_200,local_180);
          iVar4 = Var_FindKey(uVar3);
          if (((local_288 != 0) && (iVar4 != 0)) && (*(int *)(iVar4 + 8) != 0)) {
            uVar3 = Var_GetKeyByIndex(*(int *)(iVar4 + 8),local_288);
            iVar4 = FUN_004690b0(uVar3);
            local_284 = CONCAT44(local_284._4_4_,iVar4);
            if (((iVar4 == 0) || (iVar5 = *(int *)(iVar4 + 0x58), iVar5 == 0)) ||
               (iVar7 = FUN_00476240(iVar4,pcVar6 + -0x138), iVar7 == 0)) {
              FUN_0046bde0(local_200,local_180,0);
              FUN_0046bde0(local_200,&DAT_005a41e0,0);
            }
            else {
              if (*(uint *)(iVar5 + 0x9c) < 2) {
                pcVar6[0x968] = '\x01';
                pcVar6[0x969] = '\0';
                pcVar6[0x96a] = '\0';
                pcVar6[0x96b] = '\0';
                FUN_0046bde0(local_200,&DAT_005a41e0,0);
              }
              else {
                FUN_0048f670(s_WEAPON_TYPES_0054763c,iVar5,&local_294);
                if (((local_294 == 0) || (iVar7 = FUN_00493120(local_294 - 1), iVar7 == 0)) ||
                   ((*(byte *)(iVar7 + 0xd8) & 4) == 0)) {
                  uVar3 = FUN_0046be00(local_200,&DAT_005a41e0);
                  *(undefined4 *)(pcVar6 + 0x968) = uVar3;
                }
                else {
                  uVar3 = FUN_00477550(*(undefined4 *)(iVar5 + 0x9c),DAT_00563610);
                  *(undefined4 *)(pcVar6 + 0x968) = uVar3;
                }
              }
              if (*(int *)(pcVar6 + 0x968) != 0) {
                if (*pcVar6 != '\0') {
                  FUN_0046d770(&DAT_00583420,pcVar6 + -0x40,iVar5 + 0xb0,1,
                               *(undefined4 *)(iVar5 + 0xc0),*(undefined4 *)(iVar5 + 0xc4),
                               *(undefined4 *)(pcVar6 + 0x18),*(undefined4 *)(pcVar6 + 0x1c),0);
                  uVar3 = FUN_0043fa70(&DAT_00583420,pcVar6 + -0x40);
                  str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar5 + 0xb0);
                  uVar8 = FUN_0043a7a0(&DAT_00583420,&DAT_005a41e0,*(int *)(pcVar6 + 0x18) + -8,
                                       *(undefined4 *)(pcVar6 + 0x1c),*(undefined4 *)(pcVar6 + 0x10)
                                       ,*(undefined4 *)(pcVar6 + 0x14),
                                       *(undefined4 *)(pcVar6 + 0x20),2,2);
                  FUN_00473110(uVar3,uVar8);
                  iVar4 = (int)local_284;
                  uVar9 = local_290;
                }
                FUN_0043f5d0(&DAT_00583420,pcVar6 + -0x80,9);
                *(int *)(pcVar6 + 0x964) = iVar4;
                FUN_0043f840(&DAT_00583420,pcVar6 + -0x40,0x20000);
                if (1 < *(uint *)(iVar5 + 0x9c)) {
                  str_sprintf(pcVar6 + -0x98,&DAT_00535eb8,*(undefined4 *)(pcVar6 + 0x968));
                  FUN_0043e670(&DAT_00583420,pcVar6 + -0xd8,0x10000);
                }
              }
            }
          }
        }
        local_290 = uVar9 + 1;
        pcVar6 = pcVar6 + 0xab4;
      } while (uVar9 < 8);
      FUN_0049adb0(local_26c);
    }
  }
  return;
}

