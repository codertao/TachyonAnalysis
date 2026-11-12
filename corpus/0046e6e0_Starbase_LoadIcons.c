
/* sweep: guess */

void Starbase_LoadIcons(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_005896f8 != 0) {
    puVar2 = (undefined4 *)(DAT_005896fc + 100);
    do {
      iVar1 = Ui_LoadImageCached(DAT_005879a0,puVar2 + -9,puVar2[1],puVar2[-1],*puVar2,puVar2[3]);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x167c) = *(uint *)(iVar1 + 0x167c) | 4;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x1d;
    } while (uVar3 < DAT_005896f8);
  }
  return;
}

