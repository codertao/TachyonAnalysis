
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (cx@EAX, cy@EBX, r@ECX, colorIdx@DL) midpoint circle, per-bpp plotters */

void __cdecl Sw_DrawCircle(int cx,int cy,int r,int colorIdx)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar2;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  
  if (GLBL_some_str != 0) {
    DAT_004eba70 = (undefined1)colorIdx;
    DAT_004eba68 = *(undefined4 *)(&DAT_005a63c0 + (colorIdx & 0xffU) * 4);
    DAT_004eba64 = *(undefined4 *)(&DAT_005a6440 + (colorIdx & 0xffU) * 4);
    DAT_004eba6c = *(undefined4 *)(&DAT_005a6340 + (colorIdx & 0xffU) * 4);
    _DAT_004eba58 = cx;
    _DAT_004eba5c = cy;
    DAT_004eba60 = r;
    if (DAT_00604488 == 0x10) {
      iVar1 = SwAsm_CircleOctants16();
      iVar2 = extraout_ECX;
    }
    else if (DAT_00604488 == 0x20) {
      iVar1 = SwAsm_CircleOctants32();
      iVar2 = extraout_ECX_00;
    }
    else {
      iVar1 = SwAsm_CircleOctants8();
      iVar2 = extraout_ECX_01;
    }
    while (iVar1 <= r) {
      if (-1 < iVar2) {
        r = r + -1;
      }
      if (DAT_00604488 == 0x10) {
        iVar1 = SwAsm_CircleOctants16();
        iVar2 = extraout_ECX_02;
      }
      else if (DAT_00604488 == 0x20) {
        iVar1 = SwAsm_CircleOctants32();
        iVar2 = extraout_ECX_03;
      }
      else {
        iVar1 = SwAsm_CircleOctants8();
        iVar2 = extraout_ECX_04;
      }
    }
    return;
  }
  return;
}

