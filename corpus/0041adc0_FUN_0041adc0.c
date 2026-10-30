
undefined4 FUN_0041adc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = DAT_005b29a0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_0041ad70(iVar1 + 0x34,iVar3);
    if (iVar2 != 0) break;
    iVar1 = *(int *)(iVar1 + 200);
    iVar3 = iVar3 + 1;
  }
  return 1;
}

