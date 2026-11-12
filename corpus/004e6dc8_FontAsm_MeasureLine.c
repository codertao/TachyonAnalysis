
/* refine: asm: width of one line; skips "~N" colour codes, stops at CR/0 */

int FontAsm_MeasureLine(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar4;
  undefined4 unaff_EDI;
  bool bVar5;
  
  DAT_004e5ec4 = 0;
  DAT_004e54b8 = 0;
  iVar3 = 0;
  pbVar4 = unaff_ESI;
  do {
    uVar1 = (uint)*unaff_ESI;
    if (uVar1 == 0) break;
    if (((uVar1 == 0x7e) && (uVar1 = unaff_ESI[1] - 0x30, 0x2f < unaff_ESI[1])) &&
       ((int)uVar1 < 0xb)) {
      iVar3 = iVar3 + 2;
      unaff_ESI = unaff_ESI + 2;
      bVar5 = unaff_ESI == (byte *)0x0;
    }
    else {
      if (uVar1 == 0xd) {
        DAT_004e5ec4 = 1;
        break;
      }
      iVar2 = FontAsm_GlyphAdvance(unaff_EBP,unaff_EDI,pbVar4,unaff_ESI,iVar3);
      DAT_004e54b8 = DAT_004e54b8 + iVar2;
      iVar3 = iVar3 + 1;
      unaff_ESI = unaff_ESI + 1;
      bVar5 = (char)uVar1 == ' ';
    }
  } while (!bVar5);
  if ((char)uVar1 == '\0') {
    DAT_004e5ec2 = 1;
  }
  return DAT_004e54b8;
}

