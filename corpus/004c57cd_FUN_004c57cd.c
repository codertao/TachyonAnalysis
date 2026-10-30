
void FUN_004c57cd(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_006c9d80)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

