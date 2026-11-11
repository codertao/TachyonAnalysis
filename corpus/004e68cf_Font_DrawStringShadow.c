
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* draw at (x+1, y+1) in colour 0x5a632a, then normally */

void __cdecl Font_DrawStringShadow(char *text,void *font,int x,int y,int color,int style)

{
  Font_DrawString(text,font,x + 1,y + 1,DAT_005a632a,1);
  Font_DrawString(text,font,x,y,(byte)color,(byte)style);
  return;
}

