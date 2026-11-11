
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl
Font_DrawStringClippedShadow(char *text,void *font,int x,int y,int color,int style,int flags)

{
  Font_DrawStringClipped(text,font,x + 1,y + 1,DAT_005a632a,1,flags);
  Font_DrawStringClipped(text,font,x,y,(byte)color,(byte)style,flags);
  return;
}

