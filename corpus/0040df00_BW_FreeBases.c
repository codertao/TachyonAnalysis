
/* sweep */

void BW_FreeBases(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_005b97ac;
  if (DAT_005b97ac == 0) {
    DAT_005b97ac = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0x10);
    OurFreeMem(iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  DAT_005b97ac = iVar1;
  return;
}

