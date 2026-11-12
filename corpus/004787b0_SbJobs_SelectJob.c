
/* sweep */

void SbJobs_SelectJob(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 3)) {
    SbAudio_StopAll();
    DAT_00563644 = (&DAT_00551048)[param_1 * 0x151];
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,1);
    Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,0x80000);
    iVar1 = Job_FindActive();
    if (DAT_00563644 == iVar1) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,8);
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,0x80000);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,1);
      Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,0x80000);
    }
    SbJobs_RefreshCurrent();
    SbJobs_RefreshSlots();
    SbJobs_ClearImage();
  }
  return;
}

