
void FUN_00440c80(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_005a4b48;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xd0);
    OurFreeMem(iVar2);
    iVar2 = iVar1;
  }
  DAT_005a4b48 = 0;
  DAT_005a4b4c = 0;
  return;
}

