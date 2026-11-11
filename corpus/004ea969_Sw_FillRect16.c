
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (color@EAX) 16 bpp */

void __cdecl Sw_FillRect16(uint color)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  bVar6 = (int)(color << 0xf) < 0;
  DAT_005a62e8 = CONCAT22((short)color,(short)color);
  FUN_004e9ee0();
  uVar1 = DAT_005a62e8;
  if (!bVar6) {
    puVar5 = (undefined4 *)(DAT_005a62c4 + (DAT_005a62cc * DAT_005a62dc + DAT_005a62d8) * 2);
    _DAT_004e9e8c = (DAT_005a62cc - DAT_005a62e0) * 2;
    iVar4 = DAT_005a62e4;
    do {
      uVar3 = DAT_005a62e0;
      for (uVar2 = DAT_005a62e0 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = uVar1;
        puVar5[1] = uVar1;
        puVar5 = puVar5 + 2;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(short *)puVar5 = (short)uVar1;
        puVar5 = (undefined4 *)((int)puVar5 + 2);
      }
      puVar5 = (undefined4 *)((int)puVar5 + _DAT_004e9e8c);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

