
int FUN_004a5aa0(void)

{
  int iVar1;
  
  iVar1 = FUN_004a5a40();
  while( true ) {
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_005648a8 < 1) break;
    iVar1 = FUN_004a5a40();
  }
  return 0;
}

