
int FUN_0048f720(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = DAT_0056aa8c;
  if (DAT_0056aa88 != 0) {
    do {
      if (*(int *)(iVar1 + 0x30) == param_1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x34;
    } while (uVar2 < DAT_0056aa88);
  }
  return 0;
}

