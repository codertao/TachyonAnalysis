
/* sweep */

void VonUi_DrawRoster(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int local_254 [128];
  uint local_54 [10];
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  uint local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  local_6 = 0;
  local_5 = 0;
  local_c = 0;
  local_10 = 0;
  local_28 = (uint)((longlong)DAT_005a67e4 * 0xa0) >> 0x10 |
             (int)((ulonglong)((longlong)DAT_005a67e4 * 0xa0) >> 0x20) << 0x10;
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     ((DAT_00565881 != '\0' && ((char)DAT_00565a34 != '\0')))) {
    piVar7 = local_254;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    VonUi_BuildRoster(&local_c,&local_10,local_254);
    puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,&DAT_00559ee4,s_VON_VON_00559ee8);
    puVar8 = local_54;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_54[0] = 0x10000;
    local_54[1] = 0x10000;
    local_24 = Text_GlyphHeight(*puVar3,DAT_005657c0,2,local_54);
    local_2c = (uint)((longlong)local_24 * (longlong)DAT_005a67e4) >> 0x10 |
               (int)((ulonglong)((longlong)local_24 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    local_54[0] = 0x10000;
    local_54[1] = 0x10000;
    Text_GlyphHeight(*puVar3,DAT_005657c0,2,local_54);
    iVar6 = Race_GetRelations(*(undefined4 *)(DAT_005b1f0c + 0x544));
    Ui_DrawBox(DAT_005657c8,0x1dd,0xbf,0xa0,0xa0,&DAT_006a1f0f + (-(uint)(iVar6 != 2) & 0xffcee371),
               0,0,0,0,0);
    local_54[0] = (DAT_005a67a8 * local_54[0]) / 0x280;
    local_14 = (undefined1 *)0xc2;
    local_54[1] = (DAT_005a67a8 * local_54[1]) / 0x1e0;
    local_18 = local_c;
    if (0xc < (int)local_c) {
      local_18 = 0xd;
    }
    local_20 = 0;
    if (local_18 != 0) {
      local_1c = 0;
      do {
        puVar2 = local_14;
        if ((int)local_c <= (int)(local_20 + local_10)) {
          local_10 = local_1c;
        }
        iVar6 = local_254[local_20 + local_10];
        if (iVar6 == DAT_0056589c) {
          DAT_005a62d0 = 0;
          DAT_005a62d4 = 0;
          DAT_005a64cc = 2;
          DAT_005a64d0 = 5;
          DAT_005a62d8 = (uint)((longlong)DAT_005a67e4 * 0x1dd) >> 0x10 |
                         (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1dd) >> 0x20) << 0x10;
          DAT_005a62dc = (uint)((longlong)(int)local_14 * (longlong)DAT_005a67e4) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)local_14 * (longlong)DAT_005a67e4) >> 0x20
                              ) << 0x10;
          DAT_005a62e0 = local_28;
          DAT_005a62e4 = local_2c;
          DAT_005a64c4 = 0xffffffff;
          DAT_005a64c8 = &DAT_005657d4;
          DAT_005a64c0 = DAT_005657e0;
          iVar4 = Race_GetRelations(*(undefined4 *)(DAT_005b1f0c + 0x544));
          if (iVar4 == 2) {
            *(undefined **)(DAT_005a64c8 + 4) = &DAT_006a1f0f;
          }
          else {
            *(undefined4 *)(DAT_005a64c8 + 4) = 0x390280;
          }
          Gfx_DrawImage();
        }
        local_14 = &DAT_005b3a38 + iVar6 * 0x44;
        if ((&DAT_005658b4)[iVar6] == '\0') {
          uVar5 = 0xff0000;
          local_6 = 0x8f;
        }
        else {
          uVar5 = 0xff00;
          local_6 = 0x8e;
        }
        Text_DrawAligned(&local_6,DAT_005657c0,0x278,puVar2,uVar5,0xffff,0x10000,10);
        cVar1 = *(char *)((int)&DAT_00565934 + iVar6);
        iVar6 = (int)puVar2 + local_24;
        Viewport_SetScaled(0x1e2,puVar2,0x26b,iVar6,1);
        copy_str32_to_some_global(&DAT_005a67a0);
        Text_DrawAligned(local_14,DAT_005657c0,0x1e2,puVar2,
                         (-(uint)(cVar1 != '\0') & 0xff01ff00) + 0xff0000,0xffff,0x10000,2);
        Viewport_Set(DAT_005657ec,DAT_005657f0,DAT_005657f4,DAT_005657f8,1);
        copy_str32_to_some_global(&DAT_005657fc);
        local_20 = local_20 + 1;
        local_14 = (undefined1 *)iVar6;
        local_1c = local_1c + -1;
      } while (local_20 < local_18);
    }
  }
  return;
}

