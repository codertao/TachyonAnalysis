
/* sweep */

void SbJobs_RefreshCurrent(void)

{
  int iVar1;
  
  iVar1 = Job_FindActive();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobsAbort_00552204,1);
    if (DAT_00563648 != 0) {
      Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtCurJobBanner_005521f4,&DAT_00562b14);
      return;
    }
    Ui_SetLabelTextById(&GLBL_UI_ELEM_LIST,s_TxtCurJobBanner_005521f4,s_JOB_CURRENT_JOB_005521e4);
    return;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobsAbort_00552204,8);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtCurJobBanner_005521f4,&DAT_00562b14);
  return;
}

