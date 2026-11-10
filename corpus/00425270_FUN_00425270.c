
void FUN_00425270(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  uint local_34;
  undefined1 local_30 [8];
  undefined4 local_28 [10];
  
  puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_GAME_OPTIONS_00535e8c,s_OPTIONS_00535ebc);
  puVar6 = local_28;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar4 = FUN_004ae560(*puVar3,GLBL_FONT_SHDW_08,local_34 | 2,local_28);
  local_28[0] = 0x14000;
  local_28[1] = 0x14000;
  iVar5 = FUN_004ae560(*puVar3,GLBL_FONT_SHDW_12,local_34 | 2,local_28);
  FUN_0041f6e0(GLBL_BORDERS_BOX,0xaa,0x8c,0x136,0xdc,0x80,GLBL_FONT_SHDW_12,*puVar3,0xff0000,0x14000
               ,2);
  iVar8 = iVar5 + 0x8c;
  if (PTR_s_GAME_OPTIONS_00535c88 != (undefined *)0x0) {
    ppuVar10 = &PTR_PTR_00535c9c;
    do {
      iVar8 = iVar8 + iVar4;
      puVar6 = (undefined4 *)ppuVar10[1];
      if (puVar6 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,*puVar6,puVar6[1]);
        FUN_0048e970(*puVar6,GLBL_FONT_SHDW_08,0x140,iVar8,0xffffff,0xffff,0x14000,6);
        iVar8 = iVar8 + iVar5;
      }
      iVar9 = ((DAT_005b1ddc != ppuVar10 + -5) - 1 & 0xfe01) + 0xff00ff;
      puVar6 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,ppuVar10[-5],ppuVar10[-4]);
      FUN_0048e970(*puVar6,GLBL_FONT_SHDW_08,0xb4,iVar8,iVar9,0xffff,0x10000,2);
      puVar2 = *ppuVar10;
      if (puVar2 == (undefined *)0x0) {
        str_sprintf(local_30,&DAT_00535eb8,*(undefined4 *)ppuVar10[-3]);
        puVar11 = local_30;
      }
      else {
        piVar7 = (int *)Rtxt_Lookup(DAT_005a6140,*(undefined4 *)(puVar2 + *(int *)ppuVar10[-3] * 8),
                                    *(undefined4 *)(puVar2 + *(int *)ppuVar10[-3] * 8 + 4));
        puVar11 = (undefined1 *)*piVar7;
      }
      FUN_0048e970(puVar11,GLBL_FONT_SHDW_08,0x1d6,iVar8,iVar9,0xffff,0x10000,10);
      ppuVar1 = ppuVar10 + 4;
      ppuVar10 = ppuVar10 + 9;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  iVar8 = iVar4 * -2 + 0x163;
  puVar6 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_GAME_OPTIONS_00535e8c,s_FOOTER_00535eb0);
  FUN_0048e970(*puVar6,GLBL_FONT_SHDW_08,0x140,iVar8,0xff0000,0xffff,0x10000,6);
  puVar6 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_GAME_OPTIONS_00535e8c,s_FOOTER2_00535ea8);
  FUN_0048e970(*puVar6,GLBL_FONT_SHDW_08,0x140,iVar8 + iVar4,0xff0000,0xffff,0x10000,6);
  return;
}

