
/* nav-map: highlighted sector name + SECTOR_CONTENTS/QUADRANT text */

void Map_UpdateSectorText(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  iVar2 = FUN_0043bf10(g_MapUiCtx,s_MAP_HILITE_SECTOR_005527d0);
  iVar3 = FUN_0043bf10(g_MapUiCtx,s_MAP_SECTOR_CONTENTS_005527bc);
  if (param_1 == (char *)0x0) {
    if (iVar2 == 0) {
      pcVar4 = s__High_Lighted_Sector_005527a4;
    }
    else {
      pcVar4 = *(char **)(iVar2 + 0x40);
    }
    str_sprintf(&DAT_00571500,&DAT_005480b0,pcVar4);
  }
  else {
    str_sprintf(&DAT_005a41e0,param_1 + 0x40);
    pcVar4 = _strstr((char *)&DAT_005a41e0,&DAT_0053fec0);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    uVar6 = 0xffffffff;
    pcVar4 = &DAT_0053f9e0;
    do {
      pcVar10 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar4 = (char *)&DAT_005a41e0;
    do {
      pcVar9 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar9;
    } while (cVar1 != '\0');
    pcVar4 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar7 = str_cmp(&DAT_005a41e0,&DAT_00571b80);
    if (iVar7 != 0) {
      FUN_0049c6e0(0xa106);
      DAT_00563688 = 0;
      DAT_00571b80 = 0;
      DAT_00563688 = load_rtxt_bin(&DAT_005a41e0,0xa106);
    }
    if (DAT_00563688 != 0) {
      str_sprintf(&DAT_00571b80,&DAT_005a41e0);
      puVar5 = (undefined4 *)FUN_0049e0d0(DAT_00563688,s_QUADRANT_NAMES_005526f0,param_1);
      if (puVar5 == (undefined4 *)0x0) {
        if (iVar2 == 0) {
          pcVar4 = s__High_Lighted_Sector_005527a4;
        }
        else {
          pcVar4 = *(char **)(iVar2 + 0x40);
        }
        str_sprintf(&DAT_00571500,s__s__s____s_00552720,pcVar4,param_1 + 0x40,param_1);
      }
      else {
        if (iVar2 == 0) {
          pcVar4 = s__High_Lighted_Sector_005527a4;
        }
        else {
          pcVar4 = *(char **)(iVar2 + 0x40);
        }
        str_sprintf(&DAT_00571500,s__s__s_005336a4,pcVar4,*puVar5);
      }
    }
  }
  FUN_0043e6a0(g_MapUiCtx,s_TxtMapSector_00552794,&DAT_00571500);
  if ((param_1 == (char *)0x0) || (GLBL_ingame_rtxt == 0)) {
    if (iVar3 == 0) {
      pcVar4 = s__Sector_Contents_0055275c;
    }
    else {
      pcVar4 = *(char **)(iVar3 + 0x40);
    }
    str_sprintf(&DAT_00571800,&DAT_005480b0,pcVar4);
  }
  else {
    str_sprintf(&DAT_005a41e0,param_1 + 0x40);
    pcVar4 = _strstr((char *)&DAT_005a41e0,&DAT_0053fec0);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    pcVar4 = _strstr(param_1,&DAT_0053fec0);
    iVar2 = GLBL_ingame_rtxt;
    if (pcVar4 != (char *)0x0) {
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar4;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar4 = (char *)&DAT_005a41e0;
      do {
        pcVar9 = pcVar4;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      pcVar4 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar10 = pcVar10 + 1;
      }
      puVar5 = (undefined4 *)FUN_0049e0d0(iVar2,s_SECTOR_CONTENTS_00552784,&DAT_005a41e0);
      if (puVar5 == (undefined4 *)0x0) {
        if (iVar3 == 0) {
          pcVar4 = s__Sector_Contents__00552770;
        }
        else {
          pcVar4 = *(char **)(iVar3 + 0x40);
        }
        str_sprintf(&DAT_00571800,s__s__s____s_00552720,pcVar4,param_1 + 0x40,param_1);
      }
      else {
        if (iVar3 == 0) {
          pcVar4 = s__Sector_Contents__00552770;
        }
        else {
          pcVar4 = *(char **)(iVar3 + 0x40);
        }
        str_sprintf(&DAT_00571800,s__s__s_005336a4,pcVar4,*puVar5);
      }
    }
  }
  FUN_0043e6a0(g_MapUiCtx,s_TxtMapContents_0055274c,&DAT_00571800);
  return;
}

