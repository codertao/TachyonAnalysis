
/* sweep */

void SbLobby_ZoomJobs(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = (int *)Starbase_FindFont(s_JOB_ZOOM_DST_0054e96c);
  if (DAT_005a4b4c == 0) {
    if (piVar1 != (int *)0x0) {
      iVar2 = Job_GetCompleted();
      if (iVar2 == 0) {
        pcVar3 = s_ImageJobsBg_0054e950;
      }
      else {
        pcVar3 = s_ImageJobsCompBg_0054e95c;
      }
      iVar2 = MnuImage_Find(&GLBL_UI_ELEM_LIST,pcVar3);
      if (iVar2 != 0) {
        MnuImage_LoadPcx(&GLBL_UI_ELEM_LIST,iVar2,0);
        ScreenZoom_Start(&GLBL_UI_ELEM_LIST,iVar2,s_WndStarBase_0054e768,0,0,*piVar1,piVar1[1],0x280
                         ,0x1e0,piVar1[2] - *piVar1,piVar1[3] - piVar1[1],0,0x11,SbLobby_GoJobs,0);
        return;
      }
    }
    SbLobby_GoJobs();
  }
  return;
}

