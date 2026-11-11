
void __cdecl
call_Font_DrawStringClipped(char *text,void *font,int x,int y,int color,int style,int flags)

{
  Font_DrawStringClipped(text,font,x,y,(byte)color,(byte)style,flags);
  return;
}

