
void FUN_00471170(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004699f0(s_OPT_ZOOM_DST_0054e918);
  if (DAT_005a4b4c == 0) {
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_0043a7a0(&DAT_00583420,s_ImageOptionBg_0054e908);
      if (iVar2 != 0) {
        FUN_004398b0(&DAT_00583420,iVar2,0);
        FUN_004405e0(&DAT_00583420,iVar2,s_WndStarBase_0054e768,0,0,*piVar1,piVar1[1],0x280,0x1e0,
                     piVar1[2] - *piVar1,piVar1[3] - piVar1[1],0,0x11,FUN_00471140,0);
        return;
      }
    }
    FUN_00471140();
  }
  return;
}

