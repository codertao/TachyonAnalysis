
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: asm: 32-bpp clipped rect fill */

void SwAsm_FillRect32(void)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 in_CF;
  
  DAT_005a62e8 = in_EAX;
  SwAsm_ClipRect();
  uVar1 = DAT_005a62e8;
  if (!(bool)in_CF) {
    puVar4 = (undefined4 *)(DAT_005a62c4 + (DAT_005a62cc * DAT_005a62dc + DAT_005a62d8) * 4);
    _DAT_004e9e8c = (DAT_005a62cc - DAT_005a62e0) * 4;
    iVar2 = DAT_005a62e0;
    iVar3 = DAT_005a62e4;
    do {
      do {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      puVar4 = (undefined4 *)((int)puVar4 + _DAT_004e9e8c);
      iVar3 = iVar3 + -1;
      iVar2 = DAT_005a62e0;
    } while (iVar3 != 0);
  }
  return;
}

