
void FUN_00478b90(void)

{
  int iVar1;
  
  iVar1 = Job_FindActive();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    FUN_0043ce50(&DAT_00583420,s_BtnJobsAbort_00552204,1);
    if (DAT_00563648 != 0) {
      FUN_0043e6a0(&DAT_00583420,s_TxtCurJobBanner_005521f4,&DAT_00562b14);
      return;
    }
    FUN_0043e770(&DAT_00583420,s_TxtCurJobBanner_005521f4,s_JOB_CURRENT_JOB_005521e4);
    return;
  }
  FUN_0043ce50(&DAT_00583420,s_BtnJobsAbort_00552204,8);
  FUN_0043e6a0(&DAT_00583420,s_TxtCurJobBanner_005521f4,&DAT_00562b14);
  return;
}

