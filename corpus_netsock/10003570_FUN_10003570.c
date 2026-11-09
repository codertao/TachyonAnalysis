
int FUN_10003570(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_100199dc;
  do {
    if (*(int *)(iVar1 + 0x106) == 0) {
      *(int *)(iVar1 + 0xd6) = iVar2 + 0x100;
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x10e;
  } while (iVar2 < 0x20);
  return 0;
}

