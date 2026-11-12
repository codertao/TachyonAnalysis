
/* sweep */

void Vid_RestorePrimaryIfLost(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_005640e4 + 0x60))(DAT_005640e4);
  if (iVar1 == -0x7789fe3e) {
    (**(code **)(*DAT_005640e4 + 0x6c))(DAT_005640e4);
  }
  return;
}

