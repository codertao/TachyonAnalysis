
void __cdecl call_Font_DrawString(char *text,void *font,int x,int y,int color,int style)

{
  Font_DrawString(text,font,x,y,(byte)color,(byte)style);
  return;
}

