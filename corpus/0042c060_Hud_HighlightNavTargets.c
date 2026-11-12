
/* sweep */

void Hud_HighlightNavTargets(void)

{
  int iVar1;
  
  iVar1 = ObjDisplay_ShouldShow();
  if (iVar1 != 0) {
    HudWidget_Queue(iVar1,2,DAT_005a6324 & 0xff);
  }
  if (DAT_005b3318 != 0) {
    HudWidget_Queue(DAT_005b3318,2,DAT_005a6324 & 0xff);
  }
  return;
}

