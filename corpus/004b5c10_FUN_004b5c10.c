
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5c10(void)

{
  byte bVar1;
  int iVar2;
  undefined *unaff_EBP;
  byte *unaff_ESI;
  bool bVar3;
  byte *pbStack_28;
  undefined4 uStack_24;
  byte *pbStack_1c;
  undefined *puStack_18;
  
  _DAT_0066a628 = 0x20;
  do {
    bVar3 = _DAT_00669608 != 0;
    _DAT_006695a8 = unaff_ESI;
    if (bVar3) {
      uStack_24 = DAT_006695a4;
      pbStack_28 = unaff_ESI;
      pbStack_1c = unaff_ESI;
      puStack_18 = unaff_EBP;
      FUN_004b62c0();
      unaff_EBP = puStack_18;
      unaff_ESI = pbStack_1c;
    }
    bVar3 = bVar3 && (undefined1 *)0xfffffff7 < &pbStack_28;
    bVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    (*(code *)(&PTR_FUN_0055ee5c)[bVar1])();
    iVar2 = _DAT_0066a628;
  } while ((!bVar3) &&
          ((_DAT_0066a628 = _DAT_0066a628 + -1, _DAT_0066a628 != 0 && 0 < iVar2 ||
           (unaff_EBP != PTR_DAT_0055ee54))));
  return;
}

