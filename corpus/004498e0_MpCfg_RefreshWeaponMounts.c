
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MpCfg_RefreshWeaponMounts(void)

{
  int *piVar1;
  int *piVar2;
  WeaponDef *pWVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  WeaponDef *pWVar12;
  uint local_294;
  uint local_290;
  uint local_28c;
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
  if (g_CfgMode == 0) {
    FUN_004494c0();
    uVar4 = Ship_GetCurrentModel(local_26c);
    iVar5 = Cbin_LoadFile(uVar4);
    if (iVar5 != 0) {
      iVar5 = 0;
      do {
        iVar6 = Cbin_FindSection((int)&g_MpCfgWeaponMounts + iVar5,local_26c);
        if (iVar6 != 0) {
          Cbin_FindParam(s_MOUNT_ICON_005478dc,local_100,0x7f,0,4,1,local_26c);
          iVar6 = FUN_00469a30(local_100);
          if (iVar6 != 0) {
            local_294 = iVar6 + 0x40;
            str_sprintf(&DAT_00593118 + iVar5,local_294);
            piVar1 = (int *)((int)&DAT_00593130 + iVar5);
            local_284 = (longlong)ROUND(*(float *)(iVar6 + 0x6c) * _DAT_0052e548);
            *(int *)((int)&DAT_0059313c + iVar5) = (int)local_284;
            *(undefined4 *)((int)&DAT_00593138 + iVar5) = *(undefined4 *)(iVar6 + 0x68);
            *(undefined4 *)((int)&DAT_0059312c + iVar5) = *(undefined4 *)(iVar6 + 100);
            *(undefined4 *)((int)&DAT_00593128 + iVar5) = *(undefined4 *)(iVar6 + 0x60);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,piVar1,1,2,local_26c);
            piVar2 = (int *)((int)&DAT_00593134 + iVar5);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,piVar2,1,3,local_26c);
            *piVar1 = *piVar1 + -0x14;
            *piVar2 = *piVar2 + 0x19;
            *(int *)((int)&DAT_00593a84 + iVar5) = *piVar1;
            *(int *)((int)&DAT_00593a88 + iVar5) = *piVar2;
            *(int *)((int)&DAT_00593a8c + iVar5) =
                 *(int *)(iVar6 + 0x60) + *(int *)((int)&DAT_00593a84 + iVar5);
            uVar10 = *(uint *)((int)&DAT_00593138 + iVar5);
            if (uVar10 == 0) {
              uVar10 = 1;
            }
            *(uint *)((int)&DAT_00593a90 + iVar5) =
                 *(uint *)(iVar6 + 100) / uVar10 + *(int *)((int)&DAT_00593a88 + iVar5);
            FUN_0046d770(DAT_005879a0,&DAT_00593098 + iVar5,local_294,*(undefined4 *)(iVar6 + 0x68),
                         *(undefined4 *)(iVar6 + 0x60),*(undefined4 *)(iVar6 + 100),*piVar1,*piVar2,
                         0);
            FUN_0043f500(&g_UiManager,&DAT_00593098 + iVar5,
                         *(undefined4 *)((int)&DAT_0059313c + iVar5));
            local_274 = *(int *)((int)&DAT_00593a8c + iVar5);
            local_270 = *(undefined4 *)((int)&DAT_00593a90 + iVar5);
            local_27c = local_274 + -0x10;
            local_278 = *(undefined4 *)((int)&DAT_00593a88 + iVar5);
            FUN_0043e5c0(&g_UiManager,&DAT_00593040 + iVar5,&local_27c);
          }
        }
        uVar10 = 0;
        local_294 = 0;
        Cbin_FindSection((int)&g_MpCfgWeaponMounts + iVar5,local_26c);
        if (local_290 != 0) {
          while ((iVar6 = Cbin_FindParam(s_WEAPON_CLASS_005478cc,local_80,0x7f,0,4,1,local_26c),
                 iVar6 != 0 && (uVar10 < 0x20))) {
            local_28c = 0xffffffff;
            FUN_0048f670(s_WEAPON_CLASS_005478cc,local_80,&local_28c);
            if ((local_28c != 0xffffffff) && (pWVar12 = g_WeaponDefs, g_WeaponDefs[0].id != 0x1c)) {
              puVar11 = (undefined4 *)((int)&DAT_005931bc + uVar10 * 0x48 + iVar5);
              do {
                if (((pWVar12->classBit == local_28c) && (uVar10 < 0x20)) &&
                   (pcVar7 = (char *)Var_GetKeyByIndex(local_290,pWVar12->id + 1),
                   uVar10 = local_294, pcVar7 != (char *)0x0)) {
                  _strncpy((char *)(puVar11 + -0x10),pcVar7,0x3f);
                  iVar6 = FUN_004690b0(pcVar7);
                  puVar11[1] = iVar6;
                  if ((iVar6 == 0) || (*(int *)(iVar6 + 0x58) == 0)) {
                    *puVar11 = 1;
                  }
                  else {
                    *puVar11 = *(undefined4 *)(*(int *)(iVar6 + 0x58) + 0x9c);
                  }
                  uVar10 = local_294;
                  if (puVar11[1] != 0) {
                    uVar10 = local_294 + 1;
                    puVar11 = puVar11 + 0x12;
                    local_294 = uVar10;
                  }
                }
                pWVar3 = pWVar12 + 1;
                pWVar12 = pWVar12 + 1;
              } while (pWVar3->id != 0x1c);
            }
          }
        }
        if ((&DAT_00593118)[iVar5] != '\0') {
          *(undefined4 *)((int)&DAT_00593090 + iVar5) = 1;
          FUN_0043f840(&g_UiManager,&DAT_00593098 + iVar5,0x20000);
        }
        iVar5 = iVar5 + 0xab4;
      } while (iVar5 < 0x55a0);
      uVar4 = Player_GetCurrentShip();
      str_sprintf(local_200,s_SHIP__02d_DATA_0053643c,uVar4);
      local_290 = 1;
      pcVar7 = &DAT_00593118;
      do {
        uVar10 = local_290;
        str_sprintf(local_180,s_MOUNT__d_0053fa18,local_290);
        str_sprintf(&DAT_005a41e0,s_STORE__d_0054786c,uVar10);
        iVar5 = Var_GetInt(g_PlayerVarStore,local_200,local_180,&local_288);
        if (iVar5 != 0) {
          uVar4 = Var_FindSection(local_200,local_180);
          iVar5 = Var_FindKey(uVar4);
          if (((local_288 != 0) && (iVar5 != 0)) && (*(int *)(iVar5 + 8) != 0)) {
            uVar4 = Var_GetKeyByIndex(*(int *)(iVar5 + 8),local_288);
            iVar5 = FUN_004690b0(uVar4);
            local_284 = CONCAT44(local_284._4_4_,iVar5);
            if (((iVar5 == 0) || (iVar6 = *(int *)(iVar5 + 0x58), iVar6 == 0)) ||
               (iVar8 = Mount_Accepts(iVar5,pcVar7 + -0x138), iVar8 == 0)) {
              Player_SetVarInt(local_200,local_180,0);
              Player_SetVarInt(local_200,&DAT_005a41e0,0);
            }
            else {
              if (*(uint *)(iVar6 + 0x9c) < 2) {
                pcVar7[0x968] = '\x01';
                pcVar7[0x969] = '\0';
                pcVar7[0x96a] = '\0';
                pcVar7[0x96b] = '\0';
                Player_SetVarInt(local_200,&DAT_005a41e0,0);
              }
              else {
                FUN_0048f670(s_WEAPON_TYPES_0054763c,iVar6,&local_294);
                if (((local_294 == 0) || (iVar8 = WeaponDef_Get(local_294 - 1), iVar8 == 0)) ||
                   ((*(byte *)(iVar8 + 0xd8) & 4) == 0)) {
                  uVar4 = Player_GetVarInt(local_200,&DAT_005a41e0);
                  *(undefined4 *)(pcVar7 + 0x968) = uVar4;
                }
                else {
                  *(undefined4 *)(pcVar7 + 0x968) = *(undefined4 *)(iVar6 + 0x9c);
                }
              }
              if (*(int *)(pcVar7 + 0x968) != 0) {
                if (*pcVar7 != '\0') {
                  FUN_0046d770(DAT_005879a0,pcVar7 + -0x40,iVar6 + 0xb0,1,
                               *(undefined4 *)(iVar6 + 0xc0),*(undefined4 *)(iVar6 + 0xc4),
                               *(undefined4 *)(pcVar7 + 0x18),*(undefined4 *)(pcVar7 + 0x1c),0);
                  uVar4 = find_ui_elem_by_id_(&g_UiManager,pcVar7 + -0x40);
                  str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar6 + 0xb0);
                  uVar9 = FUN_0043a7a0(&g_UiManager,&DAT_005a41e0,*(undefined4 *)(pcVar7 + 0x18),
                                       *(undefined4 *)(pcVar7 + 0x1c),*(undefined4 *)(pcVar7 + 0x10)
                                       ,*(undefined4 *)(pcVar7 + 0x14),
                                       *(undefined4 *)(pcVar7 + 0x20),2,2);
                  MpCfg_SetMountIcon(uVar4,uVar9);
                  iVar5 = (int)local_284;
                  uVar10 = local_290;
                }
                FUN_0043f5d0(&g_UiManager,pcVar7 + -0x80,9);
                *(int *)(pcVar7 + 0x964) = iVar5;
                FUN_0043f840(&g_UiManager,pcVar7 + -0x40,0x20000);
                if (1 < *(uint *)(iVar6 + 0x9c)) {
                  str_sprintf(pcVar7 + -0x98,&DAT_00535eb8,*(undefined4 *)(pcVar7 + 0x968));
                  clr_label_flags_11c(&g_UiManager,pcVar7 + -0xd8,0x10000);
                }
              }
            }
          }
        }
        local_290 = uVar10 + 1;
        pcVar7 = pcVar7 + 0xab4;
      } while (uVar10 < 8);
      FUN_0049adb0(local_26c);
    }
  }
  return;
}

