
void FUN_00485160(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0056e3a4;
  if (param_1 == 0) {
    do {
      iVar1 = iVar1 + 1;
      if (4 < iVar1) {
        iVar1 = 0;
      }
    } while (((&DAT_00587a64 + iVar1 * 0x6d != (int *)0x0) && ((&DAT_00587a64)[iVar1 * 0x6d] == 0))
            && (iVar1 != DAT_0056e3a4));
  }
  else {
    while( true ) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        iVar1 = 4;
      }
      if ((&DAT_00587a64 + iVar1 * 0x6d == (int *)0x0) || ((&DAT_00587a64)[iVar1 * 0x6d] != 0))
      break;
      if (iVar1 == DAT_0056e3a4) {
        return;
      }
    }
  }
  return;
}

