
void FUN_004aefb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      if (*(char *)(iVar2 + param_2) == '\0') {
        FUN_004aeea0(iVar1 + param_1,iVar1 + 1 + param_1,iVar1 + 2 + param_1);
      }
      iVar1 = iVar1 + 3;
      iVar2 = iVar2 + 1;
    } while (iVar1 < 0x300);
  }
  return;
}

