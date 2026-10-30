
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea969(void)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  bVar6 = in_EAX << 0xf < 0;
  DAT_005a62e8 = CONCAT22((short)in_EAX,(short)in_EAX);
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

