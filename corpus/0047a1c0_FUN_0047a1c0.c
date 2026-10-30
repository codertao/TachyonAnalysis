
void FUN_0047a1c0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = FUN_0048b7c0(0);
  if (iVar1 != 0) {
    FUN_0048cc10(0,param_1);
    FUN_0048c820(0,0,0,0,&local_14);
    puVar2 = (undefined4 *)FUN_0048c800(0);
    local_10 = *puVar2;
    local_8 = puVar2[2];
    local_4 = puVar2[3] + local_14;
    local_c = puVar2[1] - local_14;
    Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseJobsComplete_0055227c,&local_10,0);
    Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseJobsComplete_0055227c,&DAT_0055203c,0);
  }
  return;
}

