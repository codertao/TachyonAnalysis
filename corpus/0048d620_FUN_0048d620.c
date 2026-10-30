
void FUN_0048d620(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_74;
  undefined1 uStack_73;
  byte bStack_72;
  undefined1 local_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined4 local_64 [25];
  
  iVar1 = DAT_0056aac0;
  DAT_0056aae0 = DAT_005a680c;
  FUN_004add80(&DAT_0056aae0);
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2b8)) {
    if ((*(int *)(iVar1 + 0x228) <= DAT_0056aacc) &&
       (DAT_0056aac4 <= *(int *)(iVar1 + 0x21c) + *(int *)(iVar1 + 0x228))) {
      if ((*(int *)(iVar1 + 0x214) == 0) || (*(int *)(iVar1 + 0x204) == 0)) {
        iVar5 = *(int *)(iVar1 + 0x200);
        bStack_72 = *(byte *)(iVar1 + 0x20a);
        local_74 = (undefined1)*(undefined2 *)(iVar1 + 0x208);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(iVar1 + 0x208) >> 8);
        uStack_6a = *(undefined1 *)(iVar1 + 0x20d);
        local_6c = (undefined1)*(undefined2 *)(iVar1 + 0x20b);
        uStack_6b = (undefined1)((ushort)*(undefined2 *)(iVar1 + 0x20b) >> 8);
      }
      else {
        FUN_004e7194(*(undefined1 *)(iVar1 + 0x210),*(undefined1 *)(iVar1 + 0x20f),
                     *(undefined1 *)(iVar1 + 0x20e),*(undefined1 *)(iVar1 + 0x213),
                     *(undefined1 *)(iVar1 + 0x212),*(undefined1 *)(iVar1 + 0x211));
        bStack_72 = *(byte *)(iVar1 + 0x210);
        iVar5 = *(int *)(iVar1 + 0x204);
        local_74 = (undefined1)*(undefined2 *)(iVar1 + 0x20e);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(iVar1 + 0x20e) >> 8);
        uStack_6a = *(undefined1 *)(iVar1 + 0x213);
        local_6c = (undefined1)*(undefined2 *)(iVar1 + 0x211);
        uStack_6b = (undefined1)((ushort)*(undefined2 *)(iVar1 + 0x211) >> 8);
      }
      if ((DAT_00564ae4 == 0) || (*(int *)(*(int *)(iVar1 + 0x200) + 0x238) == 0)) {
        puVar7 = &DAT_005a67a0;
        puVar8 = local_64;
        for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar7 = &DAT_0056aae0;
        puVar8 = &DAT_005a67a0;
        for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_00452180(0x100);
        FUN_004e7194(bStack_72,uStack_73,local_74,uStack_6a,uStack_6b,local_6c);
        FUN_004e68ae(iVar1,iVar5 + 0x50,*(undefined4 *)(iVar1 + 0x228),
                     *(undefined4 *)(iVar1 + 0x224),0,0,0);
        puVar7 = local_64;
        puVar8 = &DAT_005a67a0;
        for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        FUN_00452180(1);
        uVar6 = ((uint)bStack_72 << 8 | CONCAT11(bStack_72,uStack_73) & 0xff) << 8 |
                CONCAT12(bStack_72,CONCAT11(uStack_73,local_74)) & 0xff;
        *(uint *)(iVar5 + 600) = uVar6;
        FUN_004ad470(DAT_0056aac4,DAT_0056aac8,DAT_0056aacc,DAT_0056aad0);
        FUN_004ae1a0(iVar1,*(undefined4 *)(iVar5 + 0x238),*(undefined4 *)(iVar1 + 0x228),
                     *(undefined4 *)(iVar1 + 0x224),uVar6,*(undefined4 *)(iVar5 + 0x24c),
                     iVar5 + 0x23c);
        FUN_004ad470(DAT_005a67c0,DAT_005a67c4,DAT_005a67c8,DAT_005a67cc);
      }
    }
  }
  FUN_00452150();
  FUN_00451e10(&DAT_005a67a0);
  for (iVar1 = DAT_0056aac0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2b8)) {
    if ((*(int *)(iVar1 + 0x228) <= DAT_0056aacc) &&
       (DAT_0056aac4 <= *(int *)(iVar1 + 0x228) + *(int *)(iVar1 + 0x21c))) {
      if ((*(int *)(iVar1 + 0x214) == 0) || (*(int *)(iVar1 + 0x204) == 0)) {
        uVar3 = *(undefined1 *)(iVar1 + 0x20a);
        local_74 = (undefined1)*(undefined2 *)(iVar1 + 0x208);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(iVar1 + 0x208) >> 8);
      }
      else {
        FUN_004e7194(*(undefined1 *)(iVar1 + 0x210),*(undefined1 *)(iVar1 + 0x20f),
                     *(undefined1 *)(iVar1 + 0x20e),*(undefined1 *)(iVar1 + 0x213),
                     *(undefined1 *)(iVar1 + 0x212),*(undefined1 *)(iVar1 + 0x211));
        uVar3 = *(undefined1 *)(iVar1 + 0x210);
        local_74 = (undefined1)*(undefined2 *)(iVar1 + 0x20e);
        uStack_73 = (undefined1)((ushort)*(undefined2 *)(iVar1 + 0x20e) >> 8);
      }
      if ((*(byte *)(iVar1 + 0x2b4) & 1) != 0) {
        FUN_00452180(2);
        FUN_004abcc0(0x10,uVar3,uStack_73,local_74);
        iVar4 = *(int *)(iVar1 + 0x228);
        iVar5 = *(int *)(iVar1 + 0x224) + 1 + *(int *)(iVar1 + 0x220);
        iVar2 = iVar4 + *(int *)(iVar1 + 0x21c);
        if (iVar4 < DAT_0056aac4) {
          iVar4 = DAT_0056aac4;
        }
        if (iVar2 < DAT_0056aac4) {
          iVar2 = DAT_0056aac4;
        }
        if (DAT_0056aacc < iVar2) {
          iVar2 = DAT_0056aacc;
        }
        if (DAT_0056aacc < iVar4) {
          iVar4 = DAT_0056aacc;
        }
        FUN_004abf90(iVar4,iVar5,iVar2,iVar5,0x10);
      }
    }
  }
  FUN_00452150();
  return;
}

