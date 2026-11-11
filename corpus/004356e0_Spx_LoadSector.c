
/* sector register/parse(name,ctx): dedupe via Spx_FindLoaded; copy name->galaxy rec+0xc (Main SPX);
   call Spx_ReadFile; relocate section offsets by +buf+0x1a0; copy BDF name(buf+0x78)->rec+0x1c;
   construct + recurse sub-sectors via 0x435410 */

Quadrant * Spx_LoadSector(char *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  SectorRec *rec;
  char *pcVar7;
  Quadrant *q;
  char *pcVar8;
  
  puVar3 = (undefined4 *)Spx_FindLoaded(param_1);
  iVar1 = g_SectorCount;
  if (puVar3 != (undefined4 *)0x0) {
    return (Quadrant *)*puVar3;
  }
  if (param_2 == (undefined4 *)0x0) {
    rec = g_SectorTable + g_SectorCount;
    uVar5 = 0xffffffff;
    pcVar7 = param_1;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = g_SectorTable[g_SectorCount].mainSpx;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pvVar4 = (void *)Spx_ReadFile(param_1);
    uVar5 = 0xffffffff;
    g_SectorTable[iVar1].spx = pvVar4;
    pcVar7 = (char *)((int)pvVar4 + 0x78);
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = g_SectorTable[iVar1].displayName;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar1 = g_SectorCount * 0xbc;
    q = g_Quadrants + g_SectorCount;
    g_SectorCount = g_SectorCount + 1;
    Quadrant_Init(q,rec,*(int *)((int)pvVar4 + 0xfc),*(int *)((int)pvVar4 + 0x100));
    FUN_0045ca80(iVar1 + 0x589804,0xd100,&DAT_005897e4);
  }
  else {
    pvVar4 = (void *)Spx_ReadFile(param_1);
    param_2[2] = pvVar4;
    q = (Quadrant *)*param_2;
    uVar5 = 0xffffffff;
    pcVar7 = param_1;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = q->sector->subSpx;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    rec = (SectorRec *)0x0;
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0049c840(pvVar4);
    FUN_004353b0(param_1);
    iVar1 = *(int *)((int)pvVar4 + 0x1a0);
    *(int *)((int)pvVar4 + 0x10) = *(int *)((int)pvVar4 + 0x10) + iVar1;
    *(int *)((int)pvVar4 + 0x18) = *(int *)((int)pvVar4 + 0x18) + iVar1;
    *(int *)((int)pvVar4 + 0x24) = *(int *)((int)pvVar4 + 0x24) + iVar1;
    *(int *)((int)pvVar4 + 0x30) = *(int *)((int)pvVar4 + 0x30) + iVar1;
    *(int *)((int)pvVar4 + 0x68) = *(int *)((int)pvVar4 + 0x68) + iVar1;
    *(int *)((int)pvVar4 + 0x5c) = *(int *)((int)pvVar4 + 0x5c) + iVar1;
    *(int *)((int)pvVar4 + 0x74) = *(int *)((int)pvVar4 + 0x74) + iVar1;
    *(int *)((int)pvVar4 + 0xec) = *(int *)((int)pvVar4 + 0xec) + iVar1;
    *(int *)((int)pvVar4 + 0xf8) = *(int *)((int)pvVar4 + 0xf8) + iVar1;
    *(int *)((int)pvVar4 + 0x10c) = *(int *)((int)pvVar4 + 0x10c) + iVar1;
    Spx_InitSectionC(pvVar4);
    Spx_SpawnDecls(*(undefined4 *)((int)pvVar4 + 0x10),*(undefined4 *)((int)pvVar4 + 0xc));
    Spx_RelocParamSection(pvVar4);
    Spx_ApplyPlacements(*(undefined4 *)((int)pvVar4 + 0x18),*(undefined4 *)((int)pvVar4 + 0x14),q,
                        pvVar4);
    Spx_LinkSection((int)pvVar4 + 0xe8,q,pvVar4);
    if (param_2 == (undefined4 *)0x0) {
      Spx_SelectSubSector(pvVar4,rec);
    }
    return q;
  }
  FUN_004353e0(param_1);
  return (Quadrant *)0x0;
}

