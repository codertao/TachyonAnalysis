
int FUN_00466c30(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = DAT_0058979c;
  if (DAT_00589798 != 0) {
    do {
      if (*(int *)(iVar1 + 4) == 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (uVar2 < DAT_00589798);
  }
  return 0;
}

