
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: asm: find marker rows in the font bitmap, then FontAsm_ScanGlyphCols per band */

void FontAsm_ScanGlyphRows(void)

{
  char *pcVar1;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  DAT_004e54d0 = 0;
  DAT_004e5550 = 0;
  DAT_004e5558 = unaff_EBP;
  _DAT_004e5560 = unaff_ESI;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  _DAT_004e555c = 0x10;
  DAT_004e5568 = 0;
  DAT_004e5ebc = '\0';
  do {
    DAT_004e5564 = DAT_004e5568;
    _DAT_004e5554 = (char *)(DAT_004e5568 * *(int *)(unaff_EDI + 8) + unaff_ESI);
    pcVar1 = _DAT_004e5554;
    do {
      if (*pcVar1 == '\x01') goto LAB_004e607f;
      DAT_004e5568 = DAT_004e5568 + 1;
      pcVar1 = pcVar1 + *(int *)(unaff_EDI + 8);
    } while (DAT_004e5568 < *(int *)(unaff_EDI + 0xc));
    DAT_004e5ebc = '\x01';
LAB_004e607f:
    DAT_004e556c = DAT_004e5568 - DAT_004e5564;
    FontAsm_ScanGlyphCols();
    DAT_004e5558 = DAT_004e5558 + 0x80;
    DAT_004e5564 = DAT_004e5568 + 2;
    DAT_004e5568 = DAT_004e5564;
    if ((DAT_004e5ebc == '\x01') || (_DAT_004e555c = _DAT_004e555c + -1, _DAT_004e555c == 0)) {
      *(char *)(unaff_EDI + 0x19) = (char)DAT_004e54d0;
      *(undefined4 *)(unaff_EDI + 0x14) = DAT_004e5550;
      return;
    }
  } while( true );
}

