
/* sweep */

void Hud_ArrowToDebugFocus(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_005b3318 != 0) {
    iVar1 = ObjDisplay_ShouldShow();
    if ((iVar1 == 0) && (DAT_0058f488 != 0)) {
      Hud_DrawOffscreenArrow(param_1,DAT_005b3318,24000,100,1,0xffff00);
    }
  }
  return;
}

