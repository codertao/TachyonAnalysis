
void FUN_0048d180(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0056aac0;
  if (DAT_0056aac0 == 0) {
    DAT_0056aac0 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0x2b8);
    FUN_0049c530(iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  DAT_0056aac0 = iVar1;
  return;
}

