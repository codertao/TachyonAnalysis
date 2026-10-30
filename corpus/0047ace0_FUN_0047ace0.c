
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ace0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte local_ad;
  int local_ac;
  byte local_a5;
  longlong local_a4;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  FUN_0047a930();
  puVar9 = &DAT_005712a0;
  for (iVar7 = 0x28; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = &DAT_00571c00;
  for (iVar7 = 0x28; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = &DAT_00571740;
  for (iVar7 = 0x28; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  str_sprintf(&DAT_00571300,s_MAP_RING1_005526d4);
  str_sprintf(&DAT_00571c60,s_MAP_RING2_005526c8);
  str_sprintf(&DAT_005717a0,s_MAP_RING3_005526bc);
  iVar7 = Cbin_Open_Inner(s_map_cfg_005526b4);
  if (iVar7 != 0) {
    local_8c = 0;
    local_90 = 0;
    local_88 = 0x280;
    local_84 = 0x1e0;
    Cbin_GetParam(s_MAP_MAIN_0055269c,s_MAP_GRID_005526a8,0,0,&local_90,1,1);
    Cbin_GetParam(s_MAP_MAIN_0055269c,s_MAP_GRID_005526a8,0,0,&local_8c,1,2);
    Cbin_GetParam(s_MAP_MAIN_0055269c,s_MAP_GRID_005526a8,0,0,&local_88,1,3);
    Cbin_GetParam(s_MAP_MAIN_0055269c,s_MAP_GRID_005526a8,0,0,&local_84,1,4);
    FUN_0047bf00(&local_90);
    local_a4 = CONCAT44(local_a4._4_4_,DAT_00571fd8 - DAT_00571fd0);
    FUN_0047bf50((float)(DAT_00571fd8 - DAT_00571fd0) * _DAT_0052e594,
                 (float)(DAT_00571fdc - DAT_00571fd4) * _DAT_0052e594);
    DAT_00563670 = Cbin_CountEntries(s_MAP_COLORS_00552690,s_COLOR_0053681c);
    DAT_00563660 = Cbin_CountEntries(s_MAP_IMAGES_00552684,s_IMAGE_005355d4);
    DAT_00563668 = Cbin_CountEntries(s_ICON_IMAGES_00552678,s_IMAGE_005355d4);
    DAT_00563658 = Cbin_CountEntries(s_MAP_CONNECTIONS_00552668,s_CONNECT_0054a20c);
    if ((((DAT_00563670 != 0) && (iVar7 = Cbin_SelectGroup(s_MAP_COLORS_00552690), iVar7 != 0)) &&
        (FUN_0048e3d0(&DAT_00563674,DAT_00563670 * 0x2c,4,s_Map_Color_0055265c,0xa105),
        iVar7 = DAT_00563674, DAT_00563674 != 0)) &&
       (iVar2 = FUN_0049bdb0(s_COLOR_0053681c,DAT_00563674,0x1f,0,4,1), iVar2 != 0)) {
      iVar2 = iVar7 + 0x24;
      do {
        FUN_0049b930(s_COLOR_0053681c,0,0,iVar2 + -4,1,2);
        FUN_0049b930(s_COLOR_0053681c,0,0,iVar2,1,3);
        FUN_0049b930(s_COLOR_0053681c,0,0,iVar2 + 4,1,4);
        iVar7 = iVar7 + 0x2c;
        iVar2 = iVar2 + 0x2c;
        iVar3 = FUN_0049bdb0(s_COLOR_0053681c,iVar7,0x1f,0,4,1);
      } while (iVar3 != 0);
    }
    if (((DAT_00563660 != 0) && (iVar7 = Cbin_SelectGroup(s_MAP_IMAGES_00552684), iVar7 != 0)) &&
       ((FUN_0048e3d0(&DAT_00563664,DAT_00563660 * 0xd0,4,s_Map_Image_00552650,0xa105),
        iVar7 = DAT_00563664, DAT_00563664 != 0 &&
        (iVar2 = FUN_0049bdb0(s_IMAGE_005355d4,DAT_00563664,0x1f,0,4,1), iVar2 != 0)))) {
      iVar2 = iVar7 + 0x40;
      do {
        FUN_0049b930(s_IMAGE_005355d4,iVar2 + -0x20,0x1f,0,4,2);
        FUN_0049b930(s_IMAGE_005355d4,0,0,iVar2,1,3);
        FUN_0049b930(s_IMAGE_005355d4,0,0,iVar2 + 4,1,4);
        FUN_0049b930(s_IMAGE_005355d4,0,0,iVar2 + 8,1,5);
        FUN_0049b930(s_IMAGE_005355d4,0,0,(uint *)(iVar2 + 0xc),1,6);
        FUN_0049b930(s_IMAGE_005355d4,0,0,iVar2 + 0x1c,2,7);
        puVar8 = (uint *)(iVar2 + 0x10);
        FUN_0049b930(s_IMAGE_005355d4,0,0,puVar8,1,8);
        FUN_0049b930(s_IMAGE_005355d4,0,0,iVar2 + 0x20,2,9);
        if (3 < *puVar8) {
          *puVar8 = 4;
        }
        uVar4 = *(uint *)(iVar2 + 0xc);
        if (*puVar8 != 0) {
          uVar4 = uVar4 / *puVar8;
        }
        iVar7 = iVar7 + 0xd0;
        *(uint *)(iVar2 + 0x14) = uVar4;
        iVar2 = iVar2 + 0xd0;
        iVar3 = FUN_0049bdb0(s_IMAGE_005355d4,iVar7,0x1f,0,4,1);
      } while (iVar3 != 0);
    }
    if (((DAT_00563668 != 0) && (iVar7 = Cbin_SelectGroup(s_ICON_IMAGES_00552678), iVar7 != 0)) &&
       ((FUN_0048e3d0(&DAT_0056366c,DAT_00563668 * 0xd0,4,s_Icon_Image_00552644,0xa105),
        iVar7 = DAT_0056366c, DAT_0056366c != 0 &&
        (iVar2 = FUN_0049bdb0(s_IMAGE_005355d4,DAT_0056366c,0x1f,0,4,1), iVar2 != 0)))) {
      puVar8 = (uint *)(iVar7 + 0x50);
      do {
        FUN_0049b930(s_IMAGE_005355d4,puVar8 + -0xc,0x1f,0,4,2);
        FUN_0049b930(s_IMAGE_005355d4,0,0,puVar8 + -2,1,3);
        puVar1 = puVar8 + -1;
        FUN_0049b930(s_IMAGE_005355d4,0,0,puVar1,1,4);
        FUN_0049b930(s_IMAGE_005355d4,0,0,puVar8 + 3,2,5);
        FUN_0049b930(s_IMAGE_005355d4,0,0,puVar8,1,6);
        if (3 < *puVar8) {
          *puVar8 = 4;
        }
        if (*puVar8 == 0) {
          puVar8[1] = *puVar1;
        }
        else {
          puVar8[1] = *puVar1 / *puVar8;
        }
        iVar7 = iVar7 + 0xd0;
        puVar8 = puVar8 + 0x34;
        iVar2 = FUN_0049bdb0(s_IMAGE_005355d4,iVar7,0x1f,0,4,1);
      } while (iVar2 != 0);
    }
    iVar7 = Var_GetTable(s_REGION_NAMES_00534294);
    if (iVar7 != 0) {
      iVar2 = *(int *)(iVar7 + 0x20);
      for (puVar9 = *(undefined4 **)(iVar7 + 0x24); (iVar2 != 0 && (puVar9 != (undefined4 *)0x0));
          puVar9 = puVar9 + 2) {
        str_sprintf(&DAT_005a41e0,s_MAP_DATA__s_00552638,*puVar9);
        iVar7 = Cbin_SelectGroup(&DAT_005a41e0);
        if (iVar7 != 0) {
          iVar7 = FUN_0049bdb0(s_QUADRANT_0055262c,local_80,0x1f,0,4,1);
          while (iVar7 != 0) {
            FUN_0048e3d0(&local_ac,0xa0,4,s_Map_Data_00552620,0xa105);
            if (local_ac != 0) {
              *(int *)(local_ac + 0x9c) = DAT_0056367c;
              DAT_0056367c = local_ac;
              str_sprintf(local_ac,local_80);
              str_sprintf(local_ac + 0x40,s__s_REGION_00534288,*puVar9);
              FUN_0049b930(s_QUADRANT_0055262c,local_ac + 0x20,0x1f,0,4,2);
              FUN_0049b930(s_QUADRANT_0055262c,local_ac + 0x60,0x1f,0,4,3);
              FUN_0049b930(s_QUADRANT_0055262c,0,0,local_ac + 0x80,1,4);
              FUN_0049b930(s_QUADRANT_0055262c,0,0,local_ac + 0x84,1,5);
              *(undefined4 *)(local_ac + 0x8c) = puVar9[1];
              uVar5 = FUN_0046f320(*puVar9,local_ac);
              *(undefined4 *)(local_ac + 0x88) = uVar5;
              if (DAT_005a6760 == 0) {
                uVar4 = 0x61;
                do {
                  str_sprintf(&DAT_005a41e0,local_ac + 0x20,(int)(char)uVar4);
                  Var_GetInt(g_GameVarStore,local_ac + 0x40,&DAT_005a41e0,local_ac + 0x98);
                  if (*(int *)(local_ac + 0x98) != 0) break;
                  uVar4 = uVar4 + 1;
                } while (uVar4 < 0x7a);
              }
              else {
                *(undefined4 *)(local_ac + 0x98) = 1;
              }
            }
            iVar7 = FUN_0049bdb0(s_QUADRANT_0055262c,local_80,0x1f,0,4,1);
          }
        }
        iVar2 = iVar2 + -1;
      }
    }
    if ((((DAT_00563658 != 0) && (iVar7 = Cbin_SelectGroup(s_MAP_CONNECTIONS_00552668), iVar7 != 0))
        && (FUN_0048e3d0(&DAT_0056365c,DAT_00563658 * 0x8c,4,s_Map_Connection_00552610,0xa105),
           iVar7 = DAT_0056365c, DAT_0056365c != 0)) &&
       (iVar2 = FUN_0049bdb0(s_CONNECT_0054a20c,DAT_0056365c,0x1f,0,4,1), iVar2 != 0)) {
      iVar2 = iVar7 + 0x40;
      do {
        FUN_0049b930(s_CONNECT_0054a20c,iVar2 + -0x20,0x1f,0,4,2);
        FUN_0049b930(s_CONNECT_0054a20c,iVar2,0x1f,0,4,3);
        FUN_0049b930(s_CONNECT_0054a20c,iVar2 + 0x20,0x1f,0,4,4);
        FUN_0049b930(s_CONNECT_0054a20c,&DAT_005a41e0,0x1f,0,4,5);
        iVar3 = FUN_0047a7f0(&DAT_005a41e0);
        if (iVar3 == 0) {
          uVar5 = 0xff;
          *(undefined4 *)(iVar2 + 0x40) = 0xff;
          *(undefined4 *)(iVar2 + 0x44) = 0xff;
        }
        else {
          *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar3 + 0x20);
          *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar3 + 0x24);
          uVar5 = *(undefined4 *)(iVar3 + 0x28);
        }
        *(undefined4 *)(iVar2 + 0x48) = uVar5;
        str_sprintf(&DAT_005a41e0,s__s_REGION_00534288,iVar7);
        iVar3 = FUN_0047a8b0(&DAT_005a41e0,iVar2 + -0x20);
        str_sprintf(&DAT_005a41e0,s__s_REGION_00534288,iVar2);
        iVar6 = FUN_0047a8b0(&DAT_005a41e0,iVar2 + 0x20);
        if ((iVar3 != 0) && (iVar6 != 0)) {
          if ((*(int *)(iVar3 + 0x98) != 0) && (*(int *)(iVar6 + 0x98) != 0)) {
            FUN_0046e9a0(*(undefined4 *)(iVar3 + 0x80),*(undefined4 *)(iVar3 + 0x84),
                         *(undefined4 *)(iVar6 + 0x80),*(undefined4 *)(iVar6 + 0x84),7,0xffffffff,
                         *(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44),
                         *(undefined4 *)(iVar2 + 0x48),1,1,0xf,0,0x19);
          }
          FUN_0047a740(iVar3,iVar6);
          FUN_0047a740(iVar6,iVar3);
        }
        iVar7 = iVar7 + 0x8c;
        iVar2 = iVar2 + 0x8c;
        iVar3 = FUN_0049bdb0(s_CONNECT_0054a20c,iVar7,0x1f,0,4,1);
      } while (iVar3 != 0);
    }
    Cbin_Close();
  }
  local_94 = DAT_00563664;
  if (DAT_00563660 != 0) {
    iVar2 = DAT_00563664 + 0x20;
    iVar7 = DAT_00563660;
    do {
      if (iVar2 == 0x20) break;
      local_9c = iVar7;
      local_98 = FUN_004a2eb0(iVar2);
      uVar5 = FUN_004ad650(iVar2);
      *(undefined4 *)(iVar2 + 0xac) = uVar5;
      FUN_004ad900(uVar5,0x80,0x80,0x80,0x80,0x80);
      FUN_00439810(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x34),&local_a5,&local_ad);
      uVar4 = 0;
      if (*(int *)(iVar2 + 0x30) != 0) {
        pbVar10 = (byte *)(iVar2 + 0x54);
        do {
          *pbVar10 = local_a5;
          pbVar10[1] = local_ad;
          *(int *)(iVar2 + 0x48) = (1 << (local_ad & 0x1f)) * (1 << (*pbVar10 & 0x1f));
          pbVar10[4] = 8;
          pbVar10[5] = 0;
          pbVar10[6] = 0;
          pbVar10[7] = 0x32;
          pbVar10[-0xffffffff00000004] = 0xff;
          pbVar10[-0xffffffff00000003] = 0;
          pbVar10[-0xffffffff00000002] = 0;
          pbVar10[-0xffffffff00000001] = 0;
          FUN_0048e3d0(pbVar10 + -8,*(undefined4 *)(iVar2 + 0x48),4,s_Map_Image_Data_00552600,0xa105
                      );
          FUN_0043a680(*(int *)(iVar2 + 0x34) * *(int *)(iVar2 + 0x28) * uVar4 + local_98,
                       DAT_00603110,_DAT_00603100);
          FUN_0043a6a0(*(undefined4 *)(pbVar10 + -8),8,1 << (*pbVar10 & 0x1f));
          FUN_0043a6c0(0,0,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x34),0,0);
          local_a4._0_4_ =
               (int)(longlong)
                    ROUND((float)(*(int *)(iVar2 + 0x28) >> 1) * *(float *)(iVar2 + 0x3c) *
                          *(float *)(iVar2 + 0x40));
          iVar7 = (int)local_a4;
          local_a4 = (longlong)
                     ROUND((float)(*(int *)(iVar2 + 0x34) >> 1) * *(float *)(iVar2 + 0x3c) *
                           *(float *)(iVar2 + 0x40));
          FUN_0047ab20(local_94,*(int *)(iVar2 + 0x20) - iVar7,
                       *(int *)(iVar2 + 0x24) - (int)local_a4,*(int *)(iVar2 + 0x20) + iVar7,
                       (int)local_a4 + *(int *)(iVar2 + 0x24),0,local_94);
          uVar4 = uVar4 + 1;
          pbVar10 = pbVar10 + 0x18;
          iVar7 = local_9c;
        } while (uVar4 < *(uint *)(iVar2 + 0x30));
      }
      FUN_0049c530(local_98);
      iVar7 = iVar7 + -1;
      local_94 = local_94 + 0xd0;
      iVar2 = iVar2 + 0xd0;
    } while (iVar7 != 0);
  }
  local_ac = DAT_0056367c;
  local_9c = DAT_00563668;
  if (DAT_00563668 != 0) {
    iVar2 = DAT_0056366c + 0x20;
    iVar7 = DAT_00563668;
    do {
      local_ac = DAT_0056367c;
      local_9c = iVar7;
      if (iVar2 == 0x20) break;
      local_98 = FUN_004a2eb0(iVar2);
      uVar5 = FUN_004ad650(iVar2);
      *(undefined4 *)(iVar2 + 0xac) = uVar5;
      FUN_004ad900(uVar5,0x80,0x80,0x80,0x80,0x80);
      FUN_00439810(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x34),&local_a5,&local_ad);
      uVar4 = 0;
      if (*(int *)(iVar2 + 0x30) != 0) {
        pbVar10 = (byte *)(iVar2 + 0x54);
        do {
          *pbVar10 = local_a5;
          pbVar10[1] = local_ad;
          *(int *)(iVar2 + 0x48) = (1 << (*pbVar10 & 0x1f)) * (1 << (local_ad & 0x1f));
          pbVar10[4] = 8;
          pbVar10[5] = 0;
          pbVar10[6] = 0;
          pbVar10[7] = 0x32;
          pbVar10[-0xffffffff00000004] = 0xff;
          pbVar10[-0xffffffff00000003] = 0;
          pbVar10[-0xffffffff00000002] = 0;
          pbVar10[-0xffffffff00000001] = 0;
          FUN_0048e3d0(pbVar10 + -8,*(undefined4 *)(iVar2 + 0x48),4,s_Map_Image_Data_00552600,0xa105
                      );
          FUN_0043a680(*(int *)(iVar2 + 0x34) * *(int *)(iVar2 + 0x28) * uVar4 + local_98,
                       DAT_00603110,_DAT_00603100);
          FUN_0043a6a0(*(undefined4 *)(pbVar10 + -8),8,1 << (*pbVar10 & 0x1f));
          FUN_0043a6c0(0,0,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x34),0,0);
          uVar4 = uVar4 + 1;
          pbVar10 = pbVar10 + 0x18;
          iVar7 = local_9c;
        } while (uVar4 < *(uint *)(iVar2 + 0x30));
      }
      FUN_0049c530(local_98);
      iVar7 = iVar7 + -1;
      iVar2 = iVar2 + 0xd0;
      local_ac = DAT_0056367c;
      local_9c = iVar7;
    } while (iVar7 != 0);
  }
  for (; local_ac != 0; local_ac = *(int *)(local_ac + 0x9c)) {
    iVar7 = FUN_0047a830(local_ac + 0x60);
    if ((iVar7 != 0) && (*(int *)(local_ac + 0x98) != 0)) {
      str_sprintf(&DAT_005a41e0,s__s__s_005525f8,local_ac + 0x40,local_ac);
      local_a4._0_4_ =
           (int)(longlong)ROUND((float)(*(int *)(iVar7 + 0x54) >> 1) * *(float *)(iVar7 + 0x5c));
      iVar2 = *(int *)(local_ac + 0x84) + (int)local_a4;
      iVar3 = *(int *)(local_ac + 0x84) - (int)local_a4;
      local_a4 = (longlong)ROUND((float)(*(int *)(iVar7 + 0x48) >> 1) * *(float *)(iVar7 + 0x5c));
      FUN_0047ab20(&DAT_005a41e0,*(int *)(local_ac + 0x80) - (int)local_a4,iVar3,
                   *(int *)(local_ac + 0x80) + (int)local_a4,iVar2,1,local_ac);
    }
  }
  return;
}

