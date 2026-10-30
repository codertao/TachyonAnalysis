
void FUN_0042c620(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_005b334c;
  iVar4 = 0x10;
  do {
    iVar1 = *piVar3;
    if (((iVar1 != 0) && (iVar1 != DAT_005b1864)) && (iVar1 != *(int *)(DAT_005b3300 + 0x90))) {
      uVar2 = FUN_0042a670(iVar1,0,0x8000,1);
      FUN_00429dd0(*piVar3,uVar2);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

