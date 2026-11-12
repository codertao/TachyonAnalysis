
/* refine: asm: plot 8 symmetric points (8 bpp) */

undefined4 __fastcall SwAsm_CircleOctants8(undefined4 param_1)

{
  undefined4 in_EAX;
  
  SwAsm_CirclePlot8(param_1);
  SwAsm_CirclePlot8();
  SwAsm_CirclePlot8();
  SwAsm_CirclePlot8();
  SwAsm_CirclePlot8();
  SwAsm_CirclePlot8();
  SwAsm_CirclePlot8();
  SwAsm_CirclePlot8();
  return in_EAX;
}

