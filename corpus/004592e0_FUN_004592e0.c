
void FUN_004592e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  char local_20 [32];
  
  iVar4 = Cbin_CountEntries(s_FONTS_005367ec,&DAT_005367f4);
  *(int *)((int)param_1 + 0x7c) = iVar4;
  if (iVar4 != 0) {
    uVar5 = FUN_0049c0f0(s_FONTS_005367ec,&DAT_005367f4,0x20,1);
    puVar1 = (undefined4 *)((int)param_1 + 0x88);
    FUN_0048e3d0(puVar1,uVar5,4,s_SCENE_FONT_REFERNECE_NAMES_00549198,0xcccc);
    uVar5 = FUN_0049c0f0(s_FONTS_005367ec,&DAT_005367f4,0x20,2);
    puVar2 = (undefined4 *)((int)param_1 + 0x84);
    FUN_0048e3d0(puVar2,uVar5,4,s_SCENE_FONT_NAMES_00549184,0xcccc);
    FUN_0048e3d0((undefined4 *)((int)param_1 + 0x80),*(int *)((int)param_1 + 0x7c) * 0xc,4,
                 s_SCENE_FONTS_00549178,0xcccc);
    Cbin_SelectGroup(s_FONTS_005367ec);
    param_1 = *(undefined4 **)((int)param_1 + 0x80);
    pcVar9 = (char *)*puVar2;
    pcVar8 = (char *)*puVar1;
    while( true ) {
      iVar4 = FUN_0049bdb0(&DAT_005367f4,local_20,0x20,0,4,1);
      if (iVar4 == 0) break;
      uVar6 = 0xffffffff;
      pcVar10 = local_20;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar11 + -uVar6;
      pcVar11 = pcVar8;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar6 = 0xffffffff;
      *param_1 = pcVar8;
      pcVar10 = local_20;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      pcVar8 = pcVar8 + ~uVar6;
      FUN_0049b930(&DAT_005367f4,local_20,0x20,0,4,2);
      uVar6 = 0xffffffff;
      param_1[1] = pcVar9;
      pcVar10 = local_20;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar11 + -uVar6;
      pcVar11 = pcVar9;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar10 = local_20;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      pcVar9 = pcVar9 + ~uVar6;
      FUN_0049b930(&DAT_005367f4,local_20,0x20,0,4,3);
      iVar4 = FUN_004c67c0(local_20,s_ADDPALETTE_0054916c);
      if (iVar4 == 0) {
        uVar5 = param_1[1];
        uVar12 = 0x100000;
      }
      else {
        uVar5 = param_1[1];
        uVar12 = 0x20000;
      }
      uVar5 = FUN_00431de0(uVar5,uVar12);
      param_1[2] = uVar5;
      param_1 = param_1 + 3;
    }
  }
  return;
}

