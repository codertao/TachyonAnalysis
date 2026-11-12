
/* in-game key chart overlay: KEYCHART heading, ACTION/MAPPING columns, up to 30 bindings (flag 4)
   from table 0x53cbc8 with key/joystick/mouse names via Rtxt, FOOTER */

void KeyChart_Draw(void)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint *local_344;
  int local_340;
  int local_338;
  uint local_334;
  uint local_32c;
  uint local_328 [10];
  char local_300 [256];
  char local_200 [256];
  BYTE local_100 [256];
  
  puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6150,s_key_heading_0053ebf4,s_KEYCHART_0053ec00);
  puVar12 = local_328;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_328[0] = 0x10000;
  local_328[1] = 0x10000;
  iVar4 = Text_GlyphHeight(*puVar3,DAT_005aed80,local_334 | 2,local_328);
  local_328[0] = 0x14000;
  local_328[1] = 0x14000;
  iVar5 = Text_GlyphHeight(*puVar3,DAT_005aed84,local_334 | 2,local_328);
  Ui_DrawBox(DAT_005aed88,0x78,0x14,0x19a,0x1ab,0x80,DAT_005aed84,*puVar3,0xff0000,0x14000,2);
  iVar8 = iVar5 + 0x14 + iVar4;
  puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6150,s_key_heading_0053ebf4,s_ACTION_0053cabc);
  Text_DrawAligned(*puVar3,DAT_005aed80,0x80,iVar8,0xffffff,0xffff,0x14000,2);
  puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6150,s_key_heading_0053ebf4,s_MAPPING_0053ebec);
  Text_DrawAligned(*puVar3,DAT_005aed80,0x20a,iVar8,0xffffff,0xffff,0x14000,10);
  iVar8 = iVar8 + iVar5;
  local_340 = 0;
  local_338 = 0;
  if (DAT_0053cbc8 != 0) {
    local_344 = &DAT_0053cbcc;
    do {
      if (0x1d < local_338) break;
      if ((local_344[6] & 4) != 0) {
        if (DAT_005aed90 <= local_340) {
          puVar3 = (undefined4 *)ActionName_FromId(local_344[-1]);
          if (puVar3 != (undefined4 *)0x0) {
            str_sprintf(local_200,s__s_text_0053ebe4,*puVar3);
            piVar6 = (int *)Rtxt_Lookup(DAT_005a6150,local_200,puVar3[1]);
            if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
              Text_DrawAligned(*piVar6,DAT_005aed80,0x80,iVar8,0xff00ff,0xffff,0x10000,2);
            }
          }
          pcVar13 = local_300;
          for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
            pcVar13[0] = '\0';
            pcVar13[1] = '\0';
            pcVar13[2] = '\0';
            pcVar13[3] = '\0';
            pcVar13 = pcVar13 + 4;
          }
          if ((*local_344 != 0xffffffff) && (iVar9 = KeyName_FromKeyCode(*local_344), iVar9 != 0)) {
            puVar3 = (undefined4 *)KeyName_FromModifierBits(*local_344);
            if (puVar3 != (undefined4 *)0x0) {
              str_sprintf(local_200,s__s_text_0053ebe4,*puVar3);
              puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6150,local_200,puVar3[1]);
              if ((puVar3 != (undefined4 *)0x0) && ((char *)*puVar3 != (char *)0x0)) {
                uVar10 = 0xffffffff;
                pcVar13 = (char *)*puVar3;
                do {
                  pcVar15 = pcVar13;
                  if (uVar10 == 0) break;
                  uVar10 = uVar10 - 1;
                  pcVar15 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar15;
                } while (cVar1 != '\0');
                uVar10 = ~uVar10;
                iVar9 = -1;
                pcVar13 = local_300;
                do {
                  pcVar14 = pcVar13;
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  pcVar14 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar14;
                } while (cVar1 != '\0');
                pcVar13 = pcVar15 + -uVar10;
                pcVar15 = pcVar14 + -1;
                for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *pcVar15 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                pcVar13 = DAT_005aed94;
                if (DAT_005aed94 == (char *)0x0) {
                  pcVar13 = &DAT_0053ebe0;
                }
                uVar10 = 0xffffffff;
                do {
                  pcVar15 = pcVar13;
                  if (uVar10 == 0) break;
                  uVar10 = uVar10 - 1;
                  pcVar15 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar15;
                } while (cVar1 != '\0');
                uVar10 = ~uVar10;
                iVar9 = -1;
                pcVar13 = local_300;
                do {
                  pcVar14 = pcVar13;
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  pcVar14 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar14;
                } while (cVar1 != '\0');
                pcVar13 = pcVar15 + -uVar10;
                pcVar15 = pcVar14 + -1;
                for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *pcVar15 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar15 = pcVar15 + 1;
                }
              }
            }
            iVar9 = ToAscii(*local_344 & 0x1ff,0,local_100,(LPWORD)&local_32c,0);
            if (iVar9 == 1) {
              uVar2 = (ushort)local_32c;
              if (((uVar2 < 0x21) || (0x7e < uVar2)) && ((uVar2 < 0xa1 || (0xff < uVar2)))) {
                puVar3 = (undefined4 *)KeyName_FromKeyCode(*local_344);
                str_sprintf(local_200,s__s_text_0053ebe4,*puVar3);
                puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6150,local_200,puVar3[1]);
                if (puVar3 != (undefined4 *)0x0) {
                  pcVar13 = (char *)*puVar3;
                  goto joined_r0x00431299;
                }
              }
              else {
                uVar7 = _toupper(local_32c & 0xffff);
                str_sprintf(local_200,&DAT_0053ebdc,uVar7);
                pcVar13 = local_200;
LAB_004312a1:
                uVar10 = 0xffffffff;
                do {
                  pcVar15 = pcVar13;
                  if (uVar10 == 0) break;
                  uVar10 = uVar10 - 1;
                  pcVar15 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar15;
                } while (cVar1 != '\0');
                uVar10 = ~uVar10;
                iVar9 = -1;
                pcVar13 = local_300;
                do {
                  pcVar14 = pcVar13;
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  pcVar14 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar14;
                } while (cVar1 != '\0');
                pcVar13 = pcVar15 + -uVar10;
                pcVar15 = pcVar14 + -1;
                for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *pcVar15 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar15 = pcVar15 + 1;
                }
              }
            }
            else {
              puVar3 = (undefined4 *)KeyName_FromKeyCode(*local_344);
              str_sprintf(local_200,s__s_text_0053ebe4,*puVar3);
              puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6150,local_200,puVar3[1]);
              if (puVar3 != (undefined4 *)0x0) {
                pcVar13 = (char *)*puVar3;
joined_r0x00431299:
                if (pcVar13 != (char *)0x0) goto LAB_004312a1;
              }
            }
          }
          if ((local_344[2] != 0) &&
             (puVar3 = (undefined4 *)KeyName_FromMouseButton(local_344[2]),
             puVar3 != (undefined4 *)0x0)) {
            str_sprintf(local_200,s__s_text_0053ebe4,*puVar3);
            piVar6 = (int *)Rtxt_Lookup(DAT_005a6150,local_200,puVar3[1]);
            if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
              if (local_300[0] != '\0') {
                pcVar13 = DAT_005aed98;
                if (DAT_005aed98 == (char *)0x0) {
                  pcVar13 = &DAT_0053ebd8;
                }
                uVar10 = 0xffffffff;
                do {
                  pcVar15 = pcVar13;
                  if (uVar10 == 0) break;
                  uVar10 = uVar10 - 1;
                  pcVar15 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar15;
                } while (cVar1 != '\0');
                uVar10 = ~uVar10;
                iVar9 = -1;
                pcVar13 = local_300;
                do {
                  pcVar14 = pcVar13;
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  pcVar14 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar14;
                } while (cVar1 != '\0');
                pcVar13 = pcVar15 + -uVar10;
                pcVar15 = pcVar14 + -1;
                for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *pcVar15 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar15 = pcVar15 + 1;
                }
              }
              uVar10 = 0xffffffff;
              pcVar13 = (char *)*piVar6;
              do {
                pcVar15 = pcVar13;
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1;
                pcVar15 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar15;
              } while (cVar1 != '\0');
              uVar10 = ~uVar10;
              iVar9 = -1;
              pcVar13 = local_300;
              do {
                pcVar14 = pcVar13;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              pcVar13 = pcVar15 + -uVar10;
              pcVar15 = pcVar14 + -1;
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pcVar15 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar15 = pcVar15 + 1;
              }
            }
          }
          if ((local_344[1] != 0xffffffff) &&
             (puVar3 = (undefined4 *)KeyName_FromJoyButton(local_344[1]),
             puVar3 != (undefined4 *)0x0)) {
            str_sprintf(local_200,s__s_text_0053ebe4,*puVar3);
            piVar6 = (int *)Rtxt_Lookup(DAT_005a6150,local_200,puVar3[1]);
            if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
              if (local_300[0] != '\0') {
                pcVar13 = DAT_005aed98;
                if (DAT_005aed98 == (char *)0x0) {
                  pcVar13 = &DAT_0053ebd8;
                }
                uVar10 = 0xffffffff;
                do {
                  pcVar15 = pcVar13;
                  if (uVar10 == 0) break;
                  uVar10 = uVar10 - 1;
                  pcVar15 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar15;
                } while (cVar1 != '\0');
                uVar10 = ~uVar10;
                iVar9 = -1;
                pcVar13 = local_300;
                do {
                  pcVar14 = pcVar13;
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  pcVar14 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar14;
                } while (cVar1 != '\0');
                pcVar13 = pcVar15 + -uVar10;
                pcVar15 = pcVar14 + -1;
                for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *pcVar15 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar15 = pcVar15 + 1;
                }
              }
              uVar10 = 0xffffffff;
              pcVar13 = (char *)*piVar6;
              do {
                pcVar15 = pcVar13;
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1;
                pcVar15 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar15;
              } while (cVar1 != '\0');
              uVar10 = ~uVar10;
              iVar9 = -1;
              pcVar13 = local_300;
              do {
                pcVar14 = pcVar13;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              pcVar13 = pcVar15 + -uVar10;
              pcVar15 = pcVar14 + -1;
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pcVar15 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar15 = pcVar15 + 1;
              }
            }
          }
          if (local_300[0] != '\0') {
            Text_DrawAligned(local_300,DAT_005aed80,0x20a,iVar8,0xff00ff,0xffff,0x10000,10);
          }
          iVar8 = iVar8 + iVar4;
          local_338 = local_338 + 1;
        }
        local_340 = local_340 + 1;
      }
      puVar12 = local_344 + 7;
      local_344 = local_344 + 8;
    } while (*puVar12 != 0);
  }
  puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6150,s_key_misc_0053ebc4,s_FOOTER_00535eb0);
  Text_DrawAligned(*puVar3,DAT_005aed80,0x140,0x1bc - iVar5,0xff0000,0xffff,0x14000,6);
  return;
}

