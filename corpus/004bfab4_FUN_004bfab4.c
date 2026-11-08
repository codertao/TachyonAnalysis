
void FUN_004bfab4(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    init_andor_enter_crit_section_idx(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

