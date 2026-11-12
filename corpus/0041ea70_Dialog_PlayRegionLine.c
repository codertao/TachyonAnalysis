
/* sweep */

undefined4 Dialog_PlayRegionLine(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_80 [128];
  
  if (*(int *)(param_1 + 0x48) == 0) {
    if (DAT_005a6730 != 0) {
      str_sprintf(local_80,s__s_has_no_lines_for_this_region_00535708,param_1);
      TextBar_Add(local_80,DAT_005a6320._2_1_);
      return 0;
    }
  }
  else {
    iVar1 = Dialog_FindLine(param_1,param_2);
    if (iVar1 != 0) {
      Dialog_PlayWav(param_1,iVar1,param_3,0);
      return 1;
    }
    if (DAT_005a6730 != 0) {
      str_sprintf(local_80,s__s___line__s_not_found_005356f0,param_1,param_2);
      TextBar_Add(local_80,DAT_005a6320._2_1_);
    }
  }
  return 0;
}

