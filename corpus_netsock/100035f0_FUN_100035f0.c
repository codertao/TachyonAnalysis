
void FUN_100035f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x20;
  iVar1 = DAT_100199dc + 6;
  do {
    if (*(int *)(iVar1 + 0x100) != 0) {
      (*DAT_100199c0)(iVar1,DAT_100199c4);
    }
    iVar1 = iVar1 + 0x10e;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

