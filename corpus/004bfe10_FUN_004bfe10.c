
void FUN_004bfe10(void)

{
  if (DAT_00565080 == 0) {
    init_andor_enter_crit_section_idx(0xb);
    if (DAT_00565080 == 0) {
      FUN_004bfe3e();
      DAT_00565080 = DAT_00565080 + 1;
    }
    leave_crit_section_idx(0xb);
  }
  return;
}

