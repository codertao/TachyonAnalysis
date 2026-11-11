
/* sets render flags 0x4e4a28 from arg 6 first */

void __cdecl
call_Sw_DrawTriangleFlags(void *v0,void *v1,void *v2,void *surface,uint color,uint flags)

{
  DAT_004e4a28 = flags;
  Sw_DrawTriangle(v0,v1,v2,surface,color);
  return;
}

