
/* sweep: guess */

void Vid_BlitOTW_A(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  if ((DAT_005640f8 != (ulonglong *)0x0) && (iVar4 = vid_LockPrimary(), iVar4 != 0)) {
    uVar5 = DAT_006022e8 >> 3;
    uVar8 = 0;
    puVar9 = DAT_005640f8;
    if (DAT_006022ec != 0) {
      do {
        puVar6 = (ulonglong *)(DAT_0060231c * uVar8 + iVar4);
        uVar7 = uVar5;
        puVar10 = puVar9;
        do {
          uVar1 = puVar10[1];
          uVar2 = puVar10[2];
          uVar11 = uVar2 & 0xffffff00000000;
          *puVar6 = *puVar10 & 0xffffff | (*puVar10 & 0xffffff00000000) >> 8 | uVar1 << 0x30;
          uVar3 = puVar10[3];
          puVar6[1] = (uVar1 & 0xffffff) >> 0x10 | (uVar1 & 0xffffff00000000) >> 0x18 |
                      (uVar2 & 0xffffff) << 0x20 | uVar11 << 0x18;
          puVar10 = puVar10 + 4;
          puVar6[2] = uVar11 >> 0x28 | (uVar3 & 0xffffff) << 0x10 | (uVar3 & 0xffffff00000000) << 8;
          puVar6 = puVar6 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar8 = uVar8 + 1;
        puVar9 = (ulonglong *)((int)puVar9 + DAT_006022e8 * 4);
      } while (uVar8 < DAT_006022ec);
    }
    vid_UnlockPrimary();
  }
  return;
}

