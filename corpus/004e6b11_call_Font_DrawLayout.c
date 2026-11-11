
void __cdecl
call_Font_DrawLayout(void *layout,void *font,int color,int style,int firstLine,int maxLines)

{
  Font_DrawLayout(layout,font,(byte)color,(byte)style,firstLine,maxLines);
  return;
}

