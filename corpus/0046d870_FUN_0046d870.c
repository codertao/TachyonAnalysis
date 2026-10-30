
void FUN_0046d870(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  if (DAT_005635bc != 0) {
    FUN_0049ea00(DAT_005635c0);
    iVar1 = FUN_0046d900();
    for (; (iVar1 != 0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
      FUN_004b5500();
      iVar1 = FUN_0046d900();
    }
    FUN_0049c530(DAT_005635bc);
    DAT_005635bc = 0;
    DAT_005635c0 = 0;
  }
  return;
}

