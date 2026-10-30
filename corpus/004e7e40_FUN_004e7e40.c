
void FUN_004e7e40(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  uint *unaff_EDI;
  
  iVar2 = 0x100;
  do {
    *unaff_EDI = CONCAT31((int3)((uint)(CONCAT31((int3)(((uint)*(byte *)(DAT_004e727c + unaff_ESI)
                                                        << ((byte)DAT_004e7268 & 0x1f)) >> 8),
                                                 *(undefined1 *)(DAT_004e7294 + unaff_ESI)) <<
                                       ((byte)DAT_004e7280 & 0x1f)) >> 8),
                          *(undefined1 *)(DAT_004e72ac + unaff_ESI)) >>
                 (8U - (char)DAT_004e7298 & 0x1f) & 0xffff;
    unaff_ESI = unaff_ESI + 3;
    unaff_EDI = unaff_EDI + 1;
    iVar3 = iVar2 + -1;
    bVar1 = 0 < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}

