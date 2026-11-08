
void FUN_00479690(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058972c + -3;
  DAT_00563648 = DAT_00563648 + param_1;
  if ((iVar1 < 1) || (DAT_00563648 < 0)) {
    DAT_00563648 = 0;
  }
  else if (iVar1 < DAT_00563648) {
    DAT_00563648 = iVar1;
  }
  FUN_00478b90();
  FUN_00478930();
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobs_00552160,&DAT_0055207c,0);
  return;
}

