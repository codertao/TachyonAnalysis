
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SLOT n / SLOT n STATE vars -> slot icons, NOMOUNT_ITEM */

void Loadout_RefreshHwSlots(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined *puVar11;
  char *pcVar12;
  int *piVar13;
  bool bVar14;
  uint local_200;
  undefined4 local_1f8;
  int local_1f0;
  undefined1 local_1ec [108];
  char local_180 [128];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  if (g_CfgMode == 1) {
    Loadout_RefreshMountSlot();
    uVar4 = Ship_GetCurrentModel(local_1ec);
    iVar5 = Cbin_LoadFile(uVar4);
    if (iVar5 != 0) {
      local_200 = 1;
      puVar11 = &DAT_00577fc0;
      do {
        str_sprintf(puVar11 + -0x40,s_CARD_MOUNT__d_00545cbc,local_200);
        str_sprintf(puVar11 + -0x20,s_SLOT__d_00536454,local_200);
        str_sprintf(puVar11,s_SLOT__d_STATE_00536420,local_200);
        iVar5 = Cbin_FindSection(puVar11 + -0x40,local_1ec);
        if (iVar5 != 0) {
          Cbin_FindParam(s_MOUNT_ICON_005478dc,local_180,0x7f,0,4,1,local_1ec);
          iVar5 = Starbase_FindMaterial(local_180);
          if (iVar5 != 0) {
            str_sprintf(puVar11 + 0xf8,iVar5 + 0x40);
            puVar2 = (undefined4 *)(puVar11 + 0x110);
            local_1f8 = (undefined4)(longlong)ROUND(*(float *)(iVar5 + 0x6c) * _DAT_0052e548);
            *(undefined4 *)(puVar11 + 0x11c) = local_1f8;
            *(undefined4 *)(puVar11 + 0x118) = *(undefined4 *)(iVar5 + 0x68);
            *(undefined4 *)(puVar11 + 0x10c) = *(undefined4 *)(iVar5 + 100);
            *(undefined4 *)(puVar11 + 0x108) = *(undefined4 *)(iVar5 + 0x60);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,puVar2,1,2,local_1ec);
            puVar3 = (undefined4 *)(puVar11 + 0x114);
            Cbin_GetParamN_Ctx(s_MOUNT_ICON_005478dc,0,0,puVar3,1,3,local_1ec);
            *(undefined4 *)(puVar11 + 0xa64) = *puVar2;
            *(undefined4 *)(puVar11 + 0xa68) = *puVar3;
            *(int *)(puVar11 + 0xa6c) = *(int *)(puVar11 + 0xa64) + *(int *)(iVar5 + 0x60);
            uVar10 = *(uint *)(puVar11 + 0x118);
            if (uVar10 == 0) {
              uVar10 = 1;
            }
            *(uint *)(puVar11 + 0xa70) = *(uint *)(iVar5 + 100) / uVar10 + *(int *)(puVar11 + 0xa68)
            ;
            Ui_SetImageAreaFromFile
                      (&GLBL_UI_ELEM_LIST,puVar11 + 0x78,iVar5 + 0x40,*(undefined4 *)(iVar5 + 0x68),
                       *(undefined4 *)(iVar5 + 0x60),*(undefined4 *)(iVar5 + 100),*puVar2,*puVar3,0)
            ;
            ImageArea_SetValueE4(&GLBL_UI_ELEM_LIST,puVar11 + 0x78,*(undefined4 *)(puVar11 + 0x11c))
            ;
          }
        }
        Cbin_FindSection(puVar11 + -0x40,local_1ec);
        uVar10 = 0;
        iVar5 = Cbin_FindParam(s_NOMOUNT_ITEM_005478e8,local_180,0x7f,0,4,1,local_1ec);
        if (iVar5 != 0) {
          piVar13 = (int *)(puVar11 + 0x1a0);
          do {
            if (0x1f < uVar10) break;
            _strncpy((char *)(piVar13 + -0x11),local_180,0x3f);
            iVar5 = Item_FindByName(local_180);
            *piVar13 = iVar5;
            if (iVar5 != 0) {
              uVar10 = uVar10 + 1;
              piVar13 = piVar13 + 0x12;
            }
            iVar5 = Cbin_FindParam(s_NOMOUNT_ITEM_005478e8,local_180,0x7f,0,4,1,local_1ec);
          } while (iVar5 != 0);
        }
        if (puVar11[0xf8] != '\0') {
          *(undefined4 *)(puVar11 + 0x70) = 1;
          ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,puVar11 + 0x78,0x20000);
        }
        puVar11 = puVar11 + 0xab4;
        bVar14 = local_200 < 0x10;
        local_200 = local_200 + 1;
      } while (bVar14);
      uVar4 = Player_GetCurrentShip();
      str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar4);
      iVar5 = 0;
      pcVar12 = &DAT_005780b8;
      do {
        pcVar1 = pcVar12 + -0x40;
        set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar1,0x20000);
        iVar5 = iVar5 + 1;
        str_sprintf(local_100,s_SLOT__d_00536454,iVar5);
        iVar6 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_1f0);
        if (iVar6 != 0) {
          uVar4 = Var_FindSection(local_80,local_100);
          iVar6 = Var_FindKey(uVar4);
          if (((local_1f0 != 0) && (iVar6 != 0)) && (*(int *)(iVar6 + 8) != 0)) {
            uVar4 = Var_GetKeyByIndex(*(int *)(iVar6 + 8),local_1f0);
            iVar7 = Item_FindByName(uVar4);
            iVar6 = 0;
            if (iVar7 != 0) {
              iVar6 = *(int *)(iVar7 + 0x58);
            }
            iVar8 = Loadout_MountCheck(iVar7,pcVar12 + -0x138);
            if (iVar8 == 0) {
              if ((iVar6 != 0) && (*pcVar12 != '\0')) {
                Ui_SetImageAreaFromFile
                          (&GLBL_UI_ELEM_LIST,pcVar1,iVar6 + 0xb0,1,*(undefined4 *)(iVar6 + 0xc0),
                           *(undefined4 *)(iVar6 + 0xc4),*(undefined4 *)(pcVar12 + 0x18),
                           *(undefined4 *)(pcVar12 + 0x1c),0);
                uVar4 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,pcVar1);
                str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar6 + 0xb0);
                uVar9 = MnuImage_Find(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,
                                      *(undefined4 *)(pcVar12 + 0x18),
                                      *(undefined4 *)(pcVar12 + 0x1c),
                                      *(undefined4 *)(pcVar12 + 0x10),
                                      *(undefined4 *)(pcVar12 + 0x14),
                                      *(undefined4 *)(pcVar12 + 0x20),2,2);
                Loadout_SetMountIcon(uVar4,uVar9);
                ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,pcVar12 + -0x80,9);
                *(int *)(pcVar12 + 0x964) = iVar7;
                ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,pcVar1,0x20000);
                *(undefined4 *)(pcVar12 + 0x968) = *(undefined4 *)(iVar6 + 0x9c);
              }
            }
            else {
              Var_SetInt(g_PlayerVarStore,local_80,local_100,0);
            }
          }
        }
        pcVar12 = pcVar12 + 0xab4;
      } while ((int)pcVar12 < 0x582bf8);
      Cbin_Free(local_1ec);
    }
  }
  return;
}

