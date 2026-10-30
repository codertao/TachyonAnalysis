
void FUN_00479160(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0043a7a0(&DAT_00583420,s_ImageJobsBg_0054e950);
  piVar2 = (int *)FUN_004699f0(s_JOB_ZOOM_DST_0054e96c);
  FUN_0046d870();
  FUN_00468ea0();
  if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
    FUN_0043aac0(&DAT_00583420,s_WndStarBaseJobs_00552160);
    FUN_0043aac0(&DAT_00583420,s_WndStarBaseJobsPanel1_00552258);
    FUN_0043aac0(&DAT_00583420,s_WndStarBaseJobsPanel2_00552294);
    FUN_0043aac0(&DAT_00583420,s_WndStarBaseJobsComplete_0055227c);
    Ui_ShowWindow(&DAT_00583420,s_WndStarBase_0054e768,0);
    FUN_0043a8d0(&DAT_00583420,s_WndStarBase_0054e768);
    FUN_004398b0(&DAT_00583420,iVar1,0);
    FUN_004405e0(&DAT_00583420,iVar1,s_WndStarBase_0054e768,*piVar2,piVar2[1],0,0,
                 piVar2[2] - *piVar2,piVar2[3] - piVar2[1],0x280,0x1e0,0,0x1a,FUN_00473f70,
                 FUN_00470f10);
    return;
  }
  FUN_00473f70();
  return;
}

