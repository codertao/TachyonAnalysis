
void FUN_0047e6d0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0043a7a0(g_MapUiCtx,s_ImageMapBg_0054e97c);
  piVar2 = (int *)FUN_004699f0(s_MAP_ZOOM_DST_0054e988);
  if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
    FUN_0043aac0(g_MapUiCtx,s_WndStarBaseMap_00552858);
    Ui_ShowWindow(g_MapUiCtx,s_WndStarBase_0054e768,0);
    FUN_0043a8d0(g_MapUiCtx,s_WndStarBase_0054e768);
    FUN_004398b0(g_MapUiCtx,iVar1,0);
    FUN_004405e0(g_MapUiCtx,iVar1,s_WndStarBase_0054e768,*piVar2,piVar2[1],0,0,piVar2[2] - *piVar2,
                 piVar2[3] - piVar2[1],0x280,0x1e0,0,0x1a,FUN_0047e6a0,FUN_00470f10);
    return;
  }
  FUN_0047e6a0();
  return;
}

