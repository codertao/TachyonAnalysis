
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: asm, reg-passed args */

void FontAsm_DrawGlyphClipped(void)

{
  int in_EAX;
  int *unaff_EDI;
  
  DAT_004e54a8 = (ushort *)(in_EAX * 8 + unaff_EDI[1]);
  if (*(char *)((int)DAT_004e54a8 + 5) == '\0') {
    DAT_004e54a8 = (ushort *)unaff_EDI[1];
  }
  _DAT_004e54b0 = (uint)(byte)DAT_004e54a8[2];
  DAT_004e54ac = (uint)DAT_004e54a8[3] * unaff_EDI[2] + (uint)*DAT_004e54a8 + *unaff_EDI;
  DAT_004e54a4 = DAT_004e54a0;
  DAT_004e54bc = DAT_004e5574;
  do {
    DAT_004e54b8 = DAT_004e5570;
    if (DAT_00604464 <= DAT_004e54bc) {
      if (DAT_0060446c <= DAT_004e54bc) {
        return;
      }
      (*DAT_004e54b4)();
    }
    DAT_004e54bc = DAT_004e54bc + 1;
    DAT_004e54a4 = DAT_004e54a4 + DAT_00604490;
    DAT_004e54ac = DAT_004e54ac + unaff_EDI[2];
    _DAT_004e54b0 = _DAT_004e54b0 - 1;
  } while (_DAT_004e54b0 != 0);
  return;
}

