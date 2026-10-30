
/* sector register/parse(name,ctx): dedupe via Spx_FindLoaded; copy name->galaxy rec+0xc (Main SPX);
   call Spx_ReadFile; relocate section offsets by +buf+0x1a0; copy BDF name(buf+0x78)->rec+0x1c;
   construct + recurse sub-sectors via 0x435410 */

undefined4 * Spx_LoadSector(char *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  
  puVar4 = (undefined4 *)Spx_FindLoaded(param_1);
  iVar2 = DAT_005a5544;
  if (puVar4 != (undefined4 *)0x0) {
    return (undefined4 *)*puVar4;
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = DAT_005a5544 * 0x44;
    puVar8 = &DAT_005a5548 + DAT_005a5544 * 0x11;
    uVar6 = 0xffffffff;
    pcVar9 = param_1;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar10 + -uVar6;
    pcVar10 = &DAT_005a5554 + iVar1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = Spx_ReadFile(param_1);
    uVar6 = 0xffffffff;
    (&DAT_005a554c)[iVar2 * 0x11] = iVar5;
    pcVar9 = (char *)(iVar5 + 0x78);
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar10 + -uVar6;
    pcVar10 = &DAT_005a5574 + iVar1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar2 = DAT_005a5544 * 0xbc;
    puVar4 = &DAT_005897f0 + DAT_005a5544 * 0x2f;
    DAT_005a5544 = DAT_005a5544 + 1;
    FUN_00457e60(puVar4,puVar8,*(undefined4 *)(iVar5 + 0xfc),*(undefined4 *)(iVar5 + 0x100));
    FUN_0045ca80(&DAT_00589804 + iVar2,0xd100,&DAT_005897e4);
  }
  else {
    iVar5 = Spx_ReadFile(param_1);
    param_2[2] = iVar5;
    puVar4 = (undefined4 *)*param_2;
    uVar6 = 0xffffffff;
    pcVar9 = param_1;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar10 + -uVar6;
    pcVar10 = (char *)(puVar4[0xf] + 0x1c);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    puVar8 = (undefined4 *)0x0;
  }
  if (iVar5 != 0) {
    FUN_0049c840(iVar5);
    FUN_004353b0(param_1);
    iVar2 = *(int *)(iVar5 + 0x1a0);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + iVar2;
    *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + iVar2;
    *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + iVar2;
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + iVar2;
    *(int *)(iVar5 + 0x68) = *(int *)(iVar5 + 0x68) + iVar2;
    *(int *)(iVar5 + 0x5c) = *(int *)(iVar5 + 0x5c) + iVar2;
    *(int *)(iVar5 + 0x74) = *(int *)(iVar5 + 0x74) + iVar2;
    *(int *)(iVar5 + 0xec) = *(int *)(iVar5 + 0xec) + iVar2;
    *(int *)(iVar5 + 0xf8) = *(int *)(iVar5 + 0xf8) + iVar2;
    *(int *)(iVar5 + 0x10c) = *(int *)(iVar5 + 0x10c) + iVar2;
    Spx_InitSectionC(iVar5);
    Spx_SpawnDecls(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0xc));
    Spx_RelocParamSection(iVar5);
    Spx_ApplyPlacements(*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x14),puVar4,iVar5);
    Spx_LinkSection(iVar5 + 0xe8,puVar4,iVar5);
    if (param_2 == (undefined4 *)0x0) {
      Spx_SelectSubSector(iVar5,puVar8);
    }
    return puVar4;
  }
  FUN_004353e0(param_1);
  return (undefined4 *)0x0;
}

