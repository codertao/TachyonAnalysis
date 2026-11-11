
void FUN_0048d620(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_74;
  undefined1 uStack_73;
  byte bStack_72;
  undefined1 local_6c;
  undefined1 uStack_6b;
  byte bStack_6a;
  undefined4 local_64 [25];
  
  pcVar1 = GLBL_llist_large_thing;
  DAT_0056aae0 = DAT_005a680c;
  copy_str32_to_some_global(&DAT_0056aae0);
  for (; pcVar1 != (char *)0x0; pcVar1 = *(char **)(pcVar1 + 0x2b8)) {
    if ((*(int *)(pcVar1 + 0x228) <= DAT_0056aacc) &&
       (DAT_0056aac4 <= *(int *)(pcVar1 + 0x21c) + *(int *)(pcVar1 + 0x228))) {
      if ((*(int *)(pcVar1 + 0x214) == 0) || (*(int *)(pcVar1 + 0x204) == 0)) {
        iVar5 = *(int *)(pcVar1 + 0x200);
        bStack_72 = pcVar1[0x20a];
        local_74 = (undefined1)*(undefined2 *)(pcVar1 + 0x208);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(pcVar1 + 0x208) >> 8);
        bStack_6a = pcVar1[0x20d];
        local_6c = (undefined1)*(undefined2 *)(pcVar1 + 0x20b);
        uStack_6b = (undefined1)((ushort)*(undefined2 *)(pcVar1 + 0x20b) >> 8);
      }
      else {
        Font_SetColorRamp((uint)(byte)pcVar1[0x210],(uint)(byte)pcVar1[0x20f],
                          (uint)(byte)pcVar1[0x20e],(uint)(byte)pcVar1[0x213],
                          (uint)(byte)pcVar1[0x212],(uint)(byte)pcVar1[0x211]);
        bStack_72 = pcVar1[0x210];
        iVar5 = *(int *)(pcVar1 + 0x204);
        local_74 = (undefined1)*(undefined2 *)(pcVar1 + 0x20e);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(pcVar1 + 0x20e) >> 8);
        bStack_6a = pcVar1[0x213];
        local_6c = (undefined1)*(undefined2 *)(pcVar1 + 0x211);
        uStack_6b = (undefined1)((ushort)*(undefined2 *)(pcVar1 + 0x211) >> 8);
      }
      if ((DAT_00564ae4 == 0) || (*(int *)(*(int *)(pcVar1 + 0x200) + 0x238) == 0)) {
        puVar8 = &DAT_005a67a0;
        puVar9 = local_64;
        for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = &DAT_0056aae0;
        puVar9 = &DAT_005a67a0;
        for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_00452180(0x100);
        Font_SetColorRamp((uint)bStack_72,CONCAT11(bStack_72,uStack_73) & 0xff,
                          CONCAT12(bStack_72,CONCAT11(uStack_73,local_74)) & 0xff,(uint)bStack_6a,
                          CONCAT11(bStack_6a,uStack_6b) & 0xff,
                          CONCAT12(bStack_6a,CONCAT11(uStack_6b,local_6c)) & 0xff);
        call_Font_DrawStringClipped
                  (pcVar1,(void *)(iVar5 + 0x50),*(int *)(pcVar1 + 0x228),*(int *)(pcVar1 + 0x224),0
                   ,0,0);
        puVar8 = local_64;
        puVar9 = &DAT_005a67a0;
        for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      else {
        FUN_00452180(1);
        uVar7 = ((uint)bStack_72 << 8 | CONCAT11(bStack_72,uStack_73) & 0xff) << 8 |
                CONCAT12(bStack_72,CONCAT11(uStack_73,local_74)) & 0xff;
        *(uint *)(iVar5 + 600) = uVar7;
        FUN_004ad470(DAT_0056aac4,DAT_0056aac8,DAT_0056aacc,DAT_0056aad0);
        FUN_004ae1a0(pcVar1,*(undefined4 *)(iVar5 + 0x238),*(undefined4 *)(pcVar1 + 0x228),
                     *(undefined4 *)(pcVar1 + 0x224),uVar7,*(undefined4 *)(iVar5 + 0x24c),
                     iVar5 + 0x23c);
        FUN_004ad470(DAT_005a67c0,DAT_005a67c4,DAT_005a67c8,DAT_005a67cc);
      }
    }
  }
  FUN_00452150();
  FUN_00451e10(&DAT_005a67a0);
  for (pcVar1 = GLBL_llist_large_thing; pcVar1 != (char *)0x0; pcVar1 = *(char **)(pcVar1 + 0x2b8))
  {
    if ((*(int *)(pcVar1 + 0x228) <= DAT_0056aacc) &&
       (DAT_0056aac4 <= *(int *)(pcVar1 + 0x228) + *(int *)(pcVar1 + 0x21c))) {
      if ((*(int *)(pcVar1 + 0x214) == 0) || (*(int *)(pcVar1 + 0x204) == 0)) {
        cVar3 = pcVar1[0x20a];
        local_74 = (undefined1)*(undefined2 *)(pcVar1 + 0x208);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(pcVar1 + 0x208) >> 8);
      }
      else {
        Font_SetColorRamp((uint)(byte)pcVar1[0x210],(uint)(byte)pcVar1[0x20f],
                          (uint)(byte)pcVar1[0x20e],(uint)(byte)pcVar1[0x213],
                          (uint)(byte)pcVar1[0x212],(uint)(byte)pcVar1[0x211]);
        cVar3 = pcVar1[0x210];
        local_74 = (undefined1)*(undefined2 *)(pcVar1 + 0x20e);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(pcVar1 + 0x20e) >> 8);
      }
      if ((pcVar1[0x2b4] & 1U) != 0) {
        FUN_00452180(2);
        FUN_004abcc0(0x10,cVar3,uStack_73,local_74);
        iVar4 = *(int *)(pcVar1 + 0x228);
        iVar5 = *(int *)(pcVar1 + 0x224) + 1 + *(int *)(pcVar1 + 0x220);
        iVar6 = iVar4;
        if (iVar4 < DAT_0056aac4) {
          iVar6 = DAT_0056aac4;
        }
        iVar2 = iVar4 + *(int *)(pcVar1 + 0x21c);
        if (iVar4 + *(int *)(pcVar1 + 0x21c) < DAT_0056aac4) {
          iVar2 = DAT_0056aac4;
        }
        if (DAT_0056aacc < iVar2) {
          iVar2 = DAT_0056aacc;
        }
        if (DAT_0056aacc < iVar6) {
          iVar6 = DAT_0056aacc;
        }
        Gfx_DrawLine(iVar6,iVar5,iVar2,iVar5,0x10);
      }
    }
  }
  FUN_00452150();
  return;
}

