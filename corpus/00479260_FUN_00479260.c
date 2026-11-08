
void FUN_00479260(void)

{
  int iVar1;
  
  FUN_0043b3a0(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258,s_WndStarBaseJobs_00552160,0x17,
               0xffffff29,0x19,0);
  FUN_0043b3a0(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240,s_WndStarBaseJobs_00552160,0x294,
               0x1b8,0x19,0);
  FUN_0048b6f0(0);
  if (((DAT_00563644 != 0) && (iVar1 = *(int *)(DAT_00563644 + 0x180), iVar1 != 0)) &&
     (*(int *)(iVar1 + 200) != 0)) {
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,iVar1 + 0xcc,0x20000);
  }
  FUN_0046dd30(0,0);
  DAT_0056c480 = 1;
  return;
}

