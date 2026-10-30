
void FUN_0047f680(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0043a7a0(&DAT_00583420,s_ImageNewsBg_0054e998);
  piVar2 = (int *)FUN_004699f0(s_NEWS_ZOOM_DST_0054e9a4);
  FUN_00468ea0();
  FUN_0046d870();
  if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
    FUN_0043aac0(&DAT_00583420,s_WndStarBaseNews_00552c88);
    Ui_ShowWindow(&DAT_00583420,s_WndStarBase_0054e768,0);
    FUN_0043a8d0(&DAT_00583420,s_WndStarBase_0054e768);
    FUN_004398b0(&DAT_00583420,iVar1,0);
    FUN_004405e0(&DAT_00583420,iVar1,s_WndStarBase_0054e768,*piVar2,piVar2[1],0,0,
                 piVar2[2] - *piVar2,piVar2[3] - piVar2[1],0x280,0x1e0,0,0x1a,FUN_0047f650,
                 FUN_00470f10);
    return;
  }
  FUN_0047f650();
  return;
}

