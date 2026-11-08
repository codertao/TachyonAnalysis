
void FUN_004bfad7(uint param_1)

{
  if ((0x56160f < param_1) && (param_1 < 0x561871)) {
    leave_crit_section_idx(((int)(param_1 - 0x561610) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

