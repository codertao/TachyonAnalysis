
void FUN_0042c670(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_005b334c;
  iVar2 = 0x10;
  do {
    iVar1 = *piVar3;
    if (((iVar1 != 0) && (iVar1 != DAT_005b1864)) && (iVar1 != *(int *)(DAT_005b3300 + 0x90))) {
      FUN_0042bea0(param_1,iVar1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

