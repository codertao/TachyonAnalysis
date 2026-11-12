
/* refine: asm: 256-entry search, distance = sq[dr]+sq[dg]+sq[db] (table 0x4e3870) */

int PalAsm_FindNearest(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  DAT_004e302b = 0x100000;
  iVar3 = 0xff;
  do {
    iVar1 = (uint)unaff_ESI[2] - (uint)unaff_EDI[5];
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = (uint)unaff_ESI[1] - (uint)unaff_EDI[4];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    DAT_004e3000 = *(int *)(&DAT_004e3870 + iVar1 * 4) + *(int *)(&DAT_004e3870 + iVar2 * 4);
    iVar1 = (uint)*unaff_ESI - (uint)unaff_EDI[3];
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (*(int *)(&DAT_004e3870 + iVar1 * 4) + DAT_004e3000 < DAT_004e302b) {
      DAT_004e302b = *(int *)(&DAT_004e3870 + iVar1 * 4) + DAT_004e3000;
      DAT_004e302f = iVar3;
    }
    iVar3 = iVar3 + -1;
    unaff_EDI = unaff_EDI + 3;
  } while (iVar3 != 0);
  return 0x100 - DAT_004e302f;
}

