
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (x0, y0, x1, y1, color) */

void __cdecl call_Sw_DrawLine(int x0,int y0,int x1,int y1,uint color)

{
  _DAT_005a6308 = color;
  Sw_DrawLine(x0,y0,x1,y1);
  return;
}

