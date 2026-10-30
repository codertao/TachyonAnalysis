
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce9f3(void)

{
  byte bVar1;
  uint3 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar6 = &DAT_004c9402;
  iVar4 = 0;
  _DAT_004cc6f0 = 0x18;
  do {
    if (*(char *)((int)puVar6 + 0x3e) == '\0') {
      puVar6[0xe] = 0;
    }
    else {
      puVar6[0xe] = (int)(puVar6[0xd] - puVar6[2]) >> 2;
      iVar3 = puVar6[9];
      bVar1 = (&DAT_004cb370)[iVar3];
      uVar2 = (uint3)((uint)*(undefined4 *)(&DAT_004cb230 + (uint)bVar1 * 4) >> 8);
      *(uint *)(&DAT_004cb170)[iVar4 * 2] =
           (uint)uVar2 |
           CONCAT31(uVar2,*(undefined1 *)((int)(&DAT_004cb170)[iVar4 * 2] + 3)) << 0x18;
      iVar3 = (iVar3 << (bVar1 & 0x1f)) >> 3;
      puVar7 = (undefined4 *)(&DAT_004cb0b0)[iVar4 * 2];
      *puVar7 = *(undefined4 *)(&DAT_004dfdd0 + iVar3 * 8);
      puVar7[1] = *(undefined4 *)(&DAT_004dfdd4 + iVar3 * 8);
      iVar3 = puVar6[10];
      bVar1 = (&DAT_004cb370)[iVar3];
      uVar2 = (uint3)((uint)*(undefined4 *)(&DAT_004cb230 + (uint)bVar1 * 4) >> 8);
      *(uint *)(&DAT_004cb174)[iVar4 * 2] =
           (uint)uVar2 |
           CONCAT31(uVar2,*(undefined1 *)((int)(&DAT_004cb174)[iVar4 * 2] + 3)) << 0x18;
      iVar3 = (iVar3 << (bVar1 & 0x1f)) >> 3;
      puVar7 = (undefined4 *)(&DAT_004cb0b4)[iVar4 * 2];
      *puVar7 = *(undefined4 *)(&DAT_004dfdd0 + iVar3 * 8);
      puVar7[1] = *(undefined4 *)(&DAT_004dfdd4 + iVar3 * 8);
      *(undefined1 *)((int)puVar6 + 0x3e) = 0;
    }
    puVar6 = puVar6 + 0x10;
    iVar4 = iVar4 + 1;
    _DAT_004cc6f0 = _DAT_004cc6f0 + -1;
  } while (_DAT_004cc6f0 != 0);
  puVar7 = &DAT_004c9402;
  puVar6 = &DAT_004c9a02;
  iVar4 = 0;
  _DAT_004cc6f0 = 0x18;
  do {
    if (*(char *)(puVar6 + 0xf) != '\0') {
      puVar5 = puVar6;
      puVar8 = puVar7;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)(puVar7 + 0xf) = 1;
      *(undefined1 *)((int)puVar7 + 0x3e) = 0;
      *(undefined1 *)(puVar6 + 0xf) = 0;
      *(undefined4 *)(&DAT_004caff0)[iVar4] = puVar7[0xd];
      *(undefined4 *)(&DAT_004cb050)[iVar4] = *puVar7;
      iVar3 = puVar7[9];
      bVar1 = (&DAT_004cb370)[iVar3];
      uVar2 = (uint3)((uint)*(undefined4 *)(&DAT_004cb230 + (uint)bVar1 * 4) >> 8);
      *(uint *)(&DAT_004cb170)[iVar4 * 2] =
           (uint)uVar2 |
           CONCAT31(uVar2,*(undefined1 *)((int)(&DAT_004cb170)[iVar4 * 2] + 3)) << 0x18;
      iVar3 = (iVar3 << (bVar1 & 0x1f)) >> 3;
      puVar5 = (undefined4 *)(&DAT_004cb0b0)[iVar4 * 2];
      *puVar5 = *(undefined4 *)(&DAT_004dfdd0 + iVar3 * 8);
      puVar5[1] = *(undefined4 *)(&DAT_004dfdd4 + iVar3 * 8);
      iVar3 = puVar7[10];
      bVar1 = (&DAT_004cb370)[iVar3];
      uVar2 = (uint3)((uint)*(undefined4 *)(&DAT_004cb230 + (uint)bVar1 * 4) >> 8);
      *(uint *)(&DAT_004cb174)[iVar4 * 2] =
           (uint)uVar2 |
           CONCAT31(uVar2,*(undefined1 *)((int)(&DAT_004cb174)[iVar4 * 2] + 3)) << 0x18;
      iVar3 = (iVar3 << (bVar1 & 0x1f)) >> 3;
      puVar5 = (undefined4 *)(&DAT_004cb0b4)[iVar4 * 2];
      *puVar5 = *(undefined4 *)(&DAT_004dfdd0 + iVar3 * 8);
      puVar5[1] = *(undefined4 *)(&DAT_004dfdd4 + iVar3 * 8);
    }
    puVar7 = puVar7 + 0x10;
    puVar6 = puVar6 + 0x10;
    iVar4 = iVar4 + 1;
    _DAT_004cc6f0 = _DAT_004cc6f0 + -1;
  } while (_DAT_004cc6f0 != 0);
  puVar7 = &DAT_004ca002;
  puVar6 = &DAT_004ca5a2;
  iVar4 = 0x18;
  do {
    if (*(char *)(puVar6 + 0xf) != '\0') {
      puVar5 = puVar6;
      puVar8 = puVar7;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)(puVar6 + 0xf) = 0;
    }
    puVar7 = puVar7 + 0xf;
    puVar6 = puVar6 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

