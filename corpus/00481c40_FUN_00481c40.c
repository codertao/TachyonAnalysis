
void FUN_00481c40(void)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  BYTE *pBVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  int local_14c;
  uint local_144;
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  BYTE local_100 [256];
  
  puVar3 = (undefined4 *)Rtxt_Lookup(DAT_00563d68,s_key_misc_0053ebc4,s_SEPERATOR_00556e18);
  puVar4 = (undefined4 *)Rtxt_Lookup(DAT_00563d68,s_key_misc_0053ebc4,&DAT_00556e10);
  pBVar15 = local_100;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    pBVar15[0] = '\0';
    pBVar15[1] = '\0';
    pBVar15[2] = '\0';
    pBVar15[3] = '\0';
    pBVar15 = pBVar15 + 4;
  }
  local_14c = 0;
  pcVar13 = (char *)&DAT_005636dc;
  do {
    str_sprintf(local_140,s_TxtOptP4Opt__2d_00556e00,local_14c);
    str_sprintf(local_120,s_BtnOptP4KeyMap__2d_00556d94,local_14c);
    uVar11 = DAT_00563d60 + local_14c;
    bVar18 = uVar11 < DAT_00563d5c;
    *pcVar13 = '\0';
    if (bVar18) {
      puVar8 = *(undefined4 **)(DAT_00563d64 + uVar11 * 4);
      puVar5 = (undefined4 *)FUN_0042f5c0(*puVar8);
      if (puVar5 != (undefined4 *)0x0) {
        str_sprintf(&DAT_005a41e0,s__s_text_0053ebe4,*puVar5);
        puVar5 = (undefined4 *)Rtxt_Lookup(DAT_00563d68,&DAT_005a41e0,puVar5[1]);
        if ((puVar5 == (undefined4 *)0x0) ||
           (puVar9 = (undefined1 *)*puVar5, puVar9 == (undefined1 *)0x0)) {
          puVar9 = &DAT_00562b14;
        }
        FUN_0043e6a0(DAT_00571280,local_140,puVar9);
      }
      if ((puVar8[1] != -1) &&
         (puVar5 = (undefined4 *)FUN_0042f4d0(puVar8[1]), puVar5 != (undefined4 *)0x0)) {
        iVar10 = ToAscii(puVar8[1] & 0x1ff,0,local_100,(LPWORD)&local_144,0);
        if (iVar10 == 1) {
          uVar2 = (ushort)local_144;
          if (((uVar2 < 0x21) || (0x7e < uVar2)) && ((uVar2 < 0xa1 || (0xff < uVar2)))) {
            str_sprintf(&DAT_005a41e0,s__s_text_0053ebe4,*puVar5);
            piVar7 = (int *)Rtxt_Lookup(DAT_00563d68,&DAT_005a41e0,puVar5[1]);
            if (piVar7 != (int *)0x0) {
              iVar10 = *piVar7;
              goto joined_r0x00481e4f;
            }
          }
          else {
            uVar6 = FUN_004bcf9b(local_144 & 0xffff);
            str_sprintf(&DAT_005a41e0,&DAT_0053ebdc,uVar6);
            str_sprintf(pcVar13,&DAT_005a41e0);
LAB_00481e5f:
            puVar5 = (undefined4 *)FUN_0042f540(puVar8[1]);
            if (puVar5 != (undefined4 *)0x0) {
              str_sprintf(&DAT_005a41e0,s__s_text_0053ebe4,*puVar5);
              piVar7 = (int *)Rtxt_Lookup(DAT_00563d68,&DAT_005a41e0,puVar5[1]);
              if ((piVar7 != (int *)0x0) && (*piVar7 != 0)) {
                if (puVar4 == (undefined4 *)0x0) {
                  puVar9 = &DAT_0053ebe0;
                }
                else {
                  puVar9 = (undefined1 *)*puVar4;
                }
                str_sprintf(&DAT_005a41e0,s__s_s_s_00556df8,*piVar7,puVar9,pcVar13);
                uVar11 = 0xffffffff;
                pcVar14 = (char *)&DAT_005a41e0;
                do {
                  pcVar17 = pcVar14;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  pcVar17 = pcVar14 + 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar17;
                } while (cVar1 != '\0');
                uVar11 = ~uVar11;
                pcVar14 = pcVar17 + -uVar11;
                pcVar17 = pcVar13;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + 4;
                  pcVar17 = pcVar17 + 4;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pcVar17 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                  pcVar17 = pcVar17 + 1;
                }
              }
            }
          }
        }
        else {
          str_sprintf(&DAT_005a41e0,s__s_text_0053ebe4,*puVar5);
          piVar7 = (int *)Rtxt_Lookup(DAT_00563d68,&DAT_005a41e0,puVar5[1]);
          if (piVar7 != (int *)0x0) {
            iVar10 = *piVar7;
joined_r0x00481e4f:
            if (iVar10 != 0) {
              str_sprintf(pcVar13,iVar10);
              goto LAB_00481e5f;
            }
          }
        }
      }
      if ((puVar8[3] != 0) &&
         (puVar5 = (undefined4 *)FUN_0042f590(puVar8[3]), puVar5 != (undefined4 *)0x0)) {
        str_sprintf(&DAT_005a41e0,s__s_text_0053ebe4,*puVar5);
        puVar5 = (undefined4 *)Rtxt_Lookup(DAT_00563d68,&DAT_005a41e0,puVar5[1]);
        if ((puVar5 != (undefined4 *)0x0) && (pcVar14 = (char *)*puVar5, pcVar14 != (char *)0x0)) {
          iVar10 = -1;
          pcVar17 = pcVar13;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar1 != '\0');
          if (iVar10 == -2) {
            uVar11 = 0xffffffff;
            do {
              pcVar17 = pcVar14;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar17 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar17;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            pcVar14 = pcVar17 + -uVar11;
            pcVar17 = pcVar13;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar17 = pcVar17 + 4;
            }
          }
          else {
            if (puVar3 == (undefined4 *)0x0) {
              puVar9 = &DAT_0053ebd8;
            }
            else {
              puVar9 = (undefined1 *)*puVar3;
            }
            str_sprintf(&DAT_005a41e0,&DAT_0053fdbc,puVar9,pcVar14);
            uVar11 = 0xffffffff;
            pcVar14 = (char *)&DAT_005a41e0;
            do {
              pcVar17 = pcVar14;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar17 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar17;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            iVar10 = -1;
            pcVar14 = pcVar13;
            do {
              pcVar16 = pcVar14;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar16 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar16;
            } while (cVar1 != '\0');
            pcVar14 = pcVar17 + -uVar11;
            pcVar17 = pcVar16 + -1;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar17 = pcVar17 + 4;
            }
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar17 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      if ((puVar8[2] != -1) &&
         (puVar8 = (undefined4 *)FUN_0042f560(puVar8[2]), puVar8 != (undefined4 *)0x0)) {
        str_sprintf(&DAT_005a41e0,s__s_text_0053ebe4,*puVar8);
        puVar8 = (undefined4 *)Rtxt_Lookup(DAT_00563d68,&DAT_005a41e0,puVar8[1]);
        if ((puVar8 != (undefined4 *)0x0) && (pcVar14 = (char *)*puVar8, pcVar14 != (char *)0x0)) {
          iVar10 = -1;
          pcVar17 = pcVar13;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar1 != '\0');
          if (iVar10 == -2) {
            uVar11 = 0xffffffff;
            do {
              pcVar17 = pcVar14;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar17 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar17;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            pcVar14 = pcVar17 + -uVar11;
            pcVar17 = pcVar13;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar17 = pcVar17 + 4;
            }
          }
          else {
            if (puVar3 == (undefined4 *)0x0) {
              puVar9 = &DAT_0053ebd8;
            }
            else {
              puVar9 = (undefined1 *)*puVar3;
            }
            str_sprintf(&DAT_005a41e0,&DAT_0053fdbc,puVar9,pcVar14);
            uVar11 = 0xffffffff;
            pcVar14 = (char *)&DAT_005a41e0;
            do {
              pcVar17 = pcVar14;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar17 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar17;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            iVar10 = -1;
            pcVar14 = pcVar13;
            do {
              pcVar16 = pcVar14;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar16 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar16;
            } while (cVar1 != '\0');
            pcVar14 = pcVar17 + -uVar11;
            pcVar17 = pcVar16 + -1;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar17 = pcVar17 + 4;
            }
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar17 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      FUN_0043cc80(DAT_00571280,local_120,pcVar13);
    }
    else {
      FUN_0043e6a0(DAT_00571280,local_140,&DAT_00562b14);
      FUN_0043cc80(DAT_00571280,local_120,&DAT_00562b14);
    }
    local_14c = local_14c + 1;
    pcVar13 = pcVar13 + 0x80;
    if (0x563cdb < (int)pcVar13) {
      Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0,0);
      return;
    }
  } while( true );
}

