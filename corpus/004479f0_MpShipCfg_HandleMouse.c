
/* MP deathmatch ship config (WndMPShipDM) mouse: like Loadout_HandleMouse but no credits/ammo;
   drag/drop weapons onto mounts and hardware into slots, remove rows, IACFGDrag cursor */

void MpShipCfg_HandleMouse(LONG param_1,LONG param_2,byte param_3)

{
  char *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  bool bVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *local_20;
  undefined4 *local_1c;
  char *local_18;
  RECT local_10;
  
  local_20 = (undefined4 *)0x0;
  puVar9 = &g_MpCfgWeaponMounts;
  local_1c = (undefined4 *)0x0;
  pcVar10 = s_BtnCFGSell1_00545d60;
  local_18 = (char *)0x0;
  bVar3 = false;
  if (DAT_00562c84 != 0) {
    DAT_00562c84 = DAT_00562c84 + -1;
  }
  bVar2 = false;
  if ((param_3 & 1) == 0) {
    if (DAT_00562c88 != 0) {
      if (DAT_00562c84 == 0) {
        bVar3 = true;
        DAT_00562c84 = 0x10;
      }
      else {
        bVar2 = true;
        DAT_00562c84 = 0;
      }
    }
    DAT_00562c88 = 0;
  }
  else {
    DAT_00562c88 = 1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  cVar4 = s_BtnCFGSell1_00545d60[0];
  if (param_2 < 0) {
    param_2 = 0;
  }
  do {
    if (cVar4 == '\0') {
LAB_00447ac2:
      if (g_CfgMode == 0) {
        iVar6 = 8;
        do {
          local_10.left = puVar9[0x2a9];
          local_10.top = puVar9[0x2aa];
          local_10.right = puVar9[0x2ab];
          local_10.bottom = puVar9[0x2ac];
          if (((DAT_00562c74 != 0) && (*(int *)(DAT_00562c78 + 0xd4) != 0)) &&
             (iVar7 = Mount_Accepts(DAT_00562c70,puVar9), iVar7 != 0)) {
            local_10.left = local_10.left - (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x166c) >> 1);
            local_10.top = local_10.top - (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x1670) >> 1);
            local_10.right =
                 local_10.right + (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x166c) >> 1);
            local_10.bottom =
                 local_10.bottom + (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x1670) >> 1);
          }
          pt_00.y = param_2;
          pt_00.x = param_1;
          BVar5 = PtInRect(&local_10,pt_00);
          if (BVar5 != 0) {
            local_1c = puVar9;
          }
          puVar9 = puVar9 + 0x2ad;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      else if (g_CfgMode == 1) {
        puVar9 = &g_MpCfgHwSlots;
        iVar6 = 0x10;
        do {
          local_10.left = puVar9[0x2a9];
          local_10.top = puVar9[0x2aa];
          local_10.right = puVar9[0x2ab];
          local_10.bottom = puVar9[0x2ac];
          if (((DAT_00562c74 != 0) && (*(int *)(DAT_00562c78 + 0xd4) != 0)) &&
             (iVar7 = Mount_Accepts(DAT_00562c70,puVar9), iVar7 == 0)) {
            local_10.left = local_10.left - (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x166c) >> 1);
            local_10.top = local_10.top - (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x1670) >> 1);
            local_10.right =
                 local_10.right + (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x166c) >> 1);
            local_10.bottom =
                 local_10.bottom + (*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x1670) >> 1);
          }
          pt_01.y = param_2;
          pt_01.x = param_1;
          BVar5 = PtInRect(&local_10,pt_01);
          if (BVar5 != 0) {
            local_20 = puVar9;
          }
          puVar9 = puVar9 + 0x2ad;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (DAT_00562c88 == 0) {
        DAT_00562c80 = (char *)0x0;
      }
      else {
        if ((local_18 != (char *)0x0) && (DAT_00562c80 == (char *)0x0)) {
          DAT_00562c80 = local_18;
        }
        if (((local_1c == (undefined4 *)0x0) || (local_1c[0x2a7] == 0)) || (DAT_00562c74 != 0)) {
          if ((local_20 == (undefined4 *)0x0) || (DAT_00562c74 != 0)) {
            if ((local_18 == (char *)0x0) &&
               (((DAT_00562c80 != (char *)0x0 && (DAT_00562c74 == 0)) &&
                (iVar6 = find_ui_elem_by_id_(&g_UiManager,DAT_00562c80 + 0xc0), iVar6 != 0)))) {
              DAT_00562c70 = *(int *)(DAT_00562c80 + 0x100);
              if (DAT_00562c70 == 0) {
                DAT_00562c74 = 0;
              }
              else {
                MpCfg_SetMode(*(undefined4 *)(DAT_00562c70 + 0x50));
                iVar7 = *(int *)(DAT_00562c70 + 0x58);
                DAT_00562c74 = 1;
                Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_LOADOUT_TAKE_00547688);
                MpCfg_BeginDrag(s_WndMPShipDM_0054767c,*(undefined4 *)(iVar6 + 0xd4));
                DAT_00562c6c = DAT_00562c70;
                DAT_00562c68 = 0;
                MpCfg_SelectItem(DAT_00562c70,0);
                if (iVar7 != 0) {
                  uVar8 = Player_GetVarInt(DAT_00562c70 + 0x20,DAT_00562c70);
                  uVar11 = *(uint *)(iVar7 + 0x9c);
                  if (uVar11 < uVar8) {
                    uVar8 = uVar11;
                  }
                  *(uint *)(DAT_00562c70 + 0x54) = uVar8;
                }
              }
              MpCfg_RefreshInventoryList();
              if (DAT_00562c70 != 0) {
                MpCfg_HighlightMounts(DAT_00562c70);
              }
              MpCfg_ScrollList(0);
            }
          }
          else {
            iVar6 = find_ui_elem_by_id_(&g_UiManager,local_20 + 0x3e);
            if (((iVar6 != 0) && (DAT_00562c70 = MpCfg_TakeHw(local_20), DAT_00562c70 != 0)) &&
               (iVar7 = *(int *)(DAT_00562c70 + 0x58), iVar7 != 0)) {
              Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_LOADOUT_TAKE_00547688);
              MpCfg_BeginDrag(s_WndMPShipDM_0054767c,*(undefined4 *)(iVar6 + 0xd4));
              DAT_00562c74 = 1;
              MpCfg_RefreshHwSlots();
              MpCfg_HighlightMounts(DAT_00562c70);
              *(undefined4 *)(DAT_00562c70 + 0x54) = *(undefined4 *)(iVar7 + 0x9c);
              DAT_00562c6c = DAT_00562c70;
              DAT_00562c68 = 0;
              MpCfg_SelectItem(DAT_00562c70,0);
            }
          }
        }
        else {
          iVar6 = find_ui_elem_by_id_(&g_UiManager,local_1c + 0x3e);
          if (iVar6 != 0) {
            if ((*(int *)(local_1c[0x2a7] + 0x58) == 0) ||
               (uVar11 = *(uint *)(*(int *)(local_1c[0x2a7] + 0x58) + 0x9c), uVar11 < 2)) {
              uVar11 = 0xffffffff;
            }
            DAT_00562c70 = MpCfg_TakeFromMount(local_1c,uVar11);
            if (DAT_00562c70 != 0) {
              Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_LOADOUT_TAKE_00547688);
              MpCfg_SetMode(*(undefined4 *)(DAT_00562c70 + 0x50));
              MpCfg_BeginDrag(s_WndMPShipDM_0054767c,*(undefined4 *)(iVar6 + 0xd4));
              DAT_00562c74 = 1;
              MpCfg_RefreshWeaponMounts();
              MpCfg_HighlightMounts(DAT_00562c70);
              DAT_00562c6c = DAT_00562c70;
              DAT_00562c68 = 0;
              MpCfg_SelectItem(DAT_00562c70,0);
            }
          }
        }
      }
      if ((bVar3) && (DAT_00562c70 != 0)) {
        if (local_18 == (char *)0x0) {
          if (local_1c == (undefined4 *)0x0) {
            if (local_20 == (undefined4 *)0x0) {
              if (DAT_00562c68 != 0) {
                MpCfg_HideStoreUi();
              }
            }
            else {
              iVar6 = Mount_Accepts(DAT_00562c70,local_20);
              if (iVar6 == 0) {
                MpCfg_TakeHw(local_20);
                MpCfg_InstallHw(local_20,DAT_00562c70,*(undefined4 *)(DAT_00562c78 + 0xd4),
                                *(undefined4 *)(DAT_00562c70 + 0x54));
              }
            }
          }
          else {
            iVar6 = Mount_Accepts(DAT_00562c70,local_1c);
            if (iVar6 != 0) {
              iVar6 = local_1c[0x2a7];
              if (((iVar6 != 0) && (*(int *)(iVar6 + 0x58) != 0)) &&
                 ((*(int *)(*(int *)(iVar6 + 0x58) + 0x9c) == 1 || (iVar6 != DAT_00562c70)))) {
                MpCfg_TakeFromMount(local_1c,0xffffffff);
              }
              MpCfg_MountWeapon(local_1c,DAT_00562c70,*(undefined4 *)(DAT_00562c78 + 0xd4),
                                *(undefined4 *)(DAT_00562c70 + 0x54));
            }
          }
        }
        else {
          param_1 = Ui_GetButtonState(&g_UiManager,local_18);
        }
        MpCfg_RefreshHwSlots();
        MpCfg_RefreshWeaponMounts();
        MpCfg_RefreshInventoryList();
        if (local_18 != (char *)0x0) {
          set_button_state(&g_UiManager,local_18,param_1);
        }
        *(undefined4 *)(DAT_00562c70 + 0x54) = 0;
        DAT_00562c70 = 0;
        DAT_00562c74 = 0;
        MpCfg_ResetMountHighlights();
        MpCfg_EndDrag();
      }
      return;
    }
    pt.y = param_2;
    pt.x = param_1;
    BVar5 = PtInRect((RECT *)(pcVar10 + 0x164),pt);
    if ((BVar5 != 0) && (iVar6 = Ui_GetButtonState(&g_UiManager,pcVar10), iVar6 != 8)) {
      local_18 = pcVar10;
      if ((pcVar10 != (char *)0x0) && (bVar2)) {
        iVar6 = find_ui_elem_by_id_(&g_UiManager,pcVar10 + 0xc0);
        if (iVar6 != 0) {
          Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_LOADOUT_TAKE_00547688);
          MpCfg_BeginDrag(s_WndMPShipDM_0054767c,*(undefined4 *)(iVar6 + 0xd4));
          DAT_00562c70 = *(int *)(pcVar10 + 0x100);
          DAT_00562c74 = 1;
          iVar6 = *(int *)(DAT_00562c70 + 0x58);
          if (iVar6 != 0) {
            MpCfg_SetMode(*(undefined4 *)(DAT_00562c70 + 0x50));
            uVar8 = Player_GetVarInt(DAT_00562c70 + 0x20,DAT_00562c70);
            uVar11 = *(uint *)(iVar6 + 0x9c);
            if (uVar11 < uVar8) {
              uVar8 = uVar11;
            }
            *(uint *)(DAT_00562c70 + 0x54) = uVar8;
          }
        }
        if (g_CfgMode != 0) goto LAB_00447caf;
        uVar11 = 0;
        puVar9 = &g_MpCfgWeaponMounts;
        break;
      }
      goto LAB_00447ac2;
    }
    pcVar1 = pcVar10 + 0x174;
    pcVar10 = pcVar10 + 0x174;
    cVar4 = *pcVar1;
  } while( true );
  while( true ) {
    uVar11 = uVar11 + 1;
    puVar9 = puVar9 + 0x2ad;
    if (7 < uVar11) break;
    iVar6 = Mount_Accepts(DAT_00562c70,puVar9);
    if (((iVar6 != 0) && (puVar9[0x2a7] == 0)) &&
       (iVar6 = MpCfg_MountWeapon(puVar9,DAT_00562c70,*(undefined4 *)(DAT_00562c78 + 0xd4),
                                  *(undefined4 *)(DAT_00562c70 + 0x54)), iVar6 != 0)) break;
  }
LAB_00447caf:
  if (g_CfgMode == 1) {
    uVar11 = 0;
    puVar9 = &g_MpCfgHwSlots;
    do {
      iVar6 = Mount_Accepts(DAT_00562c70,puVar9);
      if ((iVar6 == 0) && (puVar9[0x2a7] == 0)) {
        MpCfg_InstallHw(puVar9,DAT_00562c70,*(undefined4 *)(DAT_00562c78 + 0xd4),
                        *(undefined4 *)(DAT_00562c70 + 0x54));
        break;
      }
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 0x2ad;
    } while (uVar11 < 0x10);
  }
  MpCfg_RefreshHwSlots();
  MpCfg_RefreshWeaponMounts();
  MpCfg_RefreshInventoryList();
  *(undefined4 *)(DAT_00562c70 + 0x54) = 0;
  DAT_00562c70 = 0;
  DAT_00562c74 = 0;
  MpCfg_ResetMountHighlights();
  MpCfg_EndDrag();
  return;
}

