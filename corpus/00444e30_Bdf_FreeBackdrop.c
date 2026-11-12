
/* sweep */

void Bdf_FreeBackdrop(void)

{
  if (DAT_005b9084 != 0) {
    Bdf_FreeScene(DAT_005b9084);
    DAT_005b9084 = 0;
  }
  Mem_FreeTag(0xa001);
  return;
}

