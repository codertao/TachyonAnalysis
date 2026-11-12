
/* sweep: asm, reg-passed args */

void FontAsm_MeasureString(void)

{
  char *unaff_ESI;
  
  while( true ) {
    if (*unaff_ESI == '\0') break;
    if (*unaff_ESI == '~') {
      unaff_ESI = unaff_ESI + 2;
    }
    else {
      FontAsm_GlyphAdvance();
      unaff_ESI = unaff_ESI + 1;
    }
  }
  return;
}

