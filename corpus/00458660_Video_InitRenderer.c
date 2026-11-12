
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Video_InitRenderer(void)

{
  undefined4 local_8;
  
  Nop();
  Sw_SelectRasterizer(DAT_0060398c);
  Gfx_InitState();
  DAT_005b2b9c = GLBL_spacesav[0x35] * 0x2000;
  DAT_005a652c = &LAB_00458560;
  if (DAT_005b2b9c < 0x13880000) {
    DAT_005b2b9c = 0x13880000;
  }
  else if (0x493e0000 < DAT_005b2b9c) {
    DAT_005b2b9c = 0x493e0000;
  }
  _DAT_005b2b98 = (float)GLBL_spacesav[0x36] * _DAT_0052e644;
  if ((float)_DAT_0052eaf8 <= _DAT_005b2b98) {
    if ((float)_DAT_0052eaf0 < _DAT_005b2b98) {
      _DAT_005b2b98 = 4.0;
    }
  }
  else {
    _DAT_005b2b98 = 1.0;
  }
  local_8 = (undefined4)(longlong)ROUND(_DAT_005b2b98 * _DAT_0052e544);
  Rend_SwapLodScale(local_8);
  Pipe_Init();
  View_SetScreen(DAT_005a67a8,DAT_005a67ac,0x32);
  Clip_SelectClipper(1);
  Frustum_SetPlanes(&DAT_006b0858,4,0);
  return;
}

