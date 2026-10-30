
void FUN_004714a0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0043a7a0(&DAT_00583420,s_ImageNewsBg_0054e998);
  piVar2 = (int *)FUN_004699f0(s_NEWS_ZOOM_DST_0054e9a4);
  if (DAT_005a4b4c == 0) {
    if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
      FUN_004398b0(&DAT_00583420,iVar1,0);
      FUN_004405e0(&DAT_00583420,iVar1,s_WndStarBase_0054e768,0,0,*piVar2,piVar2[1],0x280,0x1e0,
                   piVar2[2] - *piVar2,piVar2[3] - piVar2[1],0,0x11,FUN_00471470,0);
      return;
    }
    FUN_00471470();
  }
  return;
}

