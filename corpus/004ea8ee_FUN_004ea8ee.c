
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea8ee(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  uVar2 = CONCAT11((char)in_EAX,(char)in_EAX);
  bVar7 = CONCAT22((short)((uint)in_EAX >> 0x10),uVar2) << 0xf < 0;
  DAT_005a62e8 = CONCAT22(uVar2,uVar2);
  FUN_004e9ee0();
  uVar1 = DAT_005a62e8;
  if (!bVar7) {
    puVar6 = (undefined4 *)(DAT_005a62c4 + DAT_005a62cc * DAT_005a62dc + DAT_005a62d8);
    _DAT_004e9e8c = DAT_005a62cc - DAT_005a62e0;
    iVar5 = DAT_005a62e4;
    do {
      uVar4 = DAT_005a62e0;
      for (uVar3 = DAT_005a62e0 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar6 = (char)uVar1;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar6 = (undefined4 *)((int)puVar6 + _DAT_004e9e8c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

