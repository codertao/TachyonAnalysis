
/* sweep */

void Teletype_ResetDefault(void)

{
  Teletype_Reset(&DAT_005b01e0);
  DAT_005b11b8 = 0;
  DAT_005b11bc = 0;
  return;
}

