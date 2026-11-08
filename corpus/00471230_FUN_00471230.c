
void FUN_00471230(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004699f0(s_SLOT_ZOOM_DST_0054e934);
  if (DAT_005a4b4c == 0) {
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_0043a7a0(&GLBL_UI_ELEM_LIST,s_ImageSlotBg_0054e928);
      if (iVar2 != 0) {
        FUN_004398b0(&GLBL_UI_ELEM_LIST,iVar2,0);
        FUN_004405e0(&GLBL_UI_ELEM_LIST,iVar2,s_WndStarBase_0054e768,0,0,*piVar1,piVar1[1],0x280,
                     0x1e0,piVar1[2] - *piVar1,piVar1[3] - piVar1[1],0,0x11,FUN_00471140,0);
        return;
      }
    }
    FUN_00471200();
  }
  return;
}

