
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: op 10 (memcpy) */

void MusOp_CopyToGlobal(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  byte *unaff_ESI;
  
  iVar1 = *(int *)(unaff_EBP + -4);
  iVar5 = (uint)*unaff_ESI + DAT_006695b0;
  uVar3 = (uint)unaff_ESI[1];
  do {
    *(undefined4 *)(iVar5 + -4 + uVar3) = *(undefined4 *)(iVar1 + -4 + uVar3);
    uVar4 = uVar3 - 4;
    bVar2 = 3 < (int)uVar3;
    uVar3 = uVar4;
  } while (uVar4 != 0 && bVar2);
  _DAT_006695b4 = 1;
  return;
}

