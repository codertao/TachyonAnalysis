
void FUN_004bd512(LPVOID param_1)

{
  int iVar1;
  
  if (param_1 != (LPVOID)0x0) {
    init_andor_enter_crit_section_idx(9);
    iVar1 = FUN_004c30a9(param_1);
    if (iVar1 != 0) {
      FUN_004c30d4(iVar1,param_1);
      leave_crit_section_idx(9);
      return;
    }
    leave_crit_section_idx(9);
    HeapFree(DAT_006c9e9c,0,param_1);
  }
  return;
}

