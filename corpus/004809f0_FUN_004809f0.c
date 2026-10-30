
void FUN_004809f0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0043a7a0(DAT_00571280,s_ImageOptionBg_0054e908);
  piVar2 = (int *)FUN_004699f0(s_OPT_ZOOM_DST_0054e918);
  if (DAT_00563d64 != 0) {
    PlayerCfg_Save();
  }
  FUN_0046d870();
  FUN_00468ea0();
  if (((g_MpModeFlag != 0) && (piVar2 != (int *)0x0)) && (iVar1 != 0)) {
    FUN_0043aac0(DAT_00571280,s_WndStarBaseOptions_00556bf0);
    FUN_00480f20();
    Ui_ShowWindow(DAT_00571280,s_WndStarBase_0054e768,0);
    FUN_0043a8d0(DAT_00571280,s_WndStarBase_0054e768);
    FUN_004398b0(DAT_00571280,iVar1,0);
    FUN_004405e0(DAT_00571280,iVar1,s_WndStarBase_0054e768,*piVar2,piVar2[1],0,0,piVar2[2] - *piVar2
                 ,piVar2[3] - piVar2[1],0x280,0x1e0,0,0x1a,FUN_004809c0,FUN_00470f10);
    return;
  }
  FUN_004809c0();
  return;
}

