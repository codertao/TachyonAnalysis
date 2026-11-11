
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
call_Sw_DrawLineStyled(int x0,int y0,int x1,int y1,uint color,uint pattern,int patLen,uint flags)

{
  _DAT_005a6308 = color;
  Sw_DrawLineStyled(x0,y0,x1,y1,pattern,patLen,flags);
  return;
}

