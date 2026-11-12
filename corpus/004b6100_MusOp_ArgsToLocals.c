
/* refine: op 56 */

void MusOp_ArgsToLocals(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  byte *unaff_ESI;
  
  bVar1 = *unaff_ESI;
  iVar5 = DAT_00669480 + *(int *)(DAT_0066a62c + 0x3c);
  iVar3 = (uint)bVar1 * 4;
  do {
    *(undefined4 *)(iVar5 + -4 + iVar3) = *(undefined4 *)(unaff_EBP + (uint)bVar1 * -4 + -4 + iVar3)
    ;
    iVar4 = iVar3 + -4;
    bVar2 = 3 < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}

