
/* sweep */

void SbJobs_GoCompleteIfDone(void)

{
  int iVar1;
  
  iVar1 = Job_GetCompleted();
  if (iVar1 != 0) {
    g_StarbaseScreen = &PTR_SbJobsDone_Enter_00550af0;
    g_TitleMenu_ExitFlag = 1;
  }
  return;
}

