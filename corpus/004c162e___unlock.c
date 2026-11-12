
/* CRT */

void __unlock(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&GLBL_crit_section_area + param_1 * 4));
  return;
}

