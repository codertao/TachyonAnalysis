
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: asm, reg-passed args */

void FontAsm_DrawGlyph(void)

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
  do {
    (*DAT_004e54b4)();
    DAT_004e54a4 = DAT_004e54a4 + DAT_00604490;
    DAT_004e54ac = DAT_004e54ac + unaff_EDI[2];
    _DAT_004e54b0 = _DAT_004e54b0 - 1;
  } while (_DAT_004e54b0 != 0);
  return;
}

