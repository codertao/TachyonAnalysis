
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MpCfg_RefreshHwSlots(void)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  char *pcVar11;
  int *piVar12;
  bool bVar13;
  uint local_200;
  undefined4 local_1f8;
  int local_1f0;
  undefined1 local_1ec [108];
  char local_180 [128];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  if (g_CfgMode == 1) {
    MpCfg_RefreshMountSlot();
    uVar3 = Ship_GetCurrentModel(local_1ec);
    iVar4 = Cbin_LoadFile(uVar3);
    if (iVar4 != 0) {
      local_200 = 1;
      puVar10 = &DAT_005985e0;
      do {
        str_sprintf(puVar10 + -0x40,s_CARD_MOUNT__d_00545cbc,local_200);
        str_sprintf(puVar10 + -0x20,s_SLOT__d_00536454,local_200);
        str_sprintf(puVar10,s_SLOT__d_STATE_00536420,local_200);
        iVar4 = Cbin_FindSection(puVar10 + -0x40,local_1ec);
        if (iVar4 != 0) {
          Cbin_FindParam(s_MOUNT_ICON_005478dc,local_180,0x7f,0,4,1,local_1ec);
          iVar4 = Starbase_FindMaterial(local_180);
          if (iVar4 != 0) {
            str_sprintf(puVar10 + 0xf8,iVar4 + 0x40);
            piVar12 = (int *)(puVar10 + 0x110);
            local_1f8 = (undefined4)(longlong)ROUND(*(float *)(iVar4 + 0x6c) * _DAT_0052e548);
            *(undefined4 *)(puVar10 + 0x11c) = local_1f8;
            *(undefined4 *)(puVar10 + 0x118) = *(undefined4 *)(iVar4 + 0x68);
            *(undefined4 *)(puVar10 + 0x10c) = *(undefined4 *)(iVar4 + 100);
            *(undefined4 *)(puVar10 + 0x108) = *(undefined4 *)(iVar4 + 0x60);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,piVar12,1,2,local_1ec);
            piVar2 = (int *)(puVar10 + 0x114);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,piVar2,1,3,local_1ec);
            *piVar12 = *piVar12 + -0x14;
            *piVar2 = *piVar2 + 0x19;
            *(int *)(puVar10 + 0xa64) = *piVar12;
            *(int *)(puVar10 + 0xa68) = *piVar2;
            *(int *)(puVar10 + 0xa6c) = *(int *)(puVar10 + 0xa64) + *(int *)(iVar4 + 0x60);
            uVar9 = *(uint *)(puVar10 + 0x118);
            if (uVar9 == 0) {
              uVar9 = 1;
            }
            *(uint *)(puVar10 + 0xa70) = *(uint *)(iVar4 + 100) / uVar9 + *(int *)(puVar10 + 0xa68);
            Ui_SetImageAreaFromFile
                      (DAT_005879a0,puVar10 + 0x78,iVar4 + 0x40,*(undefined4 *)(iVar4 + 0x68),
                       *(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),*piVar12,*piVar2,0
                      );
            ImageArea_SetValueE4(&g_UiManager,puVar10 + 0x78,*(undefined4 *)(puVar10 + 0x11c));
          }
        }
        Cbin_FindSection(puVar10 + -0x40,local_1ec);
        uVar9 = 0;
        iVar4 = Cbin_FindParam(s_NOMOUNT_ITEM_005478e8,local_180,0x7f,0,4,1,local_1ec);
        if (iVar4 != 0) {
          piVar12 = (int *)(puVar10 + 0x1a0);
          do {
            if (0x1f < uVar9) break;
            _strncpy((char *)(piVar12 + -0x11),local_180,0x3f);
            iVar4 = Item_FindByName(local_180);
            *piVar12 = iVar4;
            if (iVar4 != 0) {
              uVar9 = uVar9 + 1;
              piVar12 = piVar12 + 0x12;
            }
            iVar4 = Cbin_FindParam(s_NOMOUNT_ITEM_005478e8,local_180,0x7f,0,4,1,local_1ec);
          } while (iVar4 != 0);
        }
        if (puVar10[0xf8] != '\0') {
          *(undefined4 *)(puVar10 + 0x70) = 1;
          ImageArea_ClearFlags(&g_UiManager,puVar10 + 0x78,0x20000);
        }
        puVar10 = puVar10 + 0xab4;
        bVar13 = local_200 < 0x10;
        local_200 = local_200 + 1;
      } while (bVar13);
      uVar3 = Player_GetCurrentShip();
      str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar3);
      iVar4 = 0;
      pcVar11 = &DAT_005986d8;
      do {
        pcVar1 = pcVar11 + -0x40;
        set_flag_10c_on_elem_by_id(&g_UiManager,pcVar1,0x20000);
        iVar4 = iVar4 + 1;
        str_sprintf(local_100,s_SLOT__d_00536454,iVar4);
        iVar5 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_1f0);
        if (iVar5 != 0) {
          uVar3 = Var_FindSection(local_80,local_100);
          iVar5 = Var_FindKey(uVar3);
          if (((local_1f0 != 0) && (iVar5 != 0)) && (*(int *)(iVar5 + 8) != 0)) {
            uVar3 = Var_GetKeyByIndex(*(int *)(iVar5 + 8),local_1f0);
            iVar6 = Item_FindByName(uVar3);
            iVar5 = 0;
            if (iVar6 != 0) {
              iVar5 = *(int *)(iVar6 + 0x58);
            }
            iVar7 = Mount_Accepts(iVar6,pcVar11 + -0x138);
            if (iVar7 == 0) {
              if ((iVar5 != 0) && (*pcVar11 != '\0')) {
                Ui_SetImageAreaFromFile
                          (DAT_005879a0,pcVar1,iVar5 + 0xb0,1,*(undefined4 *)(iVar5 + 0xc0),
                           *(undefined4 *)(iVar5 + 0xc4),*(undefined4 *)(pcVar11 + 0x18),
                           *(undefined4 *)(pcVar11 + 0x1c),0);
                uVar3 = find_ui_elem_by_id_(&g_UiManager,pcVar1);
                str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar5 + 0xb0);
                uVar8 = MnuImage_Find(&g_UiManager,&DAT_005a41e0,*(undefined4 *)(pcVar11 + 0x18),
                                      *(undefined4 *)(pcVar11 + 0x1c),
                                      *(undefined4 *)(pcVar11 + 0x10),
                                      *(undefined4 *)(pcVar11 + 0x14),
                                      *(undefined4 *)(pcVar11 + 0x20),2,2);
                MpCfg_SetMountIcon(uVar3,uVar8);
                ImageArea_SetFrame(&g_UiManager,pcVar11 + -0x80,9);
                *(int *)(pcVar11 + 0x964) = iVar6;
                ImageArea_ClearFlags(&g_UiManager,pcVar1,0x20000);
                *(undefined4 *)(pcVar11 + 0x968) = *(undefined4 *)(iVar5 + 0x9c);
              }
            }
            else {
              Var_SetInt(g_PlayerVarStore,local_80,local_100,0);
            }
          }
        }
        pcVar11 = pcVar11 + 0xab4;
      } while ((int)pcVar11 < 0x5a3218);
      Cbin_Free(local_1ec);
    }
  }
  return;
}

