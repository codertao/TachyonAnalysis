
void FUN_00467810(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x10;
  iVar1 = DAT_005b9080;
  do {
    if (*(int *)(iVar1 + 0xd0) != 0) {
      FUN_00467760(iVar1);
    }
    iVar1 = iVar1 + 0x144;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

