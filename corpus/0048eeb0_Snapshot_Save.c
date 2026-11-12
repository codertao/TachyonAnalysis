
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 Snapshot_Save(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  uint *puVar21;
  undefined4 *puVar22;
  int local_10;
  int local_c;
  
  if ((DAT_005a680c == 0) || (DAT_005a6814 == 0)) {
    bVar6 = false;
    Gfx_LockSurface();
    if (DAT_005a680c == 0) {
      return 0xffffffff;
    }
  }
  else {
    bVar6 = true;
  }
  if (DAT_005a67e8 == 0x20) {
    iVar14 = (DAT_005a67ac * DAT_005a67a8 + 0x12) * 3;
    puVar7 = (undefined1 *)Mem_Alloc(iVar14,4,0);
    if (puVar7 == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    *puVar7 = 0x42;
    puVar7[1] = 0x4d;
    *(int *)(puVar7 + 2) = (DAT_005a67ac * DAT_005a67a8 + 0x12) * 3;
    *(undefined2 *)(puVar7 + 6) = 0;
    *(undefined2 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 10) = 0x36;
    *(undefined4 *)(puVar7 + 0xe) = 0x28;
    *(int *)(puVar7 + 0x12) = DAT_005a67a8;
    *(int *)(puVar7 + 0x16) = DAT_005a67ac;
    *(undefined2 *)(puVar7 + 0x1a) = 1;
    *(undefined2 *)(puVar7 + 0x1c) = 0x18;
    *(undefined4 *)(puVar7 + 0x1e) = 0;
    *(undefined4 *)(puVar7 + 0x22) = 0;
    *(undefined4 *)(puVar7 + 0x26) = 0xb12;
    *(undefined4 *)(puVar7 + 0x2a) = 0xb12;
    *(undefined4 *)(puVar7 + 0x2e) = 0;
    *(undefined4 *)(puVar7 + 0x32) = 0;
    puVar8 = puVar7 + 0x36;
    puVar18 = (undefined1 *)((DAT_005a67ac + -1) * DAT_005a67f0 + DAT_005a67a0);
    if (0 < DAT_005a67ac) {
      local_10 = DAT_005a67ac;
      iVar13 = DAT_005a67a8;
      do {
        puVar12 = puVar18;
        iVar20 = iVar13;
        if (0 < iVar13) {
          do {
            uVar1 = puVar12[1];
            uVar2 = puVar12[2];
            *puVar8 = *puVar12;
            puVar12 = puVar12 + 4;
            puVar8[1] = uVar1;
            puVar8[2] = uVar2;
            puVar8 = puVar8 + 3;
            iVar20 = iVar20 + -1;
            iVar13 = DAT_005a67a8;
          } while (iVar20 != 0);
        }
        puVar18 = puVar18 + -DAT_005a67f0;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    Snapshot_NextName(&DAT_0056aaa0,&DAT_00559d50);
    File_WriteAll(&DAT_0056aaa0,puVar7,iVar14);
    OurFreeMem(puVar7);
  }
  else if (DAT_005a67e8 == 0x10) {
    iVar14 = (DAT_005a67ac * DAT_005a67a8 + 0x12) * 3;
    puVar7 = (undefined1 *)Mem_Alloc(iVar14,4,0);
    if (puVar7 == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    *puVar7 = 0x42;
    puVar7[1] = 0x4d;
    *(int *)(puVar7 + 2) = (DAT_005a67ac * DAT_005a67a8 + 0x12) * 3;
    *(undefined2 *)(puVar7 + 6) = 0;
    *(undefined2 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 10) = 0x36;
    *(undefined4 *)(puVar7 + 0xe) = 0x28;
    *(int *)(puVar7 + 0x12) = DAT_005a67a8;
    *(int *)(puVar7 + 0x16) = DAT_005a67ac;
    *(undefined2 *)(puVar7 + 0x1a) = 1;
    *(undefined2 *)(puVar7 + 0x1c) = 0x18;
    *(undefined4 *)(puVar7 + 0x1e) = 0;
    *(undefined4 *)(puVar7 + 0x22) = 0;
    *(undefined4 *)(puVar7 + 0x26) = 0xb12;
    *(undefined4 *)(puVar7 + 0x2a) = 0xb12;
    *(undefined4 *)(puVar7 + 0x2e) = 0;
    *(undefined4 *)(puVar7 + 0x32) = 0;
    pcVar9 = puVar7 + 0x36;
    puVar17 = (uint *)((DAT_005a67ac + -1) * DAT_005a67f0 + DAT_005a67a0);
    if (0 < DAT_005a67ac) {
      local_c = DAT_005a67ac;
      iVar13 = DAT_005a67a8;
      do {
        puVar21 = puVar17;
        local_10 = iVar13;
        if (0 < iVar13) {
          do {
            uVar3 = *puVar21;
            uVar15 = DAT_004e722c & uVar3;
            bVar10 = (byte)DAT_004e7224;
            cVar4 = (char)DAT_004e7220;
            uVar16 = DAT_004e7244 & uVar3;
            bVar11 = (byte)DAT_004e723c;
            cVar5 = (char)DAT_004e7238;
            *pcVar9 = (char)((DAT_004e725c & uVar3) >> ((byte)DAT_004e7254 & 0x1f)) <<
                      (8U - (char)DAT_004e7250 & 0x1f);
            pcVar9[1] = (char)(uVar16 >> (bVar11 & 0x1f)) << (8U - cVar5 & 0x1f);
            pcVar9[2] = (char)(uVar15 >> (bVar10 & 0x1f)) << (8U - cVar4 & 0x1f);
            pcVar9 = pcVar9 + 3;
            local_10 = local_10 + -1;
            iVar13 = DAT_005a67a8;
            puVar21 = (uint *)((int)puVar21 + 2);
          } while (local_10 != 0);
        }
        puVar17 = (uint *)((int)puVar17 - DAT_005a67f0);
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    Snapshot_NextName(&DAT_0056aaa0,&DAT_00559d50);
    File_WriteAll(&DAT_0056aaa0,puVar7,iVar14);
    OurFreeMem(puVar7);
  }
  else {
    DAT_00603108 = DAT_005a67a4;
    _DAT_00603100 = DAT_005a67a8;
    DAT_00603104 = DAT_005a67ac;
    DAT_0060310c = 0x100;
    puVar19 = &DAT_00603180;
    puVar22 = &DAT_00602e00;
    for (iVar14 = 0xc0; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    Snapshot_NextName(&DAT_0056aaa0,&DAT_00559d4c);
    Pcx_Save(&DAT_0056aaa0,DAT_005a67a0);
  }
  if (!bVar6) {
    Gfx_UnlockSurface();
  }
  return 0;
}

