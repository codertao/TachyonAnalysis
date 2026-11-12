
/* sweep */

void Hud_ArrowToNav(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = ObjDisplay_ShouldShow();
  if (iVar1 != 0) {
    Hud_DrawOffscreenArrow(param_1,iVar1,24000,100,1,0xffff00);
  }
  return;
}

